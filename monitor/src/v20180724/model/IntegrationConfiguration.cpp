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

#include <tencentcloud/monitor/v20180724/model/IntegrationConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

IntegrationConfiguration::IntegrationConfiguration() :
    m_nameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_grafanaDashboardURLHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceDesc") && !value["InstanceDesc"].IsNull())
    {
        if (!value["InstanceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.InstanceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDesc = string(value["InstanceDesc"].GetString());
        m_instanceDescHasBeenSet = true;
    }

    if (value.HasMember("GrafanaDashboardURL") && !value["GrafanaDashboardURL"].IsNull())
    {
        if (!value["GrafanaDashboardURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationConfiguration.GrafanaDashboardURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaDashboardURL = string(value["GrafanaDashboardURL"].GetString());
        m_grafanaDashboardURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaDashboardURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaDashboardURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaDashboardURL.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationConfiguration::GetName() const
{
    return m_name;
}

void IntegrationConfiguration::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IntegrationConfiguration::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IntegrationConfiguration::GetKind() const
{
    return m_kind;
}

void IntegrationConfiguration::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool IntegrationConfiguration::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string IntegrationConfiguration::GetContent() const
{
    return m_content;
}

void IntegrationConfiguration::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool IntegrationConfiguration::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t IntegrationConfiguration::GetStatus() const
{
    return m_status;
}

void IntegrationConfiguration::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IntegrationConfiguration::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IntegrationConfiguration::GetCategory() const
{
    return m_category;
}

void IntegrationConfiguration::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool IntegrationConfiguration::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string IntegrationConfiguration::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void IntegrationConfiguration::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool IntegrationConfiguration::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

string IntegrationConfiguration::GetGrafanaDashboardURL() const
{
    return m_grafanaDashboardURL;
}

void IntegrationConfiguration::SetGrafanaDashboardURL(const string& _grafanaDashboardURL)
{
    m_grafanaDashboardURL = _grafanaDashboardURL;
    m_grafanaDashboardURLHasBeenSet = true;
}

bool IntegrationConfiguration::GrafanaDashboardURLHasBeenSet() const
{
    return m_grafanaDashboardURLHasBeenSet;
}

