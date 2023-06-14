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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用户信息列表。
                */
                class UserInformation : public AbstractModel
                {
                public:
                    UserInformation();
                    ~UserInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名，长度限制：32个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名，长度限制：32个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，长度限制：32个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名，长度限制：32个字符。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 用户状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置用户状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 用户状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取昵称，长度限制：64个字符。 默认与用户名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 昵称，长度限制：64个字符。 默认与用户名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置昵称，长度限制：64个字符。 默认与用户名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 昵称，长度限制：64个字符。 默认与用户名相同。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 用户备注，长度限制：512个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户备注，长度限制：512个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 用户备注，长度限制：512个字符。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户上次更新时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 用户上次更新时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置用户上次更新时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 用户上次更新时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取用户创建时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 用户创建时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置用户创建时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 用户创建时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取用户所属主组织机构的路径ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPath 用户所属主组织机构的路径ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgPath() const;

                    /**
                     * 设置用户所属主组织机构的路径ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgPath 用户所属主组织机构的路径ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgPath(const std::string& _orgPath);

                    /**
                     * 判断参数 OrgPath 是否已赋值
                     * @return OrgPath 是否已赋值
                     * 
                     */
                    bool OrgPathHasBeenSet() const;

                    /**
                     * 获取带国家号的用户手机号，例如+86-00000000000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 带国家号的用户手机号，例如+86-00000000000。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置带国家号的用户手机号，例如+86-00000000000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 带国家号的用户手机号，例如+86-00000000000。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户所属用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectGroups 用户所属用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubjectGroups() const;

                    /**
                     * 设置用户所属用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectGroups 用户所属用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectGroups(const std::vector<std::string>& _subjectGroups);

                    /**
                     * 判断参数 SubjectGroups 是否已赋值
                     * @return SubjectGroups 是否已赋值
                     * 
                     */
                    bool SubjectGroupsHasBeenSet() const;

                    /**
                     * 获取用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户上次登录时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLoginTime 用户上次登录时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置用户上次登录时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLoginTime 用户上次登录时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                    /**
                     * 获取用户ID，是用户全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户ID，是用户全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，是用户全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户ID，是用户全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 用户名，长度限制：32个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 昵称，长度限制：64个字符。 默认与用户名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户备注，长度限制：512个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户上次更新时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 用户创建时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 用户所属主组织机构的路径ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgPath;
                    bool m_orgPathHasBeenSet;

                    /**
                     * 带国家号的用户手机号，例如+86-00000000000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户所属用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectGroups;
                    bool m_subjectGroupsHasBeenSet;

                    /**
                     * 用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户上次登录时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                    /**
                     * 用户ID，是用户全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_
