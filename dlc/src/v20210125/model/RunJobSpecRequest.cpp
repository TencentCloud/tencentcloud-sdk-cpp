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

#include <tencentcloud/dlc/v20210125/model/RunJobSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RunJobSpecRequest::RunJobSpecRequest() :
    m_specIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_jobSourceHasBeenSet(false)
{
}

string RunJobSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunJobSpecRequest::GetSpecId() const
{
    return m_specId;
}

void RunJobSpecRequest::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool RunJobSpecRequest::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string RunJobSpecRequest::GetFlowId() const
{
    return m_flowId;
}

void RunJobSpecRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool RunJobSpecRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string RunJobSpecRequest::GetExecutionId() const
{
    return m_executionId;
}

void RunJobSpecRequest::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool RunJobSpecRequest::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string RunJobSpecRequest::GetJobSource() const
{
    return m_jobSource;
}

void RunJobSpecRequest::SetJobSource(const string& _jobSource)
{
    m_jobSource = _jobSource;
    m_jobSourceHasBeenSet = true;
}

bool RunJobSpecRequest::JobSourceHasBeenSet() const
{
    return m_jobSourceHasBeenSet;
}


