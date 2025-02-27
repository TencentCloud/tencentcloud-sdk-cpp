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
#include <tencentcloud/organization/v20210331/model/MemberIdentity.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


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
                     * @return MemberUin 成员Uin
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin
                     * @param _memberUin 成员Uin
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
                     * 获取成员名
                     * @return Name 成员名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置成员名
                     * @param _name 成员名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取成员类型，邀请：Invite， 创建：Create
                     * @return MemberType 成员类型，邀请：Invite， 创建：Create
                     * 
                     */
                    std::string GetMemberType() const;

                    /**
                     * 设置成员类型，邀请：Invite， 创建：Create
                     * @param _memberType 成员类型，邀请：Invite， 创建：Create
                     * 
                     */
                    void SetMemberType(const std::string& _memberType);

                    /**
                     * 判断参数 MemberType 是否已赋值
                     * @return MemberType 是否已赋值
                     * 
                     */
                    bool MemberTypeHasBeenSet() const;

                    /**
                     * 获取关系策略类型
                     * @return OrgPolicyType 关系策略类型
                     * 
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 设置关系策略类型
                     * @param _orgPolicyType 关系策略类型
                     * 
                     */
                    void SetOrgPolicyType(const std::string& _orgPolicyType);

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     * 
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取关系策略名
                     * @return OrgPolicyName 关系策略名
                     * 
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 设置关系策略名
                     * @param _orgPolicyName 关系策略名
                     * 
                     */
                    void SetOrgPolicyName(const std::string& _orgPolicyName);

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     * 
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取关系策略权限
                     * @return OrgPermission 关系策略权限
                     * 
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 设置关系策略权限
                     * @param _orgPermission 关系策略权限
                     * 
                     */
                    void SetOrgPermission(const std::vector<OrgPermission>& _orgPermission);

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     * 
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取所属节点ID
                     * @return NodeId 所属节点ID
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置所属节点ID
                     * @param _nodeId 所属节点ID
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取所属节点名
                     * @return NodeName 所属节点名
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置所属节点名
                     * @param _nodeName 所属节点名
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否允许成员退出。允许：Allow，不允许：Denied。
                     * @return IsAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置是否允许成员退出。允许：Allow，不允许：Denied。
                     * @param _isAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
                     * 
                     */
                    void SetIsAllowQuit(const std::string& _isAllowQuit);

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     * 
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取代付者Uin
                     * @return PayUin 代付者Uin
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置代付者Uin
                     * @param _payUin 代付者Uin
                     * 
                     */
                    void SetPayUin(const std::string& _payUin);

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     * 
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取代付者名称
                     * @return PayName 代付者名称
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置代付者名称
                     * @param _payName 代付者名称
                     * 
                     */
                    void SetPayName(const std::string& _payName);

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     * 
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取管理身份
                     * @return OrgIdentity 管理身份
                     * 
                     */
                    std::vector<MemberIdentity> GetOrgIdentity() const;

                    /**
                     * 设置管理身份
                     * @param _orgIdentity 管理身份
                     * 
                     */
                    void SetOrgIdentity(const std::vector<MemberIdentity>& _orgIdentity);

                    /**
                     * 判断参数 OrgIdentity 是否已赋值
                     * @return OrgIdentity 是否已赋值
                     * 
                     */
                    bool OrgIdentityHasBeenSet() const;

                    /**
                     * 获取安全信息绑定状态  未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * @return BindStatus 安全信息绑定状态  未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置安全信息绑定状态  未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * @param _bindStatus 安全信息绑定状态  未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取成员权限状态 已确认：Confirmed ，待确认：UnConfirmed
                     * @return PermissionStatus 成员权限状态 已确认：Confirmed ，待确认：UnConfirmed
                     * 
                     */
                    std::string GetPermissionStatus() const;

                    /**
                     * 设置成员权限状态 已确认：Confirmed ，待确认：UnConfirmed
                     * @param _permissionStatus 成员权限状态 已确认：Confirmed ，待确认：UnConfirmed
                     * 
                     */
                    void SetPermissionStatus(const std::string& _permissionStatus);

                    /**
                     * 判断参数 PermissionStatus 是否已赋值
                     * @return PermissionStatus 是否已赋值
                     * 
                     */
                    bool PermissionStatusHasBeenSet() const;

                    /**
                     * 获取成员标签列表
                     * @return Tags 成员标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置成员标签列表
                     * @param _tags 成员标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取腾讯云昵称
                     * @return NickName 腾讯云昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置腾讯云昵称
                     * @param _nickName 腾讯云昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * 成员Uin
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 成员类型，邀请：Invite， 创建：Create
                     */
                    std::string m_memberType;
                    bool m_memberTypeHasBeenSet;

                    /**
                     * 关系策略类型
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * 关系策略名
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * 关系策略权限
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * 所属节点ID
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 所属节点名
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否允许成员退出。允许：Allow，不允许：Denied。
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * 代付者Uin
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 代付者名称
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * 管理身份
                     */
                    std::vector<MemberIdentity> m_orgIdentity;
                    bool m_orgIdentityHasBeenSet;

                    /**
                     * 安全信息绑定状态  未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 成员权限状态 已确认：Confirmed ，待确认：UnConfirmed
                     */
                    std::string m_permissionStatus;
                    bool m_permissionStatusHasBeenSet;

                    /**
                     * 成员标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 腾讯云昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
