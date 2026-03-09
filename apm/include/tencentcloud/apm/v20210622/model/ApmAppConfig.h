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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAPPCONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAPPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Instrument.h>
#include <tencentcloud/apm/v20210622/model/AgentOperationConfigView.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/AutoProfilingConfig.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 查询应用配置返回参数
                */
                class ApmAppConfig : public AbstractModel
                {
                public:
                    ApmAppConfig();
                    ~ApmAppConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceKey <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceKey <p>实例ID</p>
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取<p>服务名</p>
                     * @return ServiceName <p>服务名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serviceName <p>服务名</p>
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
                     * 获取<p>URL收敛开关</p>
                     * @return UrlConvergenceSwitch <p>URL收敛开关</p>
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置<p>URL收敛开关</p>
                     * @param _urlConvergenceSwitch <p>URL收敛开关</p>
                     * 
                     */
                    void SetUrlConvergenceSwitch(const int64_t& _urlConvergenceSwitch);

                    /**
                     * 判断参数 UrlConvergenceSwitch 是否已赋值
                     * @return UrlConvergenceSwitch 是否已赋值
                     * 
                     */
                    bool UrlConvergenceSwitchHasBeenSet() const;

                    /**
                     * 获取<p>URL收敛阈值</p>
                     * @return UrlConvergenceThreshold <p>URL收敛阈值</p>
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置<p>URL收敛阈值</p>
                     * @param _urlConvergenceThreshold <p>URL收敛阈值</p>
                     * 
                     */
                    void SetUrlConvergenceThreshold(const int64_t& _urlConvergenceThreshold);

                    /**
                     * 判断参数 UrlConvergenceThreshold 是否已赋值
                     * @return UrlConvergenceThreshold 是否已赋值
                     * 
                     */
                    bool UrlConvergenceThresholdHasBeenSet() const;

                    /**
                     * 获取<p>URL收敛正则</p>
                     * @return UrlConvergence <p>URL收敛正则</p>
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置<p>URL收敛正则</p>
                     * @param _urlConvergence <p>URL收敛正则</p>
                     * 
                     */
                    void SetUrlConvergence(const std::string& _urlConvergence);

                    /**
                     * 判断参数 UrlConvergence 是否已赋值
                     * @return UrlConvergence 是否已赋值
                     * 
                     */
                    bool UrlConvergenceHasBeenSet() const;

                    /**
                     * 获取<p>异常过滤正则</p>
                     * @return ExceptionFilter <p>异常过滤正则</p>
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置<p>异常过滤正则</p>
                     * @param _exceptionFilter <p>异常过滤正则</p>
                     * 
                     */
                    void SetExceptionFilter(const std::string& _exceptionFilter);

                    /**
                     * 判断参数 ExceptionFilter 是否已赋值
                     * @return ExceptionFilter 是否已赋值
                     * 
                     */
                    bool ExceptionFilterHasBeenSet() const;

                    /**
                     * 获取<p>错误码过滤</p>
                     * @return ErrorCodeFilter <p>错误码过滤</p>
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置<p>错误码过滤</p>
                     * @param _errorCodeFilter <p>错误码过滤</p>
                     * 
                     */
                    void SetErrorCodeFilter(const std::string& _errorCodeFilter);

                    /**
                     * 判断参数 ErrorCodeFilter 是否已赋值
                     * @return ErrorCodeFilter 是否已赋值
                     * 
                     */
                    bool ErrorCodeFilterHasBeenSet() const;

                    /**
                     * 获取<p>服务组件类型</p>
                     * @return Components <p>服务组件类型</p>
                     * 
                     */
                    std::string GetComponents() const;

                    /**
                     * 设置<p>服务组件类型</p>
                     * @param _components <p>服务组件类型</p>
                     * 
                     */
                    void SetComponents(const std::string& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>URL排除正则</p>
                     * @return UrlExclude <p>URL排除正则</p>
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置<p>URL排除正则</p>
                     * @param _urlExclude <p>URL排除正则</p>
                     * 
                     */
                    void SetUrlExclude(const std::string& _urlExclude);

                    /**
                     * 判断参数 UrlExclude 是否已赋值
                     * @return UrlExclude 是否已赋值
                     * 
                     */
                    bool UrlExcludeHasBeenSet() const;

                    /**
                     * 获取<p>日志来源</p>
                     * @return LogSource <p>日志来源</p>
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置<p>日志来源</p>
                     * @param _logSource <p>日志来源</p>
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
                     * 获取<p>日志所在地域</p>
                     * @return LogRegion <p>日志所在地域</p>
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置<p>日志所在地域</p>
                     * @param _logRegion <p>日志所在地域</p>
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
                     * 获取<p>是否开启日志 0 关 1 开</p>
                     * @return IsRelatedLog <p>是否开启日志 0 关 1 开</p>
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置<p>是否开启日志 0 关 1 开</p>
                     * @param _isRelatedLog <p>是否开启日志 0 关 1 开</p>
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
                     * 获取<p>日志主题ID</p>
                     * @return LogTopicID <p>日志主题ID</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _logTopicID <p>日志主题ID</p>
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
                     * 获取<p>需过滤的接口名</p>
                     * @return IgnoreOperationName <p>需过滤的接口名</p>
                     * 
                     */
                    std::string GetIgnoreOperationName() const;

                    /**
                     * 设置<p>需过滤的接口名</p>
                     * @param _ignoreOperationName <p>需过滤的接口名</p>
                     * 
                     */
                    void SetIgnoreOperationName(const std::string& _ignoreOperationName);

                    /**
                     * 判断参数 IgnoreOperationName 是否已赋值
                     * @return IgnoreOperationName 是否已赋值
                     * 
                     */
                    bool IgnoreOperationNameHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集 | ES集群ID</p>
                     * @return LogSet <p>CLS日志集 | ES集群ID</p>
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置<p>CLS日志集 | ES集群ID</p>
                     * @param _logSet <p>CLS日志集 | ES集群ID</p>
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
                     * 获取<p>探针每秒上报trace数</p>
                     * @return TraceRateLimit <p>探针每秒上报trace数</p>
                     * 
                     */
                    int64_t GetTraceRateLimit() const;

                    /**
                     * 设置<p>探针每秒上报trace数</p>
                     * @param _traceRateLimit <p>探针每秒上报trace数</p>
                     * 
                     */
                    void SetTraceRateLimit(const int64_t& _traceRateLimit);

                    /**
                     * 判断参数 TraceRateLimit 是否已赋值
                     * @return TraceRateLimit 是否已赋值
                     * 
                     */
                    bool TraceRateLimitHasBeenSet() const;

                    /**
                     * 获取<p>是否开启线程剖析</p>
                     * @return EnableSnapshot <p>是否开启线程剖析</p>
                     * 
                     */
                    bool GetEnableSnapshot() const;

                    /**
                     * 设置<p>是否开启线程剖析</p>
                     * @param _enableSnapshot <p>是否开启线程剖析</p>
                     * 
                     */
                    void SetEnableSnapshot(const bool& _enableSnapshot);

                    /**
                     * 判断参数 EnableSnapshot 是否已赋值
                     * @return EnableSnapshot 是否已赋值
                     * 
                     */
                    bool EnableSnapshotHasBeenSet() const;

                    /**
                     * 获取<p>线程剖析超时阈值</p>
                     * @return SnapshotTimeout <p>线程剖析超时阈值</p>
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置<p>线程剖析超时阈值</p>
                     * @param _snapshotTimeout <p>线程剖析超时阈值</p>
                     * 
                     */
                    void SetSnapshotTimeout(const int64_t& _snapshotTimeout);

                    /**
                     * 判断参数 SnapshotTimeout 是否已赋值
                     * @return SnapshotTimeout 是否已赋值
                     * 
                     */
                    bool SnapshotTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否开启agent</p>
                     * @return AgentEnable <p>是否开启agent</p>
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置<p>是否开启agent</p>
                     * @param _agentEnable <p>是否开启agent</p>
                     * 
                     */
                    void SetAgentEnable(const bool& _agentEnable);

                    /**
                     * 判断参数 AgentEnable 是否已赋值
                     * @return AgentEnable 是否已赋值
                     * 
                     */
                    bool AgentEnableHasBeenSet() const;

                    /**
                     * 获取<p>组件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstrumentList <p>组件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置<p>组件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instrumentList <p>组件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstrumentList(const std::vector<Instrument>& _instrumentList);

                    /**
                     * 判断参数 InstrumentList 是否已赋值
                     * @return InstrumentList 是否已赋值
                     * 
                     */
                    bool InstrumentListHasBeenSet() const;

                    /**
                     * 获取<p>是否开启链路压缩</p>
                     * @return TraceSquash <p>是否开启链路压缩</p>
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置<p>是否开启链路压缩</p>
                     * @param _traceSquash <p>是否开启链路压缩</p>
                     * 
                     */
                    void SetTraceSquash(const bool& _traceSquash);

                    /**
                     * 判断参数 TraceSquash 是否已赋值
                     * @return TraceSquash 是否已赋值
                     * 
                     */
                    bool TraceSquashHasBeenSet() const;

                    /**
                     * 获取<p>是否开启应用诊断开关</p>
                     * @return EventEnable <p>是否开启应用诊断开关</p>
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置<p>是否开启应用诊断开关</p>
                     * @param _eventEnable <p>是否开启应用诊断开关</p>
                     * 
                     */
                    void SetEventEnable(const bool& _eventEnable);

                    /**
                     * 判断参数 EventEnable 是否已赋值
                     * @return EventEnable 是否已赋值
                     * 
                     */
                    bool EventEnableHasBeenSet() const;

                    /**
                     * 获取<p>探针接口相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentOperationConfigView <p>探针接口相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentOperationConfigView GetAgentOperationConfigView() const;

                    /**
                     * 设置<p>探针接口相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentOperationConfigView <p>探针接口相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentOperationConfigView(const AgentOperationConfigView& _agentOperationConfigView);

                    /**
                     * 判断参数 AgentOperationConfigView 是否已赋值
                     * @return AgentOperationConfigView 是否已赋值
                     * 
                     */
                    bool AgentOperationConfigViewHasBeenSet() const;

                    /**
                     * 获取<p>是否开启应用日志配置</p>
                     * @return EnableLogConfig <p>是否开启应用日志配置</p>
                     * 
                     */
                    bool GetEnableLogConfig() const;

                    /**
                     * 设置<p>是否开启应用日志配置</p>
                     * @param _enableLogConfig <p>是否开启应用日志配置</p>
                     * 
                     */
                    void SetEnableLogConfig(const bool& _enableLogConfig);

                    /**
                     * 判断参数 EnableLogConfig 是否已赋值
                     * @return EnableLogConfig 是否已赋值
                     * 
                     */
                    bool EnableLogConfigHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取<p>应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDashboardConfig <p>应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置<p>应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDashboardConfig <p>应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDashboardConfig(const bool& _enableDashboardConfig);

                    /**
                     * 判断参数 EnableDashboardConfig 是否已赋值
                     * @return EnableDashboardConfig 是否已赋值
                     * 
                     */
                    bool EnableDashboardConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否关联dashboard： 0 关 1 开</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRelatedDashboard <p>是否关联dashboard： 0 关 1 开</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置<p>是否关联dashboard： 0 关 1 开</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRelatedDashboard <p>是否关联dashboard： 0 关 1 开</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>dashboard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DashboardTopicID <p>dashboard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置<p>dashboard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dashboardTopicID <p>dashboard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启应用级别配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableSecurityConfig <p>是否开启应用级别配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置<p>是否开启应用级别配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableSecurityConfig <p>是否开启应用级别配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableSecurityConfig(const bool& _enableSecurityConfig);

                    /**
                     * 判断参数 EnableSecurityConfig 是否已赋值
                     * @return EnableSecurityConfig 是否已赋值
                     * 
                     */
                    bool EnableSecurityConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启组件漏洞检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置<p>是否开启组件漏洞检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启SQL注入分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSqlInjectionAnalysis <p>是否开启SQL注入分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启SQL注入分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSqlInjectionAnalysis <p>是否开启SQL注入分析</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启远程命令执行分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRemoteCommandExecutionAnalysis <p>是否开启远程命令执行分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置<p>是否开启远程命令执行分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRemoteCommandExecutionAnalysis <p>是否开启远程命令执行分析</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启内存马检测分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMemoryHijackingAnalysis <p>是否开启内存马检测分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置<p>是否开启内存马检测分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMemoryHijackingAnalysis <p>是否开启内存马检测分析</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeleteAnyFileAnalysis <p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeleteAnyFileAnalysis <p>是否开启删除任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReadAnyFileAnalysis <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReadAnyFileAnalysis <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUploadAnyFileAnalysis <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUploadAnyFileAnalysis <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIncludeAnyFileAnalysis <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIncludeAnyFileAnalysis <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDirectoryTraversalAnalysis <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置<p>是否开启目录遍历检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDirectoryTraversalAnalysis <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExpressionInjectionAnalysis <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启表达式注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isExpressionInjectionAnalysis <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsJNDIInjectionAnalysis <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsJNDIInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isJNDIInjectionAnalysis <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsJNIInjectionAnalysis <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsJNIInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isJNIInjectionAnalysis <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWebshellBackdoorAnalysis <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置<p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWebshellBackdoorAnalysis <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeserializationAnalysis <p>是否开启反序列化检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置<p>是否开启反序列化检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeserializationAnalysis <p>是否开启反序列化检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>接口名称自动收敛开关（0-关闭，1-开启）</p>
                     * @return UrlAutoConvergenceEnable <p>接口名称自动收敛开关（0-关闭，1-开启）</p>
                     * 
                     */
                    bool GetUrlAutoConvergenceEnable() const;

                    /**
                     * 设置<p>接口名称自动收敛开关（0-关闭，1-开启）</p>
                     * @param _urlAutoConvergenceEnable <p>接口名称自动收敛开关（0-关闭，1-开启）</p>
                     * 
                     */
                    void SetUrlAutoConvergenceEnable(const bool& _urlAutoConvergenceEnable);

                    /**
                     * 判断参数 UrlAutoConvergenceEnable 是否已赋值
                     * @return UrlAutoConvergenceEnable 是否已赋值
                     * 
                     */
                    bool UrlAutoConvergenceEnableHasBeenSet() const;

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
                     * 获取<p>探针熔断内存阈值</p>
                     * @return DisableMemoryUsed <p>探针熔断内存阈值</p>
                     * 
                     */
                    int64_t GetDisableMemoryUsed() const;

                    /**
                     * 设置<p>探针熔断内存阈值</p>
                     * @param _disableMemoryUsed <p>探针熔断内存阈值</p>
                     * 
                     */
                    void SetDisableMemoryUsed(const int64_t& _disableMemoryUsed);

                    /**
                     * 判断参数 DisableMemoryUsed 是否已赋值
                     * @return DisableMemoryUsed 是否已赋值
                     * 
                     */
                    bool DisableMemoryUsedHasBeenSet() const;

                    /**
                     * 获取<p>探针熔断CPU阈值</p>
                     * @return DisableCpuUsed <p>探针熔断CPU阈值</p>
                     * 
                     */
                    int64_t GetDisableCpuUsed() const;

                    /**
                     * 设置<p>探针熔断CPU阈值</p>
                     * @param _disableCpuUsed <p>探针熔断CPU阈值</p>
                     * 
                     */
                    void SetDisableCpuUsed(const int64_t& _disableCpuUsed);

                    /**
                     * 判断参数 DisableCpuUsed 是否已赋值
                     * @return DisableCpuUsed 是否已赋值
                     * 
                     */
                    bool DisableCpuUsedHasBeenSet() const;

                    /**
                     * 获取<p>是否开启SQL参数获取</p>
                     * @return DbStatementParametersEnabled <p>是否开启SQL参数获取</p>
                     * 
                     */
                    bool GetDbStatementParametersEnabled() const;

                    /**
                     * 设置<p>是否开启SQL参数获取</p>
                     * @param _dbStatementParametersEnabled <p>是否开启SQL参数获取</p>
                     * 
                     */
                    void SetDbStatementParametersEnabled(const bool& _dbStatementParametersEnabled);

                    /**
                     * 判断参数 DbStatementParametersEnabled 是否已赋值
                     * @return DbStatementParametersEnabled 是否已赋值
                     * 
                     */
                    bool DbStatementParametersEnabledHasBeenSet() const;

                    /**
                     * 获取<p>慢SQL阈值</p>
                     * @return SlowSQLThresholds <p>慢SQL阈值</p>
                     * 
                     */
                    std::vector<ApmTag> GetSlowSQLThresholds() const;

                    /**
                     * 设置<p>慢SQL阈值</p>
                     * @param _slowSQLThresholds <p>慢SQL阈值</p>
                     * 
                     */
                    void SetSlowSQLThresholds(const std::vector<ApmTag>& _slowSQLThresholds);

                    /**
                     * 判断参数 SlowSQLThresholds 是否已赋值
                     * @return SlowSQLThresholds 是否已赋值
                     * 
                     */
                    bool SlowSQLThresholdsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启脱敏规则</p>
                     * @return EnableDesensitizationRule <p>是否开启脱敏规则</p>
                     * 
                     */
                    int64_t GetEnableDesensitizationRule() const;

                    /**
                     * 设置<p>是否开启脱敏规则</p>
                     * @param _enableDesensitizationRule <p>是否开启脱敏规则</p>
                     * 
                     */
                    void SetEnableDesensitizationRule(const int64_t& _enableDesensitizationRule);

                    /**
                     * 判断参数 EnableDesensitizationRule 是否已赋值
                     * @return EnableDesensitizationRule 是否已赋值
                     * 
                     */
                    bool EnableDesensitizationRuleHasBeenSet() const;

                    /**
                     * 获取<p>脱敏规则</p>
                     * @return DesensitizationRule <p>脱敏规则</p>
                     * 
                     */
                    std::string GetDesensitizationRule() const;

                    /**
                     * 设置<p>脱敏规则</p>
                     * @param _desensitizationRule <p>脱敏规则</p>
                     * 
                     */
                    void SetDesensitizationRule(const std::string& _desensitizationRule);

                    /**
                     * 判断参数 DesensitizationRule 是否已赋值
                     * @return DesensitizationRule 是否已赋值
                     * 
                     */
                    bool DesensitizationRuleHasBeenSet() const;

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
                     * 获取<p>自动性能剖析配置</p>
                     * @return AutoProfilingConfig <p>自动性能剖析配置</p>
                     * 
                     */
                    AutoProfilingConfig GetAutoProfilingConfig() const;

                    /**
                     * 设置<p>自动性能剖析配置</p>
                     * @param _autoProfilingConfig <p>自动性能剖析配置</p>
                     * 
                     */
                    void SetAutoProfilingConfig(const AutoProfilingConfig& _autoProfilingConfig);

                    /**
                     * 判断参数 AutoProfilingConfig 是否已赋值
                     * @return AutoProfilingConfig 是否已赋值
                     * 
                     */
                    bool AutoProfilingConfigHasBeenSet() const;

                    /**
                     * 获取<p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
                     * @return EnableThresholdConfig <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
                     * @param _enableThresholdConfig <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
                     * 
                     */
                    void SetEnableThresholdConfig(const bool& _enableThresholdConfig);

                    /**
                     * 判断参数 EnableThresholdConfig 是否已赋值
                     * @return EnableThresholdConfig 是否已赋值
                     * 
                     */
                    bool EnableThresholdConfigHasBeenSet() const;

                    /**
                     * 获取<p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p>
                     * @return ErrRateThreshold <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p>
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p>
                     * @param _errRateThreshold <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p>
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
                     * 获取<p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p>
                     * @return ResponseDurationWarningThreshold <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p>
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p>
                     * @param _responseDurationWarningThreshold <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p>
                     * 
                     */
                    void SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold);

                    /**
                     * 判断参数 ResponseDurationWarningThreshold 是否已赋值
                     * @return ResponseDurationWarningThreshold 是否已赋值
                     * 
                     */
                    bool ResponseDurationWarningThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>URL收敛开关</p>
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * <p>URL收敛阈值</p>
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * <p>URL收敛正则</p>
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * <p>异常过滤正则</p>
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * <p>错误码过滤</p>
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * <p>服务组件类型</p>
                     */
                    std::string m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>URL排除正则</p>
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * <p>日志来源</p>
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * <p>日志所在地域</p>
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * <p>是否开启日志 0 关 1 开</p>
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>需过滤的接口名</p>
                     */
                    std::string m_ignoreOperationName;
                    bool m_ignoreOperationNameHasBeenSet;

                    /**
                     * <p>CLS日志集 | ES集群ID</p>
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * <p>探针每秒上报trace数</p>
                     */
                    int64_t m_traceRateLimit;
                    bool m_traceRateLimitHasBeenSet;

                    /**
                     * <p>是否开启线程剖析</p>
                     */
                    bool m_enableSnapshot;
                    bool m_enableSnapshotHasBeenSet;

                    /**
                     * <p>线程剖析超时阈值</p>
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * <p>是否开启agent</p>
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * <p>组件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * <p>是否开启链路压缩</p>
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * <p>是否开启应用诊断开关</p>
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * <p>探针接口相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentOperationConfigView m_agentOperationConfigView;
                    bool m_agentOperationConfigViewHasBeenSet;

                    /**
                     * <p>是否开启应用日志配置</p>
                     */
                    bool m_enableLogConfig;
                    bool m_enableLogConfigHasBeenSet;

                    /**
                     * <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * <p>应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * <p>是否关联dashboard： 0 关 1 开</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * <p>dashboard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * <p>是否开启应用级别配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * <p>是否开启组件漏洞检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * <p>是否开启SQL注入分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启远程命令执行分析</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启内存马检测分析</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启读取任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启上传任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启包含任意文件检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启目录遍历检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * <p>是否开启模板引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启脚本引擎注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启表达式注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNDI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isJNDIInjectionAnalysis;
                    bool m_isJNDIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNI注入检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isJNIInjectionAnalysis;
                    bool m_isJNIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启Webshell后门检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * <p>是否开启反序列化检测（0-关闭，1-开启）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * <p>接口名称自动收敛开关（0-关闭，1-开启）</p>
                     */
                    bool m_urlAutoConvergenceEnable;
                    bool m_urlAutoConvergenceEnableHasBeenSet;

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
                     * <p>探针熔断内存阈值</p>
                     */
                    int64_t m_disableMemoryUsed;
                    bool m_disableMemoryUsedHasBeenSet;

                    /**
                     * <p>探针熔断CPU阈值</p>
                     */
                    int64_t m_disableCpuUsed;
                    bool m_disableCpuUsedHasBeenSet;

                    /**
                     * <p>是否开启SQL参数获取</p>
                     */
                    bool m_dbStatementParametersEnabled;
                    bool m_dbStatementParametersEnabledHasBeenSet;

                    /**
                     * <p>慢SQL阈值</p>
                     */
                    std::vector<ApmTag> m_slowSQLThresholds;
                    bool m_slowSQLThresholdsHasBeenSet;

                    /**
                     * <p>是否开启脱敏规则</p>
                     */
                    int64_t m_enableDesensitizationRule;
                    bool m_enableDesensitizationRuleHasBeenSet;

                    /**
                     * <p>脱敏规则</p>
                     */
                    std::string m_desensitizationRule;
                    bool m_desensitizationRuleHasBeenSet;

                    /**
                     * <p>spanId的索引key: 当CLS索引类型为键值索引时生效</p>
                     */
                    std::string m_logSpanIdKey;
                    bool m_logSpanIdKeyHasBeenSet;

                    /**
                     * <p>自动性能剖析配置</p>
                     */
                    AutoProfilingConfig m_autoProfilingConfig;
                    bool m_autoProfilingConfigHasBeenSet;

                    /**
                     * <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p>
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p>
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPCONFIG_H_
