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

#include <tencentcloud/cme/v20191029/model/DeleteClassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

DeleteClassRequest::DeleteClassRequest() :
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string DeleteClassRequest::ToJsonString() const
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

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
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


string DeleteClassRequest::GetPlatform() const
{
    return m_platform;
}

void DeleteClassRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DeleteClassRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

Entity DeleteClassRequest::GetOwner() const
{
    return m_owner;
}

void DeleteClassRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DeleteClassRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string DeleteClassRequest::GetClassPath() const
{
    return m_classPath;
}

void DeleteClassRequest::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool DeleteClassRequest::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

string DeleteClassRequest::GetOperator() const
{
    return m_operator;
}

void DeleteClassRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DeleteClassRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


