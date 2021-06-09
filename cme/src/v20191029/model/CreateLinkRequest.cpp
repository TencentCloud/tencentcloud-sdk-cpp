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

#include <tencentcloud/cme/v20191029/model/CreateLinkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CreateLinkRequest::CreateLinkRequest() :
    m_platformHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_destinationIdHasBeenSet(false),
    m_destinationOwnerHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateLinkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_destinationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationOwner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_classPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLinkRequest::GetPlatform() const
{
    return m_platform;
}

void CreateLinkRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateLinkRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateLinkRequest::GetType() const
{
    return m_type;
}

void CreateLinkRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLinkRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateLinkRequest::GetName() const
{
    return m_name;
}

void CreateLinkRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLinkRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Entity CreateLinkRequest::GetOwner() const
{
    return m_owner;
}

void CreateLinkRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateLinkRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string CreateLinkRequest::GetDestinationId() const
{
    return m_destinationId;
}

void CreateLinkRequest::SetDestinationId(const string& _destinationId)
{
    m_destinationId = _destinationId;
    m_destinationIdHasBeenSet = true;
}

bool CreateLinkRequest::DestinationIdHasBeenSet() const
{
    return m_destinationIdHasBeenSet;
}

Entity CreateLinkRequest::GetDestinationOwner() const
{
    return m_destinationOwner;
}

void CreateLinkRequest::SetDestinationOwner(const Entity& _destinationOwner)
{
    m_destinationOwner = _destinationOwner;
    m_destinationOwnerHasBeenSet = true;
}

bool CreateLinkRequest::DestinationOwnerHasBeenSet() const
{
    return m_destinationOwnerHasBeenSet;
}

string CreateLinkRequest::GetClassPath() const
{
    return m_classPath;
}

void CreateLinkRequest::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool CreateLinkRequest::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

string CreateLinkRequest::GetOperator() const
{
    return m_operator;
}

void CreateLinkRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLinkRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


