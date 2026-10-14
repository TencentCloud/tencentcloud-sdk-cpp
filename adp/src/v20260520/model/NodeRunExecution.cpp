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

#include <tencentcloud/adp/v20260520/model/NodeRunExecution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

NodeRunExecution::NodeRunExecution() :
    m_batchRunSummaryHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunExecution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchRunSummary") && !value["BatchRunSummary"].IsNull())
    {
        if (!value["BatchRunSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunExecution.BatchRunSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_batchRunSummary.Deserialize(value["BatchRunSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_batchRunSummaryHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunExecution.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunExecution.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRunExecution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchRunSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchRunSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_batchRunSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


BatchRunSummary NodeRunExecution::GetBatchRunSummary() const
{
    return m_batchRunSummary;
}

void NodeRunExecution::SetBatchRunSummary(const BatchRunSummary& _batchRunSummary)
{
    m_batchRunSummary = _batchRunSummary;
    m_batchRunSummaryHasBeenSet = true;
}

bool NodeRunExecution::BatchRunSummaryHasBeenSet() const
{
    return m_batchRunSummaryHasBeenSet;
}

string NodeRunExecution::GetEndTime() const
{
    return m_endTime;
}

void NodeRunExecution::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NodeRunExecution::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string NodeRunExecution::GetStartTime() const
{
    return m_startTime;
}

void NodeRunExecution::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NodeRunExecution::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

