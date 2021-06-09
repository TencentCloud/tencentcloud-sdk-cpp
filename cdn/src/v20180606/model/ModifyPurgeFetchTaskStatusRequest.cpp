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

#include <tencentcloud/cdn/v20180606/model/ModifyPurgeFetchTaskStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ModifyPurgeFetchTaskStatusRequest::ModifyPurgeFetchTaskStatusRequest() :
    m_executionTimeHasBeenSet(false),
    m_executionStatusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_executionStatusDescHasBeenSet(false)
{
}

string ModifyPurgeFetchTaskStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStatusDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPurgeFetchTaskStatusRequest::GetExecutionTime() const
{
    return m_executionTime;
}

void ModifyPurgeFetchTaskStatusRequest::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool ModifyPurgeFetchTaskStatusRequest::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

string ModifyPurgeFetchTaskStatusRequest::GetExecutionStatus() const
{
    return m_executionStatus;
}

void ModifyPurgeFetchTaskStatusRequest::SetExecutionStatus(const string& _executionStatus)
{
    m_executionStatus = _executionStatus;
    m_executionStatusHasBeenSet = true;
}

bool ModifyPurgeFetchTaskStatusRequest::ExecutionStatusHasBeenSet() const
{
    return m_executionStatusHasBeenSet;
}

string ModifyPurgeFetchTaskStatusRequest::GetId() const
{
    return m_id;
}

void ModifyPurgeFetchTaskStatusRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyPurgeFetchTaskStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyPurgeFetchTaskStatusRequest::GetExecutionStatusDesc() const
{
    return m_executionStatusDesc;
}

void ModifyPurgeFetchTaskStatusRequest::SetExecutionStatusDesc(const string& _executionStatusDesc)
{
    m_executionStatusDesc = _executionStatusDesc;
    m_executionStatusDescHasBeenSet = true;
}

bool ModifyPurgeFetchTaskStatusRequest::ExecutionStatusDescHasBeenSet() const
{
    return m_executionStatusDescHasBeenSet;
}


