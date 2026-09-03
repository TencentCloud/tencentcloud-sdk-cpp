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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKTASKINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 性能评测任务信息
                */
                class BenchmarkTaskInfo : public AbstractModel
                {
                public:
                    BenchmarkTaskInfo();
                    ~BenchmarkTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>benchmark任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>benchmark任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>benchmark任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>benchmark任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联的推理服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>关联的推理服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>关联的推理服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId <p>关联的推理服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联的推理服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>关联的推理服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>关联的推理服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>关联的推理服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>任务状态（Running/Completed/Failed/Pending/Stopped）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务状态（Running/Completed/Failed/Pending/Stopped）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态（Running/Completed/Failed/Pending/Stopped）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>任务状态（Running/Completed/Failed/Pending/Stopped）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>输入 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTokens <p>输入 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputTokens <p>输入 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>输出 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputTokens <p>输出 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputTokens <p>输出 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>每秒请求数 (QPS)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestsPerSecond <p>每秒请求数 (QPS)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 设置<p>每秒请求数 (QPS)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestsPerSecond <p>每秒请求数 (QPS)</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>最大并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrency <p>最大并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置<p>最大并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConcurrency <p>最大并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Prompts 总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPrompts <p>Prompts 总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPrompts() const;

                    /**
                     * 设置<p>Prompts 总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPrompts <p>Prompts 总数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否经 Ingress 网关（true=网关, false=集群内直连 SVC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseGateway <p>是否经 Ingress 网关（true=网关, false=集群内直连 SVC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseGateway() const;

                    /**
                     * 设置<p>是否经 Ingress 网关（true=网关, false=集群内直连 SVC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useGateway <p>是否经 Ingress 网关（true=网关, false=集群内直连 SVC）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentName <p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentName <p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentName(const std::string& _deploymentName);

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
                     * 设置<p>API Key ID（走网关时使用的 API Key 标识）</p>
                     * @param _apiKeyId <p>API Key ID（走网关时使用的 API Key 标识）</p>
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
                     * 获取<p>API Key 名称</p>
                     * @return ApiKeyName <p>API Key 名称</p>
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置<p>API Key 名称</p>
                     * @param _apiKeyName <p>API Key 名称</p>
                     * 
                     */
                    void SetApiKeyName(const std::string& _apiKeyName);

                    /**
                     * 判断参数 ApiKeyName 是否已赋值
                     * @return ApiKeyName 是否已赋值
                     * 
                     */
                    bool ApiKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>TTFT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeToFirstTokenAvg <p>TTFT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimeToFirstTokenAvg() const;

                    /**
                     * 设置<p>TTFT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeToFirstTokenAvg <p>TTFT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeToFirstTokenAvg(const double& _timeToFirstTokenAvg);

                    /**
                     * 判断参数 TimeToFirstTokenAvg 是否已赋值
                     * @return TimeToFirstTokenAvg 是否已赋值
                     * 
                     */
                    bool TimeToFirstTokenAvgHasBeenSet() const;

                    /**
                     * 获取<p>TTFT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeToFirstTokenMedian <p>TTFT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimeToFirstTokenMedian() const;

                    /**
                     * 设置<p>TTFT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeToFirstTokenMedian <p>TTFT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeToFirstTokenMedian(const double& _timeToFirstTokenMedian);

                    /**
                     * 判断参数 TimeToFirstTokenMedian 是否已赋值
                     * @return TimeToFirstTokenMedian 是否已赋值
                     * 
                     */
                    bool TimeToFirstTokenMedianHasBeenSet() const;

                    /**
                     * 获取<p>TTFT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeToFirstTokenP99 <p>TTFT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimeToFirstTokenP99() const;

                    /**
                     * 设置<p>TTFT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeToFirstTokenP99 <p>TTFT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeToFirstTokenP99(const double& _timeToFirstTokenP99);

                    /**
                     * 判断参数 TimeToFirstTokenP99 是否已赋值
                     * @return TimeToFirstTokenP99 是否已赋值
                     * 
                     */
                    bool TimeToFirstTokenP99HasBeenSet() const;

                    /**
                     * 获取<p>TPOT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimePerOutputTokenAvg <p>TPOT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimePerOutputTokenAvg() const;

                    /**
                     * 设置<p>TPOT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timePerOutputTokenAvg <p>TPOT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimePerOutputTokenAvg(const double& _timePerOutputTokenAvg);

                    /**
                     * 判断参数 TimePerOutputTokenAvg 是否已赋值
                     * @return TimePerOutputTokenAvg 是否已赋值
                     * 
                     */
                    bool TimePerOutputTokenAvgHasBeenSet() const;

                    /**
                     * 获取<p>TPOT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimePerOutputTokenMedian <p>TPOT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimePerOutputTokenMedian() const;

                    /**
                     * 设置<p>TPOT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timePerOutputTokenMedian <p>TPOT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimePerOutputTokenMedian(const double& _timePerOutputTokenMedian);

                    /**
                     * 判断参数 TimePerOutputTokenMedian 是否已赋值
                     * @return TimePerOutputTokenMedian 是否已赋值
                     * 
                     */
                    bool TimePerOutputTokenMedianHasBeenSet() const;

                    /**
                     * 获取<p>TPOT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimePerOutputTokenP99 <p>TPOT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimePerOutputTokenP99() const;

                    /**
                     * 设置<p>TPOT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timePerOutputTokenP99 <p>TPOT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimePerOutputTokenP99(const double& _timePerOutputTokenP99);

                    /**
                     * 判断参数 TimePerOutputTokenP99 是否已赋值
                     * @return TimePerOutputTokenP99 是否已赋值
                     * 
                     */
                    bool TimePerOutputTokenP99HasBeenSet() const;

                    /**
                     * 获取<p>ITL 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterTokenLatencyAvg <p>ITL 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInterTokenLatencyAvg() const;

                    /**
                     * 设置<p>ITL 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interTokenLatencyAvg <p>ITL 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterTokenLatencyAvg(const double& _interTokenLatencyAvg);

                    /**
                     * 判断参数 InterTokenLatencyAvg 是否已赋值
                     * @return InterTokenLatencyAvg 是否已赋值
                     * 
                     */
                    bool InterTokenLatencyAvgHasBeenSet() const;

                    /**
                     * 获取<p>ITL 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterTokenLatencyMedian <p>ITL 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInterTokenLatencyMedian() const;

                    /**
                     * 设置<p>ITL 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interTokenLatencyMedian <p>ITL 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterTokenLatencyMedian(const double& _interTokenLatencyMedian);

                    /**
                     * 判断参数 InterTokenLatencyMedian 是否已赋值
                     * @return InterTokenLatencyMedian 是否已赋值
                     * 
                     */
                    bool InterTokenLatencyMedianHasBeenSet() const;

                    /**
                     * 获取<p>ITL P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterTokenLatencyP99 <p>ITL P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInterTokenLatencyP99() const;

                    /**
                     * 设置<p>ITL P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interTokenLatencyP99 <p>ITL P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterTokenLatencyP99(const double& _interTokenLatencyP99);

                    /**
                     * 判断参数 InterTokenLatencyP99 是否已赋值
                     * @return InterTokenLatencyP99 是否已赋值
                     * 
                     */
                    bool InterTokenLatencyP99HasBeenSet() const;

                    /**
                     * 获取<p>E2E 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndToEndAvg <p>E2E 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndToEndAvg() const;

                    /**
                     * 设置<p>E2E 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endToEndAvg <p>E2E 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndToEndAvg(const double& _endToEndAvg);

                    /**
                     * 判断参数 EndToEndAvg 是否已赋值
                     * @return EndToEndAvg 是否已赋值
                     * 
                     */
                    bool EndToEndAvgHasBeenSet() const;

                    /**
                     * 获取<p>E2E 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndToEndMedian <p>E2E 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndToEndMedian() const;

                    /**
                     * 设置<p>E2E 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endToEndMedian <p>E2E 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndToEndMedian(const double& _endToEndMedian);

                    /**
                     * 判断参数 EndToEndMedian 是否已赋值
                     * @return EndToEndMedian 是否已赋值
                     * 
                     */
                    bool EndToEndMedianHasBeenSet() const;

                    /**
                     * 获取<p>E2E P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndToEndP99 <p>E2E P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndToEndP99() const;

                    /**
                     * 设置<p>E2E P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endToEndP99 <p>E2E P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndToEndP99(const double& _endToEndP99);

                    /**
                     * 判断参数 EndToEndP99 是否已赋值
                     * @return EndToEndP99 是否已赋值
                     * 
                     */
                    bool EndToEndP99HasBeenSet() const;

                    /**
                     * 获取<p>Token 吞吐量 (output tokens/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenThroughput <p>Token 吞吐量 (output tokens/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTokenThroughput() const;

                    /**
                     * 设置<p>Token 吞吐量 (output tokens/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenThroughput <p>Token 吞吐量 (output tokens/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenThroughput(const double& _tokenThroughput);

                    /**
                     * 判断参数 TokenThroughput 是否已赋值
                     * @return TokenThroughput 是否已赋值
                     * 
                     */
                    bool TokenThroughputHasBeenSet() const;

                    /**
                     * 获取<p>请求吞吐量 (requests/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestThroughput <p>请求吞吐量 (requests/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRequestThroughput() const;

                    /**
                     * 设置<p>请求吞吐量 (requests/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestThroughput <p>请求吞吐量 (requests/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestThroughput(const double& _requestThroughput);

                    /**
                     * 判断参数 RequestThroughput 是否已赋值
                     * @return RequestThroughput 是否已赋值
                     * 
                     */
                    bool RequestThroughputHasBeenSet() const;

                    /**
                     * 获取<p>错误信息（失败时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>错误信息（失败时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息（失败时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>错误信息（失败时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>主账号uin</p>
                     * @return Uin <p>主账号uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号uin</p>
                     * @param _uin <p>主账号uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子账号uin</p>
                     * @return SubAccountUin <p>子账号uin</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>子账号uin</p>
                     * @param _subAccountUin <p>子账号uin</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * <p>benchmark任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>关联的推理服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>关联的推理服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>任务状态（Running/Completed/Failed/Pending/Stopped）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>输入 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出 Token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>每秒请求数 (QPS)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * <p>最大并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * <p>Prompts 总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPrompts;
                    bool m_totalPromptsHasBeenSet;

                    /**
                     * <p>是否经 Ingress 网关（true=网关, false=集群内直连 SVC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useGateway;
                    bool m_useGatewayHasBeenSet;

                    /**
                     * <p>直连模式下使用的部署名称（仅 UseGateway=false 时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * <p>TTFT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timeToFirstTokenAvg;
                    bool m_timeToFirstTokenAvgHasBeenSet;

                    /**
                     * <p>TTFT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timeToFirstTokenMedian;
                    bool m_timeToFirstTokenMedianHasBeenSet;

                    /**
                     * <p>TTFT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timeToFirstTokenP99;
                    bool m_timeToFirstTokenP99HasBeenSet;

                    /**
                     * <p>TPOT 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timePerOutputTokenAvg;
                    bool m_timePerOutputTokenAvgHasBeenSet;

                    /**
                     * <p>TPOT 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timePerOutputTokenMedian;
                    bool m_timePerOutputTokenMedianHasBeenSet;

                    /**
                     * <p>TPOT P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timePerOutputTokenP99;
                    bool m_timePerOutputTokenP99HasBeenSet;

                    /**
                     * <p>ITL 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_interTokenLatencyAvg;
                    bool m_interTokenLatencyAvgHasBeenSet;

                    /**
                     * <p>ITL 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_interTokenLatencyMedian;
                    bool m_interTokenLatencyMedianHasBeenSet;

                    /**
                     * <p>ITL P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_interTokenLatencyP99;
                    bool m_interTokenLatencyP99HasBeenSet;

                    /**
                     * <p>E2E 平均值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endToEndAvg;
                    bool m_endToEndAvgHasBeenSet;

                    /**
                     * <p>E2E 中间值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endToEndMedian;
                    bool m_endToEndMedianHasBeenSet;

                    /**
                     * <p>E2E P99 值(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endToEndP99;
                    bool m_endToEndP99HasBeenSet;

                    /**
                     * <p>Token 吞吐量 (output tokens/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tokenThroughput;
                    bool m_tokenThroughputHasBeenSet;

                    /**
                     * <p>请求吞吐量 (requests/s)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_requestThroughput;
                    bool m_requestThroughputHasBeenSet;

                    /**
                     * <p>错误信息（失败时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>主账号uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号uin</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKTASKINFO_H_
