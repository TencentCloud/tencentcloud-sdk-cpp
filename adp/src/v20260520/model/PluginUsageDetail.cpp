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

#include <tencentcloud/adp/v20260520/model/PluginUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginUsageDetail::PluginUsageDetail() :
    m_pluginNameHasBeenSet(false),
    m_resourceConsumptionListHasBeenSet(false),
    m_toolNameHasBeenSet(false)
{
}

CoreInternalOutcome PluginUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUsageDetail.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceConsumptionList") && !value["ResourceConsumptionList"].IsNull())
    {
        if (!value["ResourceConsumptionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginUsageDetail.ResourceConsumptionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceConsumptionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceConsumption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceConsumptionList.push_back(item);
        }
        m_resourceConsumptionListHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUsageDetail.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConsumptionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConsumptionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConsumptionList.begin(); itr != m_resourceConsumptionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

}


string PluginUsageDetail::GetPluginName() const
{
    return m_pluginName;
}

void PluginUsageDetail::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool PluginUsageDetail::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

vector<ResourceConsumption> PluginUsageDetail::GetResourceConsumptionList() const
{
    return m_resourceConsumptionList;
}

void PluginUsageDetail::SetResourceConsumptionList(const vector<ResourceConsumption>& _resourceConsumptionList)
{
    m_resourceConsumptionList = _resourceConsumptionList;
    m_resourceConsumptionListHasBeenSet = true;
}

bool PluginUsageDetail::ResourceConsumptionListHasBeenSet() const
{
    return m_resourceConsumptionListHasBeenSet;
}

string PluginUsageDetail::GetToolName() const
{
    return m_toolName;
}

void PluginUsageDetail::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool PluginUsageDetail::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

