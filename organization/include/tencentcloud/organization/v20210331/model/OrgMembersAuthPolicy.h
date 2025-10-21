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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 组织成员访问授权策略
                */
                class OrgMembersAuthPolicy : public AbstractModel
                {
                public:
                    OrgMembersAuthPolicy();
                    ~OrgMembersAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityId 身份Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置身份Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityId 身份Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取身份的角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityRoleName 身份的角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置身份的角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityRoleName 身份的角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityRoleName(const std::string& _identityRoleName);

                    /**
                     * 判断参数 IdentityRoleName 是否已赋值
                     * @return IdentityRoleName 是否已赋值
                     * 
                     */
                    bool IdentityRoleNameHasBeenSet() const;

                    /**
                     * 获取身份的角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityRoleAliasName 身份的角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置身份的角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityRoleAliasName 身份的角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityRoleAliasName(const std::string& _identityRoleAliasName);

                    /**
                     * 判断参数 IdentityRoleAliasName 是否已赋值
                     * @return IdentityRoleAliasName 是否已赋值
                     * 
                     */
                    bool IdentityRoleAliasNameHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取成员访问策略Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 成员访问策略Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置成员访问策略Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId 成员访问策略Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取成员访问策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 成员访问策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置成员访问策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName 成员访问策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取成员uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberUin 成员uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberUin 成员uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberName 成员名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置成员名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberName 成员名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取子账号uin或者用户组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgSubAccountUin 子账号uin或者用户组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOrgSubAccountUin() const;

                    /**
                     * 设置子账号uin或者用户组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgSubAccountUin 子账号uin或者用户组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgSubAccountUin(const int64_t& _orgSubAccountUin);

                    /**
                     * 判断参数 OrgSubAccountUin 是否已赋值
                     * @return OrgSubAccountUin 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinHasBeenSet() const;

                    /**
                     * 获取子账号名称或者用户组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgSubAccountName 子账号名称或者用户组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgSubAccountName() const;

                    /**
                     * 设置子账号名称或者用户组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgSubAccountName 子账号名称或者用户组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgSubAccountName(const std::string& _orgSubAccountName);

                    /**
                     * 判断参数 OrgSubAccountName 是否已赋值
                     * @return OrgSubAccountName 是否已赋值
                     * 
                     */
                    bool OrgSubAccountNameHasBeenSet() const;

                    /**
                     * 获取绑定类型。1-子账号、2-用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindType 绑定类型。1-子账号、2-用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBindType() const;

                    /**
                     * 设置绑定类型。1-子账号、2-用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindType 绑定类型。1-子账号、2-用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindType(const uint64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取成员信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Members 成员信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MemberMainInfo> GetMembers() const;

                    /**
                     * 设置成员信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _members 成员信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMembers(const std::vector<MemberMainInfo>& _members);

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                private:

                    /**
                     * 身份Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份的角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * 身份的角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 成员访问策略Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 成员访问策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 成员uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * 子账号uin或者用户组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orgSubAccountUin;
                    bool m_orgSubAccountUinHasBeenSet;

                    /**
                     * 子账号名称或者用户组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgSubAccountName;
                    bool m_orgSubAccountNameHasBeenSet;

                    /**
                     * 绑定类型。1-子账号、2-用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 成员信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MemberMainInfo> m_members;
                    bool m_membersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_
