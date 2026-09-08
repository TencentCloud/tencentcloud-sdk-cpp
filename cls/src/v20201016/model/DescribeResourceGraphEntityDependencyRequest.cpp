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

#include <tencentcloud/cls/v20201016/model/DescribeResourceGraphEntityDependencyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeResourceGraphEntityDependencyRequest::DescribeResourceGraphEntityDependencyRequest() :
    m_resourceGraphIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_depthHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
}

string DescribeResourceGraphEntityDependencyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_depth, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fromTime, allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceGraphEntityDependencyRequest::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void DescribeResourceGraphEntityDependencyRequest::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

string DescribeResourceGraphEntityDependencyRequest::GetEntityId() const
{
    return m_entityId;
}

void DescribeResourceGraphEntityDependencyRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

int64_t DescribeResourceGraphEntityDependencyRequest::GetDepth() const
{
    return m_depth;
}

void DescribeResourceGraphEntityDependencyRequest::SetDepth(const int64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

int64_t DescribeResourceGraphEntityDependencyRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceGraphEntityDependencyRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeResourceGraphEntityDependencyRequest::GetFromTime() const
{
    return m_fromTime;
}

void DescribeResourceGraphEntityDependencyRequest::SetFromTime(const uint64_t& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

uint64_t DescribeResourceGraphEntityDependencyRequest::GetToTime() const
{
    return m_toTime;
}

void DescribeResourceGraphEntityDependencyRequest::SetToTime(const uint64_t& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntityDependencyRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}


