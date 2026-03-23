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

#include <tencentcloud/apis/v20240801/model/ModifyModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ModifyModelRequest::ModifyModelRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_credentialIDHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_httpProtocolVersionHasBeenSet(false)
{
}

string ModifyModelRequest::ToJsonString() const
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

    if (m_httpProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHosts.begin(); itr != m_targetHosts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_credentialIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialID.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTargetCertsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTargetCertsError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkTargetCertsError, allocator);
    }

    if (m_httpProtocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpProtocolVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyModelRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyModelRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyModelRequest::GetID() const
{
    return m_iD;
}

void ModifyModelRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyModelRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyModelRequest::GetName() const
{
    return m_name;
}

void ModifyModelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyModelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyModelRequest::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void ModifyModelRequest::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool ModifyModelRequest::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

string ModifyModelRequest::GetTargetPath() const
{
    return m_targetPath;
}

void ModifyModelRequest::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool ModifyModelRequest::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

vector<TargetHostDTO> ModifyModelRequest::GetTargetHosts() const
{
    return m_targetHosts;
}

void ModifyModelRequest::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool ModifyModelRequest::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

string ModifyModelRequest::GetCredentialID() const
{
    return m_credentialID;
}

void ModifyModelRequest::SetCredentialID(const string& _credentialID)
{
    m_credentialID = _credentialID;
    m_credentialIDHasBeenSet = true;
}

bool ModifyModelRequest::CredentialIDHasBeenSet() const
{
    return m_credentialIDHasBeenSet;
}

bool ModifyModelRequest::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void ModifyModelRequest::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool ModifyModelRequest::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string ModifyModelRequest::GetHttpProtocolVersion() const
{
    return m_httpProtocolVersion;
}

void ModifyModelRequest::SetHttpProtocolVersion(const string& _httpProtocolVersion)
{
    m_httpProtocolVersion = _httpProtocolVersion;
    m_httpProtocolVersionHasBeenSet = true;
}

bool ModifyModelRequest::HttpProtocolVersionHasBeenSet() const
{
    return m_httpProtocolVersionHasBeenSet;
}


