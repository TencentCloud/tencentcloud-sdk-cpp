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

#include <tencentcloud/apm/v20210622/model/ApmAppConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmAppConfig::ApmAppConfig() :
    m_instanceKeyHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_urlConvergenceSwitchHasBeenSet(false),
    m_urlConvergenceThresholdHasBeenSet(false),
    m_urlConvergenceHasBeenSet(false),
    m_exceptionFilterHasBeenSet(false),
    m_errorCodeFilterHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_urlExcludeHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_logRegionHasBeenSet(false),
    m_isRelatedLogHasBeenSet(false),
    m_logTopicIDHasBeenSet(false),
    m_ignoreOperationNameHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_traceRateLimitHasBeenSet(false),
    m_enableSnapshotHasBeenSet(false),
    m_snapshotTimeoutHasBeenSet(false),
    m_agentEnableHasBeenSet(false),
    m_instrumentListHasBeenSet(false),
    m_traceSquashHasBeenSet(false),
    m_eventEnableHasBeenSet(false),
    m_agentOperationConfigViewHasBeenSet(false),
    m_enableLogConfigHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
    m_enableDashboardConfigHasBeenSet(false),
    m_isRelatedDashboardHasBeenSet(false),
    m_dashboardTopicIDHasBeenSet(false),
    m_enableSecurityConfigHasBeenSet(false),
    m_isInstrumentationVulnerabilityScanHasBeenSet(false),
    m_isSqlInjectionAnalysisHasBeenSet(false),
    m_isRemoteCommandExecutionAnalysisHasBeenSet(false),
    m_isMemoryHijackingAnalysisHasBeenSet(false),
    m_logIndexTypeHasBeenSet(false),
    m_logTraceIdKeyHasBeenSet(false),
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

CoreInternalOutcome ApmAppConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergenceSwitch") && !value["UrlConvergenceSwitch"].IsNull())
    {
        if (!value["UrlConvergenceSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlConvergenceSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergenceSwitch = value["UrlConvergenceSwitch"].GetInt64();
        m_urlConvergenceSwitchHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergenceThreshold") && !value["UrlConvergenceThreshold"].IsNull())
    {
        if (!value["UrlConvergenceThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlConvergenceThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergenceThreshold = value["UrlConvergenceThreshold"].GetInt64();
        m_urlConvergenceThresholdHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergence") && !value["UrlConvergence"].IsNull())
    {
        if (!value["UrlConvergence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlConvergence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergence = string(value["UrlConvergence"].GetString());
        m_urlConvergenceHasBeenSet = true;
    }

    if (value.HasMember("ExceptionFilter") && !value["ExceptionFilter"].IsNull())
    {
        if (!value["ExceptionFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.ExceptionFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionFilter = string(value["ExceptionFilter"].GetString());
        m_exceptionFilterHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeFilter") && !value["ErrorCodeFilter"].IsNull())
    {
        if (!value["ErrorCodeFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.ErrorCodeFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeFilter = string(value["ErrorCodeFilter"].GetString());
        m_errorCodeFilterHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.Components` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_components = string(value["Components"].GetString());
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("UrlExclude") && !value["UrlExclude"].IsNull())
    {
        if (!value["UrlExclude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlExclude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlExclude = string(value["UrlExclude"].GetString());
        m_urlExcludeHasBeenSet = true;
    }

    if (value.HasMember("LogSource") && !value["LogSource"].IsNull())
    {
        if (!value["LogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSource = string(value["LogSource"].GetString());
        m_logSourceHasBeenSet = true;
    }

    if (value.HasMember("LogRegion") && !value["LogRegion"].IsNull())
    {
        if (!value["LogRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegion = string(value["LogRegion"].GetString());
        m_logRegionHasBeenSet = true;
    }

    if (value.HasMember("IsRelatedLog") && !value["IsRelatedLog"].IsNull())
    {
        if (!value["IsRelatedLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsRelatedLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRelatedLog = value["IsRelatedLog"].GetInt64();
        m_isRelatedLogHasBeenSet = true;
    }

    if (value.HasMember("LogTopicID") && !value["LogTopicID"].IsNull())
    {
        if (!value["LogTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicID = string(value["LogTopicID"].GetString());
        m_logTopicIDHasBeenSet = true;
    }

    if (value.HasMember("IgnoreOperationName") && !value["IgnoreOperationName"].IsNull())
    {
        if (!value["IgnoreOperationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IgnoreOperationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreOperationName = string(value["IgnoreOperationName"].GetString());
        m_ignoreOperationNameHasBeenSet = true;
    }

    if (value.HasMember("LogSet") && !value["LogSet"].IsNull())
    {
        if (!value["LogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSet = string(value["LogSet"].GetString());
        m_logSetHasBeenSet = true;
    }

    if (value.HasMember("TraceRateLimit") && !value["TraceRateLimit"].IsNull())
    {
        if (!value["TraceRateLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.TraceRateLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_traceRateLimit = value["TraceRateLimit"].GetInt64();
        m_traceRateLimitHasBeenSet = true;
    }

    if (value.HasMember("EnableSnapshot") && !value["EnableSnapshot"].IsNull())
    {
        if (!value["EnableSnapshot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.EnableSnapshot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSnapshot = value["EnableSnapshot"].GetBool();
        m_enableSnapshotHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTimeout") && !value["SnapshotTimeout"].IsNull())
    {
        if (!value["SnapshotTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.SnapshotTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTimeout = value["SnapshotTimeout"].GetInt64();
        m_snapshotTimeoutHasBeenSet = true;
    }

    if (value.HasMember("AgentEnable") && !value["AgentEnable"].IsNull())
    {
        if (!value["AgentEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.AgentEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_agentEnable = value["AgentEnable"].GetBool();
        m_agentEnableHasBeenSet = true;
    }

    if (value.HasMember("InstrumentList") && !value["InstrumentList"].IsNull())
    {
        if (!value["InstrumentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.InstrumentList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstrumentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Instrument item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instrumentList.push_back(item);
        }
        m_instrumentListHasBeenSet = true;
    }

    if (value.HasMember("TraceSquash") && !value["TraceSquash"].IsNull())
    {
        if (!value["TraceSquash"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.TraceSquash` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_traceSquash = value["TraceSquash"].GetBool();
        m_traceSquashHasBeenSet = true;
    }

    if (value.HasMember("EventEnable") && !value["EventEnable"].IsNull())
    {
        if (!value["EventEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.EventEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_eventEnable = value["EventEnable"].GetBool();
        m_eventEnableHasBeenSet = true;
    }

    if (value.HasMember("AgentOperationConfigView") && !value["AgentOperationConfigView"].IsNull())
    {
        if (!value["AgentOperationConfigView"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.AgentOperationConfigView` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentOperationConfigView.Deserialize(value["AgentOperationConfigView"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentOperationConfigViewHasBeenSet = true;
    }

    if (value.HasMember("EnableLogConfig") && !value["EnableLogConfig"].IsNull())
    {
        if (!value["EnableLogConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.EnableLogConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLogConfig = value["EnableLogConfig"].GetBool();
        m_enableLogConfigHasBeenSet = true;
    }

    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("EnableDashboardConfig") && !value["EnableDashboardConfig"].IsNull())
    {
        if (!value["EnableDashboardConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.EnableDashboardConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDashboardConfig = value["EnableDashboardConfig"].GetBool();
        m_enableDashboardConfigHasBeenSet = true;
    }

    if (value.HasMember("IsRelatedDashboard") && !value["IsRelatedDashboard"].IsNull())
    {
        if (!value["IsRelatedDashboard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsRelatedDashboard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRelatedDashboard = value["IsRelatedDashboard"].GetInt64();
        m_isRelatedDashboardHasBeenSet = true;
    }

    if (value.HasMember("DashboardTopicID") && !value["DashboardTopicID"].IsNull())
    {
        if (!value["DashboardTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.DashboardTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardTopicID = string(value["DashboardTopicID"].GetString());
        m_dashboardTopicIDHasBeenSet = true;
    }

    if (value.HasMember("EnableSecurityConfig") && !value["EnableSecurityConfig"].IsNull())
    {
        if (!value["EnableSecurityConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.EnableSecurityConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSecurityConfig = value["EnableSecurityConfig"].GetBool();
        m_enableSecurityConfigHasBeenSet = true;
    }

    if (value.HasMember("IsInstrumentationVulnerabilityScan") && !value["IsInstrumentationVulnerabilityScan"].IsNull())
    {
        if (!value["IsInstrumentationVulnerabilityScan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsInstrumentationVulnerabilityScan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInstrumentationVulnerabilityScan = value["IsInstrumentationVulnerabilityScan"].GetInt64();
        m_isInstrumentationVulnerabilityScanHasBeenSet = true;
    }

    if (value.HasMember("IsSqlInjectionAnalysis") && !value["IsSqlInjectionAnalysis"].IsNull())
    {
        if (!value["IsSqlInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsSqlInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSqlInjectionAnalysis = value["IsSqlInjectionAnalysis"].GetInt64();
        m_isSqlInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsRemoteCommandExecutionAnalysis") && !value["IsRemoteCommandExecutionAnalysis"].IsNull())
    {
        if (!value["IsRemoteCommandExecutionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsRemoteCommandExecutionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRemoteCommandExecutionAnalysis = value["IsRemoteCommandExecutionAnalysis"].GetInt64();
        m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsMemoryHijackingAnalysis") && !value["IsMemoryHijackingAnalysis"].IsNull())
    {
        if (!value["IsMemoryHijackingAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsMemoryHijackingAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMemoryHijackingAnalysis = value["IsMemoryHijackingAnalysis"].GetInt64();
        m_isMemoryHijackingAnalysisHasBeenSet = true;
    }

    if (value.HasMember("LogIndexType") && !value["LogIndexType"].IsNull())
    {
        if (!value["LogIndexType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogIndexType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logIndexType = value["LogIndexType"].GetInt64();
        m_logIndexTypeHasBeenSet = true;
    }

    if (value.HasMember("LogTraceIdKey") && !value["LogTraceIdKey"].IsNull())
    {
        if (!value["LogTraceIdKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.LogTraceIdKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTraceIdKey = string(value["LogTraceIdKey"].GetString());
        m_logTraceIdKeyHasBeenSet = true;
    }

    if (value.HasMember("IsDeleteAnyFileAnalysis") && !value["IsDeleteAnyFileAnalysis"].IsNull())
    {
        if (!value["IsDeleteAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsDeleteAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDeleteAnyFileAnalysis = value["IsDeleteAnyFileAnalysis"].GetInt64();
        m_isDeleteAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsReadAnyFileAnalysis") && !value["IsReadAnyFileAnalysis"].IsNull())
    {
        if (!value["IsReadAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsReadAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReadAnyFileAnalysis = value["IsReadAnyFileAnalysis"].GetInt64();
        m_isReadAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsUploadAnyFileAnalysis") && !value["IsUploadAnyFileAnalysis"].IsNull())
    {
        if (!value["IsUploadAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsUploadAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUploadAnyFileAnalysis = value["IsUploadAnyFileAnalysis"].GetInt64();
        m_isUploadAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsIncludeAnyFileAnalysis") && !value["IsIncludeAnyFileAnalysis"].IsNull())
    {
        if (!value["IsIncludeAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsIncludeAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isIncludeAnyFileAnalysis = value["IsIncludeAnyFileAnalysis"].GetInt64();
        m_isIncludeAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsDirectoryTraversalAnalysis") && !value["IsDirectoryTraversalAnalysis"].IsNull())
    {
        if (!value["IsDirectoryTraversalAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsDirectoryTraversalAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDirectoryTraversalAnalysis = value["IsDirectoryTraversalAnalysis"].GetInt64();
        m_isDirectoryTraversalAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsTemplateEngineInjectionAnalysis") && !value["IsTemplateEngineInjectionAnalysis"].IsNull())
    {
        if (!value["IsTemplateEngineInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsTemplateEngineInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTemplateEngineInjectionAnalysis = value["IsTemplateEngineInjectionAnalysis"].GetInt64();
        m_isTemplateEngineInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsScriptEngineInjectionAnalysis") && !value["IsScriptEngineInjectionAnalysis"].IsNull())
    {
        if (!value["IsScriptEngineInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsScriptEngineInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isScriptEngineInjectionAnalysis = value["IsScriptEngineInjectionAnalysis"].GetInt64();
        m_isScriptEngineInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsExpressionInjectionAnalysis") && !value["IsExpressionInjectionAnalysis"].IsNull())
    {
        if (!value["IsExpressionInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsExpressionInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isExpressionInjectionAnalysis = value["IsExpressionInjectionAnalysis"].GetInt64();
        m_isExpressionInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsJNDIInjectionAnalysis") && !value["IsJNDIInjectionAnalysis"].IsNull())
    {
        if (!value["IsJNDIInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsJNDIInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isJNDIInjectionAnalysis = value["IsJNDIInjectionAnalysis"].GetInt64();
        m_isJNDIInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsJNIInjectionAnalysis") && !value["IsJNIInjectionAnalysis"].IsNull())
    {
        if (!value["IsJNIInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsJNIInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isJNIInjectionAnalysis = value["IsJNIInjectionAnalysis"].GetInt64();
        m_isJNIInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsWebshellBackdoorAnalysis") && !value["IsWebshellBackdoorAnalysis"].IsNull())
    {
        if (!value["IsWebshellBackdoorAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsWebshellBackdoorAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isWebshellBackdoorAnalysis = value["IsWebshellBackdoorAnalysis"].GetInt64();
        m_isWebshellBackdoorAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsDeserializationAnalysis") && !value["IsDeserializationAnalysis"].IsNull())
    {
        if (!value["IsDeserializationAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.IsDeserializationAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDeserializationAnalysis = value["IsDeserializationAnalysis"].GetInt64();
        m_isDeserializationAnalysisHasBeenSet = true;
    }

    if (value.HasMember("UrlAutoConvergenceEnable") && !value["UrlAutoConvergenceEnable"].IsNull())
    {
        if (!value["UrlAutoConvergenceEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlAutoConvergenceEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_urlAutoConvergenceEnable = value["UrlAutoConvergenceEnable"].GetBool();
        m_urlAutoConvergenceEnableHasBeenSet = true;
    }

    if (value.HasMember("UrlLongSegmentThreshold") && !value["UrlLongSegmentThreshold"].IsNull())
    {
        if (!value["UrlLongSegmentThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlLongSegmentThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlLongSegmentThreshold = value["UrlLongSegmentThreshold"].GetInt64();
        m_urlLongSegmentThresholdHasBeenSet = true;
    }

    if (value.HasMember("UrlNumberSegmentThreshold") && !value["UrlNumberSegmentThreshold"].IsNull())
    {
        if (!value["UrlNumberSegmentThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.UrlNumberSegmentThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlNumberSegmentThreshold = value["UrlNumberSegmentThreshold"].GetInt64();
        m_urlNumberSegmentThresholdHasBeenSet = true;
    }

    if (value.HasMember("DisableMemoryUsed") && !value["DisableMemoryUsed"].IsNull())
    {
        if (!value["DisableMemoryUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.DisableMemoryUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableMemoryUsed = value["DisableMemoryUsed"].GetInt64();
        m_disableMemoryUsedHasBeenSet = true;
    }

    if (value.HasMember("DisableCpuUsed") && !value["DisableCpuUsed"].IsNull())
    {
        if (!value["DisableCpuUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAppConfig.DisableCpuUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableCpuUsed = value["DisableCpuUsed"].GetInt64();
        m_disableCpuUsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmAppConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlConvergenceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergenceSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlConvergenceSwitch, allocator);
    }

    if (m_urlConvergenceThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergenceThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlConvergenceThreshold, allocator);
    }

    if (m_urlConvergenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlConvergence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlConvergence.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_components.c_str(), allocator).Move(), allocator);
    }

    if (m_urlExcludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlExclude.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isRelatedLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRelatedLog, allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreOperationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreOperationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreOperationName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_traceRateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceRateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceRateLimit, allocator);
    }

    if (m_enableSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSnapshot, allocator);
    }

    if (m_snapshotTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotTimeout, allocator);
    }

    if (m_agentEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentEnable, allocator);
    }

    if (m_instrumentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstrumentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instrumentList.begin(); itr != m_instrumentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceSquashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceSquash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceSquash, allocator);
    }

    if (m_eventEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventEnable, allocator);
    }

    if (m_agentOperationConfigViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentOperationConfigView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentOperationConfigView.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableLogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLogConfig, allocator);
    }

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDashboardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDashboardConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDashboardConfig, allocator);
    }

    if (m_isRelatedDashboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedDashboard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRelatedDashboard, allocator);
    }

    if (m_dashboardTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardTopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSecurityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSecurityConfig, allocator);
    }

    if (m_isInstrumentationVulnerabilityScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInstrumentationVulnerabilityScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInstrumentationVulnerabilityScan, allocator);
    }

    if (m_isSqlInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSqlInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSqlInjectionAnalysis, allocator);
    }

    if (m_isRemoteCommandExecutionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteCommandExecutionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRemoteCommandExecutionAnalysis, allocator);
    }

    if (m_isMemoryHijackingAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMemoryHijackingAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMemoryHijackingAnalysis, allocator);
    }

    if (m_logIndexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogIndexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logIndexType, allocator);
    }

    if (m_logTraceIdKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTraceIdKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTraceIdKey.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeleteAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeleteAnyFileAnalysis, allocator);
    }

    if (m_isReadAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReadAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReadAnyFileAnalysis, allocator);
    }

    if (m_isUploadAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUploadAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUploadAnyFileAnalysis, allocator);
    }

    if (m_isIncludeAnyFileAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludeAnyFileAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIncludeAnyFileAnalysis, allocator);
    }

    if (m_isDirectoryTraversalAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDirectoryTraversalAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDirectoryTraversalAnalysis, allocator);
    }

    if (m_isTemplateEngineInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTemplateEngineInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTemplateEngineInjectionAnalysis, allocator);
    }

    if (m_isScriptEngineInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScriptEngineInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScriptEngineInjectionAnalysis, allocator);
    }

    if (m_isExpressionInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpressionInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpressionInjectionAnalysis, allocator);
    }

    if (m_isJNDIInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJNDIInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJNDIInjectionAnalysis, allocator);
    }

    if (m_isJNIInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJNIInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJNIInjectionAnalysis, allocator);
    }

    if (m_isWebshellBackdoorAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebshellBackdoorAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWebshellBackdoorAnalysis, allocator);
    }

    if (m_isDeserializationAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeserializationAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeserializationAnalysis, allocator);
    }

    if (m_urlAutoConvergenceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlAutoConvergenceEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlAutoConvergenceEnable, allocator);
    }

    if (m_urlLongSegmentThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlLongSegmentThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlLongSegmentThreshold, allocator);
    }

    if (m_urlNumberSegmentThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlNumberSegmentThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlNumberSegmentThreshold, allocator);
    }

    if (m_disableMemoryUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableMemoryUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableMemoryUsed, allocator);
    }

    if (m_disableCpuUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCpuUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableCpuUsed, allocator);
    }

}


string ApmAppConfig::GetInstanceKey() const
{
    return m_instanceKey;
}

void ApmAppConfig::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool ApmAppConfig::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string ApmAppConfig::GetServiceName() const
{
    return m_serviceName;
}

void ApmAppConfig::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApmAppConfig::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ApmAppConfig::GetUrlConvergenceSwitch() const
{
    return m_urlConvergenceSwitch;
}

void ApmAppConfig::SetUrlConvergenceSwitch(const int64_t& _urlConvergenceSwitch)
{
    m_urlConvergenceSwitch = _urlConvergenceSwitch;
    m_urlConvergenceSwitchHasBeenSet = true;
}

bool ApmAppConfig::UrlConvergenceSwitchHasBeenSet() const
{
    return m_urlConvergenceSwitchHasBeenSet;
}

int64_t ApmAppConfig::GetUrlConvergenceThreshold() const
{
    return m_urlConvergenceThreshold;
}

void ApmAppConfig::SetUrlConvergenceThreshold(const int64_t& _urlConvergenceThreshold)
{
    m_urlConvergenceThreshold = _urlConvergenceThreshold;
    m_urlConvergenceThresholdHasBeenSet = true;
}

bool ApmAppConfig::UrlConvergenceThresholdHasBeenSet() const
{
    return m_urlConvergenceThresholdHasBeenSet;
}

string ApmAppConfig::GetUrlConvergence() const
{
    return m_urlConvergence;
}

void ApmAppConfig::SetUrlConvergence(const string& _urlConvergence)
{
    m_urlConvergence = _urlConvergence;
    m_urlConvergenceHasBeenSet = true;
}

bool ApmAppConfig::UrlConvergenceHasBeenSet() const
{
    return m_urlConvergenceHasBeenSet;
}

string ApmAppConfig::GetExceptionFilter() const
{
    return m_exceptionFilter;
}

void ApmAppConfig::SetExceptionFilter(const string& _exceptionFilter)
{
    m_exceptionFilter = _exceptionFilter;
    m_exceptionFilterHasBeenSet = true;
}

bool ApmAppConfig::ExceptionFilterHasBeenSet() const
{
    return m_exceptionFilterHasBeenSet;
}

string ApmAppConfig::GetErrorCodeFilter() const
{
    return m_errorCodeFilter;
}

void ApmAppConfig::SetErrorCodeFilter(const string& _errorCodeFilter)
{
    m_errorCodeFilter = _errorCodeFilter;
    m_errorCodeFilterHasBeenSet = true;
}

bool ApmAppConfig::ErrorCodeFilterHasBeenSet() const
{
    return m_errorCodeFilterHasBeenSet;
}

string ApmAppConfig::GetComponents() const
{
    return m_components;
}

void ApmAppConfig::SetComponents(const string& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ApmAppConfig::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string ApmAppConfig::GetUrlExclude() const
{
    return m_urlExclude;
}

void ApmAppConfig::SetUrlExclude(const string& _urlExclude)
{
    m_urlExclude = _urlExclude;
    m_urlExcludeHasBeenSet = true;
}

bool ApmAppConfig::UrlExcludeHasBeenSet() const
{
    return m_urlExcludeHasBeenSet;
}

string ApmAppConfig::GetLogSource() const
{
    return m_logSource;
}

void ApmAppConfig::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool ApmAppConfig::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

string ApmAppConfig::GetLogRegion() const
{
    return m_logRegion;
}

void ApmAppConfig::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool ApmAppConfig::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

int64_t ApmAppConfig::GetIsRelatedLog() const
{
    return m_isRelatedLog;
}

void ApmAppConfig::SetIsRelatedLog(const int64_t& _isRelatedLog)
{
    m_isRelatedLog = _isRelatedLog;
    m_isRelatedLogHasBeenSet = true;
}

bool ApmAppConfig::IsRelatedLogHasBeenSet() const
{
    return m_isRelatedLogHasBeenSet;
}

string ApmAppConfig::GetLogTopicID() const
{
    return m_logTopicID;
}

void ApmAppConfig::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool ApmAppConfig::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

string ApmAppConfig::GetIgnoreOperationName() const
{
    return m_ignoreOperationName;
}

void ApmAppConfig::SetIgnoreOperationName(const string& _ignoreOperationName)
{
    m_ignoreOperationName = _ignoreOperationName;
    m_ignoreOperationNameHasBeenSet = true;
}

bool ApmAppConfig::IgnoreOperationNameHasBeenSet() const
{
    return m_ignoreOperationNameHasBeenSet;
}

string ApmAppConfig::GetLogSet() const
{
    return m_logSet;
}

void ApmAppConfig::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ApmAppConfig::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

int64_t ApmAppConfig::GetTraceRateLimit() const
{
    return m_traceRateLimit;
}

void ApmAppConfig::SetTraceRateLimit(const int64_t& _traceRateLimit)
{
    m_traceRateLimit = _traceRateLimit;
    m_traceRateLimitHasBeenSet = true;
}

bool ApmAppConfig::TraceRateLimitHasBeenSet() const
{
    return m_traceRateLimitHasBeenSet;
}

bool ApmAppConfig::GetEnableSnapshot() const
{
    return m_enableSnapshot;
}

void ApmAppConfig::SetEnableSnapshot(const bool& _enableSnapshot)
{
    m_enableSnapshot = _enableSnapshot;
    m_enableSnapshotHasBeenSet = true;
}

bool ApmAppConfig::EnableSnapshotHasBeenSet() const
{
    return m_enableSnapshotHasBeenSet;
}

int64_t ApmAppConfig::GetSnapshotTimeout() const
{
    return m_snapshotTimeout;
}

void ApmAppConfig::SetSnapshotTimeout(const int64_t& _snapshotTimeout)
{
    m_snapshotTimeout = _snapshotTimeout;
    m_snapshotTimeoutHasBeenSet = true;
}

bool ApmAppConfig::SnapshotTimeoutHasBeenSet() const
{
    return m_snapshotTimeoutHasBeenSet;
}

bool ApmAppConfig::GetAgentEnable() const
{
    return m_agentEnable;
}

void ApmAppConfig::SetAgentEnable(const bool& _agentEnable)
{
    m_agentEnable = _agentEnable;
    m_agentEnableHasBeenSet = true;
}

bool ApmAppConfig::AgentEnableHasBeenSet() const
{
    return m_agentEnableHasBeenSet;
}

vector<Instrument> ApmAppConfig::GetInstrumentList() const
{
    return m_instrumentList;
}

void ApmAppConfig::SetInstrumentList(const vector<Instrument>& _instrumentList)
{
    m_instrumentList = _instrumentList;
    m_instrumentListHasBeenSet = true;
}

bool ApmAppConfig::InstrumentListHasBeenSet() const
{
    return m_instrumentListHasBeenSet;
}

bool ApmAppConfig::GetTraceSquash() const
{
    return m_traceSquash;
}

void ApmAppConfig::SetTraceSquash(const bool& _traceSquash)
{
    m_traceSquash = _traceSquash;
    m_traceSquashHasBeenSet = true;
}

bool ApmAppConfig::TraceSquashHasBeenSet() const
{
    return m_traceSquashHasBeenSet;
}

bool ApmAppConfig::GetEventEnable() const
{
    return m_eventEnable;
}

void ApmAppConfig::SetEventEnable(const bool& _eventEnable)
{
    m_eventEnable = _eventEnable;
    m_eventEnableHasBeenSet = true;
}

bool ApmAppConfig::EventEnableHasBeenSet() const
{
    return m_eventEnableHasBeenSet;
}

AgentOperationConfigView ApmAppConfig::GetAgentOperationConfigView() const
{
    return m_agentOperationConfigView;
}

void ApmAppConfig::SetAgentOperationConfigView(const AgentOperationConfigView& _agentOperationConfigView)
{
    m_agentOperationConfigView = _agentOperationConfigView;
    m_agentOperationConfigViewHasBeenSet = true;
}

bool ApmAppConfig::AgentOperationConfigViewHasBeenSet() const
{
    return m_agentOperationConfigViewHasBeenSet;
}

bool ApmAppConfig::GetEnableLogConfig() const
{
    return m_enableLogConfig;
}

void ApmAppConfig::SetEnableLogConfig(const bool& _enableLogConfig)
{
    m_enableLogConfig = _enableLogConfig;
    m_enableLogConfigHasBeenSet = true;
}

bool ApmAppConfig::EnableLogConfigHasBeenSet() const
{
    return m_enableLogConfigHasBeenSet;
}

string ApmAppConfig::GetServiceID() const
{
    return m_serviceID;
}

void ApmAppConfig::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool ApmAppConfig::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

bool ApmAppConfig::GetEnableDashboardConfig() const
{
    return m_enableDashboardConfig;
}

void ApmAppConfig::SetEnableDashboardConfig(const bool& _enableDashboardConfig)
{
    m_enableDashboardConfig = _enableDashboardConfig;
    m_enableDashboardConfigHasBeenSet = true;
}

bool ApmAppConfig::EnableDashboardConfigHasBeenSet() const
{
    return m_enableDashboardConfigHasBeenSet;
}

int64_t ApmAppConfig::GetIsRelatedDashboard() const
{
    return m_isRelatedDashboard;
}

void ApmAppConfig::SetIsRelatedDashboard(const int64_t& _isRelatedDashboard)
{
    m_isRelatedDashboard = _isRelatedDashboard;
    m_isRelatedDashboardHasBeenSet = true;
}

bool ApmAppConfig::IsRelatedDashboardHasBeenSet() const
{
    return m_isRelatedDashboardHasBeenSet;
}

string ApmAppConfig::GetDashboardTopicID() const
{
    return m_dashboardTopicID;
}

void ApmAppConfig::SetDashboardTopicID(const string& _dashboardTopicID)
{
    m_dashboardTopicID = _dashboardTopicID;
    m_dashboardTopicIDHasBeenSet = true;
}

bool ApmAppConfig::DashboardTopicIDHasBeenSet() const
{
    return m_dashboardTopicIDHasBeenSet;
}

bool ApmAppConfig::GetEnableSecurityConfig() const
{
    return m_enableSecurityConfig;
}

void ApmAppConfig::SetEnableSecurityConfig(const bool& _enableSecurityConfig)
{
    m_enableSecurityConfig = _enableSecurityConfig;
    m_enableSecurityConfigHasBeenSet = true;
}

bool ApmAppConfig::EnableSecurityConfigHasBeenSet() const
{
    return m_enableSecurityConfigHasBeenSet;
}

int64_t ApmAppConfig::GetIsInstrumentationVulnerabilityScan() const
{
    return m_isInstrumentationVulnerabilityScan;
}

void ApmAppConfig::SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan)
{
    m_isInstrumentationVulnerabilityScan = _isInstrumentationVulnerabilityScan;
    m_isInstrumentationVulnerabilityScanHasBeenSet = true;
}

bool ApmAppConfig::IsInstrumentationVulnerabilityScanHasBeenSet() const
{
    return m_isInstrumentationVulnerabilityScanHasBeenSet;
}

int64_t ApmAppConfig::GetIsSqlInjectionAnalysis() const
{
    return m_isSqlInjectionAnalysis;
}

void ApmAppConfig::SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis)
{
    m_isSqlInjectionAnalysis = _isSqlInjectionAnalysis;
    m_isSqlInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsSqlInjectionAnalysisHasBeenSet() const
{
    return m_isSqlInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsRemoteCommandExecutionAnalysis() const
{
    return m_isRemoteCommandExecutionAnalysis;
}

void ApmAppConfig::SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis)
{
    m_isRemoteCommandExecutionAnalysis = _isRemoteCommandExecutionAnalysis;
    m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsRemoteCommandExecutionAnalysisHasBeenSet() const
{
    return m_isRemoteCommandExecutionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsMemoryHijackingAnalysis() const
{
    return m_isMemoryHijackingAnalysis;
}

void ApmAppConfig::SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis)
{
    m_isMemoryHijackingAnalysis = _isMemoryHijackingAnalysis;
    m_isMemoryHijackingAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsMemoryHijackingAnalysisHasBeenSet() const
{
    return m_isMemoryHijackingAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetLogIndexType() const
{
    return m_logIndexType;
}

void ApmAppConfig::SetLogIndexType(const int64_t& _logIndexType)
{
    m_logIndexType = _logIndexType;
    m_logIndexTypeHasBeenSet = true;
}

bool ApmAppConfig::LogIndexTypeHasBeenSet() const
{
    return m_logIndexTypeHasBeenSet;
}

string ApmAppConfig::GetLogTraceIdKey() const
{
    return m_logTraceIdKey;
}

void ApmAppConfig::SetLogTraceIdKey(const string& _logTraceIdKey)
{
    m_logTraceIdKey = _logTraceIdKey;
    m_logTraceIdKeyHasBeenSet = true;
}

bool ApmAppConfig::LogTraceIdKeyHasBeenSet() const
{
    return m_logTraceIdKeyHasBeenSet;
}

int64_t ApmAppConfig::GetIsDeleteAnyFileAnalysis() const
{
    return m_isDeleteAnyFileAnalysis;
}

void ApmAppConfig::SetIsDeleteAnyFileAnalysis(const int64_t& _isDeleteAnyFileAnalysis)
{
    m_isDeleteAnyFileAnalysis = _isDeleteAnyFileAnalysis;
    m_isDeleteAnyFileAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsDeleteAnyFileAnalysisHasBeenSet() const
{
    return m_isDeleteAnyFileAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsReadAnyFileAnalysis() const
{
    return m_isReadAnyFileAnalysis;
}

void ApmAppConfig::SetIsReadAnyFileAnalysis(const int64_t& _isReadAnyFileAnalysis)
{
    m_isReadAnyFileAnalysis = _isReadAnyFileAnalysis;
    m_isReadAnyFileAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsReadAnyFileAnalysisHasBeenSet() const
{
    return m_isReadAnyFileAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsUploadAnyFileAnalysis() const
{
    return m_isUploadAnyFileAnalysis;
}

void ApmAppConfig::SetIsUploadAnyFileAnalysis(const int64_t& _isUploadAnyFileAnalysis)
{
    m_isUploadAnyFileAnalysis = _isUploadAnyFileAnalysis;
    m_isUploadAnyFileAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsUploadAnyFileAnalysisHasBeenSet() const
{
    return m_isUploadAnyFileAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsIncludeAnyFileAnalysis() const
{
    return m_isIncludeAnyFileAnalysis;
}

void ApmAppConfig::SetIsIncludeAnyFileAnalysis(const int64_t& _isIncludeAnyFileAnalysis)
{
    m_isIncludeAnyFileAnalysis = _isIncludeAnyFileAnalysis;
    m_isIncludeAnyFileAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsIncludeAnyFileAnalysisHasBeenSet() const
{
    return m_isIncludeAnyFileAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsDirectoryTraversalAnalysis() const
{
    return m_isDirectoryTraversalAnalysis;
}

void ApmAppConfig::SetIsDirectoryTraversalAnalysis(const int64_t& _isDirectoryTraversalAnalysis)
{
    m_isDirectoryTraversalAnalysis = _isDirectoryTraversalAnalysis;
    m_isDirectoryTraversalAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsDirectoryTraversalAnalysisHasBeenSet() const
{
    return m_isDirectoryTraversalAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsTemplateEngineInjectionAnalysis() const
{
    return m_isTemplateEngineInjectionAnalysis;
}

void ApmAppConfig::SetIsTemplateEngineInjectionAnalysis(const int64_t& _isTemplateEngineInjectionAnalysis)
{
    m_isTemplateEngineInjectionAnalysis = _isTemplateEngineInjectionAnalysis;
    m_isTemplateEngineInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsTemplateEngineInjectionAnalysisHasBeenSet() const
{
    return m_isTemplateEngineInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsScriptEngineInjectionAnalysis() const
{
    return m_isScriptEngineInjectionAnalysis;
}

void ApmAppConfig::SetIsScriptEngineInjectionAnalysis(const int64_t& _isScriptEngineInjectionAnalysis)
{
    m_isScriptEngineInjectionAnalysis = _isScriptEngineInjectionAnalysis;
    m_isScriptEngineInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsScriptEngineInjectionAnalysisHasBeenSet() const
{
    return m_isScriptEngineInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsExpressionInjectionAnalysis() const
{
    return m_isExpressionInjectionAnalysis;
}

void ApmAppConfig::SetIsExpressionInjectionAnalysis(const int64_t& _isExpressionInjectionAnalysis)
{
    m_isExpressionInjectionAnalysis = _isExpressionInjectionAnalysis;
    m_isExpressionInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsExpressionInjectionAnalysisHasBeenSet() const
{
    return m_isExpressionInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsJNDIInjectionAnalysis() const
{
    return m_isJNDIInjectionAnalysis;
}

void ApmAppConfig::SetIsJNDIInjectionAnalysis(const int64_t& _isJNDIInjectionAnalysis)
{
    m_isJNDIInjectionAnalysis = _isJNDIInjectionAnalysis;
    m_isJNDIInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsJNDIInjectionAnalysisHasBeenSet() const
{
    return m_isJNDIInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsJNIInjectionAnalysis() const
{
    return m_isJNIInjectionAnalysis;
}

void ApmAppConfig::SetIsJNIInjectionAnalysis(const int64_t& _isJNIInjectionAnalysis)
{
    m_isJNIInjectionAnalysis = _isJNIInjectionAnalysis;
    m_isJNIInjectionAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsJNIInjectionAnalysisHasBeenSet() const
{
    return m_isJNIInjectionAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsWebshellBackdoorAnalysis() const
{
    return m_isWebshellBackdoorAnalysis;
}

void ApmAppConfig::SetIsWebshellBackdoorAnalysis(const int64_t& _isWebshellBackdoorAnalysis)
{
    m_isWebshellBackdoorAnalysis = _isWebshellBackdoorAnalysis;
    m_isWebshellBackdoorAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsWebshellBackdoorAnalysisHasBeenSet() const
{
    return m_isWebshellBackdoorAnalysisHasBeenSet;
}

int64_t ApmAppConfig::GetIsDeserializationAnalysis() const
{
    return m_isDeserializationAnalysis;
}

void ApmAppConfig::SetIsDeserializationAnalysis(const int64_t& _isDeserializationAnalysis)
{
    m_isDeserializationAnalysis = _isDeserializationAnalysis;
    m_isDeserializationAnalysisHasBeenSet = true;
}

bool ApmAppConfig::IsDeserializationAnalysisHasBeenSet() const
{
    return m_isDeserializationAnalysisHasBeenSet;
}

bool ApmAppConfig::GetUrlAutoConvergenceEnable() const
{
    return m_urlAutoConvergenceEnable;
}

void ApmAppConfig::SetUrlAutoConvergenceEnable(const bool& _urlAutoConvergenceEnable)
{
    m_urlAutoConvergenceEnable = _urlAutoConvergenceEnable;
    m_urlAutoConvergenceEnableHasBeenSet = true;
}

bool ApmAppConfig::UrlAutoConvergenceEnableHasBeenSet() const
{
    return m_urlAutoConvergenceEnableHasBeenSet;
}

int64_t ApmAppConfig::GetUrlLongSegmentThreshold() const
{
    return m_urlLongSegmentThreshold;
}

void ApmAppConfig::SetUrlLongSegmentThreshold(const int64_t& _urlLongSegmentThreshold)
{
    m_urlLongSegmentThreshold = _urlLongSegmentThreshold;
    m_urlLongSegmentThresholdHasBeenSet = true;
}

bool ApmAppConfig::UrlLongSegmentThresholdHasBeenSet() const
{
    return m_urlLongSegmentThresholdHasBeenSet;
}

int64_t ApmAppConfig::GetUrlNumberSegmentThreshold() const
{
    return m_urlNumberSegmentThreshold;
}

void ApmAppConfig::SetUrlNumberSegmentThreshold(const int64_t& _urlNumberSegmentThreshold)
{
    m_urlNumberSegmentThreshold = _urlNumberSegmentThreshold;
    m_urlNumberSegmentThresholdHasBeenSet = true;
}

bool ApmAppConfig::UrlNumberSegmentThresholdHasBeenSet() const
{
    return m_urlNumberSegmentThresholdHasBeenSet;
}

int64_t ApmAppConfig::GetDisableMemoryUsed() const
{
    return m_disableMemoryUsed;
}

void ApmAppConfig::SetDisableMemoryUsed(const int64_t& _disableMemoryUsed)
{
    m_disableMemoryUsed = _disableMemoryUsed;
    m_disableMemoryUsedHasBeenSet = true;
}

bool ApmAppConfig::DisableMemoryUsedHasBeenSet() const
{
    return m_disableMemoryUsedHasBeenSet;
}

int64_t ApmAppConfig::GetDisableCpuUsed() const
{
    return m_disableCpuUsed;
}

void ApmAppConfig::SetDisableCpuUsed(const int64_t& _disableCpuUsed)
{
    m_disableCpuUsed = _disableCpuUsed;
    m_disableCpuUsedHasBeenSet = true;
}

bool ApmAppConfig::DisableCpuUsedHasBeenSet() const
{
    return m_disableCpuUsedHasBeenSet;
}

