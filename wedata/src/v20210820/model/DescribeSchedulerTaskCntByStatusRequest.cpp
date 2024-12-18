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

#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerTaskCntByStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeSchedulerTaskCntByStatusRequest::DescribeSchedulerTaskCntByStatusRequest() :
    m_taskTypeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_resourceGroupIdsHasBeenSet(false)
{
}

string DescribeSchedulerTaskCntByStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_resourceGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceGroupIds.begin(); itr != m_resourceGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeSchedulerTaskCntByStatusRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeSchedulerTaskCntByStatusRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeSchedulerTaskCntByStatusRequest::GetTypeName() const
{
    return m_typeName;
}

void DescribeSchedulerTaskCntByStatusRequest::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string DescribeSchedulerTaskCntByStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSchedulerTaskCntByStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSchedulerTaskCntByStatusRequest::GetInCharge() const
{
    return m_inCharge;
}

void DescribeSchedulerTaskCntByStatusRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string DescribeSchedulerTaskCntByStatusRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeSchedulerTaskCntByStatusRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<string> DescribeSchedulerTaskCntByStatusRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeSchedulerTaskCntByStatusRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeSchedulerTaskCntByStatusRequest::GetResourceGroupIds() const
{
    return m_resourceGroupIds;
}

void DescribeSchedulerTaskCntByStatusRequest::SetResourceGroupIds(const vector<string>& _resourceGroupIds)
{
    m_resourceGroupIds = _resourceGroupIds;
    m_resourceGroupIdsHasBeenSet = true;
}

bool DescribeSchedulerTaskCntByStatusRequest::ResourceGroupIdsHasBeenSet() const
{
    return m_resourceGroupIdsHasBeenSet;
}


