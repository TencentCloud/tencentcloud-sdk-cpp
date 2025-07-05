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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyUserInfo请求参数结构体
                */
                class ModifyUserInfoRequest : public AbstractModel
                {
                public:
                    ModifyUserInfoRequest();
                    ~ModifyUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户名，长度限制：32个字符。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * @return UserName 用户名，长度限制：32个字符。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，长度限制：32个字符。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * @param _userName 用户名，长度限制：32个字符。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取昵称，长度限制：64个字符。 默认与用户名相同。
                     * @return DisplayName 昵称，长度限制：64个字符。 默认与用户名相同。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置昵称，长度限制：64个字符。 默认与用户名相同。
                     * @param _displayName 昵称，长度限制：64个字符。 默认与用户名相同。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取用户备注，长度限制：512个字符。
                     * @return Description 用户备注，长度限制：512个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户备注，长度限制：512个字符。
                     * @param _description 用户备注，长度限制：512个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户所属用户组ID列表。
                     * @return UserGroupIds 用户所属用户组ID列表。
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置用户所属用户组ID列表。
                     * @param _userGroupIds 用户所属用户组ID列表。
                     * 
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取用户 id。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * @return UserId 用户 id。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 id。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     * @param _userId 用户 id。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
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
                     * 获取用户手机号。
                     * @return Phone 用户手机号。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置用户手机号。
                     * @param _phone 用户手机号。
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
                     * 获取用户过期时间，遵循 ISO 8601 标准。
                     * @return ExpirationTime 用户过期时间，遵循 ISO 8601 标准。
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 设置用户过期时间，遵循 ISO 8601 标准。
                     * @param _expirationTime 用户过期时间，遵循 ISO 8601 标准。
                     * 
                     */
                    void SetExpirationTime(const std::string& _expirationTime);

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取用户密码， 需要符合密码策略的配置。
                     * @return Password 用户密码， 需要符合密码策略的配置。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户密码， 需要符合密码策略的配置。
                     * @param _password 用户密码， 需要符合密码策略的配置。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取用户邮箱。
                     * @return Email 用户邮箱。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱。
                     * @param _email 用户邮箱。
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
                     * 获取密码是否需要重置，为空默认为false不需要重置密码。
                     * @return PwdNeedReset 密码是否需要重置，为空默认为false不需要重置密码。
                     * 
                     */
                    bool GetPwdNeedReset() const;

                    /**
                     * 设置密码是否需要重置，为空默认为false不需要重置密码。
                     * @param _pwdNeedReset 密码是否需要重置，为空默认为false不需要重置密码。
                     * 
                     */
                    void SetPwdNeedReset(const bool& _pwdNeedReset);

                    /**
                     * 判断参数 PwdNeedReset 是否已赋值
                     * @return PwdNeedReset 是否已赋值
                     * 
                     */
                    bool PwdNeedResetHasBeenSet() const;

                    /**
                     * 获取用户所属的主组织机构唯一ID。如果为空，默认为在根节点下创建用户。
                     * @return OrgNodeId 用户所属的主组织机构唯一ID。如果为空，默认为在根节点下创建用户。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置用户所属的主组织机构唯一ID。如果为空，默认为在根节点下创建用户。
                     * @param _orgNodeId 用户所属的主组织机构唯一ID。如果为空，默认为在根节点下创建用户。
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取用户所属的次要组织机构ID列表。
                     * @return SecondaryOrgNodeIdList 用户所属的次要组织机构ID列表。
                     * 
                     */
                    std::vector<std::string> GetSecondaryOrgNodeIdList() const;

                    /**
                     * 设置用户所属的次要组织机构ID列表。
                     * @param _secondaryOrgNodeIdList 用户所属的次要组织机构ID列表。
                     * 
                     */
                    void SetSecondaryOrgNodeIdList(const std::vector<std::string>& _secondaryOrgNodeIdList);

                    /**
                     * 判断参数 SecondaryOrgNodeIdList 是否已赋值
                     * @return SecondaryOrgNodeIdList 是否已赋值
                     * 
                     */
                    bool SecondaryOrgNodeIdListHasBeenSet() const;

                private:

                    /**
                     * 用户名，长度限制：32个字符。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 昵称，长度限制：64个字符。 默认与用户名相同。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户备注，长度限制：512个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户所属用户组ID列表。
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * 用户 id。 Username 和 UserId 需选择一个作为搜索条件；如两个条件同时使用则默认使用Username作为搜索条件。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户手机号。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户过期时间，遵循 ISO 8601 标准。
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * 用户密码， 需要符合密码策略的配置。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 用户邮箱。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 密码是否需要重置，为空默认为false不需要重置密码。
                     */
                    bool m_pwdNeedReset;
                    bool m_pwdNeedResetHasBeenSet;

                    /**
                     * 用户所属的主组织机构唯一ID。如果为空，默认为在根节点下创建用户。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 用户所属的次要组织机构ID列表。
                     */
                    std::vector<std::string> m_secondaryOrgNodeIdList;
                    bool m_secondaryOrgNodeIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_
