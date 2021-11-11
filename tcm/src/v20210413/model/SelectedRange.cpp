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

#include <tencentcloud/tcm/v20210413/model/SelectedRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

SelectedRange::SelectedRange() :
    m_itemsHasBeenSet(false),
    m_allHasBeenSet(false)
{
}

CoreInternalOutcome SelectedRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SelectedRange.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SelectedItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("All") && !value["All"].IsNull())
    {
        if (!value["All"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedRange.All` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_all = value["All"].GetBool();
        m_allHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectedRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_all, allocator);
    }

}


vector<SelectedItems> SelectedRange::GetItems() const
{
    return m_items;
}

void SelectedRange::SetItems(const vector<SelectedItems>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool SelectedRange::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

bool SelectedRange::GetAll() const
{
    return m_all;
}

void SelectedRange::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool SelectedRange::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

