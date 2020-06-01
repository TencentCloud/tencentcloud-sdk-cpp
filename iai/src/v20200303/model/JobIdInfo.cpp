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

#include <tencentcloud/iai/v20200303/model/JobIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
using namespace std;

JobIdInfo::JobIdInfo() :
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_jobStatusHasBeenSet(false)
{
}

CoreInternalOutcome JobIdInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobIdInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `JobIdInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `JobIdInfo.JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = value["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobIdInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatus, allocator);
    }

}


string JobIdInfo::GetJobId() const
{
    return m_jobId;
}

void JobIdInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobIdInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

uint64_t JobIdInfo::GetStartTime() const
{
    return m_startTime;
}

void JobIdInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool JobIdInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t JobIdInfo::GetJobStatus() const
{
    return m_jobStatus;
}

void JobIdInfo::SetJobStatus(const int64_t& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool JobIdInfo::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

