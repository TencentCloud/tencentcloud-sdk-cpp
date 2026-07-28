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

#include <tencentcloud/wedata/v20210820/model/DescribeInstancesByExecutorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstancesByExecutorsRequest::DescribeInstancesByExecutorsRequest() :
    m_projectIdHasBeenSet(false),
    m_executorGroupIdListHasBeenSet(false)
{
}

string DescribeInstancesByExecutorsRequest::ToJsonString() const
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

    if (m_executorGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executorGroupIdList.begin(); itr != m_executorGroupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstancesByExecutorsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstancesByExecutorsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstancesByExecutorsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> DescribeInstancesByExecutorsRequest::GetExecutorGroupIdList() const
{
    return m_executorGroupIdList;
}

void DescribeInstancesByExecutorsRequest::SetExecutorGroupIdList(const vector<string>& _executorGroupIdList)
{
    m_executorGroupIdList = _executorGroupIdList;
    m_executorGroupIdListHasBeenSet = true;
}

bool DescribeInstancesByExecutorsRequest::ExecutorGroupIdListHasBeenSet() const
{
    return m_executorGroupIdListHasBeenSet;
}


