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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyApmInstance请求参数结构体
                */
                class ModifyApmInstanceRequest : public AbstractModel
                {
                public:
                    ModifyApmInstanceRequest();
                    ~ModifyApmInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Tag 列表
                     * @return Tags Tag 列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag 列表
                     * @param _tags Tag 列表
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
                     * 获取业务系统描述
                     * @return Description 业务系统描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置业务系统描述
                     * @param _description 业务系统描述
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
                     * 获取是否开启计费
                     * @return OpenBilling 是否开启计费
                     * 
                     */
                    bool GetOpenBilling() const;

                    /**
                     * 设置是否开启计费
                     * @param _openBilling 是否开启计费
                     * 
                     */
                    void SetOpenBilling(const bool& _openBilling);

                    /**
                     * 判断参数 OpenBilling 是否已赋值
                     * @return OpenBilling 是否已赋值
                     * 
                     */
                    bool OpenBillingHasBeenSet() const;

                    /**
                     * 获取业务系统上报额度
                     * @return SpanDailyCounters 业务系统上报额度
                     * 
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置业务系统上报额度
                     * @param _spanDailyCounters 业务系统上报额度
                     * 
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。
                     * @return ErrRateThreshold 错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。
                     * @param _errRateThreshold 错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。
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
                     * 获取是否开启日志功能（0=关, 1=开）
                     * @return IsRelatedLog 是否开启日志功能（0=关, 1=开）
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置是否开启日志功能（0=关, 1=开）
                     * @param _isRelatedLog 是否开启日志功能（0=关, 1=开）
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
                     * 获取日志地域，开启日志功能后才会生效
                     * @return LogRegion 日志地域，开启日志功能后才会生效
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置日志地域，开启日志功能后才会生效
                     * @param _logRegion 日志地域，开启日志功能后才会生效
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
                     * 获取CLS 日志主题 ID，开启日志功能后才会生效
                     * @return LogTopicID CLS 日志主题 ID，开启日志功能后才会生效
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置CLS 日志主题 ID，开启日志功能后才会生效
                     * @param _logTopicID CLS 日志主题 ID，开启日志功能后才会生效
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
                     * 获取日志集，开启日志功能后才会生效
                     * @return LogSet 日志集，开启日志功能后才会生效
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置日志集，开启日志功能后才会生效
                     * @param _logSet 日志集，开启日志功能后才会生效
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
                     * 获取日志源，开启日志功能后才会生效
                     * @return LogSource 日志源，开启日志功能后才会生效
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志源，开启日志功能后才会生效
                     * @param _logSource 日志源，开启日志功能后才会生效
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
                     * 获取修改计费模式（1为预付费，0为按量付费）
                     * @return PayMode 修改计费模式（1为预付费，0为按量付费）
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置修改计费模式（1为预付费，0为按量付费）
                     * @param _payMode 修改计费模式（1为预付费，0为按量付费）
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
                     * 获取响应时间警示线
                     * @return ResponseDurationWarningThreshold 响应时间警示线
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置响应时间警示线
                     * @param _responseDurationWarningThreshold 响应时间警示线
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
                     * 获取是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0
                     * @return Free 是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0
                     * @param _free 是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0
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
                     * 获取是否关联 Dashboard（0=关,1=开）
                     * @return IsRelatedDashboard 是否关联 Dashboard（0=关,1=开）
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置是否关联 Dashboard（0=关,1=开）
                     * @param _isRelatedDashboard 是否关联 Dashboard（0=关,1=开）
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
                     * 获取关联的 Dashboard ID，开启关联 Dashboard 后才会生效
                     * @return DashboardTopicID 关联的 Dashboard ID，开启关联 Dashboard 后才会生效
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置关联的 Dashboard ID，开启关联 Dashboard 后才会生效
                     * @param _dashboardTopicID 关联的 Dashboard ID，开启关联 Dashboard 后才会生效
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
                     * 获取是否开启 SQL 注入检测（0=关,1=开）
                     * @return IsSqlInjectionAnalysis 是否开启 SQL 注入检测（0=关,1=开）
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置是否开启 SQL 注入检测（0=关,1=开）
                     * @param _isSqlInjectionAnalysis 是否开启 SQL 注入检测（0=关,1=开）
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
                     * 获取是否开启组件漏洞检测（0=关,1=开）
                     * @return IsInstrumentationVulnerabilityScan 是否开启组件漏洞检测（0=关,1=开）
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置是否开启组件漏洞检测（0=关,1=开）
                     * @param _isInstrumentationVulnerabilityScan 是否开启组件漏洞检测（0=关,1=开）
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
                     * 获取是否开启远程命令攻击检测
                     * @return IsRemoteCommandExecutionAnalysis 是否开启远程命令攻击检测
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置是否开启远程命令攻击检测
                     * @param _isRemoteCommandExecutionAnalysis 是否开启远程命令攻击检测
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
                     * 获取是否开启内存马检测
                     * @return IsMemoryHijackingAnalysis 是否开启内存马检测
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置是否开启内存马检测
                     * @param _isMemoryHijackingAnalysis 是否开启内存马检测
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
                     * Tag 列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 业务系统描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Trace 数据保存时长（单位：天）
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 是否开启计费
                     */
                    bool m_openBilling;
                    bool m_openBillingHasBeenSet;

                    /**
                     * 业务系统上报额度
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。
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
                     * 是否开启日志功能（0=关, 1=开）
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志地域，开启日志功能后才会生效
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * CLS 日志主题 ID，开启日志功能后才会生效
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * 日志集，开启日志功能后才会生效
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 日志源，开启日志功能后才会生效
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 用户自定义展示标签列表
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * 修改计费模式（1为预付费，0为按量付费）
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 响应时间警示线
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * 是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * 是否关联 Dashboard（0=关,1=开）
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * 关联的 Dashboard ID，开启关联 Dashboard 后才会生效
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * 是否开启 SQL 注入检测（0=关,1=开）
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启组件漏洞检测（0=关,1=开）
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * 是否开启远程命令攻击检测
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * 是否开启内存马检测
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
