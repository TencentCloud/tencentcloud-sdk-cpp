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

#include <tencentcloud/wedata/v20250806/model/SqlRunResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SqlRunResult::SqlRunResult() :
    m_jobIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_costMsHasBeenSet(false),
    m_truncatedHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome SqlRunResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("CostMs") && !value["CostMs"].IsNull())
    {
        if (!value["CostMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.CostMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costMs = value["CostMs"].GetInt64();
        m_costMsHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlRunResult.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlRunExecutionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlRunResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_costMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMs, allocator);
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SqlRunResult::GetJobId() const
{
    return m_jobId;
}

void SqlRunResult::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SqlRunResult::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string SqlRunResult::GetStatus() const
{
    return m_status;
}

void SqlRunResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SqlRunResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SqlRunResult::GetStatusMessage() const
{
    return m_statusMessage;
}

void SqlRunResult::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool SqlRunResult::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

int64_t SqlRunResult::GetCostMs() const
{
    return m_costMs;
}

void SqlRunResult::SetCostMs(const int64_t& _costMs)
{
    m_costMs = _costMs;
    m_costMsHasBeenSet = true;
}

bool SqlRunResult::CostMsHasBeenSet() const
{
    return m_costMsHasBeenSet;
}

bool SqlRunResult::GetTruncated() const
{
    return m_truncated;
}

void SqlRunResult::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool SqlRunResult::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

vector<SqlRunExecutionResult> SqlRunResult::GetResults() const
{
    return m_results;
}

void SqlRunResult::SetResults(const vector<SqlRunExecutionResult>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool SqlRunResult::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

