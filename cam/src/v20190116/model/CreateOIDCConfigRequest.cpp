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

#include <tencentcloud/cam/v20190116/model/CreateOIDCConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

CreateOIDCConfigRequest::CreateOIDCConfigRequest() :
    m_identityUrlHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_identityKeyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateOIDCConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_identityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientId.begin(); itr != m_clientId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_identityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityKey.c_str(), allocator).Move(), allocator);
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


string CreateOIDCConfigRequest::GetIdentityUrl() const
{
    return m_identityUrl;
}

void CreateOIDCConfigRequest::SetIdentityUrl(const string& _identityUrl)
{
    m_identityUrl = _identityUrl;
    m_identityUrlHasBeenSet = true;
}

bool CreateOIDCConfigRequest::IdentityUrlHasBeenSet() const
{
    return m_identityUrlHasBeenSet;
}

vector<string> CreateOIDCConfigRequest::GetClientId() const
{
    return m_clientId;
}

void CreateOIDCConfigRequest::SetClientId(const vector<string>& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool CreateOIDCConfigRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string CreateOIDCConfigRequest::GetName() const
{
    return m_name;
}

void CreateOIDCConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateOIDCConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateOIDCConfigRequest::GetIdentityKey() const
{
    return m_identityKey;
}

void CreateOIDCConfigRequest::SetIdentityKey(const string& _identityKey)
{
    m_identityKey = _identityKey;
    m_identityKeyHasBeenSet = true;
}

bool CreateOIDCConfigRequest::IdentityKeyHasBeenSet() const
{
    return m_identityKeyHasBeenSet;
}

string CreateOIDCConfigRequest::GetDescription() const
{
    return m_description;
}

void CreateOIDCConfigRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateOIDCConfigRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


