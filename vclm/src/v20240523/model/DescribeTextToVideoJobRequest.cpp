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

#include <tencentcloud/vclm/v20240523/model/DescribeTextToVideoJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

DescribeTextToVideoJobRequest::DescribeTextToVideoJobRequest() :
    m_jobIdHasBeenSet(false),
    m_externalTaskIdHasBeenSet(false)
{
}

string DescribeTextToVideoJobRequest::ToJsonString() const
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

    if (m_externalTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTextToVideoJobRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeTextToVideoJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeTextToVideoJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeTextToVideoJobRequest::GetExternalTaskId() const
{
    return m_externalTaskId;
}

void DescribeTextToVideoJobRequest::SetExternalTaskId(const string& _externalTaskId)
{
    m_externalTaskId = _externalTaskId;
    m_externalTaskIdHasBeenSet = true;
}

bool DescribeTextToVideoJobRequest::ExternalTaskIdHasBeenSet() const
{
    return m_externalTaskIdHasBeenSet;
}


