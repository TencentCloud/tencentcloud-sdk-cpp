/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RERUNBENCHMARKTASKRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RERUNBENCHMARKTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/BenchmarkResourceInfo.h>
#include <tencentcloud/dlc/v20210125/model/DeploymentResourceInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RerunBenchmarkTask返回参数结构体
                */
                class RerunBenchmarkTaskResponse : public AbstractModel
                {
                public:
                    RerunBenchmarkTaskResponse();
                    ~RerunBenchmarkTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>关联的推理服务ID</p>
                     * @return ServiceId <p>关联的推理服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的推理服务名称</p>
                     * @return ServiceName <p>关联的推理服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>输入 Token 数</p>
                     * @return InputTokens <p>输入 Token 数</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出 Token 数</p>
                     * @return OutputTokens <p>输出 Token 数</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>每秒请求数 (QPS)</p>
                     * @return RequestsPerSecond <p>每秒请求数 (QPS)</p>
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取<p>最大并发数</p>
                     * @return MaxConcurrency <p>最大并发数</p>
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Prompts 总数</p>
                     * @return TotalPrompts <p>Prompts 总数</p>
                     * 
                     */
                    uint64_t GetTotalPrompts() const;

                    /**
                     * 判断参数 TotalPrompts 是否已赋值
                     * @return TotalPrompts 是否已赋值
                     * 
                     */
                    bool TotalPromptsHasBeenSet() const;

                    /**
                     * 获取<p>是否经网关。true=通过网关访问；false=集群内直连 SVC</p>
                     * @return UseGateway <p>是否经网关。true=通过网关访问；false=集群内直连 SVC</p>
                     * 
                     */
                    bool GetUseGateway() const;

                    /**
                     * 判断参数 UseGateway 是否已赋值
                     * @return UseGateway 是否已赋值
                     * 
                     */
                    bool UseGatewayHasBeenSet() const;

                    /**
                     * 获取<p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
                     * @return DeploymentName <p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 判断参数 DeploymentName 是否已赋值
                     * @return DeploymentName 是否已赋值
                     * 
                     */
                    bool DeploymentNameHasBeenSet() const;

                    /**
                     * 获取<p>API Key ID（走网关时使用的 API Key 标识）</p>
                     * @return ApiKeyId <p>API Key ID（走网关时使用的 API Key 标识）</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>API Key 名称</p>
                     * @return ApiKeyName <p>API Key 名称</p>
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 判断参数 ApiKeyName 是否已赋值
                     * @return ApiKeyName 是否已赋值
                     * 
                     */
                    bool ApiKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>主账号UIN</p>
                     * @return Uin <p>主账号UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（毫秒时间戳）</p>
                     * @return UpdateTime <p>更新时间（毫秒时间戳）</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>子账号UIN（实际操作者）</p>
                     * @return SubAccountUin <p>子账号UIN（实际操作者）</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>评测容器自身使用的资源规格</p>
                     * @return Resources <p>评测容器自身使用的资源规格</p>
                     * 
                     */
                    BenchmarkResourceInfo GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>与本次评测关联的部署及其资源规格</p>
                     * @return DeploymentResources <p>与本次评测关联的部署及其资源规格</p>
                     * 
                     */
                    std::vector<DeploymentResourceInfo> GetDeploymentResources() const;

                    /**
                     * 判断参数 DeploymentResources 是否已赋值
                     * @return DeploymentResources 是否已赋值
                     * 
                     */
                    bool DeploymentResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>关联的推理服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>关联的推理服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>输入 Token 数</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出 Token 数</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>每秒请求数 (QPS)</p>
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * <p>最大并发数</p>
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * <p>Prompts 总数</p>
                     */
                    uint64_t m_totalPrompts;
                    bool m_totalPromptsHasBeenSet;

                    /**
                     * <p>是否经网关。true=通过网关访问；false=集群内直连 SVC</p>
                     */
                    bool m_useGateway;
                    bool m_useGatewayHasBeenSet;

                    /**
                     * <p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * <p>API Key ID（走网关时使用的 API Key 标识）</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>API Key 名称</p>
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * <p>主账号UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（毫秒时间戳）</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>子账号UIN（实际操作者）</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>评测容器自身使用的资源规格</p>
                     */
                    BenchmarkResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>与本次评测关联的部署及其资源规格</p>
                     */
                    std::vector<DeploymentResourceInfo> m_deploymentResources;
                    bool m_deploymentResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RERUNBENCHMARKTASKRESPONSE_H_
