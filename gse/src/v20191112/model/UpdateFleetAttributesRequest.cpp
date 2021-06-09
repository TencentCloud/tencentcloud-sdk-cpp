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

#include <tencentcloud/gse/v20191112/model/UpdateFleetAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateFleetAttributesRequest::UpdateFleetAttributesRequest() :
    m_fleetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_newGameSessionProtectionPolicyHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false),
    m_gameServerSessionProtectionTimeLimitHasBeenSet(false)
{
}

string UpdateFleetAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_newGameSessionProtectionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewGameSessionProtectionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newGameSessionProtectionPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCreationLimitPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreationLimitPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceCreationLimitPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_gameServerSessionProtectionTimeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionProtectionTimeLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gameServerSessionProtectionTimeLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFleetAttributesRequest::GetFleetId() const
{
    return m_fleetId;
}

void UpdateFleetAttributesRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string UpdateFleetAttributesRequest::GetDescription() const
{
    return m_description;
}

void UpdateFleetAttributesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateFleetAttributesRequest::GetName() const
{
    return m_name;
}

void UpdateFleetAttributesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateFleetAttributesRequest::GetNewGameSessionProtectionPolicy() const
{
    return m_newGameSessionProtectionPolicy;
}

void UpdateFleetAttributesRequest::SetNewGameSessionProtectionPolicy(const string& _newGameSessionProtectionPolicy)
{
    m_newGameSessionProtectionPolicy = _newGameSessionProtectionPolicy;
    m_newGameSessionProtectionPolicyHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::NewGameSessionProtectionPolicyHasBeenSet() const
{
    return m_newGameSessionProtectionPolicyHasBeenSet;
}

ResourceCreationLimitPolicy UpdateFleetAttributesRequest::GetResourceCreationLimitPolicy() const
{
    return m_resourceCreationLimitPolicy;
}

void UpdateFleetAttributesRequest::SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy)
{
    m_resourceCreationLimitPolicy = _resourceCreationLimitPolicy;
    m_resourceCreationLimitPolicyHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::ResourceCreationLimitPolicyHasBeenSet() const
{
    return m_resourceCreationLimitPolicyHasBeenSet;
}

int64_t UpdateFleetAttributesRequest::GetGameServerSessionProtectionTimeLimit() const
{
    return m_gameServerSessionProtectionTimeLimit;
}

void UpdateFleetAttributesRequest::SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit)
{
    m_gameServerSessionProtectionTimeLimit = _gameServerSessionProtectionTimeLimit;
    m_gameServerSessionProtectionTimeLimitHasBeenSet = true;
}

bool UpdateFleetAttributesRequest::GameServerSessionProtectionTimeLimitHasBeenSet() const
{
    return m_gameServerSessionProtectionTimeLimitHasBeenSet;
}


