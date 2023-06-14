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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/AlgorithmSpecification.h>
#include <tencentcloud/tione/v20191022/model/InputDataConfig.h>
#include <tencentcloud/tione/v20191022/model/OutputDataConfig.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>
#include <tencentcloud/tione/v20191022/model/ResourceConfig.h>
#include <tencentcloud/tione/v20191022/model/VpcConfig.h>
#include <tencentcloud/tione/v20191022/model/ModelArtifacts.h>
#include <tencentcloud/tione/v20191022/model/SecondaryStatusTransition.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeTrainingJob返回参数结构体
                */
                class DescribeTrainingJobResponse : public AbstractModel
                {
                public:
                    DescribeTrainingJobResponse();
                    ~DescribeTrainingJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取算法镜像配置
                     * @return AlgorithmSpecification 算法镜像配置
                     * 
                     */
                    AlgorithmSpecification GetAlgorithmSpecification() const;

                    /**
                     * 判断参数 AlgorithmSpecification 是否已赋值
                     * @return AlgorithmSpecification 是否已赋值
                     * 
                     */
                    bool AlgorithmSpecificationHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TrainingJobName 任务名称
                     * 
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 判断参数 TrainingJobName 是否已赋值
                     * @return TrainingJobName 是否已赋值
                     * 
                     */
                    bool TrainingJobNameHasBeenSet() const;

                    /**
                     * 获取算法超级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HyperParameters 算法超级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHyperParameters() const;

                    /**
                     * 判断参数 HyperParameters 是否已赋值
                     * @return HyperParameters 是否已赋值
                     * 
                     */
                    bool HyperParametersHasBeenSet() const;

                    /**
                     * 获取输入数据配置
                     * @return InputDataConfig 输入数据配置
                     * 
                     */
                    std::vector<InputDataConfig> GetInputDataConfig() const;

                    /**
                     * 判断参数 InputDataConfig 是否已赋值
                     * @return InputDataConfig 是否已赋值
                     * 
                     */
                    bool InputDataConfigHasBeenSet() const;

                    /**
                     * 获取输出数据配置
                     * @return OutputDataConfig 输出数据配置
                     * 
                     */
                    OutputDataConfig GetOutputDataConfig() const;

                    /**
                     * 判断参数 OutputDataConfig 是否已赋值
                     * @return OutputDataConfig 是否已赋值
                     * 
                     */
                    bool OutputDataConfigHasBeenSet() const;

                    /**
                     * 获取中止条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppingCondition 中止条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                    /**
                     * 获取计算实例配置
                     * @return ResourceConfig 计算实例配置
                     * 
                     */
                    ResourceConfig GetResourceConfig() const;

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取私有网络配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcConfig 私有网络配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取最近修改时间
                     * @return LastModifiedTime 最近修改时间
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingStartTime 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingStartTime() const;

                    /**
                     * 判断参数 TrainingStartTime 是否已赋值
                     * @return TrainingStartTime 是否已赋值
                     * 
                     */
                    bool TrainingStartTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingEndTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingEndTime() const;

                    /**
                     * 判断参数 TrainingEndTime 是否已赋值
                     * @return TrainingEndTime 是否已赋值
                     * 
                     */
                    bool TrainingEndTimeHasBeenSet() const;

                    /**
                     * 获取模型输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelArtifacts 模型输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelArtifacts GetModelArtifacts() const;

                    /**
                     * 判断参数 ModelArtifacts 是否已赋值
                     * @return ModelArtifacts 是否已赋值
                     * 
                     */
                    bool ModelArtifactsHasBeenSet() const;

                    /**
                     * 获取详细状态，取值范围
Starting：启动中
Downloading: 准备训练数据
Training: 正在训练
Uploading: 上传训练结果
Completed：已完成
Failed: 失败
MaxRuntimeExceeded: 任务超过最大运行时间
Stopping: 停止中
Stopped：已停止
                     * @return SecondaryStatus 详细状态，取值范围
Starting：启动中
Downloading: 准备训练数据
Training: 正在训练
Uploading: 上传训练结果
Completed：已完成
Failed: 失败
MaxRuntimeExceeded: 任务超过最大运行时间
Stopping: 停止中
Stopped：已停止
                     * 
                     */
                    std::string GetSecondaryStatus() const;

                    /**
                     * 判断参数 SecondaryStatus 是否已赋值
                     * @return SecondaryStatus 是否已赋值
                     * 
                     */
                    bool SecondaryStatusHasBeenSet() const;

                    /**
                     * 获取详细状态事件记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondaryStatusTransitions 详细状态事件记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecondaryStatusTransition> GetSecondaryStatusTransitions() const;

                    /**
                     * 判断参数 SecondaryStatusTransitions 是否已赋值
                     * @return SecondaryStatusTransitions 是否已赋值
                     * 
                     */
                    bool SecondaryStatusTransitionsHasBeenSet() const;

                    /**
                     * 获取角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
                     * @return TrainingJobStatus 训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
                     * 
                     */
                    std::string GetTrainingJobStatus() const;

                    /**
                     * 判断参数 TrainingJobStatus 是否已赋值
                     * @return TrainingJobStatus 是否已赋值
                     * 
                     */
                    bool TrainingJobStatusHasBeenSet() const;

                    /**
                     * 获取训练任务日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogUrl 训练任务日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogUrl() const;

                    /**
                     * 判断参数 LogUrl 是否已赋值
                     * @return LogUrl 是否已赋值
                     * 
                     */
                    bool LogUrlHasBeenSet() const;

                    /**
                     * 获取训练任务实例ID
                     * @return InstanceId 训练任务实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 算法镜像配置
                     */
                    AlgorithmSpecification m_algorithmSpecification;
                    bool m_algorithmSpecificationHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                    /**
                     * 算法超级参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hyperParameters;
                    bool m_hyperParametersHasBeenSet;

                    /**
                     * 输入数据配置
                     */
                    std::vector<InputDataConfig> m_inputDataConfig;
                    bool m_inputDataConfigHasBeenSet;

                    /**
                     * 输出数据配置
                     */
                    OutputDataConfig m_outputDataConfig;
                    bool m_outputDataConfigHasBeenSet;

                    /**
                     * 中止条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * 计算实例配置
                     */
                    ResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * 私有网络配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 最近修改时间
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingStartTime;
                    bool m_trainingStartTimeHasBeenSet;

                    /**
                     * 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingEndTime;
                    bool m_trainingEndTimeHasBeenSet;

                    /**
                     * 模型输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelArtifacts m_modelArtifacts;
                    bool m_modelArtifactsHasBeenSet;

                    /**
                     * 详细状态，取值范围
Starting：启动中
Downloading: 准备训练数据
Training: 正在训练
Uploading: 上传训练结果
Completed：已完成
Failed: 失败
MaxRuntimeExceeded: 任务超过最大运行时间
Stopping: 停止中
Stopped：已停止
                     */
                    std::string m_secondaryStatus;
                    bool m_secondaryStatusHasBeenSet;

                    /**
                     * 详细状态事件记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecondaryStatusTransition> m_secondaryStatusTransitions;
                    bool m_secondaryStatusTransitionsHasBeenSet;

                    /**
                     * 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 训练任务状态，取值范围
InProgress：运行中
Completed: 已完成
Failed: 失败
Stopping: 停止中
Stopped：已停止
                     */
                    std::string m_trainingJobStatus;
                    bool m_trainingJobStatusHasBeenSet;

                    /**
                     * 训练任务日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logUrl;
                    bool m_logUrlHasBeenSet;

                    /**
                     * 训练任务实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBRESPONSE_H_
