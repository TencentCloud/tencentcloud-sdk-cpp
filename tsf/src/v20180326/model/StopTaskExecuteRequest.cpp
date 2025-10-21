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

#include <tencentcloud/tsf/v20180326/model/StopTaskExecuteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

StopTaskExecuteRequest::StopTaskExecuteRequest() :
    m_executeIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string StopTaskExecuteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_executeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executeId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StopTaskExecuteRequest::GetExecuteId() const
{
    return m_executeId;
}

void StopTaskExecuteRequest::SetExecuteId(const string& _executeId)
{
    m_executeId = _executeId;
    m_executeIdHasBeenSet = true;
}

bool StopTaskExecuteRequest::ExecuteIdHasBeenSet() const
{
    return m_executeIdHasBeenSet;
}

string StopTaskExecuteRequest::GetBatchId() const
{
    return m_batchId;
}

void StopTaskExecuteRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool StopTaskExecuteRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string StopTaskExecuteRequest::GetTaskId() const
{
    return m_taskId;
}

void StopTaskExecuteRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool StopTaskExecuteRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


