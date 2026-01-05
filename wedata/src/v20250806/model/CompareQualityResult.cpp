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

#include <tencentcloud/wedata/v20250806/model/CompareQualityResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CompareQualityResult::CompareQualityResult() :
    m_itemsHasBeenSet(false),
    m_totalRowsHasBeenSet(false),
    m_passRowsHasBeenSet(false),
    m_triggerRowsHasBeenSet(false),
    m_computeExpressionHasBeenSet(false)
{
}

CoreInternalOutcome CompareQualityResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareQualityResult.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareQualityResultItem item;
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
            return CoreInternalOutcome(Core::Error("response `CompareQualityResult.TotalRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRows = value["TotalRows"].GetUint64();
        m_totalRowsHasBeenSet = true;
    }

    if (value.HasMember("PassRows") && !value["PassRows"].IsNull())
    {
        if (!value["PassRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResult.PassRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRows = value["PassRows"].GetUint64();
        m_passRowsHasBeenSet = true;
    }

    if (value.HasMember("TriggerRows") && !value["TriggerRows"].IsNull())
    {
        if (!value["TriggerRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResult.TriggerRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerRows = value["TriggerRows"].GetUint64();
        m_triggerRowsHasBeenSet = true;
    }

    if (value.HasMember("ComputeExpression") && !value["ComputeExpression"].IsNull())
    {
        if (!value["ComputeExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResult.ComputeExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeExpression = string(value["ComputeExpression"].GetString());
        m_computeExpressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareQualityResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_computeExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeExpression.c_str(), allocator).Move(), allocator);
    }

}


vector<CompareQualityResultItem> CompareQualityResult::GetItems() const
{
    return m_items;
}

void CompareQualityResult::SetItems(const vector<CompareQualityResultItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CompareQualityResult::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

uint64_t CompareQualityResult::GetTotalRows() const
{
    return m_totalRows;
}

void CompareQualityResult::SetTotalRows(const uint64_t& _totalRows)
{
    m_totalRows = _totalRows;
    m_totalRowsHasBeenSet = true;
}

bool CompareQualityResult::TotalRowsHasBeenSet() const
{
    return m_totalRowsHasBeenSet;
}

uint64_t CompareQualityResult::GetPassRows() const
{
    return m_passRows;
}

void CompareQualityResult::SetPassRows(const uint64_t& _passRows)
{
    m_passRows = _passRows;
    m_passRowsHasBeenSet = true;
}

bool CompareQualityResult::PassRowsHasBeenSet() const
{
    return m_passRowsHasBeenSet;
}

uint64_t CompareQualityResult::GetTriggerRows() const
{
    return m_triggerRows;
}

void CompareQualityResult::SetTriggerRows(const uint64_t& _triggerRows)
{
    m_triggerRows = _triggerRows;
    m_triggerRowsHasBeenSet = true;
}

bool CompareQualityResult::TriggerRowsHasBeenSet() const
{
    return m_triggerRowsHasBeenSet;
}

string CompareQualityResult::GetComputeExpression() const
{
    return m_computeExpression;
}

void CompareQualityResult::SetComputeExpression(const string& _computeExpression)
{
    m_computeExpression = _computeExpression;
    m_computeExpressionHasBeenSet = true;
}

bool CompareQualityResult::ComputeExpressionHasBeenSet() const
{
    return m_computeExpressionHasBeenSet;
}

