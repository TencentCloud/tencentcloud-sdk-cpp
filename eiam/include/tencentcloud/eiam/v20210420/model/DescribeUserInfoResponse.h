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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_

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
                * DescribeUserInfo返回参数结构体
                */
                class DescribeUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserInfoResponse();
                    ~DescribeUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取昵称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 昵称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取用户备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 用户备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户所属用户组 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupIds 用户所属用户组 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取用户 id，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户 id，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取用户手机号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 用户手机号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取用户所属的主组织机构唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeId 用户所属的主组织机构唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource 数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取用户过期时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationTime 用户过期时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取用户激活时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivationTime 用户激活时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivationTime() const;

                    /**
                     * 判断参数 ActivationTime 是否已赋值
                     * @return ActivationTime 是否已赋值
                     * 
                     */
                    bool ActivationTimeHasBeenSet() const;

                    /**
                     * 获取当前用户的密码是否需要重置，该字段为false表示不需要重置密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PwdNeedReset 当前用户的密码是否需要重置，该字段为false表示不需要重置密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPwdNeedReset() const;

                    /**
                     * 判断参数 PwdNeedReset 是否已赋值
                     * @return PwdNeedReset 是否已赋值
                     * 
                     */
                    bool PwdNeedResetHasBeenSet() const;

                    /**
                     * 获取用户所属的次要组织机构ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondaryOrgNodeIdList 用户所属的次要组织机构ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecondaryOrgNodeIdList() const;

                    /**
                     * 判断参数 SecondaryOrgNodeIdList 是否已赋值
                     * @return SecondaryOrgNodeIdList 是否已赋值
                     * 
                     */
                    bool SecondaryOrgNodeIdListHasBeenSet() const;

                    /**
                     * 获取是否管理员标志，0为否、1为是。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminFlag 是否管理员标志，0为否、1为是。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAdminFlag() const;

                    /**
                     * 判断参数 AdminFlag 是否已赋值
                     * @return AdminFlag 是否已赋值
                     * 
                     */
                    bool AdminFlagHasBeenSet() const;

                private:

                    /**
                     * 用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 昵称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户备注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户所属用户组 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * 用户 id，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户邮箱。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户手机号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户所属的主组织机构唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 用户过期时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * 用户激活时间，遵循 ISO 8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activationTime;
                    bool m_activationTimeHasBeenSet;

                    /**
                     * 当前用户的密码是否需要重置，该字段为false表示不需要重置密码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_pwdNeedReset;
                    bool m_pwdNeedResetHasBeenSet;

                    /**
                     * 用户所属的次要组织机构ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_secondaryOrgNodeIdList;
                    bool m_secondaryOrgNodeIdListHasBeenSet;

                    /**
                     * 是否管理员标志，0为否、1为是。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_adminFlag;
                    bool m_adminFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_
