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

#include <tencentcloud/ccc/v20200210/model/AICallAPICallAttempt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallAPICallAttempt::AICallAPICallAttempt() :
    m_indexHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_costMSHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false)
{
}

CoreInternalOutcome AICallAPICallAttempt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("CostMS") && !value["CostMS"].IsNull())
    {
        if (!value["CostMS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.CostMS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costMS = value["CostMS"].GetInt64();
        m_costMSHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Request` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_request.Deserialize(value["Request"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallAttempt.Response` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_response.Deserialize(value["Response"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallAPICallAttempt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_costMSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMS, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_request.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_response.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AICallAPICallAttempt::GetIndex() const
{
    return m_index;
}

void AICallAPICallAttempt::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AICallAPICallAttempt::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t AICallAPICallAttempt::GetTimestamp() const
{
    return m_timestamp;
}

void AICallAPICallAttempt::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AICallAPICallAttempt::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string AICallAPICallAttempt::GetStatus() const
{
    return m_status;
}

void AICallAPICallAttempt::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AICallAPICallAttempt::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AICallAPICallAttempt::GetStatusCode() const
{
    return m_statusCode;
}

void AICallAPICallAttempt::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AICallAPICallAttempt::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AICallAPICallAttempt::GetErrorType() const
{
    return m_errorType;
}

void AICallAPICallAttempt::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool AICallAPICallAttempt::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string AICallAPICallAttempt::GetSummary() const
{
    return m_summary;
}

void AICallAPICallAttempt::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool AICallAPICallAttempt::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

int64_t AICallAPICallAttempt::GetCostMS() const
{
    return m_costMS;
}

void AICallAPICallAttempt::SetCostMS(const int64_t& _costMS)
{
    m_costMS = _costMS;
    m_costMSHasBeenSet = true;
}

bool AICallAPICallAttempt::CostMSHasBeenSet() const
{
    return m_costMSHasBeenSet;
}

AICallAPICallRequestDetail AICallAPICallAttempt::GetRequest() const
{
    return m_request;
}

void AICallAPICallAttempt::SetRequest(const AICallAPICallRequestDetail& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool AICallAPICallAttempt::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

AICallAPICallResponseDetail AICallAPICallAttempt::GetResponse() const
{
    return m_response;
}

void AICallAPICallAttempt::SetResponse(const AICallAPICallResponseDetail& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool AICallAPICallAttempt::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

