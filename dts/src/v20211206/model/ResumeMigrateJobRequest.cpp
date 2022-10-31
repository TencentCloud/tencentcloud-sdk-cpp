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

#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ResumeMigrateJobRequest::ResumeMigrateJobRequest() :
    m_jobIdHasBeenSet(false),
    m_resumeOptionHasBeenSet(false)
{
}

string ResumeMigrateJobRequest::ToJsonString() const
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

    if (m_resumeOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resumeOption.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResumeMigrateJobRequest::GetJobId() const
{
    return m_jobId;
}

void ResumeMigrateJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ResumeMigrateJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ResumeMigrateJobRequest::GetResumeOption() const
{
    return m_resumeOption;
}

void ResumeMigrateJobRequest::SetResumeOption(const string& _resumeOption)
{
    m_resumeOption = _resumeOption;
    m_resumeOptionHasBeenSet = true;
}

bool ResumeMigrateJobRequest::ResumeOptionHasBeenSet() const
{
    return m_resumeOptionHasBeenSet;
}


