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

#include <tencentcloud/apis/v20240801/model/CreateModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CreateModelRequest::CreateModelRequest() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_credentialIDHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_httpProtocolVersionHasBeenSet(false)
{
}

string CreateModelRequest::ToJsonString() const
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


string CreateModelRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateModelRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateModelRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateModelRequest::GetName() const
{
    return m_name;
}

void CreateModelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateModelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateModelRequest::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void CreateModelRequest::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool CreateModelRequest::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

string CreateModelRequest::GetTargetPath() const
{
    return m_targetPath;
}

void CreateModelRequest::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool CreateModelRequest::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

vector<TargetHostDTO> CreateModelRequest::GetTargetHosts() const
{
    return m_targetHosts;
}

void CreateModelRequest::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool CreateModelRequest::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

string CreateModelRequest::GetCredentialID() const
{
    return m_credentialID;
}

void CreateModelRequest::SetCredentialID(const string& _credentialID)
{
    m_credentialID = _credentialID;
    m_credentialIDHasBeenSet = true;
}

bool CreateModelRequest::CredentialIDHasBeenSet() const
{
    return m_credentialIDHasBeenSet;
}

bool CreateModelRequest::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void CreateModelRequest::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool CreateModelRequest::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string CreateModelRequest::GetHttpProtocolVersion() const
{
    return m_httpProtocolVersion;
}

void CreateModelRequest::SetHttpProtocolVersion(const string& _httpProtocolVersion)
{
    m_httpProtocolVersion = _httpProtocolVersion;
    m_httpProtocolVersionHasBeenSet = true;
}

bool CreateModelRequest::HttpProtocolVersionHasBeenSet() const
{
    return m_httpProtocolVersionHasBeenSet;
}


