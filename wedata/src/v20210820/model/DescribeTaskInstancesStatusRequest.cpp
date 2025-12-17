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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskInstancesStatusRequest::DescribeTaskInstancesStatusRequest() :
    m_recordIdListHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeTaskInstancesStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_recordIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordIdList.begin(); itr != m_recordIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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


vector<string> DescribeTaskInstancesStatusRequest::GetRecordIdList() const
{
    return m_recordIdList;
}

void DescribeTaskInstancesStatusRequest::SetRecordIdList(const vector<string>& _recordIdList)
{
    m_recordIdList = _recordIdList;
    m_recordIdListHasBeenSet = true;
}

bool DescribeTaskInstancesStatusRequest::RecordIdListHasBeenSet() const
{
    return m_recordIdListHasBeenSet;
}

string DescribeTaskInstancesStatusRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeTaskInstancesStatusRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeTaskInstancesStatusRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeTaskInstancesStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskInstancesStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskInstancesStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


