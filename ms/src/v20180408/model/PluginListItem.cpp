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

#include <tencentcloud/ms/v20180408/model/PluginListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

PluginListItem::PluginListItem() :
    m_pluginTypeHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_pluginDescHasBeenSet(false)
{
}

CoreInternalOutcome PluginListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginListItem.PluginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = string(value["PluginType"].GetString());
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginListItem.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginDesc") && !value["PluginDesc"].IsNull())
    {
        if (!value["PluginDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginListItem.PluginDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginDesc = string(value["PluginDesc"].GetString());
        m_pluginDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginType.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginDesc.c_str(), allocator).Move(), allocator);
    }

}


string PluginListItem::GetPluginType() const
{
    return m_pluginType;
}

void PluginListItem::SetPluginType(const string& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool PluginListItem::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string PluginListItem::GetPluginName() const
{
    return m_pluginName;
}

void PluginListItem::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool PluginListItem::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string PluginListItem::GetPluginDesc() const
{
    return m_pluginDesc;
}

void PluginListItem::SetPluginDesc(const string& _pluginDesc)
{
    m_pluginDesc = _pluginDesc;
    m_pluginDescHasBeenSet = true;
}

bool PluginListItem::PluginDescHasBeenSet() const
{
    return m_pluginDescHasBeenSet;
}

