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

#include <tencentcloud/emr/v20190103/model/DescribeJobFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeJobFlowRequest::DescribeJobFlowRequest() :
    m_jobFlowIdHasBeenSet(false)
{
}

string DescribeJobFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobFlowId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeJobFlowRequest::GetJobFlowId() const
{
    return m_jobFlowId;
}

void DescribeJobFlowRequest::SetJobFlowId(const int64_t& _jobFlowId)
{
    m_jobFlowId = _jobFlowId;
    m_jobFlowIdHasBeenSet = true;
}

bool DescribeJobFlowRequest::JobFlowIdHasBeenSet() const
{
    return m_jobFlowIdHasBeenSet;
}


