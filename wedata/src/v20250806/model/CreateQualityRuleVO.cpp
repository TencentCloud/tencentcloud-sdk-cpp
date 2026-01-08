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

#include <tencentcloud/wedata/v20250806/model/CreateQualityRuleVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateQualityRuleVO::CreateQualityRuleVO() :
    m_msgHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_sumCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_successRuleIdsHasBeenSet(false)
{
}

CoreInternalOutcome CreateQualityRuleVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityRuleCreateResult item;
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

    if (value.HasMember("SumCount") && !value["SumCount"].IsNull())
    {
        if (!value["SumCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.SumCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sumCount = value["SumCount"].GetUint64();
        m_sumCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.FailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetUint64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessRuleIds") && !value["SuccessRuleIds"].IsNull())
    {
        if (!value["SuccessRuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleVO.SuccessRuleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessRuleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successRuleIds.push_back((*itr).GetUint64());
        }
        m_successRuleIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateQualityRuleVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
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

    if (m_sumCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_successRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRuleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successRuleIds.begin(); itr != m_successRuleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string CreateQualityRuleVO::GetMsg() const
{
    return m_msg;
}

void CreateQualityRuleVO::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool CreateQualityRuleVO::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

vector<QualityRuleCreateResult> CreateQualityRuleVO::GetResults() const
{
    return m_results;
}

void CreateQualityRuleVO::SetResults(const vector<QualityRuleCreateResult>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool CreateQualityRuleVO::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

uint64_t CreateQualityRuleVO::GetSumCount() const
{
    return m_sumCount;
}

void CreateQualityRuleVO::SetSumCount(const uint64_t& _sumCount)
{
    m_sumCount = _sumCount;
    m_sumCountHasBeenSet = true;
}

bool CreateQualityRuleVO::SumCountHasBeenSet() const
{
    return m_sumCountHasBeenSet;
}

uint64_t CreateQualityRuleVO::GetSuccessCount() const
{
    return m_successCount;
}

void CreateQualityRuleVO::SetSuccessCount(const uint64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool CreateQualityRuleVO::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

uint64_t CreateQualityRuleVO::GetFailedCount() const
{
    return m_failedCount;
}

void CreateQualityRuleVO::SetFailedCount(const uint64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool CreateQualityRuleVO::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

vector<uint64_t> CreateQualityRuleVO::GetSuccessRuleIds() const
{
    return m_successRuleIds;
}

void CreateQualityRuleVO::SetSuccessRuleIds(const vector<uint64_t>& _successRuleIds)
{
    m_successRuleIds = _successRuleIds;
    m_successRuleIdsHasBeenSet = true;
}

bool CreateQualityRuleVO::SuccessRuleIdsHasBeenSet() const
{
    return m_successRuleIdsHasBeenSet;
}

