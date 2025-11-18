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

#include <tencentcloud/apm/v20210622/model/ModifyApmApplicationConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ModifyApmApplicationConfigRequest::ModifyApmApplicationConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_urlConvergenceSwitchHasBeenSet(false),
    m_urlConvergenceThresholdHasBeenSet(false),
    m_exceptionFilterHasBeenSet(false),
    m_urlConvergenceHasBeenSet(false),
    m_errorCodeFilterHasBeenSet(false),
    m_urlExcludeHasBeenSet(false),
    m_isRelatedLogHasBeenSet(false),
    m_logRegionHasBeenSet(false),
    m_logTopicIDHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_ignoreOperationNameHasBeenSet(false),
    m_enableSnapshotHasBeenSet(false),
    m_snapshotTimeoutHasBeenSet(false),
    m_agentEnableHasBeenSet(false),
    m_traceSquashHasBeenSet(false),
    m_eventEnableHasBeenSet(false),
    m_instrumentListHasBeenSet(false),
    m_agentOperationConfigViewHasBeenSet(false),
    m_enableLogConfigHasBeenSet(false),
    m_enableDashboardConfigHasBeenSet(false),
    m_isRelatedDashboardHasBeenSet(false),
    m_dashboardTopicIDHasBeenSet(false),
    m_logIndexTypeHasBeenSet(false),
    m_logTraceIdKeyHasBeenSet(false),
    m_enableSecurityConfigHasBeenSet(false),
    m_isSqlInjectionAnalysisHasBeenSet(false),
    m_isInstrumentationVulnerabilityScanHasBeenSet(false),
    m_isRemoteCommandExecutionAnalysisHasBeenSet(false),
    m_isMemoryHijackingAnalysisHasBeenSet(false),
    m_isDeleteAnyFileAnalysisHasBeenSet(false),
    m_isReadAnyFileAnalysisHasBeenSet(false),
    m_isUploadAnyFileAnalysisHasBeenSet(false),
    m_isIncludeAnyFileAnalysisHasBeenSet(false),
    m_isDirectoryTraversalAnalysisHasBeenSet(false),
    m_isTemplateEngineInjectionAnalysisHasBeenSet(false),
    m_isScriptEngineInjectionAnalysisHasBeenSet(false),
    m_isExpressionInjectionAnalysisHasBeenSet(false),
    m_isJNDIInjectionAnalysisHasBeenSet(false),
    m_isJNIInjectionAnalysisHasBeenSet(false),
    m_isWebshellBackdoorAnalysisHasBeenSet(false),
    m_isDeserializationAnalysisHasBeenSet(false),
    m_urlAutoConvergenceEnableHasBeenSet(false),
    m_urlLongSegmentThresholdHasBeenSet(false),
    m_urlNumberSegmentThresholdHasBeenSet(false),
    m_disableMemoryUsedHasBeenSet(false),
    m_disableCpuUsedHasBeenSet(false)
{
}

string ModifyApmApplicationConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlConvergenceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergenceSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlConvergenceSwitch, allocator);
    }

    if (m_urlConvergenceThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergenceThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlConvergenceThreshold, allocator);
    }

    if (m_exceptionFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exceptionFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_urlConvergenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlConvergence.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_errorCodeFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_urlExcludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExclude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlExclude.c_str(), allocator).Move(), allocator);
    }

    if (m_isRelatedLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRelatedLog, allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreOperationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreOperationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ignoreOperationName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSnapshot, allocator);
    }

    if (m_snapshotTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snapshotTimeout, allocator);
    }

    if (m_agentEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentEnable, allocator);
    }

    if (m_traceSquashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceSquash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceSquash, allocator);
    }

    if (m_eventEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventEnable, allocator);
    }

    if (m_instrumentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstrumentList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instrumentList.begin(); itr != m_instrumentList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_agentOperationConfigViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentOperationConfigView";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentOperationConfigView.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableLogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableLogConfig, allocator);
    }

    if (m_enableDashboardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDashboardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDashboardConfig, allocator);
    }

    if (m_isRelatedDashboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedDashboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRelatedDashboard, allocator);
    }

    if (m_dashboardTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardTopicID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dashboardTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_logIndexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogIndexType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logIndexType, allocator);
    }

    if (m_logTraceIdKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTraceIdKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTraceIdKey.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSecurityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSecurityConfig, allocator);
    }

    if (m_isSqlInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSqlInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSqlInjectionAnalysis, allocator);
    }

    if (m_isInstrumentationVulnerabilityScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInstrumentationVulnerabilityScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInstrumentationVulnerabilityScan, allocator);
    }

    if (m_isRemoteCommandExecutionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteCommandExecutionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRemoteCommandExecutionAnalysis, allocator);
    }

    if (m_isMemoryHijackingAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMemoryHijackingAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMemoryHijackingAnalysis, allocator);
    }

    if (m_isDeleteAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteAnyFileAnalysis, allocator);
    }

    if (m_isReadAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReadAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isReadAnyFileAnalysis, allocator);
    }

    if (m_isUploadAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUploadAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUploadAnyFileAnalysis, allocator);
    }

    if (m_isIncludeAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludeAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIncludeAnyFileAnalysis, allocator);
    }

    if (m_isDirectoryTraversalAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDirectoryTraversalAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDirectoryTraversalAnalysis, allocator);
    }

    if (m_isTemplateEngineInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTemplateEngineInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isTemplateEngineInjectionAnalysis, allocator);
    }

    if (m_isScriptEngineInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScriptEngineInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isScriptEngineInjectionAnalysis, allocator);
    }

    if (m_isExpressionInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpressionInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExpressionInjectionAnalysis, allocator);
    }

    if (m_isJNDIInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJNDIInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isJNDIInjectionAnalysis, allocator);
    }

    if (m_isJNIInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJNIInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isJNIInjectionAnalysis, allocator);
    }

    if (m_isWebshellBackdoorAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebshellBackdoorAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWebshellBackdoorAnalysis, allocator);
    }

    if (m_isDeserializationAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeserializationAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeserializationAnalysis, allocator);
    }

    if (m_urlAutoConvergenceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlAutoConvergenceEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlAutoConvergenceEnable, allocator);
    }

    if (m_urlLongSegmentThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlLongSegmentThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlLongSegmentThreshold, allocator);
    }

    if (m_urlNumberSegmentThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlNumberSegmentThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlNumberSegmentThreshold, allocator);
    }

    if (m_disableMemoryUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableMemoryUsed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableMemoryUsed, allocator);
    }

    if (m_disableCpuUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCpuUsed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableCpuUsed, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApmApplicationConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApmApplicationConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyApmApplicationConfigRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetUrlConvergenceSwitch() const
{
    return m_urlConvergenceSwitch;
}

void ModifyApmApplicationConfigRequest::SetUrlConvergenceSwitch(const int64_t& _urlConvergenceSwitch)
{
    m_urlConvergenceSwitch = _urlConvergenceSwitch;
    m_urlConvergenceSwitchHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlConvergenceSwitchHasBeenSet() const
{
    return m_urlConvergenceSwitchHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetUrlConvergenceThreshold() const
{
    return m_urlConvergenceThreshold;
}

void ModifyApmApplicationConfigRequest::SetUrlConvergenceThreshold(const int64_t& _urlConvergenceThreshold)
{
    m_urlConvergenceThreshold = _urlConvergenceThreshold;
    m_urlConvergenceThresholdHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlConvergenceThresholdHasBeenSet() const
{
    return m_urlConvergenceThresholdHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetExceptionFilter() const
{
    return m_exceptionFilter;
}

void ModifyApmApplicationConfigRequest::SetExceptionFilter(const string& _exceptionFilter)
{
    m_exceptionFilter = _exceptionFilter;
    m_exceptionFilterHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::ExceptionFilterHasBeenSet() const
{
    return m_exceptionFilterHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetUrlConvergence() const
{
    return m_urlConvergence;
}

void ModifyApmApplicationConfigRequest::SetUrlConvergence(const string& _urlConvergence)
{
    m_urlConvergence = _urlConvergence;
    m_urlConvergenceHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlConvergenceHasBeenSet() const
{
    return m_urlConvergenceHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetErrorCodeFilter() const
{
    return m_errorCodeFilter;
}

void ModifyApmApplicationConfigRequest::SetErrorCodeFilter(const string& _errorCodeFilter)
{
    m_errorCodeFilter = _errorCodeFilter;
    m_errorCodeFilterHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::ErrorCodeFilterHasBeenSet() const
{
    return m_errorCodeFilterHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetUrlExclude() const
{
    return m_urlExclude;
}

void ModifyApmApplicationConfigRequest::SetUrlExclude(const string& _urlExclude)
{
    m_urlExclude = _urlExclude;
    m_urlExcludeHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlExcludeHasBeenSet() const
{
    return m_urlExcludeHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsRelatedLog() const
{
    return m_isRelatedLog;
}

void ModifyApmApplicationConfigRequest::SetIsRelatedLog(const int64_t& _isRelatedLog)
{
    m_isRelatedLog = _isRelatedLog;
    m_isRelatedLogHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsRelatedLogHasBeenSet() const
{
    return m_isRelatedLogHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetLogRegion() const
{
    return m_logRegion;
}

void ModifyApmApplicationConfigRequest::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetLogTopicID() const
{
    return m_logTopicID;
}

void ModifyApmApplicationConfigRequest::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetLogSet() const
{
    return m_logSet;
}

void ModifyApmApplicationConfigRequest::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetLogSource() const
{
    return m_logSource;
}

void ModifyApmApplicationConfigRequest::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetIgnoreOperationName() const
{
    return m_ignoreOperationName;
}

void ModifyApmApplicationConfigRequest::SetIgnoreOperationName(const string& _ignoreOperationName)
{
    m_ignoreOperationName = _ignoreOperationName;
    m_ignoreOperationNameHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IgnoreOperationNameHasBeenSet() const
{
    return m_ignoreOperationNameHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetEnableSnapshot() const
{
    return m_enableSnapshot;
}

void ModifyApmApplicationConfigRequest::SetEnableSnapshot(const bool& _enableSnapshot)
{
    m_enableSnapshot = _enableSnapshot;
    m_enableSnapshotHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::EnableSnapshotHasBeenSet() const
{
    return m_enableSnapshotHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetSnapshotTimeout() const
{
    return m_snapshotTimeout;
}

void ModifyApmApplicationConfigRequest::SetSnapshotTimeout(const int64_t& _snapshotTimeout)
{
    m_snapshotTimeout = _snapshotTimeout;
    m_snapshotTimeoutHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::SnapshotTimeoutHasBeenSet() const
{
    return m_snapshotTimeoutHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetAgentEnable() const
{
    return m_agentEnable;
}

void ModifyApmApplicationConfigRequest::SetAgentEnable(const bool& _agentEnable)
{
    m_agentEnable = _agentEnable;
    m_agentEnableHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::AgentEnableHasBeenSet() const
{
    return m_agentEnableHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetTraceSquash() const
{
    return m_traceSquash;
}

void ModifyApmApplicationConfigRequest::SetTraceSquash(const bool& _traceSquash)
{
    m_traceSquash = _traceSquash;
    m_traceSquashHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::TraceSquashHasBeenSet() const
{
    return m_traceSquashHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetEventEnable() const
{
    return m_eventEnable;
}

void ModifyApmApplicationConfigRequest::SetEventEnable(const bool& _eventEnable)
{
    m_eventEnable = _eventEnable;
    m_eventEnableHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::EventEnableHasBeenSet() const
{
    return m_eventEnableHasBeenSet;
}

vector<Instrument> ModifyApmApplicationConfigRequest::GetInstrumentList() const
{
    return m_instrumentList;
}

void ModifyApmApplicationConfigRequest::SetInstrumentList(const vector<Instrument>& _instrumentList)
{
    m_instrumentList = _instrumentList;
    m_instrumentListHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::InstrumentListHasBeenSet() const
{
    return m_instrumentListHasBeenSet;
}

AgentOperationConfigView ModifyApmApplicationConfigRequest::GetAgentOperationConfigView() const
{
    return m_agentOperationConfigView;
}

void ModifyApmApplicationConfigRequest::SetAgentOperationConfigView(const AgentOperationConfigView& _agentOperationConfigView)
{
    m_agentOperationConfigView = _agentOperationConfigView;
    m_agentOperationConfigViewHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::AgentOperationConfigViewHasBeenSet() const
{
    return m_agentOperationConfigViewHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetEnableLogConfig() const
{
    return m_enableLogConfig;
}

void ModifyApmApplicationConfigRequest::SetEnableLogConfig(const bool& _enableLogConfig)
{
    m_enableLogConfig = _enableLogConfig;
    m_enableLogConfigHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::EnableLogConfigHasBeenSet() const
{
    return m_enableLogConfigHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetEnableDashboardConfig() const
{
    return m_enableDashboardConfig;
}

void ModifyApmApplicationConfigRequest::SetEnableDashboardConfig(const bool& _enableDashboardConfig)
{
    m_enableDashboardConfig = _enableDashboardConfig;
    m_enableDashboardConfigHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::EnableDashboardConfigHasBeenSet() const
{
    return m_enableDashboardConfigHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsRelatedDashboard() const
{
    return m_isRelatedDashboard;
}

void ModifyApmApplicationConfigRequest::SetIsRelatedDashboard(const int64_t& _isRelatedDashboard)
{
    m_isRelatedDashboard = _isRelatedDashboard;
    m_isRelatedDashboardHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsRelatedDashboardHasBeenSet() const
{
    return m_isRelatedDashboardHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetDashboardTopicID() const
{
    return m_dashboardTopicID;
}

void ModifyApmApplicationConfigRequest::SetDashboardTopicID(const string& _dashboardTopicID)
{
    m_dashboardTopicID = _dashboardTopicID;
    m_dashboardTopicIDHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::DashboardTopicIDHasBeenSet() const
{
    return m_dashboardTopicIDHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetLogIndexType() const
{
    return m_logIndexType;
}

void ModifyApmApplicationConfigRequest::SetLogIndexType(const int64_t& _logIndexType)
{
    m_logIndexType = _logIndexType;
    m_logIndexTypeHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogIndexTypeHasBeenSet() const
{
    return m_logIndexTypeHasBeenSet;
}

string ModifyApmApplicationConfigRequest::GetLogTraceIdKey() const
{
    return m_logTraceIdKey;
}

void ModifyApmApplicationConfigRequest::SetLogTraceIdKey(const string& _logTraceIdKey)
{
    m_logTraceIdKey = _logTraceIdKey;
    m_logTraceIdKeyHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::LogTraceIdKeyHasBeenSet() const
{
    return m_logTraceIdKeyHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetEnableSecurityConfig() const
{
    return m_enableSecurityConfig;
}

void ModifyApmApplicationConfigRequest::SetEnableSecurityConfig(const bool& _enableSecurityConfig)
{
    m_enableSecurityConfig = _enableSecurityConfig;
    m_enableSecurityConfigHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::EnableSecurityConfigHasBeenSet() const
{
    return m_enableSecurityConfigHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsSqlInjectionAnalysis() const
{
    return m_isSqlInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis)
{
    m_isSqlInjectionAnalysis = _isSqlInjectionAnalysis;
    m_isSqlInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsSqlInjectionAnalysisHasBeenSet() const
{
    return m_isSqlInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsInstrumentationVulnerabilityScan() const
{
    return m_isInstrumentationVulnerabilityScan;
}

void ModifyApmApplicationConfigRequest::SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan)
{
    m_isInstrumentationVulnerabilityScan = _isInstrumentationVulnerabilityScan;
    m_isInstrumentationVulnerabilityScanHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsInstrumentationVulnerabilityScanHasBeenSet() const
{
    return m_isInstrumentationVulnerabilityScanHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsRemoteCommandExecutionAnalysis() const
{
    return m_isRemoteCommandExecutionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis)
{
    m_isRemoteCommandExecutionAnalysis = _isRemoteCommandExecutionAnalysis;
    m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsRemoteCommandExecutionAnalysisHasBeenSet() const
{
    return m_isRemoteCommandExecutionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsMemoryHijackingAnalysis() const
{
    return m_isMemoryHijackingAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis)
{
    m_isMemoryHijackingAnalysis = _isMemoryHijackingAnalysis;
    m_isMemoryHijackingAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsMemoryHijackingAnalysisHasBeenSet() const
{
    return m_isMemoryHijackingAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsDeleteAnyFileAnalysis() const
{
    return m_isDeleteAnyFileAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsDeleteAnyFileAnalysis(const int64_t& _isDeleteAnyFileAnalysis)
{
    m_isDeleteAnyFileAnalysis = _isDeleteAnyFileAnalysis;
    m_isDeleteAnyFileAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsDeleteAnyFileAnalysisHasBeenSet() const
{
    return m_isDeleteAnyFileAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsReadAnyFileAnalysis() const
{
    return m_isReadAnyFileAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsReadAnyFileAnalysis(const int64_t& _isReadAnyFileAnalysis)
{
    m_isReadAnyFileAnalysis = _isReadAnyFileAnalysis;
    m_isReadAnyFileAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsReadAnyFileAnalysisHasBeenSet() const
{
    return m_isReadAnyFileAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsUploadAnyFileAnalysis() const
{
    return m_isUploadAnyFileAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsUploadAnyFileAnalysis(const int64_t& _isUploadAnyFileAnalysis)
{
    m_isUploadAnyFileAnalysis = _isUploadAnyFileAnalysis;
    m_isUploadAnyFileAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsUploadAnyFileAnalysisHasBeenSet() const
{
    return m_isUploadAnyFileAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsIncludeAnyFileAnalysis() const
{
    return m_isIncludeAnyFileAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsIncludeAnyFileAnalysis(const int64_t& _isIncludeAnyFileAnalysis)
{
    m_isIncludeAnyFileAnalysis = _isIncludeAnyFileAnalysis;
    m_isIncludeAnyFileAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsIncludeAnyFileAnalysisHasBeenSet() const
{
    return m_isIncludeAnyFileAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsDirectoryTraversalAnalysis() const
{
    return m_isDirectoryTraversalAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsDirectoryTraversalAnalysis(const int64_t& _isDirectoryTraversalAnalysis)
{
    m_isDirectoryTraversalAnalysis = _isDirectoryTraversalAnalysis;
    m_isDirectoryTraversalAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsDirectoryTraversalAnalysisHasBeenSet() const
{
    return m_isDirectoryTraversalAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsTemplateEngineInjectionAnalysis() const
{
    return m_isTemplateEngineInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsTemplateEngineInjectionAnalysis(const int64_t& _isTemplateEngineInjectionAnalysis)
{
    m_isTemplateEngineInjectionAnalysis = _isTemplateEngineInjectionAnalysis;
    m_isTemplateEngineInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsTemplateEngineInjectionAnalysisHasBeenSet() const
{
    return m_isTemplateEngineInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsScriptEngineInjectionAnalysis() const
{
    return m_isScriptEngineInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsScriptEngineInjectionAnalysis(const int64_t& _isScriptEngineInjectionAnalysis)
{
    m_isScriptEngineInjectionAnalysis = _isScriptEngineInjectionAnalysis;
    m_isScriptEngineInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsScriptEngineInjectionAnalysisHasBeenSet() const
{
    return m_isScriptEngineInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsExpressionInjectionAnalysis() const
{
    return m_isExpressionInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsExpressionInjectionAnalysis(const int64_t& _isExpressionInjectionAnalysis)
{
    m_isExpressionInjectionAnalysis = _isExpressionInjectionAnalysis;
    m_isExpressionInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsExpressionInjectionAnalysisHasBeenSet() const
{
    return m_isExpressionInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsJNDIInjectionAnalysis() const
{
    return m_isJNDIInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsJNDIInjectionAnalysis(const int64_t& _isJNDIInjectionAnalysis)
{
    m_isJNDIInjectionAnalysis = _isJNDIInjectionAnalysis;
    m_isJNDIInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsJNDIInjectionAnalysisHasBeenSet() const
{
    return m_isJNDIInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsJNIInjectionAnalysis() const
{
    return m_isJNIInjectionAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsJNIInjectionAnalysis(const int64_t& _isJNIInjectionAnalysis)
{
    m_isJNIInjectionAnalysis = _isJNIInjectionAnalysis;
    m_isJNIInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsJNIInjectionAnalysisHasBeenSet() const
{
    return m_isJNIInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsWebshellBackdoorAnalysis() const
{
    return m_isWebshellBackdoorAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsWebshellBackdoorAnalysis(const int64_t& _isWebshellBackdoorAnalysis)
{
    m_isWebshellBackdoorAnalysis = _isWebshellBackdoorAnalysis;
    m_isWebshellBackdoorAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsWebshellBackdoorAnalysisHasBeenSet() const
{
    return m_isWebshellBackdoorAnalysisHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetIsDeserializationAnalysis() const
{
    return m_isDeserializationAnalysis;
}

void ModifyApmApplicationConfigRequest::SetIsDeserializationAnalysis(const int64_t& _isDeserializationAnalysis)
{
    m_isDeserializationAnalysis = _isDeserializationAnalysis;
    m_isDeserializationAnalysisHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::IsDeserializationAnalysisHasBeenSet() const
{
    return m_isDeserializationAnalysisHasBeenSet;
}

bool ModifyApmApplicationConfigRequest::GetUrlAutoConvergenceEnable() const
{
    return m_urlAutoConvergenceEnable;
}

void ModifyApmApplicationConfigRequest::SetUrlAutoConvergenceEnable(const bool& _urlAutoConvergenceEnable)
{
    m_urlAutoConvergenceEnable = _urlAutoConvergenceEnable;
    m_urlAutoConvergenceEnableHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlAutoConvergenceEnableHasBeenSet() const
{
    return m_urlAutoConvergenceEnableHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetUrlLongSegmentThreshold() const
{
    return m_urlLongSegmentThreshold;
}

void ModifyApmApplicationConfigRequest::SetUrlLongSegmentThreshold(const int64_t& _urlLongSegmentThreshold)
{
    m_urlLongSegmentThreshold = _urlLongSegmentThreshold;
    m_urlLongSegmentThresholdHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlLongSegmentThresholdHasBeenSet() const
{
    return m_urlLongSegmentThresholdHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetUrlNumberSegmentThreshold() const
{
    return m_urlNumberSegmentThreshold;
}

void ModifyApmApplicationConfigRequest::SetUrlNumberSegmentThreshold(const int64_t& _urlNumberSegmentThreshold)
{
    m_urlNumberSegmentThreshold = _urlNumberSegmentThreshold;
    m_urlNumberSegmentThresholdHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::UrlNumberSegmentThresholdHasBeenSet() const
{
    return m_urlNumberSegmentThresholdHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetDisableMemoryUsed() const
{
    return m_disableMemoryUsed;
}

void ModifyApmApplicationConfigRequest::SetDisableMemoryUsed(const int64_t& _disableMemoryUsed)
{
    m_disableMemoryUsed = _disableMemoryUsed;
    m_disableMemoryUsedHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::DisableMemoryUsedHasBeenSet() const
{
    return m_disableMemoryUsedHasBeenSet;
}

int64_t ModifyApmApplicationConfigRequest::GetDisableCpuUsed() const
{
    return m_disableCpuUsed;
}

void ModifyApmApplicationConfigRequest::SetDisableCpuUsed(const int64_t& _disableCpuUsed)
{
    m_disableCpuUsed = _disableCpuUsed;
    m_disableCpuUsedHasBeenSet = true;
}

bool ModifyApmApplicationConfigRequest::DisableCpuUsedHasBeenSet() const
{
    return m_disableCpuUsedHasBeenSet;
}


