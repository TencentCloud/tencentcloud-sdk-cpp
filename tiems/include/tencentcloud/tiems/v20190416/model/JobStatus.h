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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_JOBSTATUS_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_JOBSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 任务状态
                */
                class JobStatus : public AbstractModel
                {
                public:
                    JobStatus();
                    ~JobStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取错误时为错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 错误时为错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误时为错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 错误时为错误描述
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
                     * 获取预期Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredWorkers 预期Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDesiredWorkers() const;

                    /**
                     * 设置预期Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredWorkers 预期Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredWorkers(const uint64_t& _desiredWorkers);

                    /**
                     * 判断参数 DesiredWorkers 是否已赋值
                     * @return DesiredWorkers 是否已赋值
                     * 
                     */
                    bool DesiredWorkersHasBeenSet() const;

                    /**
                     * 获取当前Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentWorkers 当前Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCurrentWorkers() const;

                    /**
                     * 设置当前Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentWorkers 当前Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentWorkers(const uint64_t& _currentWorkers);

                    /**
                     * 判断参数 CurrentWorkers 是否已赋值
                     * @return CurrentWorkers 是否已赋值
                     * 
                     */
                    bool CurrentWorkersHasBeenSet() const;

                    /**
                     * 获取副本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 副本名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReplicas() const;

                    /**
                     * 设置副本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 副本名
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
                     * 获取副本实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaInfos 副本实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReplicaInfo> GetReplicaInfos() const;

                    /**
                     * 设置副本实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaInfos 副本实例
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
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误时为错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 预期Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_desiredWorkers;
                    bool m_desiredWorkersHasBeenSet;

                    /**
                     * 当前Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_currentWorkers;
                    bool m_currentWorkersHasBeenSet;

                    /**
                     * 副本名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 副本实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReplicaInfo> m_replicaInfos;
                    bool m_replicaInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_JOBSTATUS_H_
