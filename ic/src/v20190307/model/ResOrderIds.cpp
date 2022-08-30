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

#include <tencentcloud/ic/v20190307/model/ResOrderIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

ResOrderIds::ResOrderIds() :
    m_orderIdsHasBeenSet(false)
{
}

CoreInternalOutcome ResOrderIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIds") && !value["OrderIds"].IsNull())
    {
        if (!value["OrderIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResOrderIds.OrderIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OrderIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orderIds.push_back((*itr).GetString());
        }
        m_orderIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResOrderIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderIds.begin(); itr != m_orderIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ResOrderIds::GetOrderIds() const
{
    return m_orderIds;
}

void ResOrderIds::SetOrderIds(const vector<string>& _orderIds)
{
    m_orderIds = _orderIds;
    m_orderIdsHasBeenSet = true;
}

bool ResOrderIds::OrderIdsHasBeenSet() const
{
    return m_orderIdsHasBeenSet;
}

