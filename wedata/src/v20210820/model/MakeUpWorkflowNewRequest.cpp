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

#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MakeUpWorkflowNewRequest::MakeUpWorkflowNewRequest() :
    m_workFlowIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string MakeUpWorkflowNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MakeUpWorkflowNewRequest::GetWorkFlowId() const
{
    return m_workFlowId;
}

void MakeUpWorkflowNewRequest::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool MakeUpWorkflowNewRequest::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

string MakeUpWorkflowNewRequest::GetStartTime() const
{
    return m_startTime;
}

void MakeUpWorkflowNewRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MakeUpWorkflowNewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MakeUpWorkflowNewRequest::GetEndTime() const
{
    return m_endTime;
}

void MakeUpWorkflowNewRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MakeUpWorkflowNewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string MakeUpWorkflowNewRequest::GetProjectId() const
{
    return m_projectId;
}

void MakeUpWorkflowNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MakeUpWorkflowNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


