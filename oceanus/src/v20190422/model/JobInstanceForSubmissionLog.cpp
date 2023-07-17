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

#include <tencentcloud/oceanus/v20190422/model/JobInstanceForSubmissionLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobInstanceForSubmissionLog::JobInstanceForSubmissionLog() :
    m_runningOrderIdHasBeenSet(false),
    m_jobInstanceStartTimeHasBeenSet(false),
    m_startingMillisHasBeenSet(false)
{
}

CoreInternalOutcome JobInstanceForSubmissionLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunningOrderId") && !value["RunningOrderId"].IsNull())
    {
        if (!value["RunningOrderId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobInstanceForSubmissionLog.RunningOrderId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningOrderId = value["RunningOrderId"].GetInt64();
        m_runningOrderIdHasBeenSet = true;
    }

    if (value.HasMember("JobInstanceStartTime") && !value["JobInstanceStartTime"].IsNull())
    {
        if (!value["JobInstanceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobInstanceForSubmissionLog.JobInstanceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobInstanceStartTime = string(value["JobInstanceStartTime"].GetString());
        m_jobInstanceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("StartingMillis") && !value["StartingMillis"].IsNull())
    {
        if (!value["StartingMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobInstanceForSubmissionLog.StartingMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startingMillis = value["StartingMillis"].GetInt64();
        m_startingMillisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobInstanceForSubmissionLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runningOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningOrderId, allocator);
    }

    if (m_jobInstanceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobInstanceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobInstanceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startingMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartingMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startingMillis, allocator);
    }

}


int64_t JobInstanceForSubmissionLog::GetRunningOrderId() const
{
    return m_runningOrderId;
}

void JobInstanceForSubmissionLog::SetRunningOrderId(const int64_t& _runningOrderId)
{
    m_runningOrderId = _runningOrderId;
    m_runningOrderIdHasBeenSet = true;
}

bool JobInstanceForSubmissionLog::RunningOrderIdHasBeenSet() const
{
    return m_runningOrderIdHasBeenSet;
}

string JobInstanceForSubmissionLog::GetJobInstanceStartTime() const
{
    return m_jobInstanceStartTime;
}

void JobInstanceForSubmissionLog::SetJobInstanceStartTime(const string& _jobInstanceStartTime)
{
    m_jobInstanceStartTime = _jobInstanceStartTime;
    m_jobInstanceStartTimeHasBeenSet = true;
}

bool JobInstanceForSubmissionLog::JobInstanceStartTimeHasBeenSet() const
{
    return m_jobInstanceStartTimeHasBeenSet;
}

int64_t JobInstanceForSubmissionLog::GetStartingMillis() const
{
    return m_startingMillis;
}

void JobInstanceForSubmissionLog::SetStartingMillis(const int64_t& _startingMillis)
{
    m_startingMillis = _startingMillis;
    m_startingMillisHasBeenSet = true;
}

bool JobInstanceForSubmissionLog::StartingMillisHasBeenSet() const
{
    return m_startingMillisHasBeenSet;
}

