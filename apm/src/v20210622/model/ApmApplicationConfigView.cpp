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

#include <tencentcloud/apm/v20210622/model/ApmApplicationConfigView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmApplicationConfigView::ApmApplicationConfigView() :
    m_instanceKeyHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_operationNameFilterHasBeenSet(false),
    m_exceptionFilterHasBeenSet(false),
    m_errorCodeFilterHasBeenSet(false),
    m_eventEnableHasBeenSet(false),
    m_urlConvergenceSwitchHasBeenSet(false),
    m_urlConvergenceThresholdHasBeenSet(false),
    m_urlConvergenceHasBeenSet(false),
    m_urlExcludeHasBeenSet(false),
    m_isRelatedLogHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_logTopicIDHasBeenSet(false),
    m_snapshotEnableHasBeenSet(false),
    m_snapshotTimeoutHasBeenSet(false),
    m_agentEnableHasBeenSet(false),
    m_instrumentListHasBeenSet(false),
    m_traceSquashHasBeenSet(false),
    m_agentIgnoreOperationHasBeenSet(false),
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
    m_isJndiInjectionAnalysisHasBeenSet(false),
    m_isJniInjectionAnalysisHasBeenSet(false),
    m_isWebshellBackdoorAnalysisHasBeenSet(false),
    m_isDeserializationAnalysisHasBeenSet(false),
    m_enableDashboardConfigHasBeenSet(false),
    m_isRelatedDashboardHasBeenSet(false),
    m_dashboardTopicIDHasBeenSet(false),
    m_disableMemoryUsedHasBeenSet(false),
    m_disableCpuUsedHasBeenSet(false),
    m_dbStatementParametersEnabledHasBeenSet(false),
    m_slowSQLThresholdsHasBeenSet(false),
    m_enableDesensitizationRuleHasBeenSet(false),
    m_desensitizationRuleHasBeenSet(false),
    m_autoProfilingConfigHasBeenSet(false),
    m_enableThresholdConfigHasBeenSet(false),
    m_errRateThresholdHasBeenSet(false),
    m_responseDurationWarningThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ApmApplicationConfigView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("OperationNameFilter") && !value["OperationNameFilter"].IsNull())
    {
        if (!value["OperationNameFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.OperationNameFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationNameFilter = string(value["OperationNameFilter"].GetString());
        m_operationNameFilterHasBeenSet = true;
    }

    if (value.HasMember("ExceptionFilter") && !value["ExceptionFilter"].IsNull())
    {
        if (!value["ExceptionFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.ExceptionFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionFilter = string(value["ExceptionFilter"].GetString());
        m_exceptionFilterHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeFilter") && !value["ErrorCodeFilter"].IsNull())
    {
        if (!value["ErrorCodeFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.ErrorCodeFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeFilter = string(value["ErrorCodeFilter"].GetString());
        m_errorCodeFilterHasBeenSet = true;
    }

    if (value.HasMember("EventEnable") && !value["EventEnable"].IsNull())
    {
        if (!value["EventEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.EventEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_eventEnable = value["EventEnable"].GetBool();
        m_eventEnableHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergenceSwitch") && !value["UrlConvergenceSwitch"].IsNull())
    {
        if (!value["UrlConvergenceSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.UrlConvergenceSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergenceSwitch = value["UrlConvergenceSwitch"].GetInt64();
        m_urlConvergenceSwitchHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergenceThreshold") && !value["UrlConvergenceThreshold"].IsNull())
    {
        if (!value["UrlConvergenceThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.UrlConvergenceThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergenceThreshold = value["UrlConvergenceThreshold"].GetInt64();
        m_urlConvergenceThresholdHasBeenSet = true;
    }

    if (value.HasMember("UrlConvergence") && !value["UrlConvergence"].IsNull())
    {
        if (!value["UrlConvergence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.UrlConvergence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlConvergence = string(value["UrlConvergence"].GetString());
        m_urlConvergenceHasBeenSet = true;
    }

    if (value.HasMember("UrlExclude") && !value["UrlExclude"].IsNull())
    {
        if (!value["UrlExclude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.UrlExclude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlExclude = string(value["UrlExclude"].GetString());
        m_urlExcludeHasBeenSet = true;
    }

    if (value.HasMember("IsRelatedLog") && !value["IsRelatedLog"].IsNull())
    {
        if (!value["IsRelatedLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsRelatedLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRelatedLog = value["IsRelatedLog"].GetInt64();
        m_isRelatedLogHasBeenSet = true;
    }

    if (value.HasMember("LogSource") && !value["LogSource"].IsNull())
    {
        if (!value["LogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.LogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSource = string(value["LogSource"].GetString());
        m_logSourceHasBeenSet = true;
    }

    if (value.HasMember("LogSet") && !value["LogSet"].IsNull())
    {
        if (!value["LogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.LogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSet = string(value["LogSet"].GetString());
        m_logSetHasBeenSet = true;
    }

    if (value.HasMember("LogTopicID") && !value["LogTopicID"].IsNull())
    {
        if (!value["LogTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.LogTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicID = string(value["LogTopicID"].GetString());
        m_logTopicIDHasBeenSet = true;
    }

    if (value.HasMember("SnapshotEnable") && !value["SnapshotEnable"].IsNull())
    {
        if (!value["SnapshotEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.SnapshotEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotEnable = value["SnapshotEnable"].GetBool();
        m_snapshotEnableHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTimeout") && !value["SnapshotTimeout"].IsNull())
    {
        if (!value["SnapshotTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.SnapshotTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTimeout = value["SnapshotTimeout"].GetInt64();
        m_snapshotTimeoutHasBeenSet = true;
    }

    if (value.HasMember("AgentEnable") && !value["AgentEnable"].IsNull())
    {
        if (!value["AgentEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.AgentEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_agentEnable = value["AgentEnable"].GetBool();
        m_agentEnableHasBeenSet = true;
    }

    if (value.HasMember("InstrumentList") && !value["InstrumentList"].IsNull())
    {
        if (!value["InstrumentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.InstrumentList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.TraceSquash` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_traceSquash = value["TraceSquash"].GetBool();
        m_traceSquashHasBeenSet = true;
    }

    if (value.HasMember("AgentIgnoreOperation") && !value["AgentIgnoreOperation"].IsNull())
    {
        if (!value["AgentIgnoreOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.AgentIgnoreOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentIgnoreOperation = string(value["AgentIgnoreOperation"].GetString());
        m_agentIgnoreOperationHasBeenSet = true;
    }

    if (value.HasMember("EnableSecurityConfig") && !value["EnableSecurityConfig"].IsNull())
    {
        if (!value["EnableSecurityConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.EnableSecurityConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSecurityConfig = value["EnableSecurityConfig"].GetBool();
        m_enableSecurityConfigHasBeenSet = true;
    }

    if (value.HasMember("IsSqlInjectionAnalysis") && !value["IsSqlInjectionAnalysis"].IsNull())
    {
        if (!value["IsSqlInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsSqlInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSqlInjectionAnalysis = value["IsSqlInjectionAnalysis"].GetInt64();
        m_isSqlInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsInstrumentationVulnerabilityScan") && !value["IsInstrumentationVulnerabilityScan"].IsNull())
    {
        if (!value["IsInstrumentationVulnerabilityScan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsInstrumentationVulnerabilityScan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInstrumentationVulnerabilityScan = value["IsInstrumentationVulnerabilityScan"].GetInt64();
        m_isInstrumentationVulnerabilityScanHasBeenSet = true;
    }

    if (value.HasMember("IsRemoteCommandExecutionAnalysis") && !value["IsRemoteCommandExecutionAnalysis"].IsNull())
    {
        if (!value["IsRemoteCommandExecutionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsRemoteCommandExecutionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRemoteCommandExecutionAnalysis = value["IsRemoteCommandExecutionAnalysis"].GetInt64();
        m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsMemoryHijackingAnalysis") && !value["IsMemoryHijackingAnalysis"].IsNull())
    {
        if (!value["IsMemoryHijackingAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsMemoryHijackingAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMemoryHijackingAnalysis = value["IsMemoryHijackingAnalysis"].GetInt64();
        m_isMemoryHijackingAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsDeleteAnyFileAnalysis") && !value["IsDeleteAnyFileAnalysis"].IsNull())
    {
        if (!value["IsDeleteAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsDeleteAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDeleteAnyFileAnalysis = value["IsDeleteAnyFileAnalysis"].GetInt64();
        m_isDeleteAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsReadAnyFileAnalysis") && !value["IsReadAnyFileAnalysis"].IsNull())
    {
        if (!value["IsReadAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsReadAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReadAnyFileAnalysis = value["IsReadAnyFileAnalysis"].GetInt64();
        m_isReadAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsUploadAnyFileAnalysis") && !value["IsUploadAnyFileAnalysis"].IsNull())
    {
        if (!value["IsUploadAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsUploadAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUploadAnyFileAnalysis = value["IsUploadAnyFileAnalysis"].GetInt64();
        m_isUploadAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsIncludeAnyFileAnalysis") && !value["IsIncludeAnyFileAnalysis"].IsNull())
    {
        if (!value["IsIncludeAnyFileAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsIncludeAnyFileAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isIncludeAnyFileAnalysis = value["IsIncludeAnyFileAnalysis"].GetInt64();
        m_isIncludeAnyFileAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsDirectoryTraversalAnalysis") && !value["IsDirectoryTraversalAnalysis"].IsNull())
    {
        if (!value["IsDirectoryTraversalAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsDirectoryTraversalAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDirectoryTraversalAnalysis = value["IsDirectoryTraversalAnalysis"].GetInt64();
        m_isDirectoryTraversalAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsTemplateEngineInjectionAnalysis") && !value["IsTemplateEngineInjectionAnalysis"].IsNull())
    {
        if (!value["IsTemplateEngineInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsTemplateEngineInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTemplateEngineInjectionAnalysis = value["IsTemplateEngineInjectionAnalysis"].GetInt64();
        m_isTemplateEngineInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsScriptEngineInjectionAnalysis") && !value["IsScriptEngineInjectionAnalysis"].IsNull())
    {
        if (!value["IsScriptEngineInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsScriptEngineInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isScriptEngineInjectionAnalysis = value["IsScriptEngineInjectionAnalysis"].GetInt64();
        m_isScriptEngineInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsExpressionInjectionAnalysis") && !value["IsExpressionInjectionAnalysis"].IsNull())
    {
        if (!value["IsExpressionInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsExpressionInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isExpressionInjectionAnalysis = value["IsExpressionInjectionAnalysis"].GetInt64();
        m_isExpressionInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsJndiInjectionAnalysis") && !value["IsJndiInjectionAnalysis"].IsNull())
    {
        if (!value["IsJndiInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsJndiInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isJndiInjectionAnalysis = value["IsJndiInjectionAnalysis"].GetInt64();
        m_isJndiInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsJniInjectionAnalysis") && !value["IsJniInjectionAnalysis"].IsNull())
    {
        if (!value["IsJniInjectionAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsJniInjectionAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isJniInjectionAnalysis = value["IsJniInjectionAnalysis"].GetInt64();
        m_isJniInjectionAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsWebshellBackdoorAnalysis") && !value["IsWebshellBackdoorAnalysis"].IsNull())
    {
        if (!value["IsWebshellBackdoorAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsWebshellBackdoorAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isWebshellBackdoorAnalysis = value["IsWebshellBackdoorAnalysis"].GetInt64();
        m_isWebshellBackdoorAnalysisHasBeenSet = true;
    }

    if (value.HasMember("IsDeserializationAnalysis") && !value["IsDeserializationAnalysis"].IsNull())
    {
        if (!value["IsDeserializationAnalysis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsDeserializationAnalysis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDeserializationAnalysis = value["IsDeserializationAnalysis"].GetInt64();
        m_isDeserializationAnalysisHasBeenSet = true;
    }

    if (value.HasMember("EnableDashboardConfig") && !value["EnableDashboardConfig"].IsNull())
    {
        if (!value["EnableDashboardConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.EnableDashboardConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDashboardConfig = value["EnableDashboardConfig"].GetBool();
        m_enableDashboardConfigHasBeenSet = true;
    }

    if (value.HasMember("IsRelatedDashboard") && !value["IsRelatedDashboard"].IsNull())
    {
        if (!value["IsRelatedDashboard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.IsRelatedDashboard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRelatedDashboard = value["IsRelatedDashboard"].GetInt64();
        m_isRelatedDashboardHasBeenSet = true;
    }

    if (value.HasMember("DashboardTopicID") && !value["DashboardTopicID"].IsNull())
    {
        if (!value["DashboardTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.DashboardTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardTopicID = string(value["DashboardTopicID"].GetString());
        m_dashboardTopicIDHasBeenSet = true;
    }

    if (value.HasMember("DisableMemoryUsed") && !value["DisableMemoryUsed"].IsNull())
    {
        if (!value["DisableMemoryUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.DisableMemoryUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableMemoryUsed = value["DisableMemoryUsed"].GetInt64();
        m_disableMemoryUsedHasBeenSet = true;
    }

    if (value.HasMember("DisableCpuUsed") && !value["DisableCpuUsed"].IsNull())
    {
        if (!value["DisableCpuUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.DisableCpuUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableCpuUsed = value["DisableCpuUsed"].GetInt64();
        m_disableCpuUsedHasBeenSet = true;
    }

    if (value.HasMember("DbStatementParametersEnabled") && !value["DbStatementParametersEnabled"].IsNull())
    {
        if (!value["DbStatementParametersEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.DbStatementParametersEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dbStatementParametersEnabled = value["DbStatementParametersEnabled"].GetBool();
        m_dbStatementParametersEnabledHasBeenSet = true;
    }

    if (value.HasMember("SlowSQLThresholds") && !value["SlowSQLThresholds"].IsNull())
    {
        if (!value["SlowSQLThresholds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.SlowSQLThresholds` is not array type"));

        const rapidjson::Value &tmpValue = value["SlowSQLThresholds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slowSQLThresholds.push_back(item);
        }
        m_slowSQLThresholdsHasBeenSet = true;
    }

    if (value.HasMember("EnableDesensitizationRule") && !value["EnableDesensitizationRule"].IsNull())
    {
        if (!value["EnableDesensitizationRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.EnableDesensitizationRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableDesensitizationRule = value["EnableDesensitizationRule"].GetInt64();
        m_enableDesensitizationRuleHasBeenSet = true;
    }

    if (value.HasMember("DesensitizationRule") && !value["DesensitizationRule"].IsNull())
    {
        if (!value["DesensitizationRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.DesensitizationRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desensitizationRule = string(value["DesensitizationRule"].GetString());
        m_desensitizationRuleHasBeenSet = true;
    }

    if (value.HasMember("AutoProfilingConfig") && !value["AutoProfilingConfig"].IsNull())
    {
        if (!value["AutoProfilingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.AutoProfilingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoProfilingConfig.Deserialize(value["AutoProfilingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoProfilingConfigHasBeenSet = true;
    }

    if (value.HasMember("EnableThresholdConfig") && !value["EnableThresholdConfig"].IsNull())
    {
        if (!value["EnableThresholdConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.EnableThresholdConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableThresholdConfig = value["EnableThresholdConfig"].GetBool();
        m_enableThresholdConfigHasBeenSet = true;
    }

    if (value.HasMember("ErrRateThreshold") && !value["ErrRateThreshold"].IsNull())
    {
        if (!value["ErrRateThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.ErrRateThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errRateThreshold = value["ErrRateThreshold"].GetInt64();
        m_errRateThresholdHasBeenSet = true;
    }

    if (value.HasMember("ResponseDurationWarningThreshold") && !value["ResponseDurationWarningThreshold"].IsNull())
    {
        if (!value["ResponseDurationWarningThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmApplicationConfigView.ResponseDurationWarningThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseDurationWarningThreshold = value["ResponseDurationWarningThreshold"].GetInt64();
        m_responseDurationWarningThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmApplicationConfigView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_operationNameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationNameFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationNameFilter.c_str(), allocator).Move(), allocator);
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

    if (m_eventEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventEnable, allocator);
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

    if (m_urlExcludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlExclude.c_str(), allocator).Move(), allocator);
    }

    if (m_isRelatedLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRelatedLog, allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotEnable, allocator);
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

    if (m_agentIgnoreOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentIgnoreOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentIgnoreOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSecurityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSecurityConfig, allocator);
    }

    if (m_isSqlInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSqlInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSqlInjectionAnalysis, allocator);
    }

    if (m_isInstrumentationVulnerabilityScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInstrumentationVulnerabilityScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInstrumentationVulnerabilityScan, allocator);
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

    if (m_isJndiInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJndiInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJndiInjectionAnalysis, allocator);
    }

    if (m_isJniInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJniInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJniInjectionAnalysis, allocator);
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

    if (m_dbStatementParametersEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbStatementParametersEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbStatementParametersEnabled, allocator);
    }

    if (m_slowSQLThresholdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowSQLThresholds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slowSQLThresholds.begin(); itr != m_slowSQLThresholds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableDesensitizationRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDesensitizationRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDesensitizationRule, allocator);
    }

    if (m_desensitizationRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesensitizationRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desensitizationRule.c_str(), allocator).Move(), allocator);
    }

    if (m_autoProfilingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoProfilingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoProfilingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableThresholdConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableThresholdConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableThresholdConfig, allocator);
    }

    if (m_errRateThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrRateThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errRateThreshold, allocator);
    }

    if (m_responseDurationWarningThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseDurationWarningThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseDurationWarningThreshold, allocator);
    }

}


string ApmApplicationConfigView::GetInstanceKey() const
{
    return m_instanceKey;
}

void ApmApplicationConfigView::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool ApmApplicationConfigView::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string ApmApplicationConfigView::GetServiceName() const
{
    return m_serviceName;
}

void ApmApplicationConfigView::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApmApplicationConfigView::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ApmApplicationConfigView::GetOperationNameFilter() const
{
    return m_operationNameFilter;
}

void ApmApplicationConfigView::SetOperationNameFilter(const string& _operationNameFilter)
{
    m_operationNameFilter = _operationNameFilter;
    m_operationNameFilterHasBeenSet = true;
}

bool ApmApplicationConfigView::OperationNameFilterHasBeenSet() const
{
    return m_operationNameFilterHasBeenSet;
}

string ApmApplicationConfigView::GetExceptionFilter() const
{
    return m_exceptionFilter;
}

void ApmApplicationConfigView::SetExceptionFilter(const string& _exceptionFilter)
{
    m_exceptionFilter = _exceptionFilter;
    m_exceptionFilterHasBeenSet = true;
}

bool ApmApplicationConfigView::ExceptionFilterHasBeenSet() const
{
    return m_exceptionFilterHasBeenSet;
}

string ApmApplicationConfigView::GetErrorCodeFilter() const
{
    return m_errorCodeFilter;
}

void ApmApplicationConfigView::SetErrorCodeFilter(const string& _errorCodeFilter)
{
    m_errorCodeFilter = _errorCodeFilter;
    m_errorCodeFilterHasBeenSet = true;
}

bool ApmApplicationConfigView::ErrorCodeFilterHasBeenSet() const
{
    return m_errorCodeFilterHasBeenSet;
}

bool ApmApplicationConfigView::GetEventEnable() const
{
    return m_eventEnable;
}

void ApmApplicationConfigView::SetEventEnable(const bool& _eventEnable)
{
    m_eventEnable = _eventEnable;
    m_eventEnableHasBeenSet = true;
}

bool ApmApplicationConfigView::EventEnableHasBeenSet() const
{
    return m_eventEnableHasBeenSet;
}

int64_t ApmApplicationConfigView::GetUrlConvergenceSwitch() const
{
    return m_urlConvergenceSwitch;
}

void ApmApplicationConfigView::SetUrlConvergenceSwitch(const int64_t& _urlConvergenceSwitch)
{
    m_urlConvergenceSwitch = _urlConvergenceSwitch;
    m_urlConvergenceSwitchHasBeenSet = true;
}

bool ApmApplicationConfigView::UrlConvergenceSwitchHasBeenSet() const
{
    return m_urlConvergenceSwitchHasBeenSet;
}

int64_t ApmApplicationConfigView::GetUrlConvergenceThreshold() const
{
    return m_urlConvergenceThreshold;
}

void ApmApplicationConfigView::SetUrlConvergenceThreshold(const int64_t& _urlConvergenceThreshold)
{
    m_urlConvergenceThreshold = _urlConvergenceThreshold;
    m_urlConvergenceThresholdHasBeenSet = true;
}

bool ApmApplicationConfigView::UrlConvergenceThresholdHasBeenSet() const
{
    return m_urlConvergenceThresholdHasBeenSet;
}

string ApmApplicationConfigView::GetUrlConvergence() const
{
    return m_urlConvergence;
}

void ApmApplicationConfigView::SetUrlConvergence(const string& _urlConvergence)
{
    m_urlConvergence = _urlConvergence;
    m_urlConvergenceHasBeenSet = true;
}

bool ApmApplicationConfigView::UrlConvergenceHasBeenSet() const
{
    return m_urlConvergenceHasBeenSet;
}

string ApmApplicationConfigView::GetUrlExclude() const
{
    return m_urlExclude;
}

void ApmApplicationConfigView::SetUrlExclude(const string& _urlExclude)
{
    m_urlExclude = _urlExclude;
    m_urlExcludeHasBeenSet = true;
}

bool ApmApplicationConfigView::UrlExcludeHasBeenSet() const
{
    return m_urlExcludeHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsRelatedLog() const
{
    return m_isRelatedLog;
}

void ApmApplicationConfigView::SetIsRelatedLog(const int64_t& _isRelatedLog)
{
    m_isRelatedLog = _isRelatedLog;
    m_isRelatedLogHasBeenSet = true;
}

bool ApmApplicationConfigView::IsRelatedLogHasBeenSet() const
{
    return m_isRelatedLogHasBeenSet;
}

string ApmApplicationConfigView::GetLogSource() const
{
    return m_logSource;
}

void ApmApplicationConfigView::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool ApmApplicationConfigView::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

string ApmApplicationConfigView::GetLogSet() const
{
    return m_logSet;
}

void ApmApplicationConfigView::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ApmApplicationConfigView::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

string ApmApplicationConfigView::GetLogTopicID() const
{
    return m_logTopicID;
}

void ApmApplicationConfigView::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool ApmApplicationConfigView::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

bool ApmApplicationConfigView::GetSnapshotEnable() const
{
    return m_snapshotEnable;
}

void ApmApplicationConfigView::SetSnapshotEnable(const bool& _snapshotEnable)
{
    m_snapshotEnable = _snapshotEnable;
    m_snapshotEnableHasBeenSet = true;
}

bool ApmApplicationConfigView::SnapshotEnableHasBeenSet() const
{
    return m_snapshotEnableHasBeenSet;
}

int64_t ApmApplicationConfigView::GetSnapshotTimeout() const
{
    return m_snapshotTimeout;
}

void ApmApplicationConfigView::SetSnapshotTimeout(const int64_t& _snapshotTimeout)
{
    m_snapshotTimeout = _snapshotTimeout;
    m_snapshotTimeoutHasBeenSet = true;
}

bool ApmApplicationConfigView::SnapshotTimeoutHasBeenSet() const
{
    return m_snapshotTimeoutHasBeenSet;
}

bool ApmApplicationConfigView::GetAgentEnable() const
{
    return m_agentEnable;
}

void ApmApplicationConfigView::SetAgentEnable(const bool& _agentEnable)
{
    m_agentEnable = _agentEnable;
    m_agentEnableHasBeenSet = true;
}

bool ApmApplicationConfigView::AgentEnableHasBeenSet() const
{
    return m_agentEnableHasBeenSet;
}

vector<Instrument> ApmApplicationConfigView::GetInstrumentList() const
{
    return m_instrumentList;
}

void ApmApplicationConfigView::SetInstrumentList(const vector<Instrument>& _instrumentList)
{
    m_instrumentList = _instrumentList;
    m_instrumentListHasBeenSet = true;
}

bool ApmApplicationConfigView::InstrumentListHasBeenSet() const
{
    return m_instrumentListHasBeenSet;
}

bool ApmApplicationConfigView::GetTraceSquash() const
{
    return m_traceSquash;
}

void ApmApplicationConfigView::SetTraceSquash(const bool& _traceSquash)
{
    m_traceSquash = _traceSquash;
    m_traceSquashHasBeenSet = true;
}

bool ApmApplicationConfigView::TraceSquashHasBeenSet() const
{
    return m_traceSquashHasBeenSet;
}

string ApmApplicationConfigView::GetAgentIgnoreOperation() const
{
    return m_agentIgnoreOperation;
}

void ApmApplicationConfigView::SetAgentIgnoreOperation(const string& _agentIgnoreOperation)
{
    m_agentIgnoreOperation = _agentIgnoreOperation;
    m_agentIgnoreOperationHasBeenSet = true;
}

bool ApmApplicationConfigView::AgentIgnoreOperationHasBeenSet() const
{
    return m_agentIgnoreOperationHasBeenSet;
}

bool ApmApplicationConfigView::GetEnableSecurityConfig() const
{
    return m_enableSecurityConfig;
}

void ApmApplicationConfigView::SetEnableSecurityConfig(const bool& _enableSecurityConfig)
{
    m_enableSecurityConfig = _enableSecurityConfig;
    m_enableSecurityConfigHasBeenSet = true;
}

bool ApmApplicationConfigView::EnableSecurityConfigHasBeenSet() const
{
    return m_enableSecurityConfigHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsSqlInjectionAnalysis() const
{
    return m_isSqlInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis)
{
    m_isSqlInjectionAnalysis = _isSqlInjectionAnalysis;
    m_isSqlInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsSqlInjectionAnalysisHasBeenSet() const
{
    return m_isSqlInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsInstrumentationVulnerabilityScan() const
{
    return m_isInstrumentationVulnerabilityScan;
}

void ApmApplicationConfigView::SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan)
{
    m_isInstrumentationVulnerabilityScan = _isInstrumentationVulnerabilityScan;
    m_isInstrumentationVulnerabilityScanHasBeenSet = true;
}

bool ApmApplicationConfigView::IsInstrumentationVulnerabilityScanHasBeenSet() const
{
    return m_isInstrumentationVulnerabilityScanHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsRemoteCommandExecutionAnalysis() const
{
    return m_isRemoteCommandExecutionAnalysis;
}

void ApmApplicationConfigView::SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis)
{
    m_isRemoteCommandExecutionAnalysis = _isRemoteCommandExecutionAnalysis;
    m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsRemoteCommandExecutionAnalysisHasBeenSet() const
{
    return m_isRemoteCommandExecutionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsMemoryHijackingAnalysis() const
{
    return m_isMemoryHijackingAnalysis;
}

void ApmApplicationConfigView::SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis)
{
    m_isMemoryHijackingAnalysis = _isMemoryHijackingAnalysis;
    m_isMemoryHijackingAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsMemoryHijackingAnalysisHasBeenSet() const
{
    return m_isMemoryHijackingAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsDeleteAnyFileAnalysis() const
{
    return m_isDeleteAnyFileAnalysis;
}

void ApmApplicationConfigView::SetIsDeleteAnyFileAnalysis(const int64_t& _isDeleteAnyFileAnalysis)
{
    m_isDeleteAnyFileAnalysis = _isDeleteAnyFileAnalysis;
    m_isDeleteAnyFileAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsDeleteAnyFileAnalysisHasBeenSet() const
{
    return m_isDeleteAnyFileAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsReadAnyFileAnalysis() const
{
    return m_isReadAnyFileAnalysis;
}

void ApmApplicationConfigView::SetIsReadAnyFileAnalysis(const int64_t& _isReadAnyFileAnalysis)
{
    m_isReadAnyFileAnalysis = _isReadAnyFileAnalysis;
    m_isReadAnyFileAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsReadAnyFileAnalysisHasBeenSet() const
{
    return m_isReadAnyFileAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsUploadAnyFileAnalysis() const
{
    return m_isUploadAnyFileAnalysis;
}

void ApmApplicationConfigView::SetIsUploadAnyFileAnalysis(const int64_t& _isUploadAnyFileAnalysis)
{
    m_isUploadAnyFileAnalysis = _isUploadAnyFileAnalysis;
    m_isUploadAnyFileAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsUploadAnyFileAnalysisHasBeenSet() const
{
    return m_isUploadAnyFileAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsIncludeAnyFileAnalysis() const
{
    return m_isIncludeAnyFileAnalysis;
}

void ApmApplicationConfigView::SetIsIncludeAnyFileAnalysis(const int64_t& _isIncludeAnyFileAnalysis)
{
    m_isIncludeAnyFileAnalysis = _isIncludeAnyFileAnalysis;
    m_isIncludeAnyFileAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsIncludeAnyFileAnalysisHasBeenSet() const
{
    return m_isIncludeAnyFileAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsDirectoryTraversalAnalysis() const
{
    return m_isDirectoryTraversalAnalysis;
}

void ApmApplicationConfigView::SetIsDirectoryTraversalAnalysis(const int64_t& _isDirectoryTraversalAnalysis)
{
    m_isDirectoryTraversalAnalysis = _isDirectoryTraversalAnalysis;
    m_isDirectoryTraversalAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsDirectoryTraversalAnalysisHasBeenSet() const
{
    return m_isDirectoryTraversalAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsTemplateEngineInjectionAnalysis() const
{
    return m_isTemplateEngineInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsTemplateEngineInjectionAnalysis(const int64_t& _isTemplateEngineInjectionAnalysis)
{
    m_isTemplateEngineInjectionAnalysis = _isTemplateEngineInjectionAnalysis;
    m_isTemplateEngineInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsTemplateEngineInjectionAnalysisHasBeenSet() const
{
    return m_isTemplateEngineInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsScriptEngineInjectionAnalysis() const
{
    return m_isScriptEngineInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsScriptEngineInjectionAnalysis(const int64_t& _isScriptEngineInjectionAnalysis)
{
    m_isScriptEngineInjectionAnalysis = _isScriptEngineInjectionAnalysis;
    m_isScriptEngineInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsScriptEngineInjectionAnalysisHasBeenSet() const
{
    return m_isScriptEngineInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsExpressionInjectionAnalysis() const
{
    return m_isExpressionInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsExpressionInjectionAnalysis(const int64_t& _isExpressionInjectionAnalysis)
{
    m_isExpressionInjectionAnalysis = _isExpressionInjectionAnalysis;
    m_isExpressionInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsExpressionInjectionAnalysisHasBeenSet() const
{
    return m_isExpressionInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsJndiInjectionAnalysis() const
{
    return m_isJndiInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsJndiInjectionAnalysis(const int64_t& _isJndiInjectionAnalysis)
{
    m_isJndiInjectionAnalysis = _isJndiInjectionAnalysis;
    m_isJndiInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsJndiInjectionAnalysisHasBeenSet() const
{
    return m_isJndiInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsJniInjectionAnalysis() const
{
    return m_isJniInjectionAnalysis;
}

void ApmApplicationConfigView::SetIsJniInjectionAnalysis(const int64_t& _isJniInjectionAnalysis)
{
    m_isJniInjectionAnalysis = _isJniInjectionAnalysis;
    m_isJniInjectionAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsJniInjectionAnalysisHasBeenSet() const
{
    return m_isJniInjectionAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsWebshellBackdoorAnalysis() const
{
    return m_isWebshellBackdoorAnalysis;
}

void ApmApplicationConfigView::SetIsWebshellBackdoorAnalysis(const int64_t& _isWebshellBackdoorAnalysis)
{
    m_isWebshellBackdoorAnalysis = _isWebshellBackdoorAnalysis;
    m_isWebshellBackdoorAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsWebshellBackdoorAnalysisHasBeenSet() const
{
    return m_isWebshellBackdoorAnalysisHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsDeserializationAnalysis() const
{
    return m_isDeserializationAnalysis;
}

void ApmApplicationConfigView::SetIsDeserializationAnalysis(const int64_t& _isDeserializationAnalysis)
{
    m_isDeserializationAnalysis = _isDeserializationAnalysis;
    m_isDeserializationAnalysisHasBeenSet = true;
}

bool ApmApplicationConfigView::IsDeserializationAnalysisHasBeenSet() const
{
    return m_isDeserializationAnalysisHasBeenSet;
}

bool ApmApplicationConfigView::GetEnableDashboardConfig() const
{
    return m_enableDashboardConfig;
}

void ApmApplicationConfigView::SetEnableDashboardConfig(const bool& _enableDashboardConfig)
{
    m_enableDashboardConfig = _enableDashboardConfig;
    m_enableDashboardConfigHasBeenSet = true;
}

bool ApmApplicationConfigView::EnableDashboardConfigHasBeenSet() const
{
    return m_enableDashboardConfigHasBeenSet;
}

int64_t ApmApplicationConfigView::GetIsRelatedDashboard() const
{
    return m_isRelatedDashboard;
}

void ApmApplicationConfigView::SetIsRelatedDashboard(const int64_t& _isRelatedDashboard)
{
    m_isRelatedDashboard = _isRelatedDashboard;
    m_isRelatedDashboardHasBeenSet = true;
}

bool ApmApplicationConfigView::IsRelatedDashboardHasBeenSet() const
{
    return m_isRelatedDashboardHasBeenSet;
}

string ApmApplicationConfigView::GetDashboardTopicID() const
{
    return m_dashboardTopicID;
}

void ApmApplicationConfigView::SetDashboardTopicID(const string& _dashboardTopicID)
{
    m_dashboardTopicID = _dashboardTopicID;
    m_dashboardTopicIDHasBeenSet = true;
}

bool ApmApplicationConfigView::DashboardTopicIDHasBeenSet() const
{
    return m_dashboardTopicIDHasBeenSet;
}

int64_t ApmApplicationConfigView::GetDisableMemoryUsed() const
{
    return m_disableMemoryUsed;
}

void ApmApplicationConfigView::SetDisableMemoryUsed(const int64_t& _disableMemoryUsed)
{
    m_disableMemoryUsed = _disableMemoryUsed;
    m_disableMemoryUsedHasBeenSet = true;
}

bool ApmApplicationConfigView::DisableMemoryUsedHasBeenSet() const
{
    return m_disableMemoryUsedHasBeenSet;
}

int64_t ApmApplicationConfigView::GetDisableCpuUsed() const
{
    return m_disableCpuUsed;
}

void ApmApplicationConfigView::SetDisableCpuUsed(const int64_t& _disableCpuUsed)
{
    m_disableCpuUsed = _disableCpuUsed;
    m_disableCpuUsedHasBeenSet = true;
}

bool ApmApplicationConfigView::DisableCpuUsedHasBeenSet() const
{
    return m_disableCpuUsedHasBeenSet;
}

bool ApmApplicationConfigView::GetDbStatementParametersEnabled() const
{
    return m_dbStatementParametersEnabled;
}

void ApmApplicationConfigView::SetDbStatementParametersEnabled(const bool& _dbStatementParametersEnabled)
{
    m_dbStatementParametersEnabled = _dbStatementParametersEnabled;
    m_dbStatementParametersEnabledHasBeenSet = true;
}

bool ApmApplicationConfigView::DbStatementParametersEnabledHasBeenSet() const
{
    return m_dbStatementParametersEnabledHasBeenSet;
}

vector<ApmTag> ApmApplicationConfigView::GetSlowSQLThresholds() const
{
    return m_slowSQLThresholds;
}

void ApmApplicationConfigView::SetSlowSQLThresholds(const vector<ApmTag>& _slowSQLThresholds)
{
    m_slowSQLThresholds = _slowSQLThresholds;
    m_slowSQLThresholdsHasBeenSet = true;
}

bool ApmApplicationConfigView::SlowSQLThresholdsHasBeenSet() const
{
    return m_slowSQLThresholdsHasBeenSet;
}

int64_t ApmApplicationConfigView::GetEnableDesensitizationRule() const
{
    return m_enableDesensitizationRule;
}

void ApmApplicationConfigView::SetEnableDesensitizationRule(const int64_t& _enableDesensitizationRule)
{
    m_enableDesensitizationRule = _enableDesensitizationRule;
    m_enableDesensitizationRuleHasBeenSet = true;
}

bool ApmApplicationConfigView::EnableDesensitizationRuleHasBeenSet() const
{
    return m_enableDesensitizationRuleHasBeenSet;
}

string ApmApplicationConfigView::GetDesensitizationRule() const
{
    return m_desensitizationRule;
}

void ApmApplicationConfigView::SetDesensitizationRule(const string& _desensitizationRule)
{
    m_desensitizationRule = _desensitizationRule;
    m_desensitizationRuleHasBeenSet = true;
}

bool ApmApplicationConfigView::DesensitizationRuleHasBeenSet() const
{
    return m_desensitizationRuleHasBeenSet;
}

AutoProfilingConfig ApmApplicationConfigView::GetAutoProfilingConfig() const
{
    return m_autoProfilingConfig;
}

void ApmApplicationConfigView::SetAutoProfilingConfig(const AutoProfilingConfig& _autoProfilingConfig)
{
    m_autoProfilingConfig = _autoProfilingConfig;
    m_autoProfilingConfigHasBeenSet = true;
}

bool ApmApplicationConfigView::AutoProfilingConfigHasBeenSet() const
{
    return m_autoProfilingConfigHasBeenSet;
}

bool ApmApplicationConfigView::GetEnableThresholdConfig() const
{
    return m_enableThresholdConfig;
}

void ApmApplicationConfigView::SetEnableThresholdConfig(const bool& _enableThresholdConfig)
{
    m_enableThresholdConfig = _enableThresholdConfig;
    m_enableThresholdConfigHasBeenSet = true;
}

bool ApmApplicationConfigView::EnableThresholdConfigHasBeenSet() const
{
    return m_enableThresholdConfigHasBeenSet;
}

int64_t ApmApplicationConfigView::GetErrRateThreshold() const
{
    return m_errRateThreshold;
}

void ApmApplicationConfigView::SetErrRateThreshold(const int64_t& _errRateThreshold)
{
    m_errRateThreshold = _errRateThreshold;
    m_errRateThresholdHasBeenSet = true;
}

bool ApmApplicationConfigView::ErrRateThresholdHasBeenSet() const
{
    return m_errRateThresholdHasBeenSet;
}

int64_t ApmApplicationConfigView::GetResponseDurationWarningThreshold() const
{
    return m_responseDurationWarningThreshold;
}

void ApmApplicationConfigView::SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold)
{
    m_responseDurationWarningThreshold = _responseDurationWarningThreshold;
    m_responseDurationWarningThresholdHasBeenSet = true;
}

bool ApmApplicationConfigView::ResponseDurationWarningThresholdHasBeenSet() const
{
    return m_responseDurationWarningThresholdHasBeenSet;
}

