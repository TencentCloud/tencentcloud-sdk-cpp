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

#include <tencentcloud/apis/v20240801/model/CreateAgentAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CreateAgentAppRequest::CreateAgentAppRequest() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_oAuth2ResourceServerIDHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAgentAppRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_oAuth2ResourceServerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuth2ResourceServerID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oAuth2ResourceServerID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentAppRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateAgentAppRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateAgentAppRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateAgentAppRequest::GetName() const
{
    return m_name;
}

void CreateAgentAppRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAgentAppRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAgentAppRequest::GetAuthType() const
{
    return m_authType;
}

void CreateAgentAppRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateAgentAppRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CreateAgentAppRequest::GetOAuth2ResourceServerID() const
{
    return m_oAuth2ResourceServerID;
}

void CreateAgentAppRequest::SetOAuth2ResourceServerID(const string& _oAuth2ResourceServerID)
{
    m_oAuth2ResourceServerID = _oAuth2ResourceServerID;
    m_oAuth2ResourceServerIDHasBeenSet = true;
}

bool CreateAgentAppRequest::OAuth2ResourceServerIDHasBeenSet() const
{
    return m_oAuth2ResourceServerIDHasBeenSet;
}

string CreateAgentAppRequest::GetDescription() const
{
    return m_description;
}

void CreateAgentAppRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAgentAppRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


