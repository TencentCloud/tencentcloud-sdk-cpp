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
    m_targetRequestsPerSecondHasBeenSet(false)
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


