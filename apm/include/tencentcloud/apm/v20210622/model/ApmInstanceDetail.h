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
                * APM 业务系统信息
                */
                class ApmInstanceDetail : public AbstractModel
                {
                public:
                    ApmInstanceDetail();
                    ~ApmInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务系统 ID
                     * @return InstanceId 业务系统 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceId 业务系统 ID
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
                     * 获取业务系统名
                     * @return Name 业务系统名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置业务系统名
                     * @param _name 业务系统名
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
                     * 获取业务系统描述信息
                     * @return Description 业务系统描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置业务系统描述信息
                     * @param _description 业务系统描述信息
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
                     * 获取业务系统状态。{
1: 初始化中; 2: 运行中; 4: 限流}
                     * @return Status 业务系统状态。{
1: 初始化中; 2: 运行中; 4: 限流}
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置业务系统状态。{
1: 初始化中; 2: 运行中; 4: 限流}
                     * @param _status 业务系统状态。{
1: 初始化中; 2: 运行中; 4: 限流}
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
                     * 获取业务系统所属地域
                     * @return Region 业务系统所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置业务系统所属地域
                     * @param _region 业务系统所属地域
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
                     * 获取业务系统 Tag 列表
                     * @return Tags 业务系统 Tag 列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置业务系统 Tag 列表
                     * @param _tags 业务系统 Tag 列表
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
                     * 获取AppID 信息
                     * @return AppId AppID 信息
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppID 信息
                     * @param _appId AppID 信息
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
                     * 获取创建人 Uin
                     * @return CreateUin 创建人 Uin
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建人 Uin
                     * @param _createUin 创建人 Uin
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
                     * 获取存储使用量(单位：MB)
                     * @return AmountOfUsedStorage 存储使用量(单位：MB)
                     * 
                     */
                    double GetAmountOfUsedStorage() const;

                    /**
                     * 设置存储使用量(单位：MB)
                     * @param _amountOfUsedStorage 存储使用量(单位：MB)
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
                     * 获取该业务系统服务端应用数量
                     * @return ServiceCount 该业务系统服务端应用数量
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置该业务系统服务端应用数量
                     * @param _serviceCount 该业务系统服务端应用数量
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
                     * 获取日均上报 Span 数
                     * @return CountOfReportSpanPerDay 日均上报 Span 数
                     * 
                     */
                    int64_t GetCountOfReportSpanPerDay() const;

                    /**
                     * 设置日均上报 Span 数
                     * @param _countOfReportSpanPerDay 日均上报 Span 数
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
                     * 获取Trace 数据保存时长（单位：天）
                     * @return TraceDuration Trace 数据保存时长（单位：天）
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace 数据保存时长（单位：天）
                     * @param _traceDuration Trace 数据保存时长（单位：天）
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
                     * 获取业务系统上报额度
                     * @return SpanDailyCounters 业务系统上报额度
                     * 
                     */
                    int64_t GetSpanDailyCounters() const;

                    /**
                     * 设置业务系统上报额度
                     * @param _spanDailyCounters 业务系统上报额度
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
                     * 获取业务系统是否已开通计费（0=未开通，1=已开通）
                     * @return BillingInstance 业务系统是否已开通计费（0=未开通，1=已开通）
                     * 
                     */
                    int64_t GetBillingInstance() const;

                    /**
                     * 设置业务系统是否已开通计费（0=未开通，1=已开通）
                     * @param _billingInstance 业务系统是否已开通计费（0=未开通，1=已开通）
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
                     * 获取错误警示线（单位：%）
                     * @return ErrRateThreshold 错误警示线（单位：%）
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置错误警示线（单位：%）
                     * @param _errRateThreshold 错误警示线（单位：%）
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
                     * 获取采样率（单位：%）
                     * @return SampleRate 采样率（单位：%）
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率（单位：%）
                     * @param _sampleRate 采样率（单位：%）
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
                     * 获取是否开启错误采样（0=关, 1=开）
                     * @return ErrorSample 是否开启错误采样（0=关, 1=开）
                     * 
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置是否开启错误采样（0=关, 1=开）
                     * @param _errorSample 是否开启错误采样（0=关, 1=开）
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
                     * 获取采样慢调用保存阈值（单位：ms）
                     * @return SlowRequestSavedThreshold 采样慢调用保存阈值（单位：ms）
                     * 
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置采样慢调用保存阈值（单位：ms）
                     * @param _slowRequestSavedThreshold 采样慢调用保存阈值（单位：ms）
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
                     * 获取CLS 日志所在地域
                     * @return LogRegion CLS 日志所在地域
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置CLS 日志所在地域
                     * @param _logRegion CLS 日志所在地域
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
                     * 获取日志源
                     * @return LogSource 日志源
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志源
                     * @param _logSource 日志源
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
                     * 获取日志功能开关（0=关， 1=开）
                     * @return IsRelatedLog 日志功能开关（0=关， 1=开）
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置日志功能开关（0=关， 1=开）
                     * @param _isRelatedLog 日志功能开关（0=关， 1=开）
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
                     * 获取日志主题 ID
                     * @return LogTopicID 日志主题 ID
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置日志主题 ID
                     * @param _logTopicID 日志主题 ID
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
                     * 获取该业务系统客户端应用数量
                     * @return ClientCount 该业务系统客户端应用数量
                     * 
                     */
                    int64_t GetClientCount() const;

                    /**
                     * 设置该业务系统客户端应用数量
                     * @param _clientCount 该业务系统客户端应用数量
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
                     * 获取该业务系统最近2天活跃应用数量
                     * @return TotalCount 该业务系统最近2天活跃应用数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置该业务系统最近2天活跃应用数量
                     * @param _totalCount 该业务系统最近2天活跃应用数量
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
                     * 获取CLS 日志集
                     * @return LogSet CLS 日志集
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS 日志集
                     * @param _logSet CLS 日志集
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
                     * 获取Metric 数据保存时长（单位：天）
                     * @return MetricDuration Metric 数据保存时长（单位：天）
                     * 
                     */
                    int64_t GetMetricDuration() const;

                    /**
                     * 设置Metric 数据保存时长（单位：天）
                     * @param _metricDuration Metric 数据保存时长（单位：天）
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
                     * @return CustomShowTags 用户自定义展示标签列表
                     * 
                     */
                    std::vector<std::string> GetCustomShowTags() const;

                    /**
                     * 设置用户自定义展示标签列表
                     * @param _customShowTags 用户自定义展示标签列表
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
                     * 获取业务系统计费模式（1为预付费，0为按量付费）
                     * @return PayMode 业务系统计费模式（1为预付费，0为按量付费）
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置业务系统计费模式（1为预付费，0为按量付费）
                     * @param _payMode 业务系统计费模式（1为预付费，0为按量付费）
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
                     * 获取业务系统计费模式是否生效
                     * @return PayModeEffective 业务系统计费模式是否生效
                     * 
                     */
                    bool GetPayModeEffective() const;

                    /**
                     * 设置业务系统计费模式是否生效
                     * @param _payModeEffective 业务系统计费模式是否生效
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
                     * 获取响应时间警示线（单位：ms）
                     * @return ResponseDurationWarningThreshold 响应时间警示线（单位：ms）
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置响应时间警示线（单位：ms）
                     * @param _responseDurationWarningThreshold 响应时间警示线（单位：ms）
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
                     * @return Free 是否免费（0=否，1=限额免费，2=完全免费），默认0
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置是否免费（0=否，1=限额免费，2=完全免费），默认0
                     * @param _free 是否免费（0=否，1=限额免费，2=完全免费），默认0
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
                     * 获取是否 TSF 默认业务系统（0=否，1=是）
                     * @return DefaultTSF 是否 TSF 默认业务系统（0=否，1=是）
                     * 
                     */
                    int64_t GetDefaultTSF() const;

                    /**
                     * 设置是否 TSF 默认业务系统（0=否，1=是）
                     * @param _defaultTSF 是否 TSF 默认业务系统（0=否，1=是）
                     * 
                     */
                    void SetDefaultTSF(const int64_t& _defaultTSF);

                    /**
                     * 判断参数 DefaultTSF 是否已赋值
                     * @return DefaultTSF 是否已赋值
                     * 
                     */
                    bool DefaultTSFHasBeenSet() const;

                    /**
                     * 获取是否关联 Dashboard（0=关, 1=开）
                     * @return IsRelatedDashboard 是否关联 Dashboard（0=关, 1=开）
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置是否关联 Dashboard（0=关, 1=开）
                     * @param _isRelatedDashboard 是否关联 Dashboard（0=关, 1=开）
                     * 
                     */
                    void SetIsRelatedDashboard(const int64_t& _isRelatedDashboard);

                    /**
                     * 判断参数 IsRelatedDashboard 是否已赋值
                     * @return IsRelatedDashboard 是否已赋值
                     * 
                     */
                    bool IsRelatedDashboardHasBeenSet() const;

                    /**
                     * 获取关联的 Dashboard ID
                     * @return DashboardTopicID 关联的 Dashboard ID
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置关联的 Dashboard ID
                     * @param _dashboardTopicID 关联的 Dashboard ID
                     * 
                     */
                    void SetDashboardTopicID(const std::string& _dashboardTopicID);

                    /**
                     * 判断参数 DashboardTopicID 是否已赋值
                     * @return DashboardTopicID 是否已赋值
                     * 
                     */
                    bool DashboardTopicIDHasBeenSet() const;

                    /**
                     * 获取是否开启组件漏洞检测（0=关， 1=开）
                     * @return IsInstrumentationVulnerabilityScan 是否开启组件漏洞检测（0=关， 1=开）
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置是否开启组件漏洞检测（0=关， 1=开）
                     * @param _isInstrumentationVulnerabilityScan 是否开启组件漏洞检测（0=关， 1=开）
                     * 
                     */
                    void SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan);

                    /**
                     * 判断参数 IsInstrumentationVulnerabilityScan 是否已赋值
                     * @return IsInstrumentationVulnerabilityScan 是否已赋值
                     * 
                     */
                    bool IsInstrumentationVulnerabilityScanHasBeenSet() const;

                    /**
                     * 获取是否开启 SQL 注入分析（0=关， 1=开）
                     * @return IsSqlInjectionAnalysis 是否开启 SQL 注入分析（0=关， 1=开）
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置是否开启 SQL 注入分析（0=关， 1=开）
                     * @param _isSqlInjectionAnalysis 是否开启 SQL 注入分析（0=关， 1=开）
                     * 
                     */
                    void SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis);

                    /**
                     * 判断参数 IsSqlInjectionAnalysis 是否已赋值
                     * @return IsSqlInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsSqlInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取限流原因。{
1: 正式版限额;
2: 试用版限额;
4: 试用版到期;
8: 账号欠费
}
                     * @return StopReason 限流原因。{
1: 正式版限额;
2: 试用版限额;
4: 试用版到期;
8: 账号欠费
}
                     * 
                     */
                    int64_t GetStopReason() const;

                    /**
                     * 设置限流原因。{
1: 正式版限额;
2: 试用版限额;
4: 试用版到期;
8: 账号欠费
}
                     * @param _stopReason 限流原因。{
1: 正式版限额;
2: 试用版限额;
4: 试用版到期;
8: 账号欠费
}
                     * 
                     */
                    void SetStopReason(const int64_t& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取是否开远程命令执行检测（0=关， 1=开）
                     * @return IsRemoteCommandExecutionAnalysis 是否开远程命令执行检测（0=关， 1=开）
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置是否开远程命令执行检测（0=关， 1=开）
                     * @param _isRemoteCommandExecutionAnalysis 是否开远程命令执行检测（0=关， 1=开）
                     * 
                     */
                    void SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis);

                    /**
                     * 判断参数 IsRemoteCommandExecutionAnalysis 是否已赋值
                     * @return IsRemoteCommandExecutionAnalysis 是否已赋值
                     * 
                     */
                    bool IsRemoteCommandExecutionAnalysisHasBeenSet() const;

                    /**
                     * 获取是否开内存马执行检测（0=关， 1=开）
                     * @return IsMemoryHijackingAnalysis 是否开内存马执行检测（0=关， 1=开）
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置是否开内存马执行检测（0=关， 1=开）
                     * @param _isMemoryHijackingAnalysis 是否开内存马执行检测（0=关， 1=开）
                     * 
                     */
                    void SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis);

                    /**
                     * 判断参数 IsMemoryHijackingAnalysis 是否已赋值
                     * @return IsMemoryHijackingAnalysis 是否已赋值
                     * 
                     */
                    bool IsMemoryHijackingAnalysisHasBeenSet() const;

                    /**
                     * 获取CLS索引类型(0=全文索引，1=键值索引)
                     * @return LogIndexType CLS索引类型(0=全文索引，1=键值索引)
                     * 
                     */
                    int64_t GetLogIndexType() const;

                    /**
                     * 设置CLS索引类型(0=全文索引，1=键值索引)
                     * @param _logIndexType CLS索引类型(0=全文索引，1=键值索引)
                     * 
                     */
                    void SetLogIndexType(const int64_t& _logIndexType);

                    /**
                     * 判断参数 LogIndexType 是否已赋值
                     * @return LogIndexType 是否已赋值
                     * 
                     */
                    bool LogIndexTypeHasBeenSet() const;

                    /**
                     * 获取traceId的索引key: 当CLS索引类型为键值索引时生效
                     * @return LogTraceIdKey traceId的索引key: 当CLS索引类型为键值索引时生效
                     * 
                     */
                    std::string GetLogTraceIdKey() const;

                    /**
                     * 设置traceId的索引key: 当CLS索引类型为键值索引时生效
                     * @param _logTraceIdKey traceId的索引key: 当CLS索引类型为键值索引时生效
                     * 
                     */
                    void SetLogTraceIdKey(const std::string& _logTraceIdKey);

                    /**
                     * 判断参数 LogTraceIdKey 是否已赋值
                     * @return LogTraceIdKey 是否已赋值
                     * 
                     */
                    bool LogTraceIdKeyHasBeenSet() const;

                    /**
                     * 获取业务系统鉴权 token
                     * @return Token 业务系统鉴权 token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置业务系统鉴权 token
                     * @param _token 业务系统鉴权 token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 业务系统名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 业务系统描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 业务系统状态。{
1: 初始化中; 2: 运行中; 4: 限流}
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 业务系统所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 业务系统 Tag 列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * AppID 信息
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建人 Uin
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 存储使用量(单位：MB)
                     */
                    double m_amountOfUsedStorage;
                    bool m_amountOfUsedStorageHasBeenSet;

                    /**
                     * 该业务系统服务端应用数量
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 日均上报 Span 数
                     */
                    int64_t m_countOfReportSpanPerDay;
                    bool m_countOfReportSpanPerDayHasBeenSet;

                    /**
                     * Trace 数据保存时长（单位：天）
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 业务系统上报额度
                     */
                    int64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 业务系统是否已开通计费（0=未开通，1=已开通）
                     */
                    int64_t m_billingInstance;
                    bool m_billingInstanceHasBeenSet;

                    /**
                     * 错误警示线（单位：%）
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * 采样率（单位：%）
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 是否开启错误采样（0=关, 1=开）
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * 采样慢调用保存阈值（单位：ms）
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                    /**
                     * CLS 日志所在地域
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * 日志源
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 日志功能开关（0=关， 1=开）
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志主题 ID
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * 该业务系统客户端应用数量
                     */
                    int64_t m_clientCount;
                    bool m_clientCountHasBeenSet;

                    /**
                     * 该业务系统最近2天活跃应用数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * CLS 日志集
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Metric 数据保存时长（单位：天）
                     */
                    int64_t m_metricDuration;
                    bool m_metricDurationHasBeenSet;

                    /**
                     * 用户自定义展示标签列表
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * 业务系统计费模式（1为预付费，0为按量付费）
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 业务系统计费模式是否生效
                     */
                    bool m_payModeEffective;
                    bool m_payModeEffectiveHasBeenSet;

                    /**
                     * 响应时间警示线（单位：ms）
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * 是否免费（0=否，1=限额免费，2=完全免费），默认0
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * 是否 TSF 默认业务系统（0=否，1=是）
                     */
                    int64_t m_defaultTSF;
                    bool m_defaultTSFHasBeenSet;

                    /**
                     * 是否关联 Dashboard（0=关, 1=开）
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * 关联的 Dashboard ID
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * 是否开启组件漏洞检测（0=关， 1=开）
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * 是否开启 SQL 注入分析（0=关， 1=开）
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * 限流原因。{
1: 正式版限额;
2: 试用版限额;
4: 试用版到期;
8: 账号欠费
}
                     */
                    int64_t m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 是否开远程命令执行检测（0=关， 1=开）
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * 是否开内存马执行检测（0=关， 1=开）
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * CLS索引类型(0=全文索引，1=键值索引)
                     */
                    int64_t m_logIndexType;
                    bool m_logIndexTypeHasBeenSet;

                    /**
                     * traceId的索引key: 当CLS索引类型为键值索引时生效
                     */
                    std::string m_logTraceIdKey;
                    bool m_logTraceIdKeyHasBeenSet;

                    /**
                     * 业务系统鉴权 token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
