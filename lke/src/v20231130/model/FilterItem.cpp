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

#include <tencentcloud/lke/v20231130/model/FilterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

FilterItem::FilterItem() :
    m_filterKeyHasBeenSet(false),
    m_filterValueHasBeenSet(false)
{
}

CoreInternalOutcome FilterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterKey") && !value["FilterKey"].IsNull())
    {
        if (!value["FilterKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterItem.FilterKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterKey = string(value["FilterKey"].GetString());
        m_filterKeyHasBeenSet = true;
    }

    if (value.HasMember("FilterValue") && !value["FilterValue"].IsNull())
    {
        if (!value["FilterValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterItem.FilterValue` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterValue.push_back((*itr).GetString());
        }
        m_filterValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterKey.c_str(), allocator).Move(), allocator);
    }

    if (m_filterValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterValue.begin(); itr != m_filterValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FilterItem::GetFilterKey() const
{
    return m_filterKey;
}

void FilterItem::SetFilterKey(const string& _filterKey)
{
    m_filterKey = _filterKey;
    m_filterKeyHasBeenSet = true;
}

bool FilterItem::FilterKeyHasBeenSet() const
{
    return m_filterKeyHasBeenSet;
}

vector<string> FilterItem::GetFilterValue() const
{
    return m_filterValue;
}

void FilterItem::SetFilterValue(const vector<string>& _filterValue)
{
    m_filterValue = _filterValue;
    m_filterValueHasBeenSet = true;
}

bool FilterItem::FilterValueHasBeenSet() const
{
    return m_filterValueHasBeenSet;
}

