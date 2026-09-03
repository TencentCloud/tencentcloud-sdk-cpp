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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKSUMMARYINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKSUMMARYINFO_H_

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
                * 模型评测汇总信息（排行榜数据项）
                */
                class BenchmarkSummaryInfo : public AbstractModel
                {
                public:
                    BenchmarkSummaryInfo();
                    ~BenchmarkSummaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Provider <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provider <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParameterSize <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 设置<p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameterSize <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParameterSize(const std::string& _parameterSize);

                    /**
                     * 判断参数 ParameterSize 是否已赋值
                     * @return ParameterSize 是否已赋值
                     * 
                     */
                    bool ParameterSizeHasBeenSet() const;

                    /**
                     * 获取<p>评测所用的服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>评测所用的服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>评测所用的服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>评测所用的服务名称</p>
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
                     * 获取<p>评测任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>评测任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>评测任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>评测任务名称</p>
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
                     * 获取<p>该模型的评测任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BenchmarkCount <p>该模型的评测任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBenchmarkCount() const;

                    /**
                     * 设置<p>该模型的评测任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _benchmarkCount <p>该模型的评测任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBenchmarkCount(const uint64_t& _benchmarkCount);

                    /**
                     * 判断参数 BenchmarkCount 是否已赋值
                     * @return BenchmarkCount 是否已赋值
                     * 
                     */
                    bool BenchmarkCountHasBeenSet() const;

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
                     * 获取<p>评测完成时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>评测完成时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>评测完成时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>评测完成时间（毫秒时间戳）</p>
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

                private:

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>评测所用的服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>评测任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>该模型的评测任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_benchmarkCount;
                    bool m_benchmarkCountHasBeenSet;

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
                     * <p>评测完成时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKSUMMARYINFO_H_
