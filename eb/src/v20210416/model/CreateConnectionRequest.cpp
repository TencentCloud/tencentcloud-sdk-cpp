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

#include <tencentcloud/eb/v20210416/model/CreateConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CreateConnectionRequest::CreateConnectionRequest() :
    m_connectionDescriptionHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_connectionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionDescription.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ConnectionDescription CreateConnectionRequest::GetConnectionDescription() const
{
    return m_connectionDescription;
}

void CreateConnectionRequest::SetConnectionDescription(const ConnectionDescription& _connectionDescription)
{
    m_connectionDescription = _connectionDescription;
    m_connectionDescriptionHasBeenSet = true;
}

bool CreateConnectionRequest::ConnectionDescriptionHasBeenSet() const
{
    return m_connectionDescriptionHasBeenSet;
}

string CreateConnectionRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void CreateConnectionRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool CreateConnectionRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string CreateConnectionRequest::GetConnectionName() const
{
    return m_connectionName;
}

void CreateConnectionRequest::SetConnectionName(const string& _connectionName)
{
    m_connectionName = _connectionName;
    m_connectionNameHasBeenSet = true;
}

bool CreateConnectionRequest::ConnectionNameHasBeenSet() const
{
    return m_connectionNameHasBeenSet;
}

string CreateConnectionRequest::GetDescription() const
{
    return m_description;
}

void CreateConnectionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateConnectionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateConnectionRequest::GetEnable() const
{
    return m_enable;
}

void CreateConnectionRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateConnectionRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateConnectionRequest::GetType() const
{
    return m_type;
}

void CreateConnectionRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateConnectionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


