/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * 获取<p>用户ID</p>
                     * @return Id <p>用户ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _id <p>用户ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>用户姓名，最大长度20个字符，不能包含空格</p>
                     * @return RealName <p>用户姓名，最大长度20个字符，不能包含空格</p>
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置<p>用户姓名，最大长度20个字符，不能包含空格</p>
                     * @param _realName <p>用户姓名，最大长度20个字符，不能包含空格</p>
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取<p>按照&quot;国家地区代码|手机号&quot;的格式输入。如: &quot;+86|xxxxxxxx&quot;</p>
                     * @return Phone <p>按照&quot;国家地区代码|手机号&quot;的格式输入。如: &quot;+86|xxxxxxxx&quot;</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>按照&quot;国家地区代码|手机号&quot;的格式输入。如: &quot;+86|xxxxxxxx&quot;</p>
                     * @param _phone <p>按照&quot;国家地区代码|手机号&quot;的格式输入。如: &quot;+86|xxxxxxxx&quot;</p>
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
                     * 获取<p>电子邮件</p>
                     * @return Email <p>电子邮件</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>电子邮件</p>
                     * @param _email <p>电子邮件</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>用户生效时间，如:&quot;2021-09-22T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * @return ValidateFrom <p>用户生效时间，如:&quot;2021-09-22T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置<p>用户生效时间，如:&quot;2021-09-22T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * @param _validateFrom <p>用户生效时间，如:&quot;2021-09-22T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取<p>用户失效时间，如:&quot;2021-09-23T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * @return ValidateTo <p>用户失效时间，如:&quot;2021-09-23T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置<p>用户失效时间，如:&quot;2021-09-23T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * @param _validateTo <p>用户失效时间，如:&quot;2021-09-23T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取<p>所属用户组ID集合</p>
                     * @return GroupIdSet <p>所属用户组ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetGroupIdSet() const;

                    /**
                     * 设置<p>所属用户组ID集合</p>
                     * @param _groupIdSet <p>所属用户组ID集合</p>
                     * 
                     */
                    void SetGroupIdSet(const std::vector<uint64_t>& _groupIdSet);

                    /**
                     * 判断参数 GroupIdSet 是否已赋值
                     * @return GroupIdSet 是否已赋值
                     * 
                     */
                    bool GroupIdSetHasBeenSet() const;

                    /**
                     * 获取<p>认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0</p>
                     * @return AuthType <p>认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0</p>
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置<p>认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0</p>
                     * @param _authType <p>认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0</p>
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问</p>
                     * @return ValidateTime <p>访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问</p>
                     * 
                     */
                    std::string GetValidateTime() const;

                    /**
                     * 设置<p>访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问</p>
                     * @param _validateTime <p>访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问</p>
                     * 
                     */
                    void SetValidateTime(const std::string& _validateTime);

                    /**
                     * 判断参数 ValidateTime 是否已赋值
                     * @return ValidateTime 是否已赋值
                     * 
                     */
                    bool ValidateTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户所属部门的ID，如1.2.3</p>
                     * @return DepartmentId <p>用户所属部门的ID，如1.2.3</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>用户所属部门的ID，如1.2.3</p>
                     * @param _departmentId <p>用户所属部门的ID，如1.2.3</p>
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>用户姓名，最大长度20个字符，不能包含空格</p>
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * <p>按照&quot;国家地区代码|手机号&quot;的格式输入。如: &quot;+86|xxxxxxxx&quot;</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>电子邮件</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>用户生效时间，如:&quot;2021-09-22T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * <p>用户失效时间，如:&quot;2021-09-23T00:00:00+00:00&quot;<br>生效、失效时间不填则用户长期有效</p>
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * <p>所属用户组ID集合</p>
                     */
                    std::vector<uint64_t> m_groupIdSet;
                    bool m_groupIdSetHasBeenSet;

                    /**
                     * <p>认证方式，0 - 本地，1 - LDAP，2 - OAuth 不传则默认为0</p>
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问</p>
                     */
                    std::string m_validateTime;
                    bool m_validateTimeHasBeenSet;

                    /**
                     * <p>用户所属部门的ID，如1.2.3</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERREQUEST_H_
