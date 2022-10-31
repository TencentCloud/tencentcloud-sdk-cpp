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

#include <tencentcloud/dts/v20211206/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompleteMigrateJobRequest::CompleteMigrateJobRequest() :
    m_jobIdHasBeenSet(false),
    m_completeModeHasBeenSet(false)
{
}

string CompleteMigrateJobRequest::ToJsonString() const
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

    if (m_completeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_completeMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CompleteMigrateJobRequest::GetJobId() const
{
    return m_jobId;
}

void CompleteMigrateJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CompleteMigrateJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CompleteMigrateJobRequest::GetCompleteMode() const
{
    return m_completeMode;
}

void CompleteMigrateJobRequest::SetCompleteMode(const string& _completeMode)
{
    m_completeMode = _completeMode;
    m_completeModeHasBeenSet = true;
}

bool CompleteMigrateJobRequest::CompleteModeHasBeenSet() const
{
    return m_completeModeHasBeenSet;
}


