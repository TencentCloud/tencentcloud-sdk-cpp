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
                     * 获取<p>成员 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberId <p>成员 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置<p>成员 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberId <p>成员 ID</p>
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
                     * 获取<p>成员账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>成员账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>成员账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>成员账号 AppId</p>
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
                     * 获取<p>账号Uin</p>
                     * @return Uin <p>账号Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号Uin</p>
                     * @param _uin <p>账号Uin</p>
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
                     * 获取<p>账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname <p>账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickname <p>账号名称</p>
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
                     * 获取<p>子账号数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountCount <p>子账号数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置<p>子账号数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountCount <p>子账号数量</p>
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
                     * 获取<p>所属组织架构节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName <p>所属组织架构节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>所属组织架构节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName <p>所属组织架构节点名称</p>
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
                     * 获取<p>成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role <p>成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _role <p>成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员</p>
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
                     * 获取<p>成员身份显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleDisplay <p>成员身份显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleDisplay() const;

                    /**
                     * 设置<p>成员身份显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleDisplay <p>成员身份显示名称（前端展示用）</p>
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
                     * 获取<p>所属账户组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroup <p>所属账户组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccountGroupInfo GetAccountGroup() const;

                    /**
                     * 设置<p>所属账户组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroup <p>所属账户组</p>
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
                     * 获取<p>云防火墙纳管状态：0-未纳管，1-已纳管</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwManaged <p>云防火墙纳管状态：0-未纳管，1-已纳管</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCfwManaged() const;

                    /**
                     * 设置<p>云防火墙纳管状态：0-未纳管，1-已纳管</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwManaged <p>云防火墙纳管状态：0-未纳管，1-已纳管</p>
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
                     * 获取<p>云防火墙共享角色：sharer-共享者，user-使用者，none-未设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwShareRole <p>云防火墙共享角色：sharer-共享者，user-使用者，none-未设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwShareRole() const;

                    /**
                     * 设置<p>云防火墙共享角色：sharer-共享者，user-使用者，none-未设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwShareRole <p>云防火墙共享角色：sharer-共享者，user-使用者，none-未设置</p>
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
                     * 获取<p>云防火墙共享角色显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwShareRoleDisplay <p>云防火墙共享角色显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwShareRoleDisplay() const;

                    /**
                     * 设置<p>云防火墙共享角色显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwShareRoleDisplay <p>云防火墙共享角色显示名称（前端展示用）</p>
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
                     * 获取<p>云防火墙共享者 AppId，成员角色为使用者时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwSharerAppId <p>云防火墙共享者 AppId，成员角色为使用者时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwSharerAppId() const;

                    /**
                     * 设置<p>云防火墙共享者 AppId，成员角色为使用者时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwSharerAppId <p>云防火墙共享者 AppId，成员角色为使用者时有值</p>
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
                     * 获取<p>云防火墙计费实例 ID，非空表示已购买云防火墙</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwInstanceId <p>云防火墙计费实例 ID，非空表示已购买云防火墙</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCfwInstanceId() const;

                    /**
                     * 设置<p>云防火墙计费实例 ID，非空表示已购买云防火墙</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cfwInstanceId <p>云防火墙计费实例 ID，非空表示已购买云防火墙</p>
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
                     * 获取<p>策略分析权限：0-关闭，1-开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyAnalysisEnabled <p>策略分析权限：0-关闭，1-开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyAnalysisEnabled() const;

                    /**
                     * 设置<p>策略分析权限：0-关闭，1-开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyAnalysisEnabled <p>策略分析权限：0-关闭，1-开启</p>
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
                     * 获取<p>成员加入集团时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberCreateTime <p>成员加入集团时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberCreateTime() const;

                    /**
                     * 设置<p>成员加入集团时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberCreateTime <p>成员加入集团时间</p>
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
                     * 获取<p>账号加入方式</p>
                     * @return JoinType <p>账号加入方式</p>
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置<p>账号加入方式</p>
                     * @param _joinType <p>账号加入方式</p>
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取<p>云防火墙套餐状态</p><p>枚举值：</p><ul><li>0： 未购买</li><li>2： 已购买</li><li>3： 试用中</li><li>4： 已过期</li></ul>
                     * @return CfwPayStatus <p>云防火墙套餐状态</p><p>枚举值：</p><ul><li>0： 未购买</li><li>2： 已购买</li><li>3： 试用中</li><li>4： 已过期</li></ul>
                     * 
                     */
                    int64_t GetCfwPayStatus() const;

                    /**
                     * 设置<p>云防火墙套餐状态</p><p>枚举值：</p><ul><li>0： 未购买</li><li>2： 已购买</li><li>3： 试用中</li><li>4： 已过期</li></ul>
                     * @param _cfwPayStatus <p>云防火墙套餐状态</p><p>枚举值：</p><ul><li>0： 未购买</li><li>2： 已购买</li><li>3： 试用中</li><li>4： 已过期</li></ul>
                     * 
                     */
                    void SetCfwPayStatus(const int64_t& _cfwPayStatus);

                    /**
                     * 判断参数 CfwPayStatus 是否已赋值
                     * @return CfwPayStatus 是否已赋值
                     * 
                     */
                    bool CfwPayStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否具备云防火墙使用能力</p>
                     * @return CfwCapable <p>是否具备云防火墙使用能力</p>
                     * 
                     */
                    int64_t GetCfwCapable() const;

                    /**
                     * 设置<p>是否具备云防火墙使用能力</p>
                     * @param _cfwCapable <p>是否具备云防火墙使用能力</p>
                     * 
                     */
                    void SetCfwCapable(const int64_t& _cfwCapable);

                    /**
                     * 判断参数 CfwCapable 是否已赋值
                     * @return CfwCapable 是否已赋值
                     * 
                     */
                    bool CfwCapableHasBeenSet() const;

                    /**
                     * 获取<p>私有安全组纳管开关， 0:未纳管，1:已纳管</p>
                     * @return SgManaged <p>私有安全组纳管开关， 0:未纳管，1:已纳管</p>
                     * 
                     */
                    int64_t GetSgManaged() const;

                    /**
                     * 设置<p>私有安全组纳管开关， 0:未纳管，1:已纳管</p>
                     * @param _sgManaged <p>私有安全组纳管开关， 0:未纳管，1:已纳管</p>
                     * 
                     */
                    void SetSgManaged(const int64_t& _sgManaged);

                    /**
                     * 判断参数 SgManaged 是否已赋值
                     * @return SgManaged 是否已赋值
                     * 
                     */
                    bool SgManagedHasBeenSet() const;

                    /**
                     * 获取<p>是否是后付费云防版本</p><p>枚举值：</p><ul><li>1： 后付费</li><li>0： 非后付费</li><li>-1： 未知</li></ul>
                     * @return IsCfwPostPay <p>是否是后付费云防版本</p><p>枚举值：</p><ul><li>1： 后付费</li><li>0： 非后付费</li><li>-1： 未知</li></ul>
                     * 
                     */
                    int64_t GetIsCfwPostPay() const;

                    /**
                     * 设置<p>是否是后付费云防版本</p><p>枚举值：</p><ul><li>1： 后付费</li><li>0： 非后付费</li><li>-1： 未知</li></ul>
                     * @param _isCfwPostPay <p>是否是后付费云防版本</p><p>枚举值：</p><ul><li>1： 后付费</li><li>0： 非后付费</li><li>-1： 未知</li></ul>
                     * 
                     */
                    void SetIsCfwPostPay(const int64_t& _isCfwPostPay);

                    /**
                     * 判断参数 IsCfwPostPay 是否已赋值
                     * @return IsCfwPostPay 是否已赋值
                     * 
                     */
                    bool IsCfwPostPayHasBeenSet() const;

                private:

                    /**
                     * <p>成员 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>成员账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>子账号数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * <p>所属组织架构节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>成员身份：admin-管理员，delegatedAdmin-委派管理员，member-普通成员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>成员身份显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleDisplay;
                    bool m_roleDisplayHasBeenSet;

                    /**
                     * <p>所属账户组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccountGroupInfo m_accountGroup;
                    bool m_accountGroupHasBeenSet;

                    /**
                     * <p>云防火墙纳管状态：0-未纳管，1-已纳管</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cfwManaged;
                    bool m_cfwManagedHasBeenSet;

                    /**
                     * <p>云防火墙共享角色：sharer-共享者，user-使用者，none-未设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwShareRole;
                    bool m_cfwShareRoleHasBeenSet;

                    /**
                     * <p>云防火墙共享角色显示名称（前端展示用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwShareRoleDisplay;
                    bool m_cfwShareRoleDisplayHasBeenSet;

                    /**
                     * <p>云防火墙共享者 AppId，成员角色为使用者时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwSharerAppId;
                    bool m_cfwSharerAppIdHasBeenSet;

                    /**
                     * <p>云防火墙计费实例 ID，非空表示已购买云防火墙</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cfwInstanceId;
                    bool m_cfwInstanceIdHasBeenSet;

                    /**
                     * <p>策略分析权限：0-关闭，1-开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyAnalysisEnabled;
                    bool m_policyAnalysisEnabledHasBeenSet;

                    /**
                     * <p>成员加入集团时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberCreateTime;
                    bool m_memberCreateTimeHasBeenSet;

                    /**
                     * <p>账号加入方式</p>
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * <p>云防火墙套餐状态</p><p>枚举值：</p><ul><li>0： 未购买</li><li>2： 已购买</li><li>3： 试用中</li><li>4： 已过期</li></ul>
                     */
                    int64_t m_cfwPayStatus;
                    bool m_cfwPayStatusHasBeenSet;

                    /**
                     * <p>是否具备云防火墙使用能力</p>
                     */
                    int64_t m_cfwCapable;
                    bool m_cfwCapableHasBeenSet;

                    /**
                     * <p>私有安全组纳管开关， 0:未纳管，1:已纳管</p>
                     */
                    int64_t m_sgManaged;
                    bool m_sgManagedHasBeenSet;

                    /**
                     * <p>是否是后付费云防版本</p><p>枚举值：</p><ul><li>1： 后付费</li><li>0： 非后付费</li><li>-1： 未知</li></ul>
                     */
                    int64_t m_isCfwPostPay;
                    bool m_isCfwPostPayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ORGANMEMBERITEM_H_
