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

#include <tencentcloud/lke/v20231130/model/ClarificationWidgetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ClarificationWidgetConfig::ClarificationWidgetConfig() :
    m_widgetIdHasBeenSet(false),
    m_clarificationWidgetTypeHasBeenSet(false),
    m_widgetNameHasBeenSet(false),
    m_widgetPreviewHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ClarificationWidgetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationWidgetConfig.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("ClarificationWidgetType") && !value["ClarificationWidgetType"].IsNull())
    {
        if (!value["ClarificationWidgetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationWidgetConfig.ClarificationWidgetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clarificationWidgetType = value["ClarificationWidgetType"].GetInt64();
        m_clarificationWidgetTypeHasBeenSet = true;
    }

    if (value.HasMember("WidgetName") && !value["WidgetName"].IsNull())
    {
        if (!value["WidgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationWidgetConfig.WidgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetName = string(value["WidgetName"].GetString());
        m_widgetNameHasBeenSet = true;
    }

    if (value.HasMember("WidgetPreview") && !value["WidgetPreview"].IsNull())
    {
        if (!value["WidgetPreview"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationWidgetConfig.WidgetPreview` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetPreview = string(value["WidgetPreview"].GetString());
        m_widgetPreviewHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationWidgetConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClarificationWidgetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clarificationWidgetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClarificationWidgetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clarificationWidgetType, allocator);
    }

    if (m_widgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetPreview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetPreview.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string ClarificationWidgetConfig::GetWidgetId() const
{
    return m_widgetId;
}

void ClarificationWidgetConfig::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool ClarificationWidgetConfig::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

int64_t ClarificationWidgetConfig::GetClarificationWidgetType() const
{
    return m_clarificationWidgetType;
}

void ClarificationWidgetConfig::SetClarificationWidgetType(const int64_t& _clarificationWidgetType)
{
    m_clarificationWidgetType = _clarificationWidgetType;
    m_clarificationWidgetTypeHasBeenSet = true;
}

bool ClarificationWidgetConfig::ClarificationWidgetTypeHasBeenSet() const
{
    return m_clarificationWidgetTypeHasBeenSet;
}

string ClarificationWidgetConfig::GetWidgetName() const
{
    return m_widgetName;
}

void ClarificationWidgetConfig::SetWidgetName(const string& _widgetName)
{
    m_widgetName = _widgetName;
    m_widgetNameHasBeenSet = true;
}

bool ClarificationWidgetConfig::WidgetNameHasBeenSet() const
{
    return m_widgetNameHasBeenSet;
}

string ClarificationWidgetConfig::GetWidgetPreview() const
{
    return m_widgetPreview;
}

void ClarificationWidgetConfig::SetWidgetPreview(const string& _widgetPreview)
{
    m_widgetPreview = _widgetPreview;
    m_widgetPreviewHasBeenSet = true;
}

bool ClarificationWidgetConfig::WidgetPreviewHasBeenSet() const
{
    return m_widgetPreviewHasBeenSet;
}

bool ClarificationWidgetConfig::GetEnabled() const
{
    return m_enabled;
}

void ClarificationWidgetConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClarificationWidgetConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

