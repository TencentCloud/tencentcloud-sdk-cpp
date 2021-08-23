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

#include <tencentcloud/ssa/v20180608/model/SocComplianceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SocComplianceItem::SocComplianceItem() :
    m_itemHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_standardItemHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_proStrHasBeenSet(false),
    m_productionHasBeenSet(false),
    m_checkItemsHasBeenSet(false)
{
}

CoreInternalOutcome SocComplianceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StandardItem") && !value["StandardItem"].IsNull())
    {
        if (!value["StandardItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.StandardItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardItem = string(value["StandardItem"].GetString());
        m_standardItemHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("ProStr") && !value["ProStr"].IsNull())
    {
        if (!value["ProStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.ProStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proStr = string(value["ProStr"].GetString());
        m_proStrHasBeenSet = true;
    }

    if (value.HasMember("Production") && !value["Production"].IsNull())
    {
        if (!value["Production"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.Production` is not array type"));

        const rapidjson::Value &tmpValue = value["Production"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SocProductionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_production.push_back(item);
        }
        m_productionHasBeenSet = true;
    }

    if (value.HasMember("CheckItems") && !value["CheckItems"].IsNull())
    {
        if (!value["CheckItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SocComplianceItem.CheckItems` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SocCheckItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkItems.push_back(item);
        }
        m_checkItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SocComplianceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_standardItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardItem.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_proStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proStr.c_str(), allocator).Move(), allocator);
    }

    if (m_productionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Production";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_production.begin(); itr != m_production.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkItems.begin(); itr != m_checkItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SocComplianceItem::GetItem() const
{
    return m_item;
}

void SocComplianceItem::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool SocComplianceItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string SocComplianceItem::GetDescription() const
{
    return m_description;
}

void SocComplianceItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SocComplianceItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SocComplianceItem::GetStandardItem() const
{
    return m_standardItem;
}

void SocComplianceItem::SetStandardItem(const string& _standardItem)
{
    m_standardItem = _standardItem;
    m_standardItemHasBeenSet = true;
}

bool SocComplianceItem::StandardItemHasBeenSet() const
{
    return m_standardItemHasBeenSet;
}

int64_t SocComplianceItem::GetResult() const
{
    return m_result;
}

void SocComplianceItem::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SocComplianceItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string SocComplianceItem::GetSuggestion() const
{
    return m_suggestion;
}

void SocComplianceItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool SocComplianceItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string SocComplianceItem::GetProStr() const
{
    return m_proStr;
}

void SocComplianceItem::SetProStr(const string& _proStr)
{
    m_proStr = _proStr;
    m_proStrHasBeenSet = true;
}

bool SocComplianceItem::ProStrHasBeenSet() const
{
    return m_proStrHasBeenSet;
}

vector<SocProductionItem> SocComplianceItem::GetProduction() const
{
    return m_production;
}

void SocComplianceItem::SetProduction(const vector<SocProductionItem>& _production)
{
    m_production = _production;
    m_productionHasBeenSet = true;
}

bool SocComplianceItem::ProductionHasBeenSet() const
{
    return m_productionHasBeenSet;
}

vector<SocCheckItem> SocComplianceItem::GetCheckItems() const
{
    return m_checkItems;
}

void SocComplianceItem::SetCheckItems(const vector<SocCheckItem>& _checkItems)
{
    m_checkItems = _checkItems;
    m_checkItemsHasBeenSet = true;
}

bool SocComplianceItem::CheckItemsHasBeenSet() const
{
    return m_checkItemsHasBeenSet;
}

