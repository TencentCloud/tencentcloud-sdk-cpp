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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Application.h>
#include <tencentcloud/batch/v20170312/model/AnonymousComputeEnv.h>
#include <tencentcloud/batch/v20170312/model/RedirectInfo.h>
#include <tencentcloud/batch/v20170312/model/RedirectLocalInfo.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/OutputMapping.h>
#include <tencentcloud/batch/v20170312/model/OutputMappingConfig.h>
#include <tencentcloud/batch/v20170312/model/EnvVar.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用程序信息
                     * @return Application 应用程序信息
                     * 
                     */
                    Application GetApplication() const;

                    /**
                     * 设置应用程序信息
                     * @param _application 应用程序信息
                     * 
                     */
                    void SetApplication(const Application& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取任务名称，在一个作业内部唯一
                     * @return TaskName 任务名称，在一个作业内部唯一
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，在一个作业内部唯一
                     * @param _taskName 任务名称，在一个作业内部唯一
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
                     * 获取任务实例运行个数，默认为1
                     * @return TaskInstanceNum 任务实例运行个数，默认为1
                     * 
                     */
                    uint64_t GetTaskInstanceNum() const;

                    /**
                     * 设置任务实例运行个数，默认为1
                     * @param _taskInstanceNum 任务实例运行个数，默认为1
                     * 
                     */
                    void SetTaskInstanceNum(const uint64_t& _taskInstanceNum);

                    /**
                     * 判断参数 TaskInstanceNum 是否已赋值
                     * @return TaskInstanceNum 是否已赋值
                     * 
                     */
                    bool TaskInstanceNumHasBeenSet() const;

                    /**
                     * 获取运行环境信息，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * @return ComputeEnv 运行环境信息，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * 
                     */
                    AnonymousComputeEnv GetComputeEnv() const;

                    /**
                     * 设置运行环境信息，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * @param _computeEnv 运行环境信息，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * 
                     */
                    void SetComputeEnv(const AnonymousComputeEnv& _computeEnv);

                    /**
                     * 判断参数 ComputeEnv 是否已赋值
                     * @return ComputeEnv 是否已赋值
                     * 
                     */
                    bool ComputeEnvHasBeenSet() const;

                    /**
                     * 获取计算环境ID，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * @return EnvId 计算环境ID，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * @param _envId 计算环境ID，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取重定向信息
                     * @return RedirectInfo 重定向信息
                     * 
                     */
                    RedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置重定向信息
                     * @param _redirectInfo 重定向信息
                     * 
                     */
                    void SetRedirectInfo(const RedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取重定向本地信息
                     * @return RedirectLocalInfo 重定向本地信息
                     * 
                     */
                    RedirectLocalInfo GetRedirectLocalInfo() const;

                    /**
                     * 设置重定向本地信息
                     * @param _redirectLocalInfo 重定向本地信息
                     * 
                     */
                    void SetRedirectLocalInfo(const RedirectLocalInfo& _redirectLocalInfo);

                    /**
                     * 判断参数 RedirectLocalInfo 是否已赋值
                     * @return RedirectLocalInfo 是否已赋值
                     * 
                     */
                    bool RedirectLocalInfoHasBeenSet() const;

                    /**
                     * 获取输入映射
                     * @return InputMappings 输入映射
                     * 
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置输入映射
                     * @param _inputMappings 输入映射
                     * 
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     * 
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取输出映射
                     * @return OutputMappings 输出映射
                     * 
                     */
                    std::vector<OutputMapping> GetOutputMappings() const;

                    /**
                     * 设置输出映射
                     * @param _outputMappings 输出映射
                     * 
                     */
                    void SetOutputMappings(const std::vector<OutputMapping>& _outputMappings);

                    /**
                     * 判断参数 OutputMappings 是否已赋值
                     * @return OutputMappings 是否已赋值
                     * 
                     */
                    bool OutputMappingsHasBeenSet() const;

                    /**
                     * 获取输出映射配置
                     * @return OutputMappingConfigs 输出映射配置
                     * 
                     */
                    std::vector<OutputMappingConfig> GetOutputMappingConfigs() const;

                    /**
                     * 设置输出映射配置
                     * @param _outputMappingConfigs 输出映射配置
                     * 
                     */
                    void SetOutputMappingConfigs(const std::vector<OutputMappingConfig>& _outputMappingConfigs);

                    /**
                     * 判断参数 OutputMappingConfigs 是否已赋值
                     * @return OutputMappingConfigs 是否已赋值
                     * 
                     */
                    bool OutputMappingConfigsHasBeenSet() const;

                    /**
                     * 获取自定义环境变量
                     * @return EnvVars 自定义环境变量
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置自定义环境变量
                     * @param _envVars 自定义环境变量
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取授权信息
                     * @return Authentications 授权信息
                     * 
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置授权信息
                     * @param _authentications 授权信息
                     * 
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     * 
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取TaskInstance失败后处理方式，取值包括

- TERMINATE：销毁计算实例（默认）、
- INTERRUPT：中断任务，保留计算实例、
- FAST_INTERRUPT： 快速中断任务， 保留计算实例。
                     * @return FailedAction TaskInstance失败后处理方式，取值包括

- TERMINATE：销毁计算实例（默认）、
- INTERRUPT：中断任务，保留计算实例、
- FAST_INTERRUPT： 快速中断任务， 保留计算实例。
                     * 
                     */
                    std::string GetFailedAction() const;

                    /**
                     * 设置TaskInstance失败后处理方式，取值包括

- TERMINATE：销毁计算实例（默认）、
- INTERRUPT：中断任务，保留计算实例、
- FAST_INTERRUPT： 快速中断任务， 保留计算实例。
                     * @param _failedAction TaskInstance失败后处理方式，取值包括

- TERMINATE：销毁计算实例（默认）、
- INTERRUPT：中断任务，保留计算实例、
- FAST_INTERRUPT： 快速中断任务， 保留计算实例。
                     * 
                     */
                    void SetFailedAction(const std::string& _failedAction);

                    /**
                     * 判断参数 FailedAction 是否已赋值
                     * @return FailedAction 是否已赋值
                     * 
                     */
                    bool FailedActionHasBeenSet() const;

                    /**
                     * 获取任务失败后的最大重试次数，默认为0
                     * @return MaxRetryCount 任务失败后的最大重试次数，默认为0
                     * 
                     */
                    uint64_t GetMaxRetryCount() const;

                    /**
                     * 设置任务失败后的最大重试次数，默认为0
                     * @param _maxRetryCount 任务失败后的最大重试次数，默认为0
                     * 
                     */
                    void SetMaxRetryCount(const uint64_t& _maxRetryCount);

                    /**
                     * 判断参数 MaxRetryCount 是否已赋值
                     * @return MaxRetryCount 是否已赋值
                     * 
                     */
                    bool MaxRetryCountHasBeenSet() const;

                    /**
                     * 获取任务启动后的超时时间，单位秒，默认为86400秒
                     * @return Timeout 任务启动后的超时时间，单位秒，默认为86400秒
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置任务启动后的超时时间，单位秒，默认为86400秒
                     * @param _timeout 任务启动后的超时时间，单位秒，默认为86400秒
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取任务最大并发数限制，默认没有限制。
                     * @return MaxConcurrentNum 任务最大并发数限制，默认没有限制。
                     * 
                     */
                    uint64_t GetMaxConcurrentNum() const;

                    /**
                     * 设置任务最大并发数限制，默认没有限制。
                     * @param _maxConcurrentNum 任务最大并发数限制，默认没有限制。
                     * 
                     */
                    void SetMaxConcurrentNum(const uint64_t& _maxConcurrentNum);

                    /**
                     * 判断参数 MaxConcurrentNum 是否已赋值
                     * @return MaxConcurrentNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrentNumHasBeenSet() const;

                    /**
                     * 获取任务完成后，重启计算节点。适用于指定计算环境执行任务。
                     * @return RestartComputeNode 任务完成后，重启计算节点。适用于指定计算环境执行任务。
                     * 
                     */
                    bool GetRestartComputeNode() const;

                    /**
                     * 设置任务完成后，重启计算节点。适用于指定计算环境执行任务。
                     * @param _restartComputeNode 任务完成后，重启计算节点。适用于指定计算环境执行任务。
                     * 
                     */
                    void SetRestartComputeNode(const bool& _restartComputeNode);

                    /**
                     * 判断参数 RestartComputeNode 是否已赋值
                     * @return RestartComputeNode 是否已赋值
                     * 
                     */
                    bool RestartComputeNodeHasBeenSet() const;

                    /**
                     * 获取启动任务过程中，创建计算资源如CVM失败后的最大重试次数，默认为0。最大值100。
计算资源创建重试的等待时间间隔策略设置如下：
[1, 3]: 等待600 s发起重试；
[4, 10]: 等待900 s发起重试；
[11, 50]: 等待1800 s发起重试；
[51, 100]: 等待3600 s发起重试；
[a, b]表示重试次数区间，每次重试的等待时间随着重试次数的增加而递增。
例如，计算资源创建重试8次的耗时为：3*600 + 5*900 = 6300 s
                     * @return ResourceMaxRetryCount 启动任务过程中，创建计算资源如CVM失败后的最大重试次数，默认为0。最大值100。
计算资源创建重试的等待时间间隔策略设置如下：
[1, 3]: 等待600 s发起重试；
[4, 10]: 等待900 s发起重试；
[11, 50]: 等待1800 s发起重试；
[51, 100]: 等待3600 s发起重试；
[a, b]表示重试次数区间，每次重试的等待时间随着重试次数的增加而递增。
例如，计算资源创建重试8次的耗时为：3*600 + 5*900 = 6300 s
                     * 
                     */
                    uint64_t GetResourceMaxRetryCount() const;

                    /**
                     * 设置启动任务过程中，创建计算资源如CVM失败后的最大重试次数，默认为0。最大值100。
计算资源创建重试的等待时间间隔策略设置如下：
[1, 3]: 等待600 s发起重试；
[4, 10]: 等待900 s发起重试；
[11, 50]: 等待1800 s发起重试；
[51, 100]: 等待3600 s发起重试；
[a, b]表示重试次数区间，每次重试的等待时间随着重试次数的增加而递增。
例如，计算资源创建重试8次的耗时为：3*600 + 5*900 = 6300 s
                     * @param _resourceMaxRetryCount 启动任务过程中，创建计算资源如CVM失败后的最大重试次数，默认为0。最大值100。
计算资源创建重试的等待时间间隔策略设置如下：
[1, 3]: 等待600 s发起重试；
[4, 10]: 等待900 s发起重试；
[11, 50]: 等待1800 s发起重试；
[51, 100]: 等待3600 s发起重试；
[a, b]表示重试次数区间，每次重试的等待时间随着重试次数的增加而递增。
例如，计算资源创建重试8次的耗时为：3*600 + 5*900 = 6300 s
                     * 
                     */
                    void SetResourceMaxRetryCount(const uint64_t& _resourceMaxRetryCount);

                    /**
                     * 判断参数 ResourceMaxRetryCount 是否已赋值
                     * @return ResourceMaxRetryCount 是否已赋值
                     * 
                     */
                    bool ResourceMaxRetryCountHasBeenSet() const;

                private:

                    /**
                     * 应用程序信息
                     */
                    Application m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * 任务名称，在一个作业内部唯一
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务实例运行个数，默认为1
                     */
                    uint64_t m_taskInstanceNum;
                    bool m_taskInstanceNumHasBeenSet;

                    /**
                     * 运行环境信息，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     */
                    AnonymousComputeEnv m_computeEnv;
                    bool m_computeEnvHasBeenSet;

                    /**
                     * 计算环境ID，ComputeEnv 和 EnvId 必须指定一个（且只有一个）参数。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 重定向信息
                     */
                    RedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 重定向本地信息
                     */
                    RedirectLocalInfo m_redirectLocalInfo;
                    bool m_redirectLocalInfoHasBeenSet;

                    /**
                     * 输入映射
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * 输出映射
                     */
                    std::vector<OutputMapping> m_outputMappings;
                    bool m_outputMappingsHasBeenSet;

                    /**
                     * 输出映射配置
                     */
                    std::vector<OutputMappingConfig> m_outputMappingConfigs;
                    bool m_outputMappingConfigsHasBeenSet;

                    /**
                     * 自定义环境变量
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * 授权信息
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * TaskInstance失败后处理方式，取值包括

- TERMINATE：销毁计算实例（默认）、
- INTERRUPT：中断任务，保留计算实例、
- FAST_INTERRUPT： 快速中断任务， 保留计算实例。
                     */
                    std::string m_failedAction;
                    bool m_failedActionHasBeenSet;

                    /**
                     * 任务失败后的最大重试次数，默认为0
                     */
                    uint64_t m_maxRetryCount;
                    bool m_maxRetryCountHasBeenSet;

                    /**
                     * 任务启动后的超时时间，单位秒，默认为86400秒
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 任务最大并发数限制，默认没有限制。
                     */
                    uint64_t m_maxConcurrentNum;
                    bool m_maxConcurrentNumHasBeenSet;

                    /**
                     * 任务完成后，重启计算节点。适用于指定计算环境执行任务。
                     */
                    bool m_restartComputeNode;
                    bool m_restartComputeNodeHasBeenSet;

                    /**
                     * 启动任务过程中，创建计算资源如CVM失败后的最大重试次数，默认为0。最大值100。
计算资源创建重试的等待时间间隔策略设置如下：
[1, 3]: 等待600 s发起重试；
[4, 10]: 等待900 s发起重试；
[11, 50]: 等待1800 s发起重试；
[51, 100]: 等待3600 s发起重试；
[a, b]表示重试次数区间，每次重试的等待时间随着重试次数的增加而递增。
例如，计算资源创建重试8次的耗时为：3*600 + 5*900 = 6300 s
                     */
                    uint64_t m_resourceMaxRetryCount;
                    bool m_resourceMaxRetryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_
