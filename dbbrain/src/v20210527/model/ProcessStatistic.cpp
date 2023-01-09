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

#include <tencentcloud/dbbrain/v20210527/model/ProcessStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ProcessStatistic::ProcessStatistic() :
    m_itemsHasBeenSet(false),
    m_allConnSumHasBeenSet(false),
    m_activeConnSumHasBeenSet(false)
{
}

CoreInternalOutcome ProcessStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcessStatistic.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SessionItem item;
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

    if (value.HasMember("AllConnSum") && !value["AllConnSum"].IsNull())
    {
        if (!value["AllConnSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStatistic.AllConnSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allConnSum = value["AllConnSum"].GetInt64();
        m_allConnSumHasBeenSet = true;
    }

    if (value.HasMember("ActiveConnSum") && !value["ActiveConnSum"].IsNull())
    {
        if (!value["ActiveConnSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStatistic.ActiveConnSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeConnSum = value["ActiveConnSum"].GetInt64();
        m_activeConnSumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_allConnSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllConnSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allConnSum, allocator);
    }

    if (m_activeConnSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveConnSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeConnSum, allocator);
    }

}


vector<SessionItem> ProcessStatistic::GetItems() const
{
    return m_items;
}

void ProcessStatistic::SetItems(const vector<SessionItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool ProcessStatistic::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t ProcessStatistic::GetAllConnSum() const
{
    return m_allConnSum;
}

void ProcessStatistic::SetAllConnSum(const int64_t& _allConnSum)
{
    m_allConnSum = _allConnSum;
    m_allConnSumHasBeenSet = true;
}

bool ProcessStatistic::AllConnSumHasBeenSet() const
{
    return m_allConnSumHasBeenSet;
}

int64_t ProcessStatistic::GetActiveConnSum() const
{
    return m_activeConnSum;
}

void ProcessStatistic::SetActiveConnSum(const int64_t& _activeConnSum)
{
    m_activeConnSum = _activeConnSum;
    m_activeConnSumHasBeenSet = true;
}

bool ProcessStatistic::ActiveConnSumHasBeenSet() const
{
    return m_activeConnSumHasBeenSet;
}

