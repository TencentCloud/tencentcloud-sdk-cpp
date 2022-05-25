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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_USER_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Group.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param UserName 用户名
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户姓名
                     * @return RealName 用户姓名
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户姓名
                     * @param RealName 用户姓名
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return Phone 手机号码
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号码
                     * @param Phone 手机号码
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return Id 用户ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户ID
                     * @param Id 用户ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取电子邮件
                     * @return Email 电子邮件
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮件
                     * @param Email 电子邮件
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取生效起始时间
                     * @return ValidateFrom 生效起始时间
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置生效起始时间
                     * @param ValidateFrom 生效起始时间
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取生效结束时间
                     * @return ValidateTo 生效结束时间
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置生效结束时间
                     * @param ValidateTo 生效结束时间
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取所属用户组列表
                     * @return GroupSet 所属用户组列表
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置所属用户组列表
                     * @param GroupSet 所属用户组列表
                     */
                    void SetGroupSet(const std::vector<Group>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取认证方式，0-本地 1-ldap
                     * @return AuthType 认证方式，0-本地 1-ldap
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置认证方式，0-本地 1-ldap
                     * @param AuthType 认证方式，0-本地 1-ldap
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取生效时间段, 0、1组成的字符串，长度168(7*24), 代表该用户的生效时间. 0 - 未生效，1 - 生效
                     * @return ValidateTime 生效时间段, 0、1组成的字符串，长度168(7*24), 代表该用户的生效时间. 0 - 未生效，1 - 生效
                     */
                    std::string GetValidateTime() const;

                    /**
                     * 设置生效时间段, 0、1组成的字符串，长度168(7*24), 代表该用户的生效时间. 0 - 未生效，1 - 生效
                     * @param ValidateTime 生效时间段, 0、1组成的字符串，长度168(7*24), 代表该用户的生效时间. 0 - 未生效，1 - 生效
                     */
                    void SetValidateTime(const std::string& _validateTime);

                    /**
                     * 判断参数 ValidateTime 是否已赋值
                     * @return ValidateTime 是否已赋值
                     */
                    bool ValidateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 电子邮件
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 生效起始时间
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 生效结束时间
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 所属用户组列表
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 认证方式，0-本地 1-ldap
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 生效时间段, 0、1组成的字符串，长度168(7*24), 代表该用户的生效时间. 0 - 未生效，1 - 生效
                     */
                    std::string m_validateTime;
                    bool m_validateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_USER_H_
