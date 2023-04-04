#include<iostream>
#include<string>
class EmailValidator{
	public:
		EmailValidator(const std::string& email) : email_(email) {}
		bool isValid() const{
		int at_count=0;
		int dot_count=0;
		for(char c:email_){
			if(c=='@'){
				at_count++;
			}else if(c=='.'){
				dot_count++;
			}
		}
		if(at_count !=1||dot_count!=1){
			return false;
		} 
		int at_pos=email_.find('@');
		if(at_pos==0||at_pos==email_.size()-1){
			return false;
		}
		
		
		int dot_pos=email_.find('.');
		if(dot_pos==0||dot_pos==email_.size()-1||dot_pos<=at_pos+1){
			return false;
		}
		
		std::string username=email_.substr(0, at_pos);
		std::string domain=email_.substr(at_pos+1, dot_pos-at_pos-1);
		std::string com=email_.substr(dot_pos+1);
		for (char c:username){
			if(!isalnum(c)&&c!='_'&&c!='-'){
				return false;
			}
		}
		for (char c:domain){
			if(!isalnum(c)&&c!='_'&&c!='-'){
				return false;
			}
		}
		for (char c:com){
			if(!isalnum(c)){
				return false;
			}
		}
		
		return true;
		}
		
		~EmailValidator(){}
		
		private:
			std::string email_;
				
};

int main(){
	std::string email;
	std::cin>>email;
	EmailValidator validator(email);
	if(validator.isValid()){
		std::cout<<"yes"<<std::endl;
	}else{
		std::cout<<"no"<<std::endl;
	}
	return 0;
}














