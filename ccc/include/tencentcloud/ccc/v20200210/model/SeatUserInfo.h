/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席用户信息
                */
                class SeatUserInfo : public AbstractModel
                {
                public:
                    SeatUserInfo();
                    ~SeatUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席名称
                     * @return Name 座席名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置座席名称
                     * @param _name 座席名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取座席邮箱
                     * @return Mail 座席邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置座席邮箱
                     * @param _mail 座席邮箱
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取工号
                     * @return StaffNumber 工号
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置工号
                     * @param _staffNumber 工号
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取座席电话号码（带0086前缀）
                     * @return Phone 座席电话号码（带0086前缀）
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置座席电话号码（带0086前缀）
                     * @param _phone 座席电话号码（带0086前缀）
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取座席昵称
                     * @return Nick 座席昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置座席昵称
                     * @param _nick 座席昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取座席关联的技能组列表
                     * @return SkillGroupNameList 座席关联的技能组列表
                     * 
                     */
                    std::vector<std::string> GetSkillGroupNameList() const;

                    /**
                     * 设置座席关联的技能组列表
                     * @param _skillGroupNameList 座席关联的技能组列表
                     * 
                     */
                    void SetSkillGroupNameList(const std::vector<std::string>& _skillGroupNameList);

                    /**
                     * 判断参数 SkillGroupNameList 是否已赋值
                     * @return SkillGroupNameList 是否已赋值
                     * 
                     */
                    bool SkillGroupNameListHasBeenSet() const;

                    /**
                     * 获取1:管理员
2:质检员
3:普通座席
else:自定义角色ID
                     * @return Role 1:管理员
2:质检员
3:普通座席
else:自定义角色ID
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置1:管理员
2:质检员
3:普通座席
else:自定义角色ID
                     * @param _role 1:管理员
2:质检员
3:普通座席
else:自定义角色ID
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取座席分机号（1 到 8 打头，4 - 6 位）
                     * @return ExtensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    std::string GetExtensionNumber() const;

                    /**
                     * 设置座席分机号（1 到 8 打头，4 - 6 位）
                     * @param _extensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    void SetExtensionNumber(const std::string& _extensionNumber);

                    /**
                     * 判断参数 ExtensionNumber 是否已赋值
                     * @return ExtensionNumber 是否已赋值
                     * 
                     */
                    bool ExtensionNumberHasBeenSet() const;

                private:

                    /**
                     * 座席名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 座席邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 工号
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * 座席电话号码（带0086前缀）
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 座席昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 座席关联的技能组列表
                     */
                    std::vector<std::string> m_skillGroupNameList;
                    bool m_skillGroupNameListHasBeenSet;

                    /**
                     * 1:管理员
2:质检员
3:普通座席
else:自定义角色ID
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 座席分机号（1 到 8 打头，4 - 6 位）
                     */
                    std::string m_extensionNumber;
                    bool m_extensionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_
