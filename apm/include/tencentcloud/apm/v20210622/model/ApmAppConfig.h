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
                     * 获取实例ID
                     * @return InstanceKey 实例ID
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例ID
                     * @param _instanceKey 实例ID
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
                     * 获取服务名
                     * @return ServiceName 服务名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
                     * @param _serviceName 服务名
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
                     * 获取URL收敛开关
                     * @return UrlConvergenceSwitch URL收敛开关
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置URL收敛开关
                     * @param _urlConvergenceSwitch URL收敛开关
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
                     * 获取URL收敛阈值
                     * @return UrlConvergenceThreshold URL收敛阈值
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置URL收敛阈值
                     * @param _urlConvergenceThreshold URL收敛阈值
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
                     * 获取URL收敛正则
                     * @return UrlConvergence URL收敛正则
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置URL收敛正则
                     * @param _urlConvergence URL收敛正则
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
                     * 获取异常过滤正则
                     * @return ExceptionFilter 异常过滤正则
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置异常过滤正则
                     * @param _exceptionFilter 异常过滤正则
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
                     * 获取错误码过滤
                     * @return ErrorCodeFilter 错误码过滤
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置错误码过滤
                     * @param _errorCodeFilter 错误码过滤
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
                     * 获取服务组件类型
                     * @return Components 服务组件类型
                     * 
                     */
                    std::string GetComponents() const;

                    /**
                     * 设置服务组件类型
                     * @param _components 服务组件类型
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
                     * 获取URL排除正则
                     * @return UrlExclude URL排除正则
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置URL排除正则
                     * @param _urlExclude URL排除正则
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
                     * 获取日志来源
                     * @return LogSource 日志来源
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志来源
                     * @param _logSource 日志来源
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
                     * 获取日志所在地域
                     * @return LogRegion 日志所在地域
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置日志所在地域
                     * @param _logRegion 日志所在地域
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
                     * 获取是否开启日志 0 关 1 开
                     * @return IsRelatedLog 是否开启日志 0 关 1 开
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置是否开启日志 0 关 1 开
                     * @param _isRelatedLog 是否开启日志 0 关 1 开
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
                     * @return LogTopicID 日志主题ID
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置日志主题ID
                     * @param _logTopicID 日志主题ID
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
                     * 获取需过滤的接口名
                     * @return IgnoreOperationName 需过滤的接口名
                     * 
                     */
                    std::string GetIgnoreOperationName() const;

                    /**
                     * 设置需过滤的接口名
                     * @param _ignoreOperationName 需过滤的接口名
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
                     * 获取CLS日志集 | ES集群ID
                     * @return LogSet CLS日志集 | ES集群ID
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS日志集 | ES集群ID
                     * @param _logSet CLS日志集 | ES集群ID
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
                     * 获取探针每秒上报trace数
                     * @return TraceRateLimit 探针每秒上报trace数
                     * 
                     */
                    int64_t GetTraceRateLimit() const;

                    /**
                     * 设置探针每秒上报trace数
                     * @param _traceRateLimit 探针每秒上报trace数
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
                     * 获取是否开启线程剖析
                     * @return EnableSnapshot 是否开启线程剖析
                     * 
                     */
                    bool GetEnableSnapshot() const;

                    /**
                     * 设置是否开启线程剖析
                     * @param _enableSnapshot 是否开启线程剖析
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
                     * 获取线程剖析超时阈值
                     * @return SnapshotTimeout 线程剖析超时阈值
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置线程剖析超时阈值
                     * @param _snapshotTimeout 线程剖析超时阈值
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
                     * 获取是否开启agent
                     * @return AgentEnable 是否开启agent
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置是否开启agent
                     * @param _agentEnable 是否开启agent
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
                     * 获取组件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstrumentList 组件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置组件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instrumentList 组件列表
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
                     * 获取是否开启链路压缩
                     * @return TraceSquash 是否开启链路压缩
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置是否开启链路压缩
                     * @param _traceSquash 是否开启链路压缩
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
                     * 获取是否开启应用诊断开关
                     * @return EventEnable 是否开启应用诊断开关
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置是否开启应用诊断开关
                     * @param _eventEnable 是否开启应用诊断开关
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
                     * 获取探针接口相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentOperationConfigView 探针接口相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentOperationConfigView GetAgentOperationConfigView() const;

                    /**
                     * 设置探针接口相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentOperationConfigView 探针接口相关配置
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
                     * 获取是否开启应用日志配置
                     * @return EnableLogConfig 是否开启应用日志配置
                     * 
                     */
                    bool GetEnableLogConfig() const;

                    /**
                     * 设置是否开启应用日志配置
                     * @param _enableLogConfig 是否开启应用日志配置
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
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceID 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceID 应用ID
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
                     * 获取应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDashboardConfig 应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDashboardConfig 应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）
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
                     * 获取是否关联dashboard： 0 关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRelatedDashboard 是否关联dashboard： 0 关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置是否关联dashboard： 0 关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRelatedDashboard 是否关联dashboard： 0 关 1 开
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
                     * 获取dashboard ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DashboardTopicID dashboard ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置dashboard ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dashboardTopicID dashboard ID
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
                     * 获取是否开启应用级别配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableSecurityConfig 是否开启应用级别配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置是否开启应用级别配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableSecurityConfig 是否开启应用级别配置
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
                     * 获取是否开启组件漏洞检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInstrumentationVulnerabilityScan 是否开启组件漏洞检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置是否开启组件漏洞检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInstrumentationVulnerabilityScan 是否开启组件漏洞检测
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
                     * 获取是否开启SQL注入分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSqlInjectionAnalysis 是否开启SQL注入分析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置是否开启SQL注入分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSqlInjectionAnalysis 是否开启SQL注入分析
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
                     * 获取是否开启远程命令执行分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRemoteCommandExecutionAnalysis 是否开启远程命令执行分析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置是否开启远程命令执行分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRemoteCommandExecutionAnalysis 是否开启远程命令执行分析
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
                     * 获取是否开启内存马检测分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMemoryHijackingAnalysis 是否开启内存马检测分析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置是否开启内存马检测分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMemoryHijackingAnalysis 是否开启内存马检测分析
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
                     * 获取是否开启删除任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeleteAnyFileAnalysis 是否开启删除任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置是否开启删除任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeleteAnyFileAnalysis 是否开启删除任意文件检测（0-关闭，1-开启）
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
                     * 获取是否开启读取任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReadAnyFileAnalysis 是否开启读取任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置是否开启读取任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReadAnyFileAnalysis 是否开启读取任意文件检测（0-关闭，1-开启）
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
                     * 获取是否开启上传任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUploadAnyFileAnalysis 是否开启上传任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置是否开启上传任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUploadAnyFileAnalysis 是否开启上传任意文件检测（0-关闭，1-开启）
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
                     * 获取是否开启包含任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIncludeAnyFileAnalysis 是否开启包含任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置是否开启包含任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIncludeAnyFileAnalysis 是否开启包含任意文件检测（0-关闭，1-开启）
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
                     * 获取是否开启目录遍历检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDirectoryTraversalAnalysis 是否开启目录遍历检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置是否开启目录遍历检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDirectoryTraversalAnalysis 是否开启目录遍历检测（0-关闭，1-开启）
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
                     * 获取是否开启模板引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTemplateEngineInjectionAnalysis 是否开启模板引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置是否开启模板引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isTemplateEngineInjectionAnalysis 是否开启模板引擎注入检测（0-关闭，1-开启）
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
                     * 获取是否开启脚本引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsScriptEngineInjectionAnalysis 是否开启脚本引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置是否开启脚本引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isScriptEngineInjectionAnalysis 是否开启脚本引擎注入检测（0-关闭，1-开启）
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
                     * 获取是否开启表达式注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExpressionInjectionAnalysis 是否开启表达式注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置是否开启表达式注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isExpressionInjectionAnalysis 是否开启表达式注入检测（0-关闭，1-开启）
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
                     * 获取是否开启JNDI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsJNDIInjectionAnalysis 是否开启JNDI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsJNDIInjectionAnalysis() const;

                    /**
                     * 设置是否开启JNDI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isJNDIInjectionAnalysis 是否开启JNDI注入检测（0-关闭，1-开启）
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
                     * 获取是否开启JNI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsJNIInjectionAnalysis 是否开启JNI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsJNIInjectionAnalysis() const;

                    /**
                     * 设置是否开启JNI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isJNIInjectionAnalysis 是否开启JNI注入检测（0-关闭，1-开启）
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
                     * 获取是否开启Webshell后门检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWebshellBackdoorAnalysis 是否开启Webshell后门检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置是否开启Webshell后门检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWebshellBackdoorAnalysis 是否开启Webshell后门检测（0-关闭，1-开启）
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
                     * 获取是否开启反序列化检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeserializationAnalysis 是否开启反序列化检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置是否开启反序列化检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeserializationAnalysis 是否开启反序列化检测（0-关闭，1-开启）
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
                     * 获取接口名称自动收敛开关（0-关闭，1-开启）
                     * @return UrlAutoConvergenceEnable 接口名称自动收敛开关（0-关闭，1-开启）
                     * 
                     */
                    bool GetUrlAutoConvergenceEnable() const;

                    /**
                     * 设置接口名称自动收敛开关（0-关闭，1-开启）
                     * @param _urlAutoConvergenceEnable 接口名称自动收敛开关（0-关闭，1-开启）
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
                     * 获取URL长分段收敛阈值
                     * @return UrlLongSegmentThreshold URL长分段收敛阈值
                     * 
                     */
                    int64_t GetUrlLongSegmentThreshold() const;

                    /**
                     * 设置URL长分段收敛阈值
                     * @param _urlLongSegmentThreshold URL长分段收敛阈值
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
                     * 获取URL数字分段收敛阈值
                     * @return UrlNumberSegmentThreshold URL数字分段收敛阈值
                     * 
                     */
                    int64_t GetUrlNumberSegmentThreshold() const;

                    /**
                     * 设置URL数字分段收敛阈值
                     * @param _urlNumberSegmentThreshold URL数字分段收敛阈值
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
                     * 获取探针熔断内存阈值
                     * @return DisableMemoryUsed 探针熔断内存阈值
                     * 
                     */
                    int64_t GetDisableMemoryUsed() const;

                    /**
                     * 设置探针熔断内存阈值
                     * @param _disableMemoryUsed 探针熔断内存阈值
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
                     * 获取探针熔断CPU阈值
                     * @return DisableCpuUsed 探针熔断CPU阈值
                     * 
                     */
                    int64_t GetDisableCpuUsed() const;

                    /**
                     * 设置探针熔断CPU阈值
                     * @param _disableCpuUsed 探针熔断CPU阈值
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
                     * 获取是否开启SQL参数获取
                     * @return DbStatementParametersEnabled 是否开启SQL参数获取
                     * 
                     */
                    bool GetDbStatementParametersEnabled() const;

                    /**
                     * 设置是否开启SQL参数获取
                     * @param _dbStatementParametersEnabled 是否开启SQL参数获取
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
                     * 获取慢SQL阈值
                     * @return SlowSQLThresholds 慢SQL阈值
                     * 
                     */
                    std::vector<ApmTag> GetSlowSQLThresholds() const;

                    /**
                     * 设置慢SQL阈值
                     * @param _slowSQLThresholds 慢SQL阈值
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
                     * 获取是否开启脱敏规则
                     * @return EnableDesensitizationRule 是否开启脱敏规则
                     * 
                     */
                    int64_t GetEnableDesensitizationRule() const;

                    /**
                     * 设置是否开启脱敏规则
                     * @param _enableDesensitizationRule 是否开启脱敏规则
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
                     * 获取脱敏规则
                     * @return DesensitizationRule 脱敏规则
                     * 
                     */
                    std::string GetDesensitizationRule() const;

                    /**
                     * 设置脱敏规则
                     * @param _desensitizationRule 脱敏规则
                     * 
                     */
                    void SetDesensitizationRule(const std::string& _desensitizationRule);

                    /**
                     * 判断参数 DesensitizationRule 是否已赋值
                     * @return DesensitizationRule 是否已赋值
                     * 
                     */
                    bool DesensitizationRuleHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * URL收敛开关
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * URL收敛阈值
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * URL收敛正则
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * 异常过滤正则
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * 错误码过滤
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * 服务组件类型
                     */
                    std::string m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * URL排除正则
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * 日志来源
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 日志所在地域
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * 是否开启日志 0 关 1 开
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * 需过滤的接口名
                     */
                    std::string m_ignoreOperationName;
                    bool m_ignoreOperationNameHasBeenSet;

                    /**
                     * CLS日志集 | ES集群ID
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 探针每秒上报trace数
                     */
                    int64_t m_traceRateLimit;
                    bool m_traceRateLimitHasBeenSet;

                    /**
                     * 是否开启线程剖析
                     */
                    bool m_enableSnapshot;
                    bool m_enableSnapshotHasBeenSet;

                    /**
                     * 线程剖析超时阈值
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * 是否开启agent
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * 组件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * 是否开启链路压缩
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * 是否开启应用诊断开关
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * 探针接口相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentOperationConfigView m_agentOperationConfigView;
                    bool m_agentOperationConfigViewHasBeenSet;

                    /**
                     * 是否开启应用日志配置
                     */
                    bool m_enableLogConfig;
                    bool m_enableLogConfigHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 应用是否开启dashboard配置： false 关（与业务系统保持一致）/true 开（应用级配置）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * 是否关联dashboard： 0 关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * dashboard ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * 是否开启应用级别配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * 是否开启组件漏洞检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * 是否开启SQL注入分析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启远程命令执行分析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * 是否开启内存马检测分析
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 是否开启删除任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * 是否开启读取任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * 是否开启上传任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * 是否开启包含任意文件检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * 是否开启目录遍历检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * 是否开启模板引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启脚本引擎注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启表达式注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启JNDI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isJNDIInjectionAnalysis;
                    bool m_isJNDIInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启JNI注入检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isJNIInjectionAnalysis;
                    bool m_isJNIInjectionAnalysisHasBeenSet;

                    /**
                     * 是否开启Webshell后门检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * 是否开启反序列化检测（0-关闭，1-开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * 接口名称自动收敛开关（0-关闭，1-开启）
                     */
                    bool m_urlAutoConvergenceEnable;
                    bool m_urlAutoConvergenceEnableHasBeenSet;

                    /**
                     * URL长分段收敛阈值
                     */
                    int64_t m_urlLongSegmentThreshold;
                    bool m_urlLongSegmentThresholdHasBeenSet;

                    /**
                     * URL数字分段收敛阈值
                     */
                    int64_t m_urlNumberSegmentThreshold;
                    bool m_urlNumberSegmentThresholdHasBeenSet;

                    /**
                     * 探针熔断内存阈值
                     */
                    int64_t m_disableMemoryUsed;
                    bool m_disableMemoryUsedHasBeenSet;

                    /**
                     * 探针熔断CPU阈值
                     */
                    int64_t m_disableCpuUsed;
                    bool m_disableCpuUsedHasBeenSet;

                    /**
                     * 是否开启SQL参数获取
                     */
                    bool m_dbStatementParametersEnabled;
                    bool m_dbStatementParametersEnabledHasBeenSet;

                    /**
                     * 慢SQL阈值
                     */
                    std::vector<ApmTag> m_slowSQLThresholds;
                    bool m_slowSQLThresholdsHasBeenSet;

                    /**
                     * 是否开启脱敏规则
                     */
                    int64_t m_enableDesensitizationRule;
                    bool m_enableDesensitizationRuleHasBeenSet;

                    /**
                     * 脱敏规则
                     */
                    std::string m_desensitizationRule;
                    bool m_desensitizationRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPCONFIG_H_
