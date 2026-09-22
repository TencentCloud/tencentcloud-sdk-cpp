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

#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

CreateAgentRequest::CreateAgentRequest() :
    m_agentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_connectorSetHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

string CreateAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatarUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connectorSet.begin(); itr != m_connectorSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentRequest::GetAgentName() const
{
    return m_agentName;
}

void CreateAgentRequest::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool CreateAgentRequest::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string CreateAgentRequest::GetDescription() const
{
    return m_description;
}

void CreateAgentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAgentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAgentRequest::GetAvatarUrl() const
{
    return m_avatarUrl;
}

void CreateAgentRequest::SetAvatarUrl(const string& _avatarUrl)
{
    m_avatarUrl = _avatarUrl;
    m_avatarUrlHasBeenSet = true;
}

bool CreateAgentRequest::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

string CreateAgentRequest::GetModel() const
{
    return m_model;
}

void CreateAgentRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateAgentRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateAgentRequest::GetManifest() const
{
    return m_manifest;
}

void CreateAgentRequest::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool CreateAgentRequest::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

vector<ConnectorRefInput> CreateAgentRequest::GetConnectorSet() const
{
    return m_connectorSet;
}

void CreateAgentRequest::SetConnectorSet(const vector<ConnectorRefInput>& _connectorSet)
{
    m_connectorSet = _connectorSet;
    m_connectorSetHasBeenSet = true;
}

bool CreateAgentRequest::ConnectorSetHasBeenSet() const
{
    return m_connectorSetHasBeenSet;
}

string CreateAgentRequest::GetAccountId() const
{
    return m_accountId;
}

void CreateAgentRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool CreateAgentRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}


