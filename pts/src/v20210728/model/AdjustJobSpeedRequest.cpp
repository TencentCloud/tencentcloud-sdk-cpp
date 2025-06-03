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

#include <tencentcloud/pts/v20210728/model/AdjustJobSpeedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AdjustJobSpeedRequest::AdjustJobSpeedRequest() :
    m_jobIdHasBeenSet(false),
    m_targetRequestsPerSecondHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false)
{
}

string AdjustJobSpeedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetRequestsPerSecond, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AdjustJobSpeedRequest::GetJobId() const
{
    return m_jobId;
}

void AdjustJobSpeedRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool AdjustJobSpeedRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t AdjustJobSpeedRequest::GetTargetRequestsPerSecond() const
{
    return m_targetRequestsPerSecond;
}

void AdjustJobSpeedRequest::SetTargetRequestsPerSecond(const int64_t& _targetRequestsPerSecond)
{
    m_targetRequestsPerSecond = _targetRequestsPerSecond;
    m_targetRequestsPerSecondHasBeenSet = true;
}

bool AdjustJobSpeedRequest::TargetRequestsPerSecondHasBeenSet() const
{
    return m_targetRequestsPerSecondHasBeenSet;
}

string AdjustJobSpeedRequest::GetProjectId() const
{
    return m_projectId;
}

void AdjustJobSpeedRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AdjustJobSpeedRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AdjustJobSpeedRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void AdjustJobSpeedRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool AdjustJobSpeedRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}


