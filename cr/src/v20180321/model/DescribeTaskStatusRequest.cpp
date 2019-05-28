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

#include <tencentcloud/cr/v20180321/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeTaskStatusRequest::DescribeTaskStatusRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string DescribeTaskStatusRequest::ToJsonString()
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTaskStatusRequest::GetModule() const
{
    return m_module;
}

void DescribeTaskStatusRequest::SetModule(const string& module)
{
    m_module = module;
    m_moduleHasBeenSet = true;
}

bool DescribeTaskStatusRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DescribeTaskStatusRequest::GetOperation() const
{
    return m_operation;
}

void DescribeTaskStatusRequest::SetOperation(const string& operation)
{
    m_operation = operation;
    m_operationHasBeenSet = true;
}

bool DescribeTaskStatusRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DescribeTaskStatusRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskStatusRequest::SetTaskId(const string& taskId)
{
    m_taskId = taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskStatusRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


