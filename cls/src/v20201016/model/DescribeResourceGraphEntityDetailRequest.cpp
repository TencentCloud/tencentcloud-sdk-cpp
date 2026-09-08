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

#include <tencentcloud/cls/v20201016/model/DescribeResourceGraphEntityDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeResourceGraphEntityDetailRequest::DescribeResourceGraphEntityDetailRequest() :
    m_entityIdHasBeenSet(false),
    m_resourceGraphIdHasBeenSet(false),
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
}

string DescribeResourceGraphEntityDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
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


string DescribeResourceGraphEntityDetailRequest::GetEntityId() const
{
    return m_entityId;
}

void DescribeResourceGraphEntityDetailRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool DescribeResourceGraphEntityDetailRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string DescribeResourceGraphEntityDetailRequest::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void DescribeResourceGraphEntityDetailRequest::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool DescribeResourceGraphEntityDetailRequest::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

uint64_t DescribeResourceGraphEntityDetailRequest::GetFromTime() const
{
    return m_fromTime;
}

void DescribeResourceGraphEntityDetailRequest::SetFromTime(const uint64_t& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntityDetailRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

uint64_t DescribeResourceGraphEntityDetailRequest::GetToTime() const
{
    return m_toTime;
}

void DescribeResourceGraphEntityDetailRequest::SetToTime(const uint64_t& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntityDetailRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}


