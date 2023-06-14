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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CREATETRAININGJOBREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CREATETRAININGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/AlgorithmSpecification.h>
#include <tencentcloud/tione/v20191022/model/OutputDataConfig.h>
#include <tencentcloud/tione/v20191022/model/ResourceConfig.h>
#include <tencentcloud/tione/v20191022/model/InputDataConfig.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>
#include <tencentcloud/tione/v20191022/model/VpcConfig.h>
#include <tencentcloud/tione/v20191022/model/EnvConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * CreateTrainingJob请求参数结构体
                */
                class CreateTrainingJobRequest : public AbstractModel
                {
                public:
                    CreateTrainingJobRequest();
                    ~CreateTrainingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取算法镜像配置
                     * @return AlgorithmSpecification 算法镜像配置
                     * 
                     */
                    AlgorithmSpecification GetAlgorithmSpecification() const;

                    /**
                     * 设置算法镜像配置
                     * @param _algorithmSpecification 算法镜像配置
                     * 
                     */
                    void SetAlgorithmSpecification(const AlgorithmSpecification& _algorithmSpecification);

                    /**
                     * 判断参数 AlgorithmSpecification 是否已赋值
                     * @return AlgorithmSpecification 是否已赋值
                     * 
                     */
                    bool AlgorithmSpecificationHasBeenSet() const;

                    /**
                     * 获取输出数据配置
                     * @return OutputDataConfig 输出数据配置
                     * 
                     */
                    OutputDataConfig GetOutputDataConfig() const;

                    /**
                     * 设置输出数据配置
                     * @param _outputDataConfig 输出数据配置
                     * 
                     */
                    void SetOutputDataConfig(const OutputDataConfig& _outputDataConfig);

                    /**
                     * 判断参数 OutputDataConfig 是否已赋值
                     * @return OutputDataConfig 是否已赋值
                     * 
                     */
                    bool OutputDataConfigHasBeenSet() const;

                    /**
                     * 获取资源实例配置
                     * @return ResourceConfig 资源实例配置
                     * 
                     */
                    ResourceConfig GetResourceConfig() const;

                    /**
                     * 设置资源实例配置
                     * @param _resourceConfig 资源实例配置
                     * 
                     */
                    void SetResourceConfig(const ResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取训练任务名称
                     * @return TrainingJobName 训练任务名称
                     * 
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 设置训练任务名称
                     * @param _trainingJobName 训练任务名称
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
                     * 获取输入数据配置
                     * @return InputDataConfig 输入数据配置
                     * 
                     */
                    std::vector<InputDataConfig> GetInputDataConfig() const;

                    /**
                     * 设置输入数据配置
                     * @param _inputDataConfig 输入数据配置
                     * 
                     */
                    void SetInputDataConfig(const std::vector<InputDataConfig>& _inputDataConfig);

                    /**
                     * 判断参数 InputDataConfig 是否已赋值
                     * @return InputDataConfig 是否已赋值
                     * 
                     */
                    bool InputDataConfigHasBeenSet() const;

                    /**
                     * 获取中止条件
                     * @return StoppingCondition 中止条件
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 设置中止条件
                     * @param _stoppingCondition 中止条件
                     * 
                     */
                    void SetStoppingCondition(const StoppingCondition& _stoppingCondition);

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                    /**
                     * 获取私有网络配置
                     * @return VpcConfig 私有网络配置
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置私有网络配置
                     * @param _vpcConfig 私有网络配置
                     * 
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取算法超级参数
                     * @return HyperParameters 算法超级参数
                     * 
                     */
                    std::string GetHyperParameters() const;

                    /**
                     * 设置算法超级参数
                     * @param _hyperParameters 算法超级参数
                     * 
                     */
                    void SetHyperParameters(const std::string& _hyperParameters);

                    /**
                     * 判断参数 HyperParameters 是否已赋值
                     * @return HyperParameters 是否已赋值
                     * 
                     */
                    bool HyperParametersHasBeenSet() const;

                    /**
                     * 获取环境变量配置
                     * @return EnvConfig 环境变量配置
                     * 
                     */
                    std::vector<EnvConfig> GetEnvConfig() const;

                    /**
                     * 设置环境变量配置
                     * @param _envConfig 环境变量配置
                     * 
                     */
                    void SetEnvConfig(const std::vector<EnvConfig>& _envConfig);

                    /**
                     * 判断参数 EnvConfig 是否已赋值
                     * @return EnvConfig 是否已赋值
                     * 
                     */
                    bool EnvConfigHasBeenSet() const;

                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param _roleName 角色名称
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取在资源不足（ResourceInsufficient）时后台不定时尝试重新创建训练任务。可取值Enabled/Disabled
默认值为Disabled即不重新尝试。设为Enabled时重新尝试有一定的时间期限，定义在 StoppingCondition 中 MaxWaitTimeInSecond中 ，默认值为1天，超过该期限创建失败。
                     * @return RetryWhenResourceInsufficient 在资源不足（ResourceInsufficient）时后台不定时尝试重新创建训练任务。可取值Enabled/Disabled
默认值为Disabled即不重新尝试。设为Enabled时重新尝试有一定的时间期限，定义在 StoppingCondition 中 MaxWaitTimeInSecond中 ，默认值为1天，超过该期限创建失败。
                     * 
                     */
                    std::string GetRetryWhenResourceInsufficient() const;

                    /**
                     * 设置在资源不足（ResourceInsufficient）时后台不定时尝试重新创建训练任务。可取值Enabled/Disabled
默认值为Disabled即不重新尝试。设为Enabled时重新尝试有一定的时间期限，定义在 StoppingCondition 中 MaxWaitTimeInSecond中 ，默认值为1天，超过该期限创建失败。
                     * @param _retryWhenResourceInsufficient 在资源不足（ResourceInsufficient）时后台不定时尝试重新创建训练任务。可取值Enabled/Disabled
默认值为Disabled即不重新尝试。设为Enabled时重新尝试有一定的时间期限，定义在 StoppingCondition 中 MaxWaitTimeInSecond中 ，默认值为1天，超过该期限创建失败。
                     * 
                     */
                    void SetRetryWhenResourceInsufficient(const std::string& _retryWhenResourceInsufficient);

                    /**
                     * 判断参数 RetryWhenResourceInsufficient 是否已赋值
                     * @return RetryWhenResourceInsufficient 是否已赋值
                     * 
                     */
                    bool RetryWhenResourceInsufficientHasBeenSet() const;

                private:

                    /**
                     * 算法镜像配置
                     */
                    AlgorithmSpecification m_algorithmSpecification;
                    bool m_algorithmSpecificationHasBeenSet;

                    /**
                     * 输出数据配置
                     */
                    OutputDataConfig m_outputDataConfig;
                    bool m_outputDataConfigHasBeenSet;

                    /**
                     * 资源实例配置
                     */
                    ResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * 训练任务名称
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                    /**
                     * 输入数据配置
                     */
                    std::vector<InputDataConfig> m_inputDataConfig;
                    bool m_inputDataConfigHasBeenSet;

                    /**
                     * 中止条件
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * 私有网络配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 算法超级参数
                     */
                    std::string m_hyperParameters;
                    bool m_hyperParametersHasBeenSet;

                    /**
                     * 环境变量配置
                     */
                    std::vector<EnvConfig> m_envConfig;
                    bool m_envConfigHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 在资源不足（ResourceInsufficient）时后台不定时尝试重新创建训练任务。可取值Enabled/Disabled
默认值为Disabled即不重新尝试。设为Enabled时重新尝试有一定的时间期限，定义在 StoppingCondition 中 MaxWaitTimeInSecond中 ，默认值为1天，超过该期限创建失败。
                     */
                    std::string m_retryWhenResourceInsufficient;
                    bool m_retryWhenResourceInsufficientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CREATETRAININGJOBREQUEST_H_
