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

#include <tencentcloud/wedata/v20210820/model/BindProjectExecutorResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BindProjectExecutorResourceRequest::BindProjectExecutorResourceRequest() :
    m_executorGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_executorResourcePackageIdsHasBeenSet(false),
    m_projectIdListHasBeenSet(false)
{
}

string BindProjectExecutorResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorResourcePackageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorResourcePackageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executorResourcePackageIds.begin(); itr != m_executorResourcePackageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIdList.begin(); itr != m_projectIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindProjectExecutorResourceRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void BindProjectExecutorResourceRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool BindProjectExecutorResourceRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string BindProjectExecutorResourceRequest::GetProjectId() const
{
    return m_projectId;
}

void BindProjectExecutorResourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BindProjectExecutorResourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> BindProjectExecutorResourceRequest::GetExecutorResourcePackageIds() const
{
    return m_executorResourcePackageIds;
}

void BindProjectExecutorResourceRequest::SetExecutorResourcePackageIds(const vector<string>& _executorResourcePackageIds)
{
    m_executorResourcePackageIds = _executorResourcePackageIds;
    m_executorResourcePackageIdsHasBeenSet = true;
}

bool BindProjectExecutorResourceRequest::ExecutorResourcePackageIdsHasBeenSet() const
{
    return m_executorResourcePackageIdsHasBeenSet;
}

vector<string> BindProjectExecutorResourceRequest::GetProjectIdList() const
{
    return m_projectIdList;
}

void BindProjectExecutorResourceRequest::SetProjectIdList(const vector<string>& _projectIdList)
{
    m_projectIdList = _projectIdList;
    m_projectIdListHasBeenSet = true;
}

bool BindProjectExecutorResourceRequest::ProjectIdListHasBeenSet() const
{
    return m_projectIdListHasBeenSet;
}


