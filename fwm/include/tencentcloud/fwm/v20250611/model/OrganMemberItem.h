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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ORGANMEMBERITEM_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ORGANMEMBERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/AccountGroupInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 集团成员信息
                */
                class OrganMemberItem : public AbstractModel
                {
                public:
                    OrganMemberItem();
                    ~OrganMemberItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberId 成员 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置成员 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberId 成员 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取成员账号 AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 成员账号 AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置成员账号 AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 成员账号 AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号Uin
                     * @return Uin 账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号Uin
                     * @param _uin 账号Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickname 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取子账号数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountCount 子账号数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置子账号数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountCount 子账号数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountCount(const int64_t& _subAccountCount);

                    /**
                     * 判断参数 SubAccountCount 是否已赋值
                     * @return SubAccountCount 是否已赋值
                     * 
                     */
                    bool SubAccountCountHasBeenSet() const;

                    /**
                     * 获取所属组织架构节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 所属组织架构节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置所属组织架构节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 所属组织架构节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role 成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _role 成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取成员身份显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleDisplay 成员身份显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleDisplay() const;

                    /**
                     * 设置成员身份显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleDisplay 成员身份显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleDisplay(const std::string& _roleDisplay);

                    /**
                     * 判断参数 RoleDisplay 是否已赋值
                     * @return RoleDisplay 是否已赋值
                     * 
                     */
                    bool RoleDisplayHasBeenSet() const;

                    /**
                     * 获取所属账户组 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroup 所属账户组 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccountGroupInfo GetAccountGroup() const;

                    /**
                     * 设置所属账户组 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroup 所属账户组 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroup(const AccountGroupInfo& _accountGroup);

                    /**
                     * 判断参数 AccountGroup 是否已赋值
                     * @return AccountGroup 是否已赋值
                     * 
                     */
                    bool AccountGroupHasBeenSet() const;

                    /**
                     * 获取云防火墙纳管状态：0-未纳管，1-已纳管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwManaged 云防火墙纳管状态：0-未纳管，1-已纳管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCfwManaged() const;

                    /**
                     * 设置云防火墙纳管状态：0-未纳管，1-已纳管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwManaged 云防火墙纳管状态：0-未纳管，1-已纳管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCfwManaged(const int64_t& _cfwManaged);

                    /**
                     * 判断参数 CfwManaged 是否已赋值
                     * @return CfwManaged 是否已赋值
                     * 
                     */
                    bool CfwManagedHasBeenSet() const;

                    /**
                     * 获取云防火墙共享角色：sharer-共享者，user-使用者，none-未设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwShareRole 云防火墙共享角色：sharer-共享者，user-使用者，none-未设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwShareRole() const;

                    /**
                     * 设置云防火墙共享角色：sharer-共享者，user-使用者，none-未设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwShareRole 云防火墙共享角色：sharer-共享者，user-使用者，none-未设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCfwShareRole(const std::string& _cfwShareRole);

                    /**
                     * 判断参数 CfwShareRole 是否已赋值
                     * @return CfwShareRole 是否已赋值
                     * 
                     */
                    bool CfwShareRoleHasBeenSet() const;

                    /**
                     * 获取云防火墙共享角色显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwShareRoleDisplay 云防火墙共享角色显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwShareRoleDisplay() const;

                    /**
                     * 设置云防火墙共享角色显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwShareRoleDisplay 云防火墙共享角色显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCfwShareRoleDisplay(const std::string& _cfwShareRoleDisplay);

                    /**
                     * 判断参数 CfwShareRoleDisplay 是否已赋值
                     * @return CfwShareRoleDisplay 是否已赋值
                     * 
                     */
                    bool CfwShareRoleDisplayHasBeenSet() const;

                    /**
                     * 获取云防火墙共享者 AppId，成员角色为使用者时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwSharerAppId 云防火墙共享者 AppId，成员角色为使用者时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwSharerAppId() const;

                    /**
                     * 设置云防火墙共享者 AppId，成员角色为使用者时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwSharerAppId 云防火墙共享者 AppId，成员角色为使用者时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCfwSharerAppId(const std::string& _cfwSharerAppId);

                    /**
                     * 判断参数 CfwSharerAppId 是否已赋值
                     * @return CfwSharerAppId 是否已赋值
                     * 
                     */
                    bool CfwSharerAppIdHasBeenSet() const;

                    /**
                     * 获取云防火墙计费实例 ID，非空表示已购买云防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwInstanceId 云防火墙计费实例 ID，非空表示已购买云防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwInstanceId() const;

                    /**
                     * 设置云防火墙计费实例 ID，非空表示已购买云防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwInstanceId 云防火墙计费实例 ID，非空表示已购买云防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCfwInstanceId(const std::string& _cfwInstanceId);

                    /**
                     * 判断参数 CfwInstanceId 是否已赋值
                     * @return CfwInstanceId 是否已赋值
                     * 
                     */
                    bool CfwInstanceIdHasBeenSet() const;

                    /**
                     * 获取策略分析权限：0-关闭，1-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyAnalysisEnabled 策略分析权限：0-关闭，1-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyAnalysisEnabled() const;

                    /**
                     * 设置策略分析权限：0-关闭，1-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyAnalysisEnabled 策略分析权限：0-关闭，1-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyAnalysisEnabled(const int64_t& _policyAnalysisEnabled);

                    /**
                     * 判断参数 PolicyAnalysisEnabled 是否已赋值
                     * @return PolicyAnalysisEnabled 是否已赋值
                     * 
                     */
                    bool PolicyAnalysisEnabledHasBeenSet() const;

                    /**
                     * 获取成员加入集团时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberCreateTime 成员加入集团时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberCreateTime() const;

                    /**
                     * 设置成员加入集团时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberCreateTime 成员加入集团时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberCreateTime(const std::string& _memberCreateTime);

                    /**
                     * 判断参数 MemberCreateTime 是否已赋值
                     * @return MemberCreateTime 是否已赋值
                     * 
                     */
                    bool MemberCreateTimeHasBeenSet() const;

                    /**
                     * 获取账号加入方式
                     * @return JoinType 账号加入方式
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置账号加入方式
                     * @param _joinType 账号加入方式
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                private:

                    /**
                     * 成员 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 成员账号 AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 子账号数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * 所属组织架构节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 成员身份显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleDisplay;
                    bool m_roleDisplayHasBeenSet;

                    /**
                     * 所属账户组 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccountGroupInfo m_accountGroup;
                    bool m_accountGroupHasBeenSet;

                    /**
                     * 云防火墙纳管状态：0-未纳管，1-已纳管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cfwManaged;
                    bool m_cfwManagedHasBeenSet;

                    /**
                     * 云防火墙共享角色：sharer-共享者，user-使用者，none-未设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwShareRole;
                    bool m_cfwShareRoleHasBeenSet;

                    /**
                     * 云防火墙共享角色显示名称（前端展示用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwShareRoleDisplay;
                    bool m_cfwShareRoleDisplayHasBeenSet;

                    /**
                     * 云防火墙共享者 AppId，成员角色为使用者时有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwSharerAppId;
                    bool m_cfwSharerAppIdHasBeenSet;

                    /**
                     * 云防火墙计费实例 ID，非空表示已购买云防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwInstanceId;
                    bool m_cfwInstanceIdHasBeenSet;

                    /**
                     * 策略分析权限：0-关闭，1-开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyAnalysisEnabled;
                    bool m_policyAnalysisEnabledHasBeenSet;

                    /**
                     * 成员加入集团时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberCreateTime;
                    bool m_memberCreateTimeHasBeenSet;

                    /**
                     * 账号加入方式
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ORGANMEMBERITEM_H_
