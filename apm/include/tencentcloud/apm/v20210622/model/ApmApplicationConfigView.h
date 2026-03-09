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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Instrument.h>
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
                * 应用相关的配置列表项
                */
                class ApmApplicationConfigView : public AbstractModel
                {
                public:
                    ApmApplicationConfigView();
                    ~ApmApplicationConfigView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceKey <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceKey <p>业务系统 ID</p>
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
                     * 获取<p>应用名</p>
                     * @return ServiceName <p>应用名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>应用名</p>
                     * @param _serviceName <p>应用名</p>
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
                     * 获取<p>接口过滤</p>
                     * @return OperationNameFilter <p>接口过滤</p>
                     * 
                     */
                    std::string GetOperationNameFilter() const;

                    /**
                     * 设置<p>接口过滤</p>
                     * @param _operationNameFilter <p>接口过滤</p>
                     * 
                     */
                    void SetOperationNameFilter(const std::string& _operationNameFilter);

                    /**
                     * 判断参数 OperationNameFilter 是否已赋值
                     * @return OperationNameFilter 是否已赋值
                     * 
                     */
                    bool OperationNameFilterHasBeenSet() const;

                    /**
                     * 获取<p>错误类型过滤</p>
                     * @return ExceptionFilter <p>错误类型过滤</p>
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置<p>错误类型过滤</p>
                     * @param _exceptionFilter <p>错误类型过滤</p>
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
                     * 获取<p>HTTP 状态码过滤</p>
                     * @return ErrorCodeFilter <p>HTTP 状态码过滤</p>
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置<p>HTTP 状态码过滤</p>
                     * @param _errorCodeFilter <p>HTTP 状态码过滤</p>
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
                     * 获取<p>应用诊断开关（已废弃）</p>
                     * @return EventEnable <p>应用诊断开关（已废弃）</p>
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置<p>应用诊断开关（已废弃）</p>
                     * @param _eventEnable <p>应用诊断开关（已废弃）</p>
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
                     * 获取<p>URL 收敛开关 0 关 1 开</p>
                     * @return UrlConvergenceSwitch <p>URL 收敛开关 0 关 1 开</p>
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置<p>URL 收敛开关 0 关 1 开</p>
                     * @param _urlConvergenceSwitch <p>URL 收敛开关 0 关 1 开</p>
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
                     * 获取<p>URL 收敛阈值</p>
                     * @return UrlConvergenceThreshold <p>URL 收敛阈值</p>
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置<p>URL 收敛阈值</p>
                     * @param _urlConvergenceThreshold <p>URL 收敛阈值</p>
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
                     * 获取<p>URL 收敛规则正则</p>
                     * @return UrlConvergence <p>URL 收敛规则正则</p>
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置<p>URL 收敛规则正则</p>
                     * @param _urlConvergence <p>URL 收敛规则正则</p>
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
                     * 获取<p>URL 排除规则正则</p>
                     * @return UrlExclude <p>URL 排除规则正则</p>
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置<p>URL 排除规则正则</p>
                     * @param _urlExclude <p>URL 排除规则正则</p>
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
                     * 获取<p>日志源</p>
                     * @return LogSource <p>日志源</p>
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置<p>日志源</p>
                     * @param _logSource <p>日志源</p>
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
                     * 获取<p>日志集</p>
                     * @return LogSet <p>日志集</p>
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置<p>日志集</p>
                     * @param _logSet <p>日志集</p>
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
                     * 获取<p>日志主题</p>
                     * @return LogTopicID <p>日志主题</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>日志主题</p>
                     * @param _logTopicID <p>日志主题</p>
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
                     * 获取<p>方法栈快照开关 true 开启 false 关闭</p>
                     * @return SnapshotEnable <p>方法栈快照开关 true 开启 false 关闭</p>
                     * 
                     */
                    bool GetSnapshotEnable() const;

                    /**
                     * 设置<p>方法栈快照开关 true 开启 false 关闭</p>
                     * @param _snapshotEnable <p>方法栈快照开关 true 开启 false 关闭</p>
                     * 
                     */
                    void SetSnapshotEnable(const bool& _snapshotEnable);

                    /**
                     * 判断参数 SnapshotEnable 是否已赋值
                     * @return SnapshotEnable 是否已赋值
                     * 
                     */
                    bool SnapshotEnableHasBeenSet() const;

                    /**
                     * 获取<p>慢调用监听触发阈值</p>
                     * @return SnapshotTimeout <p>慢调用监听触发阈值</p>
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置<p>慢调用监听触发阈值</p>
                     * @param _snapshotTimeout <p>慢调用监听触发阈值</p>
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
                     * 获取<p>探针总开关</p>
                     * @return AgentEnable <p>探针总开关</p>
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置<p>探针总开关</p>
                     * @param _agentEnable <p>探针总开关</p>
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
                     * 获取<p>组件列表开关（已废弃）</p>
                     * @return InstrumentList <p>组件列表开关（已废弃）</p>
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置<p>组件列表开关（已废弃）</p>
                     * @param _instrumentList <p>组件列表开关（已废弃）</p>
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
                     * 获取<p>链路压缩开关（已废弃）</p>
                     * @return TraceSquash <p>链路压缩开关（已废弃）</p>
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置<p>链路压缩开关（已废弃）</p>
                     * @param _traceSquash <p>链路压缩开关（已废弃）</p>
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
                     * 获取<p>链路过滤配置</p>
                     * @return AgentIgnoreOperation <p>链路过滤配置</p>
                     * 
                     */
                    std::string GetAgentIgnoreOperation() const;

                    /**
                     * 设置<p>链路过滤配置</p>
                     * @param _agentIgnoreOperation <p>链路过滤配置</p>
                     * 
                     */
                    void SetAgentIgnoreOperation(const std::string& _agentIgnoreOperation);

                    /**
                     * 判断参数 AgentIgnoreOperation 是否已赋值
                     * @return AgentIgnoreOperation 是否已赋值
                     * 
                     */
                    bool AgentIgnoreOperationHasBeenSet() const;

                    /**
                     * 获取<p>开启应用安全开关</p>
                     * @return EnableSecurityConfig <p>开启应用安全开关</p>
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置<p>开启应用安全开关</p>
                     * @param _enableSecurityConfig <p>开启应用安全开关</p>
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
                     * 获取<p>是否开启SQL注入检测</p>
                     * @return IsSqlInjectionAnalysis <p>是否开启SQL注入检测</p>
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启SQL注入检测</p>
                     * @param _isSqlInjectionAnalysis <p>是否开启SQL注入检测</p>
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
                     * 获取<p>是否开启组件漏洞检测</p>
                     * @return IsInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测</p>
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置<p>是否开启组件漏洞检测</p>
                     * @param _isInstrumentationVulnerabilityScan <p>是否开启组件漏洞检测</p>
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
                     * 获取<p>是否开启远程命令执行检测</p>
                     * @return IsRemoteCommandExecutionAnalysis <p>是否开启远程命令执行检测</p>
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置<p>是否开启远程命令执行检测</p>
                     * @param _isRemoteCommandExecutionAnalysis <p>是否开启远程命令执行检测</p>
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
                     * 获取<p>是否开启内存泄漏检测</p>
                     * @return IsMemoryHijackingAnalysis <p>是否开启内存泄漏检测</p>
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置<p>是否开启内存泄漏检测</p>
                     * @param _isMemoryHijackingAnalysis <p>是否开启内存泄漏检测</p>
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
                     * 获取<p>是否开启删除任意文件检测</p>
                     * @return IsDeleteAnyFileAnalysis <p>是否开启删除任意文件检测</p>
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启删除任意文件检测</p>
                     * @param _isDeleteAnyFileAnalysis <p>是否开启删除任意文件检测</p>
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
                     * 获取<p>是否开启读取任意文件检测</p>
                     * @return IsReadAnyFileAnalysis <p>是否开启读取任意文件检测</p>
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启读取任意文件检测</p>
                     * @param _isReadAnyFileAnalysis <p>是否开启读取任意文件检测</p>
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
                     * 获取<p>是否开启上传任意文件检测</p>
                     * @return IsUploadAnyFileAnalysis <p>是否开启上传任意文件检测</p>
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启上传任意文件检测</p>
                     * @param _isUploadAnyFileAnalysis <p>是否开启上传任意文件检测</p>
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
                     * 获取<p>是否开启包含任意文件检测</p>
                     * @return IsIncludeAnyFileAnalysis <p>是否开启包含任意文件检测</p>
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置<p>是否开启包含任意文件检测</p>
                     * @param _isIncludeAnyFileAnalysis <p>是否开启包含任意文件检测</p>
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
                     * 获取<p>是否开启目录遍历检测</p>
                     * @return IsDirectoryTraversalAnalysis <p>是否开启目录遍历检测</p>
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置<p>是否开启目录遍历检测</p>
                     * @param _isDirectoryTraversalAnalysis <p>是否开启目录遍历检测</p>
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
                     * 获取<p>是否开启模板引擎注入检测</p>
                     * @return IsTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测</p>
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启模板引擎注入检测</p>
                     * @param _isTemplateEngineInjectionAnalysis <p>是否开启模板引擎注入检测</p>
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
                     * 获取<p>是否开启脚本引擎注入检测</p>
                     * @return IsScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测</p>
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启脚本引擎注入检测</p>
                     * @param _isScriptEngineInjectionAnalysis <p>是否开启脚本引擎注入检测</p>
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
                     * 获取<p>是否开启表达式注入检测</p>
                     * @return IsExpressionInjectionAnalysis <p>是否开启表达式注入检测</p>
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启表达式注入检测</p>
                     * @param _isExpressionInjectionAnalysis <p>是否开启表达式注入检测</p>
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
                     * 获取<p>是否开启JNDI注入检测</p>
                     * @return IsJndiInjectionAnalysis <p>是否开启JNDI注入检测</p>
                     * 
                     */
                    int64_t GetIsJndiInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNDI注入检测</p>
                     * @param _isJndiInjectionAnalysis <p>是否开启JNDI注入检测</p>
                     * 
                     */
                    void SetIsJndiInjectionAnalysis(const int64_t& _isJndiInjectionAnalysis);

                    /**
                     * 判断参数 IsJndiInjectionAnalysis 是否已赋值
                     * @return IsJndiInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJndiInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启JNI注入检测</p>
                     * @return IsJniInjectionAnalysis <p>是否开启JNI注入检测</p>
                     * 
                     */
                    int64_t GetIsJniInjectionAnalysis() const;

                    /**
                     * 设置<p>是否开启JNI注入检测</p>
                     * @param _isJniInjectionAnalysis <p>是否开启JNI注入检测</p>
                     * 
                     */
                    void SetIsJniInjectionAnalysis(const int64_t& _isJniInjectionAnalysis);

                    /**
                     * 判断参数 IsJniInjectionAnalysis 是否已赋值
                     * @return IsJniInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJniInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Webshell后门检测</p>
                     * @return IsWebshellBackdoorAnalysis <p>是否开启Webshell后门检测</p>
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置<p>是否开启Webshell后门检测</p>
                     * @param _isWebshellBackdoorAnalysis <p>是否开启Webshell后门检测</p>
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
                     * 获取<p>是否开启反序列化检测</p>
                     * @return IsDeserializationAnalysis <p>是否开启反序列化检测</p>
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置<p>是否开启反序列化检测</p>
                     * @param _isDeserializationAnalysis <p>是否开启反序列化检测</p>
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
                     * 获取<p>是否开启控制台开关</p>
                     * @return EnableDashboardConfig <p>是否开启控制台开关</p>
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置<p>是否开启控制台开关</p>
                     * @param _enableDashboardConfig <p>是否开启控制台开关</p>
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
                     * 获取<p>是否关联Dashboard</p>
                     * @return IsRelatedDashboard <p>是否关联Dashboard</p>
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置<p>是否关联Dashboard</p>
                     * @param _isRelatedDashboard <p>是否关联Dashboard</p>
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
                     * 获取<p>Dashboard topic</p>
                     * @return DashboardTopicID <p>Dashboard topic</p>
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置<p>Dashboard topic</p>
                     * @param _dashboardTopicID <p>Dashboard topic</p>
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
                     * 获取<p>自动性能剖析任务配置</p>
                     * @return AutoProfilingConfig <p>自动性能剖析任务配置</p>
                     * 
                     */
                    AutoProfilingConfig GetAutoProfilingConfig() const;

                    /**
                     * 设置<p>自动性能剖析任务配置</p>
                     * @param _autoProfilingConfig <p>自动性能剖析任务配置</p>
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
                     * 获取<p>阈值配置开关</p>
                     * @return EnableThresholdConfig <p>阈值配置开关</p>
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>阈值配置开关</p>
                     * @param _enableThresholdConfig <p>阈值配置开关</p>
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
                     * 获取<p>错误率阈值</p><p>单位：%</p>
                     * @return ErrRateThreshold <p>错误率阈值</p><p>单位：%</p>
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>错误率阈值</p><p>单位：%</p>
                     * @param _errRateThreshold <p>错误率阈值</p><p>单位：%</p>
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
                     * 获取<p>响应时间预警阈值</p><p>单位：ms</p>
                     * @return ResponseDurationWarningThreshold <p>响应时间预警阈值</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>响应时间预警阈值</p><p>单位：ms</p>
                     * @param _responseDurationWarningThreshold <p>响应时间预警阈值</p><p>单位：ms</p>
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
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>应用名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>接口过滤</p>
                     */
                    std::string m_operationNameFilter;
                    bool m_operationNameFilterHasBeenSet;

                    /**
                     * <p>错误类型过滤</p>
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * <p>HTTP 状态码过滤</p>
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * <p>应用诊断开关（已废弃）</p>
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * <p>URL 收敛开关 0 关 1 开</p>
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * <p>URL 收敛阈值</p>
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * <p>URL 收敛规则正则</p>
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * <p>URL 排除规则正则</p>
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * <p>是否开启日志 0 关 1 开</p>
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * <p>日志源</p>
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * <p>日志集</p>
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * <p>日志主题</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>方法栈快照开关 true 开启 false 关闭</p>
                     */
                    bool m_snapshotEnable;
                    bool m_snapshotEnableHasBeenSet;

                    /**
                     * <p>慢调用监听触发阈值</p>
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * <p>探针总开关</p>
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * <p>组件列表开关（已废弃）</p>
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * <p>链路压缩开关（已废弃）</p>
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * <p>链路过滤配置</p>
                     */
                    std::string m_agentIgnoreOperation;
                    bool m_agentIgnoreOperationHasBeenSet;

                    /**
                     * <p>开启应用安全开关</p>
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * <p>是否开启SQL注入检测</p>
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启组件漏洞检测</p>
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * <p>是否开启远程命令执行检测</p>
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启内存泄漏检测</p>
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * <p>是否开启删除任意文件检测</p>
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启读取任意文件检测</p>
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启上传任意文件检测</p>
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启包含任意文件检测</p>
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>是否开启目录遍历检测</p>
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * <p>是否开启模板引擎注入检测</p>
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启脚本引擎注入检测</p>
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启表达式注入检测</p>
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNDI注入检测</p>
                     */
                    int64_t m_isJndiInjectionAnalysis;
                    bool m_isJndiInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启JNI注入检测</p>
                     */
                    int64_t m_isJniInjectionAnalysis;
                    bool m_isJniInjectionAnalysisHasBeenSet;

                    /**
                     * <p>是否开启Webshell后门检测</p>
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * <p>是否开启反序列化检测</p>
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * <p>是否开启控制台开关</p>
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * <p>是否关联Dashboard</p>
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * <p>Dashboard topic</p>
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

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
                     * <p>自动性能剖析任务配置</p>
                     */
                    AutoProfilingConfig m_autoProfilingConfig;
                    bool m_autoProfilingConfigHasBeenSet;

                    /**
                     * <p>阈值配置开关</p>
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>错误率阈值</p><p>单位：%</p>
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>响应时间预警阈值</p><p>单位：ms</p>
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
