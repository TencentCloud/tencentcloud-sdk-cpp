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

#include <tencentcloud/cpdp/v20190820/model/DistributeQueryResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeQueryResult::DistributeQueryResult() :
    m_ordersHasBeenSet(false)
{
}

CoreInternalOutcome DistributeQueryResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Orders") && !value["Orders"].IsNull())
    {
        if (!value["Orders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistributeQueryResult.Orders` is not array type"));

        const rapidjson::Value &tmpValue = value["Orders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiApplyOrder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orders.push_back(item);
        }
        m_ordersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributeQueryResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ordersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orders.begin(); itr != m_orders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MultiApplyOrder> DistributeQueryResult::GetOrders() const
{
    return m_orders;
}

void DistributeQueryResult::SetOrders(const vector<MultiApplyOrder>& _orders)
{
    m_orders = _orders;
    m_ordersHasBeenSet = true;
}

bool DistributeQueryResult::OrdersHasBeenSet() const
{
    return m_ordersHasBeenSet;
}

