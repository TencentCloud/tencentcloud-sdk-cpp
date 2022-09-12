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

#include <tencentcloud/monitor/v20180724/model/GrafanaIntegrationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GrafanaIntegrationConfig::GrafanaIntegrationConfig() :
    m_integrationIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_grafanaURLHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaIntegrationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntegrationId") && !value["IntegrationId"].IsNull())
    {
        if (!value["IntegrationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaIntegrationConfig.IntegrationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrationId = string(value["IntegrationId"].GetString());
        m_integrationIdHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaIntegrationConfig.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaIntegrationConfig.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaIntegrationConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("GrafanaURL") && !value["GrafanaURL"].IsNull())
    {
        if (!value["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaIntegrationConfig.GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(value["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaIntegrationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_integrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

}


string GrafanaIntegrationConfig::GetIntegrationId() const
{
    return m_integrationId;
}

void GrafanaIntegrationConfig::SetIntegrationId(const string& _integrationId)
{
    m_integrationId = _integrationId;
    m_integrationIdHasBeenSet = true;
}

bool GrafanaIntegrationConfig::IntegrationIdHasBeenSet() const
{
    return m_integrationIdHasBeenSet;
}

string GrafanaIntegrationConfig::GetKind() const
{
    return m_kind;
}

void GrafanaIntegrationConfig::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool GrafanaIntegrationConfig::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string GrafanaIntegrationConfig::GetContent() const
{
    return m_content;
}

void GrafanaIntegrationConfig::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool GrafanaIntegrationConfig::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string GrafanaIntegrationConfig::GetDescription() const
{
    return m_description;
}

void GrafanaIntegrationConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GrafanaIntegrationConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GrafanaIntegrationConfig::GetGrafanaURL() const
{
    return m_grafanaURL;
}

void GrafanaIntegrationConfig::SetGrafanaURL(const string& _grafanaURL)
{
    m_grafanaURL = _grafanaURL;
    m_grafanaURLHasBeenSet = true;
}

bool GrafanaIntegrationConfig::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

