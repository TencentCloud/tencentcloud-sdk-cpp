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

#include <tencentcloud/cme/v20191029/model/CopyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CopyProjectRequest::CopyProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CopyProjectRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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


string CopyProjectRequest::GetPlatform() const
{
    return m_platform;
}

void CopyProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CopyProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CopyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void CopyProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CopyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CopyProjectRequest::GetName() const
{
    return m_name;
}

void CopyProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CopyProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Entity CopyProjectRequest::GetOwner() const
{
    return m_owner;
}

void CopyProjectRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CopyProjectRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string CopyProjectRequest::GetOperator() const
{
    return m_operator;
}

void CopyProjectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CopyProjectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


