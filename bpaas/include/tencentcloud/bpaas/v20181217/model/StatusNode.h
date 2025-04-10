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
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
                     * @param _nodeId 节点id
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * 获取节点类型 1:审批节点 2:执行节点 3:条件节点
                     * @return NodeType 节点类型 1:审批节点 2:执行节点 3:条件节点
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置节点类型 1:审批节点 2:执行节点 3:条件节点
                     * @param _nodeType 节点类型 1:审批节点 2:执行节点 3:条件节点
                     * 
                     */
                    void SetNodeType(const uint64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取下一个节点
                     * @return NextNode 下一个节点
                     * 
                     */
                    std::string GetNextNode() const;

                    /**
                     * 设置下一个节点
                     * @param _nextNode 下一个节点
                     * 
                     */
                    void SetNextNode(const std::string& _nextNode);

                    /**
                     * 判断参数 NextNode 是否已赋值
                     * @return NextNode 是否已赋值
                     * 
                     */
                    bool NextNodeHasBeenSet() const;

                    /**
                     * 获取审批意见模型
                     * @return Opinion 审批意见模型
                     * 
                     */
                    ApproveOpinion GetOpinion() const;

                    /**
                     * 设置审批意见模型
                     * @param _opinion 审批意见模型
                     * 
                     */
                    void SetOpinion(const ApproveOpinion& _opinion);

                    /**
                     * 判断参数 Opinion 是否已赋值
                     * @return Opinion 是否已赋值
                     * 
                     */
                    bool OpinionHasBeenSet() const;

                    /**
                     * 获取scf函数名称
                     * @return ScfName scf函数名称
                     * 
                     */
                    std::string GetScfName() const;

                    /**
                     * 设置scf函数名称
                     * @param _scfName scf函数名称
                     * 
                     */
                    void SetScfName(const std::string& _scfName);

                    /**
                     * 判断参数 ScfName 是否已赋值
                     * @return ScfName 是否已赋值
                     * 
                     */
                    bool ScfNameHasBeenSet() const;

                    /**
                     * 获取状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
                     * @return SubStatus 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
                     * 
                     */
                    uint64_t GetSubStatus() const;

                    /**
                     * 设置状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
                     * @param _subStatus 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
                     * 
                     */
                    void SetSubStatus(const uint64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取审批节点审批人
                     * @return ApprovedUin 审批节点审批人
                     * 
                     */
                    std::vector<uint64_t> GetApprovedUin() const;

                    /**
                     * 设置审批节点审批人
                     * @param _approvedUin 审批节点审批人
                     * 
                     */
                    void SetApprovedUin(const std::vector<uint64_t>& _approvedUin);

                    /**
                     * 判断参数 ApprovedUin 是否已赋值
                     * @return ApprovedUin 是否已赋值
                     * 
                     */
                    bool ApprovedUinHasBeenSet() const;

                    /**
                     * 获取审批时间
                     * @return CreateTime 审批时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置审批时间
                     * @param _createTime 审批时间
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
                     * 获取审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
                     * @return Msg 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
                     * @param _msg 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取有权限审批该节点的uin
                     * @return Users 有权限审批该节点的uin
                     * 
                     */
                    ApproveUser GetUsers() const;

                    /**
                     * 设置有权限审批该节点的uin
                     * @param _users 有权限审批该节点的uin
                     * 
                     */
                    void SetUsers(const ApproveUser& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取是否有权限审批该节点
                     * @return IsApprove 是否有权限审批该节点
                     * 
                     */
                    bool GetIsApprove() const;

                    /**
                     * 设置是否有权限审批该节点
                     * @param _isApprove 是否有权限审批该节点
                     * 
                     */
                    void SetIsApprove(const bool& _isApprove);

                    /**
                     * 判断参数 IsApprove 是否已赋值
                     * @return IsApprove 是否已赋值
                     * 
                     */
                    bool IsApproveHasBeenSet() const;

                    /**
                     * 获取审批id
                     * @return ApproveId 审批id
                     * 
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置审批id
                     * @param _approveId 审批id
                     * 
                     */
                    void SetApproveId(const std::string& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     * 
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取审批方式 0或签 1会签
                     * @return ApproveMethod 审批方式 0或签 1会签
                     * 
                     */
                    uint64_t GetApproveMethod() const;

                    /**
                     * 设置审批方式 0或签 1会签
                     * @param _approveMethod 审批方式 0或签 1会签
                     * 
                     */
                    void SetApproveMethod(const uint64_t& _approveMethod);

                    /**
                     * 判断参数 ApproveMethod 是否已赋值
                     * @return ApproveMethod 是否已赋值
                     * 
                     */
                    bool ApproveMethodHasBeenSet() const;

                    /**
                     * 获取审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
                     * @return ApproveType 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
                     * 
                     */
                    uint64_t GetApproveType() const;

                    /**
                     * 设置审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
                     * @param _approveType 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
                     * 
                     */
                    void SetApproveType(const uint64_t& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     * 
                     */
                    bool ApproveTypeHasBeenSet() const;

                    /**
                     * 获取外部审批类型 scf:0或null ; CKafka:1
                     * @return CallMethod 外部审批类型 scf:0或null ; CKafka:1
                     * 
                     */
                    uint64_t GetCallMethod() const;

                    /**
                     * 设置外部审批类型 scf:0或null ; CKafka:1
                     * @param _callMethod 外部审批类型 scf:0或null ; CKafka:1
                     * 
                     */
                    void SetCallMethod(const uint64_t& _callMethod);

                    /**
                     * 判断参数 CallMethod 是否已赋值
                     * @return CallMethod 是否已赋值
                     * 
                     */
                    bool CallMethodHasBeenSet() const;

                    /**
                     * 获取CKafka - 接入资源ID
                     * @return DataHubId CKafka - 接入资源ID
                     * 
                     */
                    std::string GetDataHubId() const;

                    /**
                     * 设置CKafka - 接入资源ID
                     * @param _dataHubId CKafka - 接入资源ID
                     * 
                     */
                    void SetDataHubId(const std::string& _dataHubId);

                    /**
                     * 判断参数 DataHubId 是否已赋值
                     * @return DataHubId 是否已赋值
                     * 
                     */
                    bool DataHubIdHasBeenSet() const;

                    /**
                     * 获取CKafka - 任务名称
                     * @return TaskName CKafka - 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置CKafka - 任务名称
                     * @param _taskName CKafka - 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取CKafka - 地域
                     * @return CKafkaRegion CKafka - 地域
                     * 
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 设置CKafka - 地域
                     * @param _cKafkaRegion CKafka - 地域
                     * 
                     */
                    void SetCKafkaRegion(const std::string& _cKafkaRegion);

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     * 
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取外部审批Url
                     * @return ExternalUrl 外部审批Url
                     * 
                     */
                    std::string GetExternalUrl() const;

                    /**
                     * 设置外部审批Url
                     * @param _externalUrl 外部审批Url
                     * 
                     */
                    void SetExternalUrl(const std::string& _externalUrl);

                    /**
                     * 判断参数 ExternalUrl 是否已赋值
                     * @return ExternalUrl 是否已赋值
                     * 
                     */
                    bool ExternalUrlHasBeenSet() const;

                    /**
                     * 获取并行节点 3-4
                     * @return ParallelNodes 并行节点 3-4
                     * 
                     */
                    std::string GetParallelNodes() const;

                    /**
                     * 设置并行节点 3-4
                     * @param _parallelNodes 并行节点 3-4
                     * 
                     */
                    void SetParallelNodes(const std::string& _parallelNodes);

                    /**
                     * 判断参数 ParallelNodes 是否已赋值
                     * @return ParallelNodes 是否已赋值
                     * 
                     */
                    bool ParallelNodesHasBeenSet() const;

                    /**
                     * 获取scf拒绝时返回信息
                     * @return RejectedCloudFunctionMsg scf拒绝时返回信息
                     * 
                     */
                    std::string GetRejectedCloudFunctionMsg() const;

                    /**
                     * 设置scf拒绝时返回信息
                     * @param _rejectedCloudFunctionMsg scf拒绝时返回信息
                     * 
                     */
                    void SetRejectedCloudFunctionMsg(const std::string& _rejectedCloudFunctionMsg);

                    /**
                     * 判断参数 RejectedCloudFunctionMsg 是否已赋值
                     * @return RejectedCloudFunctionMsg 是否已赋值
                     * 
                     */
                    bool RejectedCloudFunctionMsgHasBeenSet() const;

                    /**
                     * 获取上一个节点
                     * @return PrevNode 上一个节点
                     * 
                     */
                    std::string GetPrevNode() const;

                    /**
                     * 设置上一个节点
                     * @param _prevNode 上一个节点
                     * 
                     */
                    void SetPrevNode(const std::string& _prevNode);

                    /**
                     * 判断参数 PrevNode 是否已赋值
                     * @return PrevNode 是否已赋值
                     * 
                     */
                    bool PrevNodeHasBeenSet() const;

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
                     */
                    ApproveOpinion m_opinion;
                    bool m_opinionHasBeenSet;

                    /**
                     * scf函数名称
                     */
                    std::string m_scfName;
                    bool m_scfNameHasBeenSet;

                    /**
                     * 状态（0：待审批，1：审批通过，2：拒绝，3：scf执行失败，4：scf执行成功）18: 外部审批中
                     */
                    uint64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 审批节点审批人
                     */
                    std::vector<uint64_t> m_approvedUin;
                    bool m_approvedUinHasBeenSet;

                    /**
                     * 审批时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审批意见信息 审批节点:审批人意见  执行节点:scf函数执行日志
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 有权限审批该节点的uin
                     */
                    ApproveUser m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 是否有权限审批该节点
                     */
                    bool m_isApprove;
                    bool m_isApproveHasBeenSet;

                    /**
                     * 审批id
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * 审批方式 0或签 1会签
                     */
                    uint64_t m_approveMethod;
                    bool m_approveMethodHasBeenSet;

                    /**
                     * 审批节点审批类型，1人工审批 2自动通过 3自动决绝 4外部审批scf
                     */
                    uint64_t m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * 外部审批类型 scf:0或null ; CKafka:1
                     */
                    uint64_t m_callMethod;
                    bool m_callMethodHasBeenSet;

                    /**
                     * CKafka - 接入资源ID
                     */
                    std::string m_dataHubId;
                    bool m_dataHubIdHasBeenSet;

                    /**
                     * CKafka - 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * CKafka - 地域
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * 外部审批Url
                     */
                    std::string m_externalUrl;
                    bool m_externalUrlHasBeenSet;

                    /**
                     * 并行节点 3-4
                     */
                    std::string m_parallelNodes;
                    bool m_parallelNodesHasBeenSet;

                    /**
                     * scf拒绝时返回信息
                     */
                    std::string m_rejectedCloudFunctionMsg;
                    bool m_rejectedCloudFunctionMsgHasBeenSet;

                    /**
                     * 上一个节点
                     */
                    std::string m_prevNode;
                    bool m_prevNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_STATUSNODE_H_
