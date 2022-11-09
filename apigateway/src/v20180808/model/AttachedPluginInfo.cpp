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

#include <tencentcloud/apigateway/v20180808/model/AttachedPluginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

AttachedPluginInfo::AttachedPluginInfo() :
    m_pluginIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_attachedTimeHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_pluginTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pluginDataHasBeenSet(false)
{
}

CoreInternalOutcome AttachedPluginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("AttachedTime") && !value["AttachedTime"].IsNull())
    {
        if (!value["AttachedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.AttachedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachedTime = string(value["AttachedTime"].GetString());
        m_attachedTimeHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.PluginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = string(value["PluginType"].GetString());
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PluginData") && !value["PluginData"].IsNull())
    {
        if (!value["PluginData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPluginInfo.PluginData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginData = string(value["PluginData"].GetString());
        m_pluginDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachedPluginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginData.c_str(), allocator).Move(), allocator);
    }

}


string AttachedPluginInfo::GetPluginId() const
{
    return m_pluginId;
}

void AttachedPluginInfo::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AttachedPluginInfo::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string AttachedPluginInfo::GetEnvironment() const
{
    return m_environment;
}

void AttachedPluginInfo::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AttachedPluginInfo::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string AttachedPluginInfo::GetAttachedTime() const
{
    return m_attachedTime;
}

void AttachedPluginInfo::SetAttachedTime(const string& _attachedTime)
{
    m_attachedTime = _attachedTime;
    m_attachedTimeHasBeenSet = true;
}

bool AttachedPluginInfo::AttachedTimeHasBeenSet() const
{
    return m_attachedTimeHasBeenSet;
}

string AttachedPluginInfo::GetPluginName() const
{
    return m_pluginName;
}

void AttachedPluginInfo::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool AttachedPluginInfo::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string AttachedPluginInfo::GetPluginType() const
{
    return m_pluginType;
}

void AttachedPluginInfo::SetPluginType(const string& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool AttachedPluginInfo::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string AttachedPluginInfo::GetDescription() const
{
    return m_description;
}

void AttachedPluginInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AttachedPluginInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AttachedPluginInfo::GetPluginData() const
{
    return m_pluginData;
}

void AttachedPluginInfo::SetPluginData(const string& _pluginData)
{
    m_pluginData = _pluginData;
    m_pluginDataHasBeenSet = true;
}

bool AttachedPluginInfo::PluginDataHasBeenSet() const
{
    return m_pluginDataHasBeenSet;
}

