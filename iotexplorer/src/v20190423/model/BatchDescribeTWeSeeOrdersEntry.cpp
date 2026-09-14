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

#include <tencentcloud/iotexplorer/v20190423/model/BatchDescribeTWeSeeOrdersEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BatchDescribeTWeSeeOrdersEntry::BatchDescribeTWeSeeOrdersEntry() :
    m_orderIdHasBeenSet(false),
    m_customOrderIdHasBeenSet(false)
{
}

CoreInternalOutcome BatchDescribeTWeSeeOrdersEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersEntry.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("CustomOrderId") && !value["CustomOrderId"].IsNull())
    {
        if (!value["CustomOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersEntry.CustomOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customOrderId = string(value["CustomOrderId"].GetString());
        m_customOrderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchDescribeTWeSeeOrdersEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_customOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customOrderId.c_str(), allocator).Move(), allocator);
    }

}


string BatchDescribeTWeSeeOrdersEntry::GetOrderId() const
{
    return m_orderId;
}

void BatchDescribeTWeSeeOrdersEntry::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersEntry::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BatchDescribeTWeSeeOrdersEntry::GetCustomOrderId() const
{
    return m_customOrderId;
}

void BatchDescribeTWeSeeOrdersEntry::SetCustomOrderId(const string& _customOrderId)
{
    m_customOrderId = _customOrderId;
    m_customOrderIdHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersEntry::CustomOrderIdHasBeenSet() const
{
    return m_customOrderIdHasBeenSet;
}

