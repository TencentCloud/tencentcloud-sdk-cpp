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

#include <tencentcloud/hai/v20230812/model/CreateMuskPromptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

CreateMuskPromptRequest::CreateMuskPromptRequest() :
    m_workgroupIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_promptParamsHasBeenSet(false)
{
}

string CreateMuskPromptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workgroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkgroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workgroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMuskPromptRequest::GetWorkgroupId() const
{
    return m_workgroupId;
}

void CreateMuskPromptRequest::SetWorkgroupId(const string& _workgroupId)
{
    m_workgroupId = _workgroupId;
    m_workgroupIdHasBeenSet = true;
}

bool CreateMuskPromptRequest::WorkgroupIdHasBeenSet() const
{
    return m_workgroupIdHasBeenSet;
}

string CreateMuskPromptRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateMuskPromptRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateMuskPromptRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string CreateMuskPromptRequest::GetPromptParams() const
{
    return m_promptParams;
}

void CreateMuskPromptRequest::SetPromptParams(const string& _promptParams)
{
    m_promptParams = _promptParams;
    m_promptParamsHasBeenSet = true;
}

bool CreateMuskPromptRequest::PromptParamsHasBeenSet() const
{
    return m_promptParamsHasBeenSet;
}


