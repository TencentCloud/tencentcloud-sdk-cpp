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

#include <tencentcloud/cynosdb/v20190107/model/GoodsPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

GoodsPrice::GoodsPrice() :
    m_instancePriceHasBeenSet(false),
    m_storagePriceHasBeenSet(false),
    m_goodsSpecHasBeenSet(false)
{
}

CoreInternalOutcome GoodsPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstancePrice") && !value["InstancePrice"].IsNull())
    {
        if (!value["InstancePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsPrice.InstancePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePrice.Deserialize(value["InstancePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePriceHasBeenSet = true;
    }

    if (value.HasMember("StoragePrice") && !value["StoragePrice"].IsNull())
    {
        if (!value["StoragePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsPrice.StoragePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storagePrice.Deserialize(value["StoragePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storagePriceHasBeenSet = true;
    }

    if (value.HasMember("GoodsSpec") && !value["GoodsSpec"].IsNull())
    {
        if (!value["GoodsSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsPrice.GoodsSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_goodsSpec.Deserialize(value["GoodsSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_goodsSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instancePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storagePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_goodsSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_goodsSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


TradePrice GoodsPrice::GetInstancePrice() const
{
    return m_instancePrice;
}

void GoodsPrice::SetInstancePrice(const TradePrice& _instancePrice)
{
    m_instancePrice = _instancePrice;
    m_instancePriceHasBeenSet = true;
}

bool GoodsPrice::InstancePriceHasBeenSet() const
{
    return m_instancePriceHasBeenSet;
}

TradePrice GoodsPrice::GetStoragePrice() const
{
    return m_storagePrice;
}

void GoodsPrice::SetStoragePrice(const TradePrice& _storagePrice)
{
    m_storagePrice = _storagePrice;
    m_storagePriceHasBeenSet = true;
}

bool GoodsPrice::StoragePriceHasBeenSet() const
{
    return m_storagePriceHasBeenSet;
}

GoodsSpec GoodsPrice::GetGoodsSpec() const
{
    return m_goodsSpec;
}

void GoodsPrice::SetGoodsSpec(const GoodsSpec& _goodsSpec)
{
    m_goodsSpec = _goodsSpec;
    m_goodsSpecHasBeenSet = true;
}

bool GoodsPrice::GoodsSpecHasBeenSet() const
{
    return m_goodsSpecHasBeenSet;
}

