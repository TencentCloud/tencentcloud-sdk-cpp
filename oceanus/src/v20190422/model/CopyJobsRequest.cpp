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

#include <tencentcloud/oceanus/v20190422/model/CopyJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CopyJobsRequest::CopyJobsRequest() :
    m_jobItemsHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_targetWorkspaceIdHasBeenSet(false)
{
}

string CopyJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobItems.begin(); itr != m_jobItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetWorkspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetWorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetWorkspaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CopyJobItem> CopyJobsRequest::GetJobItems() const
{
    return m_jobItems;
}

void CopyJobsRequest::SetJobItems(const vector<CopyJobItem>& _jobItems)
{
    m_jobItems = _jobItems;
    m_jobItemsHasBeenSet = true;
}

bool CopyJobsRequest::JobItemsHasBeenSet() const
{
    return m_jobItemsHasBeenSet;
}

string CopyJobsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CopyJobsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CopyJobsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string CopyJobsRequest::GetTargetWorkspaceId() const
{
    return m_targetWorkspaceId;
}

void CopyJobsRequest::SetTargetWorkspaceId(const string& _targetWorkspaceId)
{
    m_targetWorkspaceId = _targetWorkspaceId;
    m_targetWorkspaceIdHasBeenSet = true;
}

bool CopyJobsRequest::TargetWorkspaceIdHasBeenSet() const
{
    return m_targetWorkspaceIdHasBeenSet;
}


