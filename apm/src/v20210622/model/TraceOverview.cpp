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

#include <tencentcloud/apm/v20210622/model/TraceOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

TraceOverview::TraceOverview() :
    m_statusHasBeenSet(false),
    m_traceIDHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_applicationCountHasBeenSet(false),
    m_errorSpansHasBeenSet(false)
{
}

CoreInternalOutcome TraceOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TraceID") && !value["TraceID"].IsNull())
    {
        if (!value["TraceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.TraceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceID = string(value["TraceID"].GetString());
        m_traceIDHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationCount") && !value["ApplicationCount"].IsNull())
    {
        if (!value["ApplicationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceOverview.ApplicationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCount = value["ApplicationCount"].GetInt64();
        m_applicationCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorSpans") && !value["ErrorSpans"].IsNull())
    {
        if (!value["ErrorSpans"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceOverview.ErrorSpans` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorSpans"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorSpan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorSpans.push_back(item);
        }
        m_errorSpansHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_traceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceID.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_applicationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationCount, allocator);
    }

    if (m_errorSpansHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorSpans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorSpans.begin(); itr != m_errorSpans.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TraceOverview::GetStatus() const
{
    return m_status;
}

void TraceOverview::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TraceOverview::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TraceOverview::GetTraceID() const
{
    return m_traceID;
}

void TraceOverview::SetTraceID(const string& _traceID)
{
    m_traceID = _traceID;
    m_traceIDHasBeenSet = true;
}

bool TraceOverview::TraceIDHasBeenSet() const
{
    return m_traceIDHasBeenSet;
}

string TraceOverview::GetErrorMsg() const
{
    return m_errorMsg;
}

void TraceOverview::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool TraceOverview::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string TraceOverview::GetServiceName() const
{
    return m_serviceName;
}

void TraceOverview::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool TraceOverview::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

uint64_t TraceOverview::GetDuration() const
{
    return m_duration;
}

void TraceOverview::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TraceOverview::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TraceOverview::GetOperation() const
{
    return m_operation;
}

void TraceOverview::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool TraceOverview::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t TraceOverview::GetStartTime() const
{
    return m_startTime;
}

void TraceOverview::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TraceOverview::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t TraceOverview::GetApplicationCount() const
{
    return m_applicationCount;
}

void TraceOverview::SetApplicationCount(const int64_t& _applicationCount)
{
    m_applicationCount = _applicationCount;
    m_applicationCountHasBeenSet = true;
}

bool TraceOverview::ApplicationCountHasBeenSet() const
{
    return m_applicationCountHasBeenSet;
}

vector<ErrorSpan> TraceOverview::GetErrorSpans() const
{
    return m_errorSpans;
}

void TraceOverview::SetErrorSpans(const vector<ErrorSpan>& _errorSpans)
{
    m_errorSpans = _errorSpans;
    m_errorSpansHasBeenSet = true;
}

bool TraceOverview::ErrorSpansHasBeenSet() const
{
    return m_errorSpansHasBeenSet;
}

