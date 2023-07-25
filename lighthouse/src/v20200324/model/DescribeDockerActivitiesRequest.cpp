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

#include <tencentcloud/lighthouse/v20200324/model/DescribeDockerActivitiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DescribeDockerActivitiesRequest::DescribeDockerActivitiesRequest() :
    m_instanceIdHasBeenSet(false),
    m_activityIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_createdTimeBeginHasBeenSet(false),
    m_createdTimeEndHasBeenSet(false)
{
}

string DescribeDockerActivitiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_activityIds.begin(); itr != m_activityIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_createdTimeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createdTimeBegin, allocator);
    }

    if (m_createdTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createdTimeEnd, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDockerActivitiesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDockerActivitiesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeDockerActivitiesRequest::GetActivityIds() const
{
    return m_activityIds;
}

void DescribeDockerActivitiesRequest::SetActivityIds(const vector<string>& _activityIds)
{
    m_activityIds = _activityIds;
    m_activityIdsHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::ActivityIdsHasBeenSet() const
{
    return m_activityIdsHasBeenSet;
}

int64_t DescribeDockerActivitiesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDockerActivitiesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDockerActivitiesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDockerActivitiesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDockerActivitiesRequest::GetCreatedTimeBegin() const
{
    return m_createdTimeBegin;
}

void DescribeDockerActivitiesRequest::SetCreatedTimeBegin(const int64_t& _createdTimeBegin)
{
    m_createdTimeBegin = _createdTimeBegin;
    m_createdTimeBeginHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::CreatedTimeBeginHasBeenSet() const
{
    return m_createdTimeBeginHasBeenSet;
}

int64_t DescribeDockerActivitiesRequest::GetCreatedTimeEnd() const
{
    return m_createdTimeEnd;
}

void DescribeDockerActivitiesRequest::SetCreatedTimeEnd(const int64_t& _createdTimeEnd)
{
    m_createdTimeEnd = _createdTimeEnd;
    m_createdTimeEndHasBeenSet = true;
}

bool DescribeDockerActivitiesRequest::CreatedTimeEndHasBeenSet() const
{
    return m_createdTimeEndHasBeenSet;
}


