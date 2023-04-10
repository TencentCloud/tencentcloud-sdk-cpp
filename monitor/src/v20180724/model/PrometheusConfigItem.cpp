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

#include <tencentcloud/monitor/v20180724/model/PrometheusConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusConfigItem::PrometheusConfigItem() :
    m_nameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfigItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfigItem.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfigItem.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfigItem.Targets` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targets.Deserialize(value["Targets"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targets.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PrometheusConfigItem::GetName() const
{
    return m_name;
}

void PrometheusConfigItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusConfigItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusConfigItem::GetConfig() const
{
    return m_config;
}

void PrometheusConfigItem::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool PrometheusConfigItem::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string PrometheusConfigItem::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusConfigItem::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusConfigItem::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

Targets PrometheusConfigItem::GetTargets() const
{
    return m_targets;
}

void PrometheusConfigItem::SetTargets(const Targets& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool PrometheusConfigItem::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

