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

#include <tencentcloud/apigateway/v20180808/model/Plugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

Plugin::Plugin() :
    m_pluginIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_pluginTypeHasBeenSet(false),
    m_pluginDataHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome Plugin::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.PluginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = string(value["PluginType"].GetString());
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("PluginData") && !value["PluginData"].IsNull())
    {
        if (!value["PluginData"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.PluginData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginData = string(value["PluginData"].GetString());
        m_pluginDataHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Plugin.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Plugin::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pluginType.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PluginData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pluginData.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string Plugin::GetPluginId() const
{
    return m_pluginId;
}

void Plugin::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool Plugin::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string Plugin::GetPluginName() const
{
    return m_pluginName;
}

void Plugin::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool Plugin::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string Plugin::GetPluginType() const
{
    return m_pluginType;
}

void Plugin::SetPluginType(const string& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool Plugin::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string Plugin::GetPluginData() const
{
    return m_pluginData;
}

void Plugin::SetPluginData(const string& _pluginData)
{
    m_pluginData = _pluginData;
    m_pluginDataHasBeenSet = true;
}

bool Plugin::PluginDataHasBeenSet() const
{
    return m_pluginDataHasBeenSet;
}

string Plugin::GetDescription() const
{
    return m_description;
}

void Plugin::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Plugin::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Plugin::GetCreatedTime() const
{
    return m_createdTime;
}

void Plugin::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Plugin::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Plugin::GetModifiedTime() const
{
    return m_modifiedTime;
}

void Plugin::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool Plugin::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

