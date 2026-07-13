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
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
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
                     * 获取<p>业务系统名</p>
                     * @return Name <p>业务系统名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>业务系统名</p>
                     * @param _name <p>业务系统名</p>
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
                     * 获取<p>Tag 列表</p>
                     * @return Tags <p>Tag 列表</p>
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>Tag 列表</p>
                     * @param _tags <p>Tag 列表</p>
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
                     * 获取<p>业务系统描述</p>
                     * @return Description <p>业务系统描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>业务系统描述</p>
                     * @param _description <p>业务系统描述</p>
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
                     * 获取<p>Trace 数据保存时长（单位：天）</p>
                     * @return TraceDuration <p>Trace 数据保存时长（单位：天）</p>
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置<p>Trace 数据保存时长（单位：天）</p>
                     * @param _traceDuration <p>Trace 数据保存时长（单位：天）</p>
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
                     * 获取<p>是否开启计费</p>
                     * @return OpenBilling <p>是否开启计费</p>
                     * 
                     */
                    bool GetOpenBilling() const;

                    /**
                     * 设置<p>是否开启计费</p>
                     * @param _openBilling <p>是否开启计费</p>
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
                     * 获取<p>业务系统上报额度</p>
                     * @return SpanDailyCounters <p>业务系统上报额度</p>
                     * 
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置<p>业务系统上报额度</p>
                     * @param _spanDailyCounters <p>业务系统上报额度</p>
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
                     * 获取<p>错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。</p>
                     * @return ErrRateThreshold <p>错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。</p>
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。</p>
                     * @param _errRateThreshold <p>错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。</p>
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
                     * 获取<p>采样率（单位：%）</p>
                     * @return SampleRate <p>采样率（单位：%）</p>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置<p>采样率（单位：%）</p>
                     * @param _sampleRate <p>采样率（单位：%）</p>
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
                     * 获取<p>是否开启错误采样（0=关, 1=开）</p>
                     * @return ErrorSample <p>是否开启错误采样（0=关, 1=开）</p>
                     * 
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置<p>是否开启错误采样（0=关, 1=开）</p>
                     * @param _errorSample <p>是否开启错误采样（0=关, 1=开）</p>
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
                     * 获取<p>采样慢调用保存阈值（单位：ms）</p>
                     * @return SlowRequestSavedThreshold <p>采样慢调用保存阈值（单位：ms）</p>
                     * 
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置<p>采样慢调用保存阈值（单位：ms）</p>
                     * @param _slowRequestSavedThreshold <p>采样慢调用保存阈值（单位：ms）</p>
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
                     * 获取<p>是否开启日志功能（0=关, 1=开）</p>
                     * @return IsRelatedLog <p>是否开启日志功能（0=关, 1=开）</p>
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置<p>是否开启日志功能（0=关, 1=开）</p>
                     * @param _isRelatedLog <p>是否开启日志功能（0=关, 1=开）</p>
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
                     * 获取<p>日志地域，开启日志功能后才会生效</p>
                     * @return LogRegion <p>日志地域，开启日志功能后才会生效</p>
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置<p>日志地域，开启日志功能后才会生效</p>
                     * @param _logRegion <p>日志地域，开启日志功能后才会生效</p>
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
                     * 获取<p>CLS 日志主题 ID，开启日志功能后才会生效</p>
                     * @return LogTopicID <p>CLS 日志主题 ID，开启日志功能后才会生效</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>CLS 日志主题 ID，开启日志功能后才会生效</p>
                     * @param _logTopicID <p>CLS 日志主题 ID，开启日志功能后才会生效</p>
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
                     * 获取<p>日志集，开启日志功能后才会生效</p>
                     * @return LogSet <p>日志集，开启日志功能后才会生效</p>
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置<p>日志集，开启日志功能后才会生效</p>
                     * @param _logSet <p>日志集，开启日志功能后才会生效</p>
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
                     * 获取<p>日志源，开启日志功能后才会生效</p>
                     * @return LogSource <p>日志源，开启日志功能后才会生效</p>
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置<p>日志源，开启日志功能后才会生效</p>
                     * @param _logSource <p>日志源，开启日志功能后才会生效</p>
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
                     * 获取<p>用户自定义展示标签列表</p>
                     * @return CustomShowTags <p>用户自定义展示标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetCustomShowTags() const;

                    /**
                     * 设置<p>用户自定义展示标签列表</p>
                     * @param _customShowTags <p>用户自定义展示标签列表</p>
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
                     * 获取<p>修改计费模式（1为预付费，0为按量付费）</p>
                     * @return PayMode <p>修改计费模式（1为预付费，0为按量付费）</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>修改计费模式（1为预付费，0为按量付费）</p>
                     * @param _payMode <p>修改计费模式（1为预付费，0为按量付费）</p>
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
                     * 获取<p>响应时间警示线</p>
                     * @return ResponseDurationWarningThreshold <p>响应时间警示线</p>
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>响应时间警示线</p>
                     * @param _responseDurationWarningThreshold <p>响应时间警示线</p>
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
                     * 获取<p>是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0</p>
                     * @return Free <p>是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0</p>
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置<p>是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0</p>
                     * @param _free <p>是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0</p>
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
                     * 获取<p>是否关联 Dashboard（0=关,1=开）</p>
                     * @return IsRelatedDashboard <p>是否关联 Dashboard（0=关,1=开）</p>
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置<p>是否关联 Dashboard（0=关,1=开）</p>
                     * @param _isRelatedDashboard <p>是否关联 Dashboard（0=关,1=开）</p>
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
                     * 获取<p>关联的 Dashboard ID，开启关联 Dashboard 后才会生效</p>
                     * @return DashboardTopicID <p>关联的 Dashboard ID，开启关联 Dashboard 后才会生效</p>
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置<p>关联的 Dashboard ID，开启关联 Dashboard 后才会生效</p>
                     * @param _dashboardTopicID <p>关联的 Dashboard ID，开启关联 Dashboard 后才会生效</p>
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
                     * 获取<p>是否开启 SQL 注入检测（0=关,1=开）</p>
                     * @return IsSqlInjectionAnalysis <p>是否开启 SQL 注入检测（0=关,1=开）</p>
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启 SQL 注入检测（0=关,1=开）</p>
                     * @param _isSqlInjectionAnalysis <p>是否开启 SQL 注入检测（0=关,1=开）</p>
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
                     * 获取<p>是否开启组件漏洞检测（0=关,1=开）</p>
                     * @return IsInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测（0=关,1=开）</p>
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置<p>是否开启组件漏洞检测（0=关,1=开）</p>
                     * @param _isInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测（0=关,1=开）</p>
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
                     * 获取<p>是否开启远程命令攻击检测</p>
                     * @return IsRemoteCommandExecutionAnalysis <p>是否开启远程命令攻击检测</p>
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置<p>是否开启远程命令攻击检测</p>
                     * @param _isRemoteCommandExecutionAnalysis <p>是否开启远程命令攻击检测</p>
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
                     * 获取<p>是否开启内存马检测</p>
                     * @return IsMemoryHijackingAnalysis <p>是否开启内存马检测</p>
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置<p>是否开启内存马检测</p>
                     * @param _isMemoryHijackingAnalysis <p>是否开启内存马检测</p>
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
                     * 获取<p>CLS索引类型(0=全文索引，1=键值索引)</p>
                     * @return LogIndexType <p>CLS索引类型(0=全文索引，1=键值索引)</p>
                     * 
                     */
                    int64_t GetLogIndexType() const;

                    /**
                     * 设置<p>CLS索引类型(0=全文索引，1=键值索引)</p>
                     * @param _logIndexType <p>CLS索引类型(0=全文索引，1=键值索引)</p>
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
                     * 获取<p>traceId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * @return LogTraceIdKey <p>traceId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * 
                     */
                    std::string GetLogTraceIdKey() const;

                    /**
                     * 设置<p>traceId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * @param _logTraceIdKey <p>traceId的索引key: 当CLS索引类型为键值索引时生效</p>
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
                     * 获取<p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
                     * @return IsDeleteAnyFileAnalysis <p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
                     * @param _isDeleteAnyFileAnalysis <p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsDeleteAnyFileAnalysis(const int64_t& _isDeleteAnyFileAnalysis);

                    /**
                     * 判断参数 IsDeleteAnyFileAnalysis 是否已赋值
                     * @return IsDeleteAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsDeleteAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
                     * @return IsReadAnyFileAnalysis <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
                     * @param _isReadAnyFileAnalysis <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsReadAnyFileAnalysis(const int64_t& _isReadAnyFileAnalysis);

                    /**
                     * 判断参数 IsReadAnyFileAnalysis 是否已赋值
                     * @return IsReadAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsReadAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
                     * @return IsUploadAnyFileAnalysis <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
                     * @param _isUploadAnyFileAnalysis <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsUploadAnyFileAnalysis(const int64_t& _isUploadAnyFileAnalysis);

                    /**
                     * 判断参数 IsUploadAnyFileAnalysis 是否已赋值
                     * @return IsUploadAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsUploadAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
                     * @return IsIncludeAnyFileAnalysis <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
                     * @param _isIncludeAnyFileAnalysis <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsIncludeAnyFileAnalysis(const int64_t& _isIncludeAnyFileAnalysis);

                    /**
                     * 判断参数 IsIncludeAnyFileAnalysis 是否已赋值
                     * @return IsIncludeAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsIncludeAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启目录遍历检测（0-关闭，1-开启）</p>
                     * @return IsDirectoryTraversalAnalysis <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置<p>是否开启目录遍历检测（0-关闭，1-开启）</p>
                     * @param _isDirectoryTraversalAnalysis <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsDirectoryTraversalAnalysis(const int64_t& _isDirectoryTraversalAnalysis);

                    /**
                     * 判断参数 IsDirectoryTraversalAnalysis 是否已赋值
                     * @return IsDirectoryTraversalAnalysis 是否已赋值
                     * 
                     */
                    bool IsDirectoryTraversalAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
                     * @return IsTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
                     * @param _isTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsTemplateEngineInjectionAnalysis(const int64_t& _isTemplateEngineInjectionAnalysis);

                    /**
                     * 判断参数 IsTemplateEngineInjectionAnalysis 是否已赋值
                     * @return IsTemplateEngineInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsTemplateEngineInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
                     * @return IsScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
                     * @param _isScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsScriptEngineInjectionAnalysis(const int64_t& _isScriptEngineInjectionAnalysis);

                    /**
                     * 判断参数 IsScriptEngineInjectionAnalysis 是否已赋值
                     * @return IsScriptEngineInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsScriptEngineInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启表达式注入检测（0-关闭，1-开启）</p>
                     * @return IsExpressionInjectionAnalysis <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启表达式注入检测（0-关闭，1-开启）</p>
                     * @param _isExpressionInjectionAnalysis <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsExpressionInjectionAnalysis(const int64_t& _isExpressionInjectionAnalysis);

                    /**
                     * 判断参数 IsExpressionInjectionAnalysis 是否已赋值
                     * @return IsExpressionInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsExpressionInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
                     * @return IsJNDIInjectionAnalysis <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsJNDIInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
                     * @param _isJNDIInjectionAnalysis <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsJNDIInjectionAnalysis(const int64_t& _isJNDIInjectionAnalysis);

                    /**
                     * 判断参数 IsJNDIInjectionAnalysis 是否已赋值
                     * @return IsJNDIInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJNDIInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启JNI注入检测（0-关闭，1-开启）</p>
                     * @return IsJNIInjectionAnalysis <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsJNIInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNI注入检测（0-关闭，1-开启）</p>
                     * @param _isJNIInjectionAnalysis <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsJNIInjectionAnalysis(const int64_t& _isJNIInjectionAnalysis);

                    /**
                     * 判断参数 IsJNIInjectionAnalysis 是否已赋值
                     * @return IsJNIInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJNIInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
                     * @return IsWebshellBackdoorAnalysis <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置<p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
                     * @param _isWebshellBackdoorAnalysis <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsWebshellBackdoorAnalysis(const int64_t& _isWebshellBackdoorAnalysis);

                    /**
                     * 判断参数 IsWebshellBackdoorAnalysis 是否已赋值
                     * @return IsWebshellBackdoorAnalysis 是否已赋值
                     * 
                     */
                    bool IsWebshellBackdoorAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启反序列化检测（0-关闭，1-开启）</p>
                     * @return IsDeserializationAnalysis <p>是否开启反序列化检测（0-关闭，1-开启）</p>
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置<p>是否开启反序列化检测（0-关闭，1-开启）</p>
                     * @param _isDeserializationAnalysis <p>是否开启反序列化检测（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetIsDeserializationAnalysis(const int64_t& _isDeserializationAnalysis);

                    /**
                     * 判断参数 IsDeserializationAnalysis 是否已赋值
                     * @return IsDeserializationAnalysis 是否已赋值
                     * 
                     */
                    bool IsDeserializationAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>URL长分段收敛阈值</p>
                     * @return UrlLongSegmentThreshold <p>URL长分段收敛阈值</p>
                     * 
                     */
                    int64_t GetUrlLongSegmentThreshold() const;

                    /**
                     * 设置<p>URL长分段收敛阈值</p>
                     * @param _urlLongSegmentThreshold <p>URL长分段收敛阈值</p>
                     * 
                     */
                    void SetUrlLongSegmentThreshold(const int64_t& _urlLongSegmentThreshold);

                    /**
                     * 判断参数 UrlLongSegmentThreshold 是否已赋值
                     * @return UrlLongSegmentThreshold 是否已赋值
                     * 
                     */
                    bool UrlLongSegmentThresholdHasBeenSet() const;

                    /**
                     * 获取<p>URL数字分段收敛阈值</p>
                     * @return UrlNumberSegmentThreshold <p>URL数字分段收敛阈值</p>
                     * 
                     */
                    int64_t GetUrlNumberSegmentThreshold() const;

                    /**
                     * 设置<p>URL数字分段收敛阈值</p>
                     * @param _urlNumberSegmentThreshold <p>URL数字分段收敛阈值</p>
                     * 
                     */
                    void SetUrlNumberSegmentThreshold(const int64_t& _urlNumberSegmentThreshold);

                    /**
                     * 判断参数 UrlNumberSegmentThreshold 是否已赋值
                     * @return UrlNumberSegmentThreshold 是否已赋值
                     * 
                     */
                    bool UrlNumberSegmentThresholdHasBeenSet() const;

                    /**
                     * 获取<p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * @return LogSpanIdKey <p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * 
                     */
                    std::string GetLogSpanIdKey() const;

                    /**
                     * 设置<p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * @param _logSpanIdKey <p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     * 
                     */
                    void SetLogSpanIdKey(const std::string& _logSpanIdKey);

                    /**
                     * 判断参数 LogSpanIdKey 是否已赋值
                     * @return LogSpanIdKey 是否已赋值
                     * 
                     */
                    bool LogSpanIdKeyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启探针头采样</p>
                     * @return EnableHeadSampler <p>是否开启探针头采样</p>
                     * 
                     */
                    bool GetEnableHeadSampler() const;

                    /**
                     * 设置<p>是否开启探针头采样</p>
                     * @param _enableHeadSampler <p>是否开启探针头采样</p>
                     * 
                     */
                    void SetEnableHeadSampler(const bool& _enableHeadSampler);

                    /**
                     * 判断参数 EnableHeadSampler 是否已赋值
                     * @return EnableHeadSampler 是否已赋值
                     * 
                     */
                    bool EnableHeadSamplerHasBeenSet() const;

                    /**
                     * 获取<p>头采类型</p><p>枚举值：</p><ul><li>parentbased_traceidratio： 默认</li></ul>
                     * @return HeadSamplerType <p>头采类型</p><p>枚举值：</p><ul><li>parentbased_traceidratio： 默认</li></ul>
                     * 
                     */
                    std::string GetHeadSamplerType() const;

                    /**
                     * 设置<p>头采类型</p><p>枚举值：</p><ul><li>parentbased_traceidratio： 默认</li></ul>
                     * @param _headSamplerType <p>头采类型</p><p>枚举值：</p><ul><li>parentbased_traceidratio： 默认</li></ul>
                     * 
                     */
                    void SetHeadSamplerType(const std::string& _headSamplerType);

                    /**
                     * 判断参数 HeadSamplerType 是否已赋值
                     * @return HeadSamplerType 是否已赋值
                     * 
                     */
                    bool HeadSamplerTypeHasBeenSet() const;

                    /**
                     * 获取<p>头采采样率</p><p>取值范围：[0, 100]</p>
                     * @return HeadSamplerArg <p>头采采样率</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    int64_t GetHeadSamplerArg() const;

                    /**
                     * 设置<p>头采采样率</p><p>取值范围：[0, 100]</p>
                     * @param _headSamplerArg <p>头采采样率</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    void SetHeadSamplerArg(const int64_t& _headSamplerArg);

                    /**
                     * 判断参数 HeadSamplerArg 是否已赋值
                     * @return HeadSamplerArg 是否已赋值
                     * 
                     */
                    bool HeadSamplerArgHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>业务系统名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tag 列表</p>
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>业务系统描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Trace 数据保存时长（单位：天）</p>
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * <p>是否开启计费</p>
                     */
                    bool m_openBilling;
                    bool m_openBillingHasBeenSet;

                    /**
                     * <p>业务系统上报额度</p>
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * <p>错误率警示线，当应用的平均错误率超出该阈值时，系统会给出异常提示。</p>
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>采样率（单位：%）</p>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>是否开启错误采样（0=关, 1=开）</p>
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * <p>采样慢调用保存阈值（单位：ms）</p>
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                    /**
                     * <p>是否开启日志功能（0=关, 1=开）</p>
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * <p>日志地域，开启日志功能后才会生效</p>
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * <p>CLS 日志主题 ID，开启日志功能后才会生效</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>日志集，开启日志功能后才会生效</p>
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * <p>日志源，开启日志功能后才会生效</p>
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * <p>用户自定义展示标签列表</p>
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * <p>修改计费模式（1为预付费，0为按量付费）</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>响应时间警示线</p>
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * <p>是否免费（0=付费版；1=TSF 受限免费版；2=免费版），默认0</p>
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * <p>是否关联 Dashboard（0=关,1=开）</p>
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * <p>关联的 Dashboard ID，开启关联 Dashboard 后才会生效</p>
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * <p>是否开启 SQL 注入检测（0=关,1=开）</p>
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启组件漏洞检测（0=关,1=开）</p>
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * <p>是否开启远程命令攻击检测</p>
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启内存马检测</p>
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * <p>CLS索引类型(0=全文索引，1=键值索引)</p>
                     */
                    int64_t m_logIndexType;
                    bool m_logIndexTypeHasBeenSet;

                    /**
                     * <p>traceId的索引key: 当CLS索引类型为键值索引时生效</p>
                     */
                    std::string m_logTraceIdKey;
                    bool m_logTraceIdKeyHasBeenSet;

                    /**
                     * <p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isJNDIInjectionAnalysis;
                    bool m_isJNDIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isJNIInjectionAnalysis;
                    bool m_isJNIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * <p>是否开启反序列化检测（0-关闭，1-开启）</p>
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * <p>URL长分段收敛阈值</p>
                     */
                    int64_t m_urlLongSegmentThreshold;
                    bool m_urlLongSegmentThresholdHasBeenSet;

                    /**
                     * <p>URL数字分段收敛阈值</p>
                     */
                    int64_t m_urlNumberSegmentThreshold;
                    bool m_urlNumberSegmentThresholdHasBeenSet;

                    /**
                     * <p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     */
                    std::string m_logSpanIdKey;
                    bool m_logSpanIdKeyHasBeenSet;

                    /**
                     * <p>是否开启探针头采样</p>
                     */
                    bool m_enableHeadSampler;
                    bool m_enableHeadSamplerHasBeenSet;

                    /**
                     * <p>头采类型</p><p>枚举值：</p><ul><li>parentbased_traceidratio： 默认</li></ul>
                     */
                    std::string m_headSamplerType;
                    bool m_headSamplerTypeHasBeenSet;

                    /**
                     * <p>头采采样率</p><p>取值范围：[0, 100]</p>
                     */
                    int64_t m_headSamplerArg;
                    bool m_headSamplerArgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
