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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobRuntimeInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobRuntimeInfoRequest::DescribeJobRuntimeInfoRequest() :
    m_jobIdHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_includeInfoHasBeenSet(false)
{
}

string DescribeJobRuntimeInfoRequest::ToJsonString() const
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

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeInfo.begin(); itr != m_includeInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobRuntimeInfoRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeJobRuntimeInfoRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeJobRuntimeInfoRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeJobRuntimeInfoRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeJobRuntimeInfoRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeJobRuntimeInfoRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

vector<string> DescribeJobRuntimeInfoRequest::GetIncludeInfo() const
{
    return m_includeInfo;
}

void DescribeJobRuntimeInfoRequest::SetIncludeInfo(const vector<string>& _includeInfo)
{
    m_includeInfo = _includeInfo;
    m_includeInfoHasBeenSet = true;
}

bool DescribeJobRuntimeInfoRequest::IncludeInfoHasBeenSet() const
{
    return m_includeInfoHasBeenSet;
}


