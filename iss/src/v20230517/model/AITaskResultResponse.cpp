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

#include <tencentcloud/iss/v20230517/model/AITaskResultResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AITaskResultResponse::AITaskResultResponse() :
    m_taskIdHasBeenSet(false),
    m_aIResultCountHasBeenSet(false),
    m_aIResultsHasBeenSet(false)
{
}

CoreInternalOutcome AITaskResultResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskResultResponse.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("AIResultCount") && !value["AIResultCount"].IsNull())
    {
        if (!value["AIResultCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskResultResponse.AIResultCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aIResultCount = value["AIResultCount"].GetUint64();
        m_aIResultCountHasBeenSet = true;
    }

    if (value.HasMember("AIResults") && !value["AIResults"].IsNull())
    {
        if (!value["AIResults"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskResultResponse.AIResults` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aIResults.Deserialize(value["AIResults"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aIResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AITaskResultResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_aIResultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIResultCount, allocator);
    }

    if (m_aIResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aIResults.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AITaskResultResponse::GetTaskId() const
{
    return m_taskId;
}

void AITaskResultResponse::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AITaskResultResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t AITaskResultResponse::GetAIResultCount() const
{
    return m_aIResultCount;
}

void AITaskResultResponse::SetAIResultCount(const uint64_t& _aIResultCount)
{
    m_aIResultCount = _aIResultCount;
    m_aIResultCountHasBeenSet = true;
}

bool AITaskResultResponse::AIResultCountHasBeenSet() const
{
    return m_aIResultCountHasBeenSet;
}

AITaskResultInfo AITaskResultResponse::GetAIResults() const
{
    return m_aIResults;
}

void AITaskResultResponse::SetAIResults(const AITaskResultInfo& _aIResults)
{
    m_aIResults = _aIResults;
    m_aIResultsHasBeenSet = true;
}

bool AITaskResultResponse::AIResultsHasBeenSet() const
{
    return m_aIResultsHasBeenSet;
}

