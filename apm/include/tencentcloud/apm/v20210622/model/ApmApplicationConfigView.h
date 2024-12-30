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
                     * 获取业务系统 ID
                     * @return InstanceKey 业务系统 ID
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceKey 业务系统 ID
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
                     * 获取应用名	
                     * @return ServiceName 应用名	
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名	
                     * @param _serviceName 应用名	
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
                     * 获取接口过滤
                     * @return OperationNameFilter 接口过滤
                     * 
                     */
                    std::string GetOperationNameFilter() const;

                    /**
                     * 设置接口过滤
                     * @param _operationNameFilter 接口过滤
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
                     * 获取错误类型过滤
                     * @return ExceptionFilter 错误类型过滤
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置错误类型过滤
                     * @param _exceptionFilter 错误类型过滤
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
                     * 获取HTTP 状态码过滤
                     * @return ErrorCodeFilter HTTP 状态码过滤
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置HTTP 状态码过滤
                     * @param _errorCodeFilter HTTP 状态码过滤
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
                     * 获取应用诊断开关（已废弃）
                     * @return EventEnable 应用诊断开关（已废弃）
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置应用诊断开关（已废弃）
                     * @param _eventEnable 应用诊断开关（已废弃）
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
                     * 获取URL 收敛开关 0 关 1 开
                     * @return UrlConvergenceSwitch URL 收敛开关 0 关 1 开
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置URL 收敛开关 0 关 1 开
                     * @param _urlConvergenceSwitch URL 收敛开关 0 关 1 开
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
                     * 获取URL 收敛阈值	
                     * @return UrlConvergenceThreshold URL 收敛阈值	
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置URL 收敛阈值	
                     * @param _urlConvergenceThreshold URL 收敛阈值	
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
                     * 获取URL 收敛规则正则	
                     * @return UrlConvergence URL 收敛规则正则	
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置URL 收敛规则正则	
                     * @param _urlConvergence URL 收敛规则正则	
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
                     * 获取URL 排除规则正则
                     * @return UrlExclude URL 排除规则正则
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置URL 排除规则正则
                     * @param _urlExclude URL 排除规则正则
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
                     * 获取日志集 
                     * @return LogSet 日志集 
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置日志集 
                     * @param _logSet 日志集 
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
                     * 获取日志主题
                     * @return LogTopicID 日志主题
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置日志主题
                     * @param _logTopicID 日志主题
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
                     * 获取方法栈快照开关 true 开启 false 关闭
                     * @return SnapshotEnable 方法栈快照开关 true 开启 false 关闭
                     * 
                     */
                    bool GetSnapshotEnable() const;

                    /**
                     * 设置方法栈快照开关 true 开启 false 关闭
                     * @param _snapshotEnable 方法栈快照开关 true 开启 false 关闭
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
                     * 获取慢调用监听触发阈值
                     * @return SnapshotTimeout 慢调用监听触发阈值
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置慢调用监听触发阈值
                     * @param _snapshotTimeout 慢调用监听触发阈值
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
                     * 获取探针总开关
                     * @return AgentEnable 探针总开关
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置探针总开关
                     * @param _agentEnable 探针总开关
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
                     * 获取组件列表开关（已废弃）
                     * @return InstrumentList 组件列表开关（已废弃）
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置组件列表开关（已废弃）
                     * @param _instrumentList 组件列表开关（已废弃）
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
                     * 获取链路压缩开关（已废弃）
                     * @return TraceSquash 链路压缩开关（已废弃）
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置链路压缩开关（已废弃）
                     * @param _traceSquash 链路压缩开关（已废弃）
                     * 
                     */
                    void SetTraceSquash(const bool& _traceSquash);

                    /**
                     * 判断参数 TraceSquash 是否已赋值
                     * @return TraceSquash 是否已赋值
                     * 
                     */
                    bool TraceSquashHasBeenSet() const;

                private:

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 应用名	
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 接口过滤
                     */
                    std::string m_operationNameFilter;
                    bool m_operationNameFilterHasBeenSet;

                    /**
                     * 错误类型过滤
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * HTTP 状态码过滤
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * 应用诊断开关（已废弃）
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * URL 收敛开关 0 关 1 开
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * URL 收敛阈值	
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * URL 收敛规则正则	
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * URL 排除规则正则
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * 是否开启日志 0 关 1 开
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志源	
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 日志集 
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 日志主题
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * 方法栈快照开关 true 开启 false 关闭
                     */
                    bool m_snapshotEnable;
                    bool m_snapshotEnableHasBeenSet;

                    /**
                     * 慢调用监听触发阈值
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * 探针总开关
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * 组件列表开关（已废弃）
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * 链路压缩开关（已废弃）
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
