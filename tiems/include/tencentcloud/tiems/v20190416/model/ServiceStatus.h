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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICESTATUS_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Conditions.h>
#include <tencentcloud/tiems/v20190416/model/ReplicaInfo.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 服务状态
                */
                class ServiceStatus : public AbstractModel
                {
                public:
                    ServiceStatus();
                    ~ServiceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预期副本数
                     * @return DesiredReplicas 预期副本数
                     * 
                     */
                    uint64_t GetDesiredReplicas() const;

                    /**
                     * 设置预期副本数
                     * @param _desiredReplicas 预期副本数
                     * 
                     */
                    void SetDesiredReplicas(const uint64_t& _desiredReplicas);

                    /**
                     * 判断参数 DesiredReplicas 是否已赋值
                     * @return DesiredReplicas 是否已赋值
                     * 
                     */
                    bool DesiredReplicasHasBeenSet() const;

                    /**
                     * 获取当前副本数
                     * @return CurrentReplicas 当前副本数
                     * 
                     */
                    uint64_t GetCurrentReplicas() const;

                    /**
                     * 设置当前副本数
                     * @param _currentReplicas 当前副本数
                     * 
                     */
                    void SetCurrentReplicas(const uint64_t& _currentReplicas);

                    /**
                     * 判断参数 CurrentReplicas 是否已赋值
                     * @return CurrentReplicas 是否已赋值
                     * 
                     */
                    bool CurrentReplicasHasBeenSet() const;

                    /**
                     * 获取Normal：正常运行中；Abnormal：服务异常，例如容器启动失败等；Waiting：服务等待中，例如容器下载镜像过程等；Stopped：已停止 Stopping 停止中；Resuming：重启中；Updating：服务更新中
                     * @return Status Normal：正常运行中；Abnormal：服务异常，例如容器启动失败等；Waiting：服务等待中，例如容器下载镜像过程等；Stopped：已停止 Stopping 停止中；Resuming：重启中；Updating：服务更新中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Normal：正常运行中；Abnormal：服务异常，例如容器启动失败等；Waiting：服务等待中，例如容器下载镜像过程等；Stopped：已停止 Stopping 停止中；Resuming：重启中；Updating：服务更新中
                     * @param _status Normal：正常运行中；Abnormal：服务异常，例如容器启动失败等；Waiting：服务等待中，例如容器下载镜像过程等；Stopped：已停止 Stopping 停止中；Resuming：重启中；Updating：服务更新中
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
                     * 获取服务处于当前状态的原因集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 服务处于当前状态的原因集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Conditions> GetConditions() const;

                    /**
                     * 设置服务处于当前状态的原因集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 服务处于当前状态的原因集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<Conditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取副本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 副本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReplicas() const;

                    /**
                     * 设置副本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 副本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const std::vector<std::string>& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取运行状态对额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 运行状态对额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置运行状态对额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 运行状态对额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取副本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaInfos 副本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReplicaInfo> GetReplicaInfos() const;

                    /**
                     * 设置副本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaInfos 副本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicaInfos(const std::vector<ReplicaInfo>& _replicaInfos);

                    /**
                     * 判断参数 ReplicaInfos 是否已赋值
                     * @return ReplicaInfos 是否已赋值
                     * 
                     */
                    bool ReplicaInfosHasBeenSet() const;

                private:

                    /**
                     * 预期副本数
                     */
                    uint64_t m_desiredReplicas;
                    bool m_desiredReplicasHasBeenSet;

                    /**
                     * 当前副本数
                     */
                    uint64_t m_currentReplicas;
                    bool m_currentReplicasHasBeenSet;

                    /**
                     * Normal：正常运行中；Abnormal：服务异常，例如容器启动失败等；Waiting：服务等待中，例如容器下载镜像过程等；Stopped：已停止 Stopping 停止中；Resuming：重启中；Updating：服务更新中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务处于当前状态的原因集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Conditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 副本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 运行状态对额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 副本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReplicaInfo> m_replicaInfos;
                    bool m_replicaInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICESTATUS_H_
