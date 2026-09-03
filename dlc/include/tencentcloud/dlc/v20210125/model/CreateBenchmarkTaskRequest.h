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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEBENCHMARKTASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEBENCHMARKTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateBenchmarkTask请求参数结构体
                */
                class CreateBenchmarkTaskRequest : public AbstractModel
                {
                public:
                    CreateBenchmarkTaskRequest();
                    ~CreateBenchmarkTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推理服务Id</p>
                     * @return ServiceId <p>推理服务Id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务Id</p>
                     * @param _serviceId <p>推理服务Id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称（可选，不填则自动生成）</p>
                     * @return TaskName <p>任务名称（可选，不填则自动生成）</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称（可选，不填则自动生成）</p>
                     * @param _taskName <p>任务名称（可选，不填则自动生成）</p>
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
                     * 获取<p>每个 Prompt 的平均输入 Token 数</p>
                     * @return InputTokens <p>每个 Prompt 的平均输入 Token 数</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>每个 Prompt 的平均输入 Token 数</p>
                     * @param _inputTokens <p>每个 Prompt 的平均输入 Token 数</p>
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>模型输出的最大 Token 数</p>
                     * @return OutputTokens <p>模型输出的最大 Token 数</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>模型输出的最大 Token 数</p>
                     * @param _outputTokens <p>模型输出的最大 Token 数</p>
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>每秒发送的请求数 (QPS)</p>
                     * @return RequestsPerSecond <p>每秒发送的请求数 (QPS)</p>
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 设置<p>每秒发送的请求数 (QPS)</p>
                     * @param _requestsPerSecond <p>每秒发送的请求数 (QPS)</p>
                     * 
                     */
                    void SetRequestsPerSecond(const double& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取<p>最大同时并发请求数</p>
                     * @return MaxConcurrency <p>最大同时并发请求数</p>
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置<p>最大同时并发请求数</p>
                     * @param _maxConcurrency <p>最大同时并发请求数</p>
                     * 
                     */
                    void SetMaxConcurrency(const uint64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>评测使用的 Prompt 总数</p>
                     * @return TotalPrompts <p>评测使用的 Prompt 总数</p>
                     * 
                     */
                    uint64_t GetTotalPrompts() const;

                    /**
                     * 设置<p>评测使用的 Prompt 总数</p>
                     * @param _totalPrompts <p>评测使用的 Prompt 总数</p>
                     * 
                     */
                    void SetTotalPrompts(const uint64_t& _totalPrompts);

                    /**
                     * 判断参数 TotalPrompts 是否已赋值
                     * @return TotalPrompts 是否已赋值
                     * 
                     */
                    bool TotalPromptsHasBeenSet() const;

                    /**
                     * 获取<p>是否经 Ingress 网关访问推理服务（默认 true；false 则集群内直连 SVC）</p>
                     * @return UseGateway <p>是否经 Ingress 网关访问推理服务（默认 true；false 则集群内直连 SVC）</p>
                     * 
                     */
                    bool GetUseGateway() const;

                    /**
                     * 设置<p>是否经 Ingress 网关访问推理服务（默认 true；false 则集群内直连 SVC）</p>
                     * @param _useGateway <p>是否经 Ingress 网关访问推理服务（默认 true；false 则集群内直连 SVC）</p>
                     * 
                     */
                    void SetUseGateway(const bool& _useGateway);

                    /**
                     * 判断参数 UseGateway 是否已赋值
                     * @return UseGateway 是否已赋值
                     * 
                     */
                    bool UseGatewayHasBeenSet() const;

                    /**
                     * 获取<p>ray部署集群Id</p>
                     * @return DeploymentId <p>ray部署集群Id</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>ray部署集群Id</p>
                     * @param _deploymentId <p>ray部署集群Id</p>
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                    /**
                     * 获取<p>apiKey的Id</p>
                     * @return ApiKeyId <p>apiKey的Id</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置<p>apiKey的Id</p>
                     * @param _apiKeyId <p>apiKey的Id</p>
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>评测容器所在资源包 ID</p>
                     * @return ResourcePartitionId <p>评测容器所在资源包 ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>评测容器所在资源包 ID</p>
                     * @param _resourcePartitionId <p>评测容器所在资源包 ID</p>
                     * 
                     */
                    void SetResourcePartitionId(const std::string& _resourcePartitionId);

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>评测容器所在资源包下的资源组名称</p>
                     * @return Queue <p>评测容器所在资源包下的资源组名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>评测容器所在资源包下的资源组名称</p>
                     * @param _queue <p>评测容器所在资源包下的资源组名称</p>
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>评测容器计费项（规格）。仅允许 CPU 计费项。</p>
                     * @return BillingItem <p>评测容器计费项（规格）。仅允许 CPU 计费项。</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>评测容器计费项（规格）。仅允许 CPU 计费项。</p>
                     * @param _billingItem <p>评测容器计费项（规格）。仅允许 CPU 计费项。</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>评测容器计费项规格倍数</p>
                     * @return Spec <p>评测容器计费项规格倍数</p>
                     * 
                     */
                    int64_t GetSpec() const;

                    /**
                     * 设置<p>评测容器计费项规格倍数</p>
                     * @param _spec <p>评测容器计费项规格倍数</p>
                     * 
                     */
                    void SetSpec(const int64_t& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务Id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>任务名称（可选，不填则自动生成）</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>每个 Prompt 的平均输入 Token 数</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>模型输出的最大 Token 数</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>每秒发送的请求数 (QPS)</p>
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * <p>最大同时并发请求数</p>
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * <p>评测使用的 Prompt 总数</p>
                     */
                    uint64_t m_totalPrompts;
                    bool m_totalPromptsHasBeenSet;

                    /**
                     * <p>是否经 Ingress 网关访问推理服务（默认 true；false 则集群内直连 SVC）</p>
                     */
                    bool m_useGateway;
                    bool m_useGatewayHasBeenSet;

                    /**
                     * <p>ray部署集群Id</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>apiKey的Id</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>评测容器所在资源包 ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>评测容器所在资源包下的资源组名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>评测容器计费项（规格）。仅允许 CPU 计费项。</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>评测容器计费项规格倍数</p>
                     */
                    int64_t m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEBENCHMARKTASKREQUEST_H_
