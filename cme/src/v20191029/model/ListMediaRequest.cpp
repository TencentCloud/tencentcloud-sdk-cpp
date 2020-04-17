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

#include <tencentcloud/cme/v20191029/model/ListMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ListMediaRequest::ListMediaRequest() :
    m_platformHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ListMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListMediaRequest::GetPlatform() const
{
    return m_platform;
}

void ListMediaRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ListMediaRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ListMediaRequest::GetClassPath() const
{
    return m_classPath;
}

void ListMediaRequest::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool ListMediaRequest::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

Entity ListMediaRequest::GetOwner() const
{
    return m_owner;
}

void ListMediaRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ListMediaRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

int64_t ListMediaRequest::GetOffset() const
{
    return m_offset;
}

void ListMediaRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListMediaRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ListMediaRequest::GetLimit() const
{
    return m_limit;
}

void ListMediaRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListMediaRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListMediaRequest::GetOperator() const
{
    return m_operator;
}

void ListMediaRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ListMediaRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


