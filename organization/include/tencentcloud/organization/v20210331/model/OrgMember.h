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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgPermission.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 企业组织成员
                */
                class OrgMember : public AbstractModel
                {
                public:
                    OrgMember();
                    ~OrgMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberUin 成员Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemberUin 成员Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 成员名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置成员名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 成员名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取成员类型，邀请：Invite， 创建：Create
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberType 成员类型，邀请：Invite， 创建：Create
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemberType() const;

                    /**
                     * 设置成员类型，邀请：Invite， 创建：Create
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemberType 成员类型，邀请：Invite， 创建：Create
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemberType(const std::string& _memberType);

                    /**
                     * 判断参数 MemberType 是否已赋值
                     * @return MemberType 是否已赋值
                     */
                    bool MemberTypeHasBeenSet() const;

                    /**
                     * 获取关系策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPolicyType 关系策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 设置关系策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrgPolicyType 关系策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrgPolicyType(const std::string& _orgPolicyType);

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取关系策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPolicyName 关系策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 设置关系策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrgPolicyName 关系策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrgPolicyName(const std::string& _orgPolicyName);

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取关系策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPermission 关系策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 设置关系策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrgPermission 关系策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrgPermission(const std::vector<OrgPermission>& _orgPermission);

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取所属节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 所属节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置所属节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeId 所属节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取所属节点名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 所属节点名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置所属节点名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeName 所属节点名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否允许成员退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置是否允许成员退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsAllowQuit(const std::string& _isAllowQuit);

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     */
                    bool IsAllowQuitHasBeenSet() const;

                private:

                    /**
                     * 成员Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 成员类型，邀请：Invite， 创建：Create
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberType;
                    bool m_memberTypeHasBeenSet;

                    /**
                     * 关系策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * 关系策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * 关系策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * 所属节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 所属节点名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否允许成员退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
