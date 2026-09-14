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

#include <tencentcloud/ccc/v20200210/model/AICallAPICallDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallAPICallDetail::AICallAPICallDetail() :
    m_asyncHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_costMSHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_attemptsHasBeenSet(false)
{
}

CoreInternalOutcome AICallAPICallDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Async") && !value["Async"].IsNull())
    {
        if (!value["Async"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.Async` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_async = value["Async"].GetBool();
        m_asyncHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("CostMS") && !value["CostMS"].IsNull())
    {
        if (!value["CostMS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.CostMS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costMS = value["CostMS"].GetInt64();
        m_costMSHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.RetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetInt64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("Attempts") && !value["Attempts"].IsNull())
    {
        if (!value["Attempts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallAPICallDetail.Attempts` is not array type"));

        const rapidjson::Value &tmpValue = value["Attempts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AICallAPICallAttempt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attempts.push_back(item);
        }
        m_attemptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallAPICallDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Async";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_async, allocator);
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

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_attemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attempts.begin(); itr != m_attempts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool AICallAPICallDetail::GetAsync() const
{
    return m_async;
}

void AICallAPICallDetail::SetAsync(const bool& _async)
{
    m_async = _async;
    m_asyncHasBeenSet = true;
}

bool AICallAPICallDetail::AsyncHasBeenSet() const
{
    return m_asyncHasBeenSet;
}

string AICallAPICallDetail::GetStatus() const
{
    return m_status;
}

void AICallAPICallDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AICallAPICallDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AICallAPICallDetail::GetStatusCode() const
{
    return m_statusCode;
}

void AICallAPICallDetail::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AICallAPICallDetail::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AICallAPICallDetail::GetSummary() const
{
    return m_summary;
}

void AICallAPICallDetail::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool AICallAPICallDetail::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

int64_t AICallAPICallDetail::GetCostMS() const
{
    return m_costMS;
}

void AICallAPICallDetail::SetCostMS(const int64_t& _costMS)
{
    m_costMS = _costMS;
    m_costMSHasBeenSet = true;
}

bool AICallAPICallDetail::CostMSHasBeenSet() const
{
    return m_costMSHasBeenSet;
}

int64_t AICallAPICallDetail::GetRetryCount() const
{
    return m_retryCount;
}

void AICallAPICallDetail::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool AICallAPICallDetail::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

vector<AICallAPICallAttempt> AICallAPICallDetail::GetAttempts() const
{
    return m_attempts;
}

void AICallAPICallDetail::SetAttempts(const vector<AICallAPICallAttempt>& _attempts)
{
    m_attempts = _attempts;
    m_attemptsHasBeenSet = true;
}

bool AICallAPICallDetail::AttemptsHasBeenSet() const
{
    return m_attemptsHasBeenSet;
}

