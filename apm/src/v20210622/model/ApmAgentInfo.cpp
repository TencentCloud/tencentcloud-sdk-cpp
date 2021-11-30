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

#include <tencentcloud/apm/v20210622/model/ApmAgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmAgentInfo::ApmAgentInfo() :
    m_agentDownloadURLHasBeenSet(false),
    m_collectorURLHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_publicCollectorURLHasBeenSet(false),
    m_innerCollectorURLHasBeenSet(false),
    m_privateLinkCollectorURLHasBeenSet(false)
{
}

CoreInternalOutcome ApmAgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentDownloadURL") && !value["AgentDownloadURL"].IsNull())
    {
        if (!value["AgentDownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.AgentDownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentDownloadURL = string(value["AgentDownloadURL"].GetString());
        m_agentDownloadURLHasBeenSet = true;
    }

    if (value.HasMember("CollectorURL") && !value["CollectorURL"].IsNull())
    {
        if (!value["CollectorURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.CollectorURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorURL = string(value["CollectorURL"].GetString());
        m_collectorURLHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("PublicCollectorURL") && !value["PublicCollectorURL"].IsNull())
    {
        if (!value["PublicCollectorURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.PublicCollectorURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicCollectorURL = string(value["PublicCollectorURL"].GetString());
        m_publicCollectorURLHasBeenSet = true;
    }

    if (value.HasMember("InnerCollectorURL") && !value["InnerCollectorURL"].IsNull())
    {
        if (!value["InnerCollectorURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.InnerCollectorURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerCollectorURL = string(value["InnerCollectorURL"].GetString());
        m_innerCollectorURLHasBeenSet = true;
    }

    if (value.HasMember("PrivateLinkCollectorURL") && !value["PrivateLinkCollectorURL"].IsNull())
    {
        if (!value["PrivateLinkCollectorURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAgentInfo.PrivateLinkCollectorURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateLinkCollectorURL = string(value["PrivateLinkCollectorURL"].GetString());
        m_privateLinkCollectorURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmAgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentDownloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentDownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentDownloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorURL.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_publicCollectorURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicCollectorURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicCollectorURL.c_str(), allocator).Move(), allocator);
    }

    if (m_innerCollectorURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerCollectorURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerCollectorURL.c_str(), allocator).Move(), allocator);
    }

    if (m_privateLinkCollectorURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateLinkCollectorURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateLinkCollectorURL.c_str(), allocator).Move(), allocator);
    }

}


string ApmAgentInfo::GetAgentDownloadURL() const
{
    return m_agentDownloadURL;
}

void ApmAgentInfo::SetAgentDownloadURL(const string& _agentDownloadURL)
{
    m_agentDownloadURL = _agentDownloadURL;
    m_agentDownloadURLHasBeenSet = true;
}

bool ApmAgentInfo::AgentDownloadURLHasBeenSet() const
{
    return m_agentDownloadURLHasBeenSet;
}

string ApmAgentInfo::GetCollectorURL() const
{
    return m_collectorURL;
}

void ApmAgentInfo::SetCollectorURL(const string& _collectorURL)
{
    m_collectorURL = _collectorURL;
    m_collectorURLHasBeenSet = true;
}

bool ApmAgentInfo::CollectorURLHasBeenSet() const
{
    return m_collectorURLHasBeenSet;
}

string ApmAgentInfo::GetToken() const
{
    return m_token;
}

void ApmAgentInfo::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ApmAgentInfo::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string ApmAgentInfo::GetPublicCollectorURL() const
{
    return m_publicCollectorURL;
}

void ApmAgentInfo::SetPublicCollectorURL(const string& _publicCollectorURL)
{
    m_publicCollectorURL = _publicCollectorURL;
    m_publicCollectorURLHasBeenSet = true;
}

bool ApmAgentInfo::PublicCollectorURLHasBeenSet() const
{
    return m_publicCollectorURLHasBeenSet;
}

string ApmAgentInfo::GetInnerCollectorURL() const
{
    return m_innerCollectorURL;
}

void ApmAgentInfo::SetInnerCollectorURL(const string& _innerCollectorURL)
{
    m_innerCollectorURL = _innerCollectorURL;
    m_innerCollectorURLHasBeenSet = true;
}

bool ApmAgentInfo::InnerCollectorURLHasBeenSet() const
{
    return m_innerCollectorURLHasBeenSet;
}

string ApmAgentInfo::GetPrivateLinkCollectorURL() const
{
    return m_privateLinkCollectorURL;
}

void ApmAgentInfo::SetPrivateLinkCollectorURL(const string& _privateLinkCollectorURL)
{
    m_privateLinkCollectorURL = _privateLinkCollectorURL;
    m_privateLinkCollectorURLHasBeenSet = true;
}

bool ApmAgentInfo::PrivateLinkCollectorURLHasBeenSet() const
{
    return m_privateLinkCollectorURLHasBeenSet;
}

