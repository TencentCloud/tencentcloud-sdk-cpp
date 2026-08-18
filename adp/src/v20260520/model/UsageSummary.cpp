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

#include <tencentcloud/adp/v20260520/model/UsageSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

UsageSummary::UsageSummary() :
    m_modelHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_pluginHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_viewTypeHasBeenSet(false)
{
}

CoreInternalOutcome UsageSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.Platform` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_platform.Deserialize(value["Platform"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Plugin") && !value["Plugin"].IsNull())
    {
        if (!value["Plugin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.Plugin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_plugin.Deserialize(value["Plugin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pluginHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("ViewType") && !value["ViewType"].IsNull())
    {
        if (!value["ViewType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSummary.ViewType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_viewType = value["ViewType"].GetInt64();
        m_viewTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_platform.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_plugin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_viewType, allocator);
    }

}


ModelUsageSummary UsageSummary::GetModel() const
{
    return m_model;
}

void UsageSummary::SetModel(const ModelUsageSummary& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool UsageSummary::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

PlatformUsageSummary UsageSummary::GetPlatform() const
{
    return m_platform;
}

void UsageSummary::SetPlatform(const PlatformUsageSummary& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool UsageSummary::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

PluginUsageSummary UsageSummary::GetPlugin() const
{
    return m_plugin;
}

void UsageSummary::SetPlugin(const PluginUsageSummary& _plugin)
{
    m_plugin = _plugin;
    m_pluginHasBeenSet = true;
}

bool UsageSummary::PluginHasBeenSet() const
{
    return m_pluginHasBeenSet;
}

string UsageSummary::GetSourceId() const
{
    return m_sourceId;
}

void UsageSummary::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool UsageSummary::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string UsageSummary::GetSourceName() const
{
    return m_sourceName;
}

void UsageSummary::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool UsageSummary::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

int64_t UsageSummary::GetViewType() const
{
    return m_viewType;
}

void UsageSummary::SetViewType(const int64_t& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool UsageSummary::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

