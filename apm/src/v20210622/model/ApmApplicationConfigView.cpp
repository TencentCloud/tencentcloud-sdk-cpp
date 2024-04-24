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
    m_traceSquashHasBeenSet(false)
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

