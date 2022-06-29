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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * ModifyUser请求参数结构体
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取用户姓名，最大长度20个字符，不能包含空格
                     * @return RealName 用户姓名，最大长度20个字符，不能包含空格
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户姓名，最大长度20个字符，不能包含空格
                     * @param RealName 用户姓名，最大长度20个字符，不能包含空格
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @return Phone 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @param Phone 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

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
                     * 获取用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @return ValidateFrom 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @param ValidateFrom 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取用户失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @return ValidateTo 用户失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置用户失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @param ValidateTo 用户失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取所属用户组ID集合
                     * @return GroupIdSet 所属用户组ID集合
                     */
                    std::vector<uint64_t> GetGroupIdSet() const;

                    /**
                     * 设置所属用户组ID集合
                     * @param GroupIdSet 所属用户组ID集合
                     */
                    void SetGroupIdSet(const std::vector<uint64_t>& _groupIdSet);

                    /**
                     * 判断参数 GroupIdSet 是否已赋值
                     * @return GroupIdSet 是否已赋值
                     */
                    bool GroupIdSetHasBeenSet() const;

                    /**
                     * 获取认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0
                     * @return AuthType 认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0
                     * @param AuthType 认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * @return ValidateTime 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     */
                    std::string GetValidateTime() const;

                    /**
                     * 设置访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * @param ValidateTime 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     */
                    void SetValidateTime(const std::string& _validateTime);

                    /**
                     * 判断参数 ValidateTime 是否已赋值
                     * @return ValidateTime 是否已赋值
                     */
                    bool ValidateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户姓名，最大长度20个字符，不能包含空格
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 电子邮件
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 用户失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 所属用户组ID集合
                     */
                    std::vector<uint64_t> m_groupIdSet;
                    bool m_groupIdSetHasBeenSet;

                    /**
                     * 认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     */
                    std::string m_validateTime;
                    bool m_validateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERREQUEST_H_
