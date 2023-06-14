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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGAGENTDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGAGENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CvmAgentStatus.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 采集器详细信息
                */
                class InLongAgentDetail : public AbstractModel
                {
                public:
                    InLongAgentDetail();
                    ~InLongAgentDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent ID
                     * @return AgentId Agent ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID
                     * @param _agentId Agent ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Agent Name
                     * @return AgentName Agent Name
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent Name
                     * @param _agentName Agent Name
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     * @return Status Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     * @param _status Agent状态(running运行中，initializing 操作中，failed心跳异常)
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
                     * 获取Agent状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc Agent状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Agent状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc Agent状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @return AgentType 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * 
                     */
                    uint64_t GetAgentType() const;

                    /**
                     * 设置集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @param _agentType 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * 
                     */
                    void SetAgentType(const uint64_t& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取采集来源
                     * @return Source 采集来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置采集来源
                     * @param _source 采集来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取VPC
                     * @return VpcId VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC
                     * @param _vpcId VPC
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集成资源组Id
                     * @return ExecutorGroupId 集成资源组Id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置集成资源组Id
                     * @param _executorGroupId 集成资源组Id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取集成资源组名称
                     * @return ExecutorGroupName 集成资源组名称
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置集成资源组名称
                     * @param _executorGroupName 集成资源组名称
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取关联任务数
                     * @return TaskCount 关联任务数
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置关联任务数
                     * @param _taskCount 关联任务数
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取采集器组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentGroupId 采集器组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentGroupId() const;

                    /**
                     * 设置采集器组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentGroupId 采集器组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentGroupId(const std::string& _agentGroupId);

                    /**
                     * 判断参数 AgentGroupId 是否已赋值
                     * @return AgentGroupId 是否已赋值
                     * 
                     */
                    bool AgentGroupIdHasBeenSet() const;

                    /**
                     * 获取agent状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmAgentStatusList agent状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CvmAgentStatus> GetCvmAgentStatusList() const;

                    /**
                     * 设置agent状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmAgentStatusList agent状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmAgentStatusList(const std::vector<CvmAgentStatus>& _cvmAgentStatusList);

                    /**
                     * 判断参数 CvmAgentStatusList 是否已赋值
                     * @return CvmAgentStatusList 是否已赋值
                     * 
                     */
                    bool CvmAgentStatusListHasBeenSet() const;

                    /**
                     * 获取agent数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentTotal agent数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAgentTotal() const;

                    /**
                     * 设置agent数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentTotal agent数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentTotal(const uint64_t& _agentTotal);

                    /**
                     * 判断参数 AgentTotal 是否已赋值
                     * @return AgentTotal 是否已赋值
                     * 
                     */
                    bool AgentTotalHasBeenSet() const;

                    /**
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeDays 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeDays() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeDays 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeDays(const int64_t& _lifeDays);

                    /**
                     * 判断参数 LifeDays 是否已赋值
                     * @return LifeDays 是否已赋值
                     * 
                     */
                    bool LifeDaysHasBeenSet() const;

                private:

                    /**
                     * Agent ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent Name
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Agent状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     */
                    uint64_t m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 采集来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集成资源组Id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 集成资源组名称
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 关联任务数
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 采集器组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentGroupId;
                    bool m_agentGroupIdHasBeenSet;

                    /**
                     * agent状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CvmAgentStatus> m_cvmAgentStatusList;
                    bool m_cvmAgentStatusListHasBeenSet;

                    /**
                     * agent数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_agentTotal;
                    bool m_agentTotalHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeDays;
                    bool m_lifeDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGAGENTDETAIL_H_
