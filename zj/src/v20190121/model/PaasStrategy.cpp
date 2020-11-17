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

#include <tencentcloud/zj/v20190121/model/PaasStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

PaasStrategy::PaasStrategy() :
    m_crowdIDHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome PaasStrategy::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CrowdID") && !value["CrowdID"].IsNull())
    {
        if (!value["CrowdID"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PaasStrategy.CrowdID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crowdID = value["CrowdID"].GetInt64();
        m_crowdIDHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Error("response `PaasStrategy.Items` is not array type"));

        const Value &tmpValue = value["Items"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PaasStrategyItem item;
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


    return CoreInternalOutcome(true);
}

void PaasStrategy::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_crowdIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CrowdID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crowdID, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t PaasStrategy::GetCrowdID() const
{
    return m_crowdID;
}

void PaasStrategy::SetCrowdID(const int64_t& _crowdID)
{
    m_crowdID = _crowdID;
    m_crowdIDHasBeenSet = true;
}

bool PaasStrategy::CrowdIDHasBeenSet() const
{
    return m_crowdIDHasBeenSet;
}

vector<PaasStrategyItem> PaasStrategy::GetItems() const
{
    return m_items;
}

void PaasStrategy::SetItems(const vector<PaasStrategyItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool PaasStrategy::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

