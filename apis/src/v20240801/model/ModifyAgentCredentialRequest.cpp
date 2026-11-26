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

#include <tencentcloud/apis/v20240801/model/ModifyAgentCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ModifyAgentCredentialRequest::ModifyAgentCredentialRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string ModifyAgentCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAgentCredentialRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyAgentCredentialRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyAgentCredentialRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyAgentCredentialRequest::GetID() const
{
    return m_iD;
}

void ModifyAgentCredentialRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyAgentCredentialRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyAgentCredentialRequest::GetName() const
{
    return m_name;
}

void ModifyAgentCredentialRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAgentCredentialRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAgentCredentialRequest::GetType() const
{
    return m_type;
}

void ModifyAgentCredentialRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyAgentCredentialRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AgentCredentialContentDTO ModifyAgentCredentialRequest::GetContent() const
{
    return m_content;
}

void ModifyAgentCredentialRequest::SetContent(const AgentCredentialContentDTO& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyAgentCredentialRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


