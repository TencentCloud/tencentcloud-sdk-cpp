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

#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerInstanceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeSchedulerInstanceStatusRequest::DescribeSchedulerInstanceStatusRequest() :
    m_projectIdHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_executionGroupIdHasBeenSet(false),
    m_executionGroupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdsHasBeenSet(false)
{
}

string DescribeSchedulerInstanceStatusRequest::ToJsonString() const
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

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSchedulerInstanceStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSchedulerInstanceStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void DescribeSchedulerInstanceStatusRequest::SetTaskTypeId(const string& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetExecutionGroupId() const
{
    return m_executionGroupId;
}

void DescribeSchedulerInstanceStatusRequest::SetExecutionGroupId(const string& _executionGroupId)
{
    m_executionGroupId = _executionGroupId;
    m_executionGroupIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ExecutionGroupIdHasBeenSet() const
{
    return m_executionGroupIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetExecutionGroupName() const
{
    return m_executionGroupName;
}

void DescribeSchedulerInstanceStatusRequest::SetExecutionGroupName(const string& _executionGroupName)
{
    m_executionGroupName = _executionGroupName;
    m_executionGroupNameHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ExecutionGroupNameHasBeenSet() const
{
    return m_executionGroupNameHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSchedulerInstanceStatusRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSchedulerInstanceStatusRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetInCharge() const
{
    return m_inCharge;
}

void DescribeSchedulerInstanceStatusRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeSchedulerInstanceStatusRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<string> DescribeSchedulerInstanceStatusRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeSchedulerInstanceStatusRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}


