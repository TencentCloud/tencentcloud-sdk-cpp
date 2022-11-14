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

#include <tencentcloud/wedata/v20210820/model/CompareResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CompareResult::CompareResult() :
    m_itemsHasBeenSet(false),
    m_totalRowsHasBeenSet(false),
    m_passRowsHasBeenSet(false),
    m_triggerRowsHasBeenSet(false)
{
}

CoreInternalOutcome CompareResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareResult.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareResultItem item;
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

    if (value.HasMember("TotalRows") && !value["TotalRows"].IsNull())
    {
        if (!value["TotalRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.TotalRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRows = value["TotalRows"].GetUint64();
        m_totalRowsHasBeenSet = true;
    }

    if (value.HasMember("PassRows") && !value["PassRows"].IsNull())
    {
        if (!value["PassRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.PassRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRows = value["PassRows"].GetUint64();
        m_passRowsHasBeenSet = true;
    }

    if (value.HasMember("TriggerRows") && !value["TriggerRows"].IsNull())
    {
        if (!value["TriggerRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.TriggerRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerRows = value["TriggerRows"].GetUint64();
        m_triggerRowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_totalRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRows, allocator);
    }

    if (m_passRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRows, allocator);
    }

    if (m_triggerRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerRows, allocator);
    }

}


vector<CompareResultItem> CompareResult::GetItems() const
{
    return m_items;
}

void CompareResult::SetItems(const vector<CompareResultItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CompareResult::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

uint64_t CompareResult::GetTotalRows() const
{
    return m_totalRows;
}

void CompareResult::SetTotalRows(const uint64_t& _totalRows)
{
    m_totalRows = _totalRows;
    m_totalRowsHasBeenSet = true;
}

bool CompareResult::TotalRowsHasBeenSet() const
{
    return m_totalRowsHasBeenSet;
}

uint64_t CompareResult::GetPassRows() const
{
    return m_passRows;
}

void CompareResult::SetPassRows(const uint64_t& _passRows)
{
    m_passRows = _passRows;
    m_passRowsHasBeenSet = true;
}

bool CompareResult::PassRowsHasBeenSet() const
{
    return m_passRowsHasBeenSet;
}

uint64_t CompareResult::GetTriggerRows() const
{
    return m_triggerRows;
}

void CompareResult::SetTriggerRows(const uint64_t& _triggerRows)
{
    m_triggerRows = _triggerRows;
    m_triggerRowsHasBeenSet = true;
}

bool CompareResult::TriggerRowsHasBeenSet() const
{
    return m_triggerRowsHasBeenSet;
}

