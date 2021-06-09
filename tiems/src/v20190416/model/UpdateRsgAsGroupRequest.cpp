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

#include <tencentcloud/tiems/v20190416/model/UpdateRsgAsGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

UpdateRsgAsGroupRequest::UpdateRsgAsGroupRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_desiredSizeHasBeenSet(false)
{
}

string UpdateRsgAsGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_desiredSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRsgAsGroupRequest::GetId() const
{
    return m_id;
}

void UpdateRsgAsGroupRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateRsgAsGroupRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateRsgAsGroupRequest::GetName() const
{
    return m_name;
}

void UpdateRsgAsGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateRsgAsGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t UpdateRsgAsGroupRequest::GetMaxSize() const
{
    return m_maxSize;
}

void UpdateRsgAsGroupRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool UpdateRsgAsGroupRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t UpdateRsgAsGroupRequest::GetMinSize() const
{
    return m_minSize;
}

void UpdateRsgAsGroupRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool UpdateRsgAsGroupRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t UpdateRsgAsGroupRequest::GetDesiredSize() const
{
    return m_desiredSize;
}

void UpdateRsgAsGroupRequest::SetDesiredSize(const uint64_t& _desiredSize)
{
    m_desiredSize = _desiredSize;
    m_desiredSizeHasBeenSet = true;
}

bool UpdateRsgAsGroupRequest::DesiredSizeHasBeenSet() const
{
    return m_desiredSizeHasBeenSet;
}


