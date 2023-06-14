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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_TRAININGJOBSUMMARY_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_TRAININGJOBSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/ResourceConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 训练任务概要
                */
                class TrainingJobSummary : public AbstractModel
                {
                public:
                    TrainingJobSummary();
                    ~TrainingJobSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 设置最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedTime(const std::string& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取训练任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingJobName 训练任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 设置训练任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingJobName 训练任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingJobName(const std::string& _trainingJobName);

                    /**
                     * 判断参数 TrainingJobName 是否已赋值
                     * @return TrainingJobName 是否已赋值
                     * 
                     */
                    bool TrainingJobNameHasBeenSet() const;

                    /**
                     * 获取训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingJobStatus 训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingJobStatus() const;

                    /**
                     * 设置训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingJobStatus 训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingJobStatus(const std::string& _trainingJobStatus);

                    /**
                     * 判断参数 TrainingJobStatus 是否已赋值
                     * @return TrainingJobStatus 是否已赋值
                     * 
                     */
                    bool TrainingJobStatusHasBeenSet() const;

                    /**
                     * 获取完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingEndTime 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingEndTime() const;

                    /**
                     * 设置完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingEndTime 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingEndTime(const std::string& _trainingEndTime);

                    /**
                     * 判断参数 TrainingEndTime 是否已赋值
                     * @return TrainingEndTime 是否已赋值
                     * 
                     */
                    bool TrainingEndTimeHasBeenSet() const;

                    /**
                     * 获取算了实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 算了实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置算了实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 算了实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceConfig 资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceConfig GetResourceConfig() const;

                    /**
                     * 设置资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceConfig 资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceConfig(const ResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                private:

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * 训练任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                    /**
                     * 训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingJobStatus;
                    bool m_trainingJobStatusHasBeenSet;

                    /**
                     * 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingEndTime;
                    bool m_trainingEndTimeHasBeenSet;

                    /**
                     * 算了实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_TRAININGJOBSUMMARY_H_
