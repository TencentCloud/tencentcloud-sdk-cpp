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

#include <tencentcloud/wedata/v20210820/model/RunTasksByMultiWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RunTasksByMultiWorkflowRequest::RunTasksByMultiWorkflowRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdsHasBeenSet(false),
    m_enableMakeUpHasBeenSet(false)
{
}

string RunTasksByMultiWorkflowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIds.begin(); itr != m_workflowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableMakeUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMakeUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMakeUp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunTasksByMultiWorkflowRequest::GetProjectId() const
{
    return m_projectId;
}

void RunTasksByMultiWorkflowRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunTasksByMultiWorkflowRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> RunTasksByMultiWorkflowRequest::GetWorkflowIds() const
{
    return m_workflowIds;
}

void RunTasksByMultiWorkflowRequest::SetWorkflowIds(const vector<string>& _workflowIds)
{
    m_workflowIds = _workflowIds;
    m_workflowIdsHasBeenSet = true;
}

bool RunTasksByMultiWorkflowRequest::WorkflowIdsHasBeenSet() const
{
    return m_workflowIdsHasBeenSet;
}

uint64_t RunTasksByMultiWorkflowRequest::GetEnableMakeUp() const
{
    return m_enableMakeUp;
}

void RunTasksByMultiWorkflowRequest::SetEnableMakeUp(const uint64_t& _enableMakeUp)
{
    m_enableMakeUp = _enableMakeUp;
    m_enableMakeUpHasBeenSet = true;
}

bool RunTasksByMultiWorkflowRequest::EnableMakeUpHasBeenSet() const
{
    return m_enableMakeUpHasBeenSet;
}


