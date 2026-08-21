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

#include <tencentcloud/csip/v20221121/model/WebhookNotifyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebhookNotifyItem::WebhookNotifyItem() :
    m_moduleHasBeenSet(false),
    m_subModuleHasBeenSet(false),
    m_levelsHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome WebhookNotifyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookNotifyItem.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("SubModule") && !value["SubModule"].IsNull())
    {
        if (!value["SubModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookNotifyItem.SubModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subModule = string(value["SubModule"].GetString());
        m_subModuleHasBeenSet = true;
    }

    if (value.HasMember("Levels") && !value["Levels"].IsNull())
    {
        if (!value["Levels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookNotifyItem.Levels` is not array type"));

        const rapidjson::Value &tmpValue = value["Levels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_levels.push_back((*itr).GetString());
        }
        m_levelsHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookNotifyItem.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_items.push_back((*itr).GetString());
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookNotifyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_subModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subModule.c_str(), allocator).Move(), allocator);
    }

    if (m_levelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Levels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_levels.begin(); itr != m_levels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string WebhookNotifyItem::GetModule() const
{
    return m_module;
}

void WebhookNotifyItem::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool WebhookNotifyItem::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string WebhookNotifyItem::GetSubModule() const
{
    return m_subModule;
}

void WebhookNotifyItem::SetSubModule(const string& _subModule)
{
    m_subModule = _subModule;
    m_subModuleHasBeenSet = true;
}

bool WebhookNotifyItem::SubModuleHasBeenSet() const
{
    return m_subModuleHasBeenSet;
}

vector<string> WebhookNotifyItem::GetLevels() const
{
    return m_levels;
}

void WebhookNotifyItem::SetLevels(const vector<string>& _levels)
{
    m_levels = _levels;
    m_levelsHasBeenSet = true;
}

bool WebhookNotifyItem::LevelsHasBeenSet() const
{
    return m_levelsHasBeenSet;
}

vector<string> WebhookNotifyItem::GetItems() const
{
    return m_items;
}

void WebhookNotifyItem::SetItems(const vector<string>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool WebhookNotifyItem::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

