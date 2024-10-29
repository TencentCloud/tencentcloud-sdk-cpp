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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * apm实例信息
                */
                class ApmInstanceDetail : public AbstractModel
                {
                public:
                    ApmInstanceDetail();
                    ~ApmInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountOfUsedStorage 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAmountOfUsedStorage() const;

                    /**
                     * 设置存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amountOfUsedStorage 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmountOfUsedStorage(const double& _amountOfUsedStorage);

                    /**
                     * 判断参数 AmountOfUsedStorage 是否已赋值
                     * @return AmountOfUsedStorage 是否已赋值
                     * 
                     */
                    bool AmountOfUsedStorageHasBeenSet() const;

                    /**
                     * 获取实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取该实例已上报的服务端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount 该实例已上报的服务端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置该实例已上报的服务端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount 该实例已上报的服务端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountOfReportSpanPerDay 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCountOfReportSpanPerDay() const;

                    /**
                     * 设置日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countOfReportSpanPerDay 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountOfReportSpanPerDay(const int64_t& _countOfReportSpanPerDay);

                    /**
                     * 判断参数 CountOfReportSpanPerDay 是否已赋值
                     * @return CountOfReportSpanPerDay 是否已赋值
                     * 
                     */
                    bool CountOfReportSpanPerDayHasBeenSet() const;

                    /**
                     * 获取AppId信息
                     * @return AppId AppId信息
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppId信息
                     * @param _appId AppId信息
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
                     * 获取Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceDuration Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceDuration Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     * 
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpanDailyCounters 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSpanDailyCounters() const;

                    /**
                     * 设置实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spanDailyCounters 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpanDailyCounters(const int64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInstance 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBillingInstance() const;

                    /**
                     * 设置实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInstance 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingInstance(const int64_t& _billingInstance);

                    /**
                     * 判断参数 BillingInstance 是否已赋值
                     * @return BillingInstance 是否已赋值
                     * 
                     */
                    bool BillingInstanceHasBeenSet() const;

                    /**
                     * 获取错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrRateThreshold 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errRateThreshold 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     * 
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleRate 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleRate 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSample 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorSample 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorSample(const int64_t& _errorSample);

                    /**
                     * 判断参数 ErrorSample 是否已赋值
                     * @return ErrorSample 是否已赋值
                     * 
                     */
                    bool ErrorSampleHasBeenSet() const;

                    /**
                     * 获取慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlowRequestSavedThreshold 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slowRequestSavedThreshold 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold);

                    /**
                     * 判断参数 SlowRequestSavedThreshold 是否已赋值
                     * @return SlowRequestSavedThreshold 是否已赋值
                     * 
                     */
                    bool SlowRequestSavedThresholdHasBeenSet() const;

                    /**
                     * 获取cls日志所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogRegion cls日志所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置cls日志所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logRegion cls日志所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                    /**
                     * 获取日志来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSource 日志来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logSource 日志来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                    /**
                     * 获取日志功能开关 0 关 | 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRelatedLog 日志功能开关 0 关 | 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置日志功能开关 0 关 | 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRelatedLog 日志功能开关 0 关 | 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRelatedLog(const int64_t& _isRelatedLog);

                    /**
                     * 判断参数 IsRelatedLog 是否已赋值
                     * @return IsRelatedLog 是否已赋值
                     * 
                     */
                    bool IsRelatedLogHasBeenSet() const;

                    /**
                     * 获取日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicID 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicID 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTopicID(const std::string& _logTopicID);

                    /**
                     * 判断参数 LogTopicID 是否已赋值
                     * @return LogTopicID 是否已赋值
                     * 
                     */
                    bool LogTopicIDHasBeenSet() const;

                    /**
                     * 获取该实例已上报的客户端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCount 该实例已上报的客户端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClientCount() const;

                    /**
                     * 设置该实例已上报的客户端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCount 该实例已上报的客户端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientCount(const int64_t& _clientCount);

                    /**
                     * 判断参数 ClientCount 是否已赋值
                     * @return ClientCount 是否已赋值
                     * 
                     */
                    bool ClientCountHasBeenSet() const;

                    /**
                     * 获取该实例已上报的总应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 该实例已上报的总应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置该实例已上报的总应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 该实例已上报的总应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取CLS日志集 | ES集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSet CLS日志集 | ES集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS日志集 | ES集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logSet CLS日志集 | ES集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取Metric数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricDuration Metric数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricDuration() const;

                    /**
                     * 设置Metric数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricDuration Metric数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricDuration(const int64_t& _metricDuration);

                    /**
                     * 判断参数 MetricDuration 是否已赋值
                     * @return MetricDuration 是否已赋值
                     * 
                     */
                    bool MetricDurationHasBeenSet() const;

                    /**
                     * 获取用户自定义展示标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomShowTags 用户自定义展示标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomShowTags() const;

                    /**
                     * 设置用户自定义展示标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customShowTags 用户自定义展示标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomShowTags(const std::vector<std::string>& _customShowTags);

                    /**
                     * 判断参数 CustomShowTags 是否已赋值
                     * @return CustomShowTags 是否已赋值
                     * 
                     */
                    bool CustomShowTagsHasBeenSet() const;

                    /**
                     * 获取实例计费模式
1为预付费
0为按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 实例计费模式
1为预付费
0为按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式
1为预付费
0为按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 实例计费模式
1为预付费
0为按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例计费模式是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayModeEffective 实例计费模式是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPayModeEffective() const;

                    /**
                     * 设置实例计费模式是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payModeEffective 实例计费模式是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayModeEffective(const bool& _payModeEffective);

                    /**
                     * 判断参数 PayModeEffective 是否已赋值
                     * @return PayModeEffective 是否已赋值
                     * 
                     */
                    bool PayModeEffectiveHasBeenSet() const;

                    /**
                     * 获取响应时间满意阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseDurationWarningThreshold 响应时间满意阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置响应时间满意阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseDurationWarningThreshold 响应时间满意阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold);

                    /**
                     * 判断参数 ResponseDurationWarningThreshold 是否已赋值
                     * @return ResponseDurationWarningThreshold 是否已赋值
                     * 
                     */
                    bool ResponseDurationWarningThresholdHasBeenSet() const;

                    /**
                     * 获取是否免费（0=否，1=限额免费，2=完全免费），默认0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Free 是否免费（0=否，1=限额免费，2=完全免费），默认0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置是否免费（0=否，1=限额免费，2=完全免费），默认0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _free 是否免费（0=否，1=限额免费，2=完全免费），默认0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFree(const int64_t& _free);

                    /**
                     * 判断参数 Free 是否已赋值
                     * @return Free 是否已赋值
                     * 
                     */
                    bool FreeHasBeenSet() const;

                    /**
                     * 获取是否tsf默认业务系统（0=否，1-是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultTSF 是否tsf默认业务系统（0=否，1-是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultTSF() const;

                    /**
                     * 设置是否tsf默认业务系统（0=否，1-是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultTSF 是否tsf默认业务系统（0=否，1-是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultTSF(const int64_t& _defaultTSF);

                    /**
                     * 判断参数 DefaultTSF 是否已赋值
                     * @return DefaultTSF 是否已赋值
                     * 
                     */
                    bool DefaultTSFHasBeenSet() const;

                private:

                    /**
                     * 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_amountOfUsedStorage;
                    bool m_amountOfUsedStorageHasBeenSet;

                    /**
                     * 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 该实例已上报的服务端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_countOfReportSpanPerDay;
                    bool m_countOfReportSpanPerDayHasBeenSet;

                    /**
                     * AppId信息
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_billingInstance;
                    bool m_billingInstanceHasBeenSet;

                    /**
                     * 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                    /**
                     * cls日志所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * 日志来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 日志功能开关 0 关 | 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * 该实例已上报的客户端应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientCount;
                    bool m_clientCountHasBeenSet;

                    /**
                     * 该实例已上报的总应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * CLS日志集 | ES集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Metric数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricDuration;
                    bool m_metricDurationHasBeenSet;

                    /**
                     * 用户自定义展示标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * 实例计费模式
1为预付费
0为按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例计费模式是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_payModeEffective;
                    bool m_payModeEffectiveHasBeenSet;

                    /**
                     * 响应时间满意阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * 是否免费（0=否，1=限额免费，2=完全免费），默认0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * 是否tsf默认业务系统（0=否，1-是）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultTSF;
                    bool m_defaultTSFHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
