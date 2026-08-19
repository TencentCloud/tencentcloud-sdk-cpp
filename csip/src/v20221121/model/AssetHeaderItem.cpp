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

#include <tencentcloud/csip/v20221121/model/AssetHeaderItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetHeaderItem::AssetHeaderItem() :
    m_itemTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_copyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_linkURLHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_valueStyleHasBeenSet(false)
{
}

CoreInternalOutcome AssetHeaderItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.ItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = string(value["ItemType"].GetString());
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Copy") && !value["Copy"].IsNull())
    {
        if (!value["Copy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.Copy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_copy = value["Copy"].GetUint64();
        m_copyHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("LinkURL") && !value["LinkURL"].IsNull())
    {
        if (!value["LinkURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.LinkURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkURL = string(value["LinkURL"].GetString());
        m_linkURLHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetFilterConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.Sort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetUint64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("ValueStyle") && !value["ValueStyle"].IsNull())
    {
        if (!value["ValueStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetHeaderItem.ValueStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueStyle = string(value["ValueStyle"].GetString());
        m_valueStyleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetHeaderItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_copyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Copy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copy, allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_linkURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkURL.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_valueStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueStyle.c_str(), allocator).Move(), allocator);
    }

}


string AssetHeaderItem::GetItemType() const
{
    return m_itemType;
}

void AssetHeaderItem::SetItemType(const string& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool AssetHeaderItem::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

string AssetHeaderItem::GetLabel() const
{
    return m_label;
}

void AssetHeaderItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AssetHeaderItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t AssetHeaderItem::GetCopy() const
{
    return m_copy;
}

void AssetHeaderItem::SetCopy(const uint64_t& _copy)
{
    m_copy = _copy;
    m_copyHasBeenSet = true;
}

bool AssetHeaderItem::CopyHasBeenSet() const
{
    return m_copyHasBeenSet;
}

vector<string> AssetHeaderItem::GetValues() const
{
    return m_values;
}

void AssetHeaderItem::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool AssetHeaderItem::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string AssetHeaderItem::GetLinkURL() const
{
    return m_linkURL;
}

void AssetHeaderItem::SetLinkURL(const string& _linkURL)
{
    m_linkURL = _linkURL;
    m_linkURLHasBeenSet = true;
}

bool AssetHeaderItem::LinkURLHasBeenSet() const
{
    return m_linkURLHasBeenSet;
}

vector<AssetFilterConfig> AssetHeaderItem::GetFilters() const
{
    return m_filters;
}

void AssetHeaderItem::SetFilters(const vector<AssetFilterConfig>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool AssetHeaderItem::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t AssetHeaderItem::GetSort() const
{
    return m_sort;
}

void AssetHeaderItem::SetSort(const uint64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool AssetHeaderItem::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string AssetHeaderItem::GetValueStyle() const
{
    return m_valueStyle;
}

void AssetHeaderItem::SetValueStyle(const string& _valueStyle)
{
    m_valueStyle = _valueStyle;
    m_valueStyleHasBeenSet = true;
}

bool AssetHeaderItem::ValueStyleHasBeenSet() const
{
    return m_valueStyleHasBeenSet;
}

