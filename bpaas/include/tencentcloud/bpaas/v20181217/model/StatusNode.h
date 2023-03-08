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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_STATUSNODE_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_STATUSNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bpaas/v20181217/model/ApproveOpinion.h>
#include <tencentcloud/bpaas/v20181217/model/ApproveUser.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * 状态节点
                */
                class StatusNode : public AbstractModel
                {
                public:
                    StatusNode();
                    ~StatusNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点id
                     * @return NodeId 节点id
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
                     * @param NodeId 节点id
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param NodeName 节点名称
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点类型 1:审批节点 2:执行节点 3:条件节点
                     * @return NodeType 节点类型 1:审批节点 2:执行节点 3:条件节点
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置节点类型 1:审批节点 2:执行节点 3:条件节点
                     * @param NodeType 节点类型 1:审批节点 2:执行节点 3:条件节点
                     */
                    void SetNodeType(const uint64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取下一个节点
                     * @return NextNode 下一个节点
                     */
                    std::string GetNextNode() const;

                    /**
                     * 设置下一个节点
                     * @param NextNode 下一个节点
                     */
                    void SetNextNode(const std::string& _nextNode);

                    /**
                     * 判断参数 NextNode 是否已赋值
                     * @return NextNode 是否已赋值
                     */
                    bool NextNodeHasBeenSet() const;

                    /**
                     * 获取审批意见模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Opinion 审批意见模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApproveOpinion GetOpinion() const;

                    /**
                     * 设置审批意见模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Opinion 审批意见模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpinion(const ApproveOpinion& _opinion);

                    /**
                     * 判断参数 Opinion 是否已赋值
                     * @return Opinion 是否已赋值
                     */
                    bool OpinionHasBeenSet() const;

                    /**
                     * 获取scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScfName scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScfName() const;

                    /**
                     * 设置scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScfName scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScfName(const std::string& _scfName);

                    /**
                     * 判断参数 ScfName 是否已赋值
                     * @return ScfName 是否已赋值
                     */
                    bool ScfNameHasBeenSet() const;

                    /**
                     * 获取状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubStatus 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSubStatus() const;

                    /**
                     * 设置状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubStatus 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubStatus(const uint64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取审批节点审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApprovedUin 审批节点审批人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> GetApprovedUin() const;

                    /**
                     * 设置审批节点审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApprovedUin 审批节点审批人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApprovedUin(const std::vector<uint64_t>& _approvedUin);

                    /**
                     * 判断参数 ApprovedUin 是否已赋值
                     * @return ApprovedUin 是否已赋值
                     */
                    bool ApprovedUinHasBeenSet() const;

                    /**
                     * 获取审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Msg 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取有权限审批该节点的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Users 有权限审批该节点的uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApproveUser GetUsers() const;

                    /**
                     * 设置有权限审批该节点的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Users 有权限审批该节点的uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUsers(const ApproveUser& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取是否有权限审批该节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsApprove 是否有权限审批该节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsApprove() const;

                    /**
                     * 设置是否有权限审批该节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsApprove 是否有权限审批该节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsApprove(const bool& _isApprove);

                    /**
                     * 判断参数 IsApprove 是否已赋值
                     * @return IsApprove 是否已赋值
                     */
                    bool IsApproveHasBeenSet() const;

                    /**
                     * 获取审批id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveId 审批id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置审批id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproveId 审批id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproveId(const std::string& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取审批方式 0或签 1会签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMethod 审批方式 0或签 1会签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetApproveMethod() const;

                    /**
                     * 设置审批方式 0或签 1会签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproveMethod 审批方式 0或签 1会签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproveMethod(const uint64_t& _approveMethod);

                    /**
                     * 判断参数 ApproveMethod 是否已赋值
                     * @return ApproveMethod 是否已赋值
                     */
                    bool ApproveMethodHasBeenSet() const;

                    /**
                     * 获取审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveType 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetApproveType() const;

                    /**
                     * 设置审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproveType 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproveType(const uint64_t& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     */
                    bool ApproveTypeHasBeenSet() const;

                    /**
                     * 获取外部审批类型 scf:0或null ; CKafka:1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallMethod 外部审批类型 scf:0或null ; CKafka:1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCallMethod() const;

                    /**
                     * 设置外部审批类型 scf:0或null ; CKafka:1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CallMethod 外部审批类型 scf:0或null ; CKafka:1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCallMethod(const uint64_t& _callMethod);

                    /**
                     * 判断参数 CallMethod 是否已赋值
                     * @return CallMethod 是否已赋值
                     */
                    bool CallMethodHasBeenSet() const;

                    /**
                     * 获取CKafka - 接入资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataHubId CKafka - 接入资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataHubId() const;

                    /**
                     * 设置CKafka - 接入资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataHubId CKafka - 接入资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataHubId(const std::string& _dataHubId);

                    /**
                     * 判断参数 DataHubId 是否已赋值
                     * @return DataHubId 是否已赋值
                     */
                    bool DataHubIdHasBeenSet() const;

                    /**
                     * 获取CKafka - 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName CKafka - 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置CKafka - 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskName CKafka - 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取CKafka - 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CKafkaRegion CKafka - 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 设置CKafka - 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CKafkaRegion CKafka - 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCKafkaRegion(const std::string& _cKafkaRegion);

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取外部审批Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalUrl 外部审批Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExternalUrl() const;

                    /**
                     * 设置外部审批Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExternalUrl 外部审批Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExternalUrl(const std::string& _externalUrl);

                    /**
                     * 判断参数 ExternalUrl 是否已赋值
                     * @return ExternalUrl 是否已赋值
                     */
                    bool ExternalUrlHasBeenSet() const;

                    /**
                     * 获取并行节点 3-4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParallelNodes 并行节点 3-4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParallelNodes() const;

                    /**
                     * 设置并行节点 3-4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParallelNodes 并行节点 3-4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParallelNodes(const std::string& _parallelNodes);

                    /**
                     * 判断参数 ParallelNodes 是否已赋值
                     * @return ParallelNodes 是否已赋值
                     */
                    bool ParallelNodesHasBeenSet() const;

                private:

                    /**
                     * 节点id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点类型 1:审批节点 2:执行节点 3:条件节点
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 下一个节点
                     */
                    std::string m_nextNode;
                    bool m_nextNodeHasBeenSet;

                    /**
                     * 审批意见模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApproveOpinion m_opinion;
                    bool m_opinionHasBeenSet;

                    /**
                     * scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scfName;
                    bool m_scfNameHasBeenSet;

                    /**
                     * 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 审批节点审批人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_approvedUin;
                    bool m_approvedUinHasBeenSet;

                    /**
                     * 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 有权限审批该节点的uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApproveUser m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 是否有权限审批该节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isApprove;
                    bool m_isApproveHasBeenSet;

                    /**
                     * 审批id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * 审批方式 0或签 1会签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_approveMethod;
                    bool m_approveMethodHasBeenSet;

                    /**
                     * 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * 外部审批类型 scf:0或null ; CKafka:1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_callMethod;
                    bool m_callMethodHasBeenSet;

                    /**
                     * CKafka - 接入资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataHubId;
                    bool m_dataHubIdHasBeenSet;

                    /**
                     * CKafka - 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * CKafka - 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * 外部审批Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalUrl;
                    bool m_externalUrlHasBeenSet;

                    /**
                     * 并行节点 3-4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parallelNodes;
                    bool m_parallelNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_STATUSNODE_H_
