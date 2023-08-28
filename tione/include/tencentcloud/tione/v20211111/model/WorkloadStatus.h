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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/StatefulSetCondition.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 工作负载的状态
                */
                class WorkloadStatus : public AbstractModel
                {
                public:
                    WorkloadStatus();
                    ~WorkloadStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前实例数
                     * @return Replicas 当前实例数
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置当前实例数
                     * @param _replicas 当前实例数
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取更新的实例数
                     * @return UpdatedReplicas 更新的实例数
                     * 
                     */
                    int64_t GetUpdatedReplicas() const;

                    /**
                     * 设置更新的实例数
                     * @param _updatedReplicas 更新的实例数
                     * 
                     */
                    void SetUpdatedReplicas(const int64_t& _updatedReplicas);

                    /**
                     * 判断参数 UpdatedReplicas 是否已赋值
                     * @return UpdatedReplicas 是否已赋值
                     * 
                     */
                    bool UpdatedReplicasHasBeenSet() const;

                    /**
                     * 获取就绪的实例数
                     * @return ReadyReplicas 就绪的实例数
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置就绪的实例数
                     * @param _readyReplicas 就绪的实例数
                     * 
                     */
                    void SetReadyReplicas(const int64_t& _readyReplicas);

                    /**
                     * 判断参数 ReadyReplicas 是否已赋值
                     * @return ReadyReplicas 是否已赋值
                     * 
                     */
                    bool ReadyReplicasHasBeenSet() const;

                    /**
                     * 获取可用的实例数
                     * @return AvailableReplicas 可用的实例数
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 设置可用的实例数
                     * @param _availableReplicas 可用的实例数
                     * 
                     */
                    void SetAvailableReplicas(const int64_t& _availableReplicas);

                    /**
                     * 判断参数 AvailableReplicas 是否已赋值
                     * @return AvailableReplicas 是否已赋值
                     * 
                     */
                    bool AvailableReplicasHasBeenSet() const;

                    /**
                     * 获取不可用的实例数
                     * @return UnavailableReplicas 不可用的实例数
                     * 
                     */
                    int64_t GetUnavailableReplicas() const;

                    /**
                     * 设置不可用的实例数
                     * @param _unavailableReplicas 不可用的实例数
                     * 
                     */
                    void SetUnavailableReplicas(const int64_t& _unavailableReplicas);

                    /**
                     * 判断参数 UnavailableReplicas 是否已赋值
                     * @return UnavailableReplicas 是否已赋值
                     * 
                     */
                    bool UnavailableReplicasHasBeenSet() const;

                    /**
                     * 获取Normal	正常运行中
Abnormal	服务异常，例如容器启动失败等
Waiting	服务等待中，例如容器下载镜像过程等
Stopped   已停止 
Pending 启动中
Stopping 停止中
                     * @return Status Normal	正常运行中
Abnormal	服务异常，例如容器启动失败等
Waiting	服务等待中，例如容器下载镜像过程等
Stopped   已停止 
Pending 启动中
Stopping 停止中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Normal	正常运行中
Abnormal	服务异常，例如容器启动失败等
Waiting	服务等待中，例如容器下载镜像过程等
Stopped   已停止 
Pending 启动中
Stopping 停止中
                     * @param _status Normal	正常运行中
Abnormal	服务异常，例如容器启动失败等
Waiting	服务等待中，例如容器下载镜像过程等
Stopped   已停止 
Pending 启动中
Stopping 停止中
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
                     * 获取工作负载的状况信息
                     * @return StatefulSetCondition 工作负载的状况信息
                     * @deprecated
                     */
                    std::vector<StatefulSetCondition> GetStatefulSetCondition() const;

                    /**
                     * 设置工作负载的状况信息
                     * @param _statefulSetCondition 工作负载的状况信息
                     * @deprecated
                     */
                    void SetStatefulSetCondition(const std::vector<StatefulSetCondition>& _statefulSetCondition);

                    /**
                     * 判断参数 StatefulSetCondition 是否已赋值
                     * @return StatefulSetCondition 是否已赋值
                     * @deprecated
                     */
                    bool StatefulSetConditionHasBeenSet() const;

                    /**
                     * 获取工作负载历史的状况信息
                     * @return Conditions 工作负载历史的状况信息
                     * 
                     */
                    std::vector<StatefulSetCondition> GetConditions() const;

                    /**
                     * 设置工作负载历史的状况信息
                     * @param _conditions 工作负载历史的状况信息
                     * 
                     */
                    void SetConditions(const std::vector<StatefulSetCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取状态异常时，展示原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 状态异常时，展示原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置状态异常时，展示原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 状态异常时，展示原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 当前实例数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 更新的实例数
                     */
                    int64_t m_updatedReplicas;
                    bool m_updatedReplicasHasBeenSet;

                    /**
                     * 就绪的实例数
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * 可用的实例数
                     */
                    int64_t m_availableReplicas;
                    bool m_availableReplicasHasBeenSet;

                    /**
                     * 不可用的实例数
                     */
                    int64_t m_unavailableReplicas;
                    bool m_unavailableReplicasHasBeenSet;

                    /**
                     * Normal	正常运行中
Abnormal	服务异常，例如容器启动失败等
Waiting	服务等待中，例如容器下载镜像过程等
Stopped   已停止 
Pending 启动中
Stopping 停止中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作负载的状况信息
                     */
                    std::vector<StatefulSetCondition> m_statefulSetCondition;
                    bool m_statefulSetConditionHasBeenSet;

                    /**
                     * 工作负载历史的状况信息
                     */
                    std::vector<StatefulSetCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 状态异常时，展示原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_
