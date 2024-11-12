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

#include <tencentcloud/hai/v20230812/model/Price.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

Price::Price() :
    m_instancePriceHasBeenSet(false),
    m_cloudDiskPriceHasBeenSet(false),
    m_priceDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome Price::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstancePrice") && !value["InstancePrice"].IsNull())
    {
        if (!value["InstancePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Price.InstancePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePrice.Deserialize(value["InstancePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePriceHasBeenSet = true;
    }

    if (value.HasMember("CloudDiskPrice") && !value["CloudDiskPrice"].IsNull())
    {
        if (!value["CloudDiskPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Price.CloudDiskPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudDiskPrice.Deserialize(value["CloudDiskPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudDiskPriceHasBeenSet = true;
    }

    if (value.HasMember("PriceDetailSet") && !value["PriceDetailSet"].IsNull())
    {
        if (!value["PriceDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Price.PriceDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PriceDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ItemPriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_priceDetailSet.push_back(item);
        }
        m_priceDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Price::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instancePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cloudDiskPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudDiskPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudDiskPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_priceDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_priceDetailSet.begin(); itr != m_priceDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ItemPrice Price::GetInstancePrice() const
{
    return m_instancePrice;
}

void Price::SetInstancePrice(const ItemPrice& _instancePrice)
{
    m_instancePrice = _instancePrice;
    m_instancePriceHasBeenSet = true;
}

bool Price::InstancePriceHasBeenSet() const
{
    return m_instancePriceHasBeenSet;
}

ItemPrice Price::GetCloudDiskPrice() const
{
    return m_cloudDiskPrice;
}

void Price::SetCloudDiskPrice(const ItemPrice& _cloudDiskPrice)
{
    m_cloudDiskPrice = _cloudDiskPrice;
    m_cloudDiskPriceHasBeenSet = true;
}

bool Price::CloudDiskPriceHasBeenSet() const
{
    return m_cloudDiskPriceHasBeenSet;
}

vector<ItemPriceDetail> Price::GetPriceDetailSet() const
{
    return m_priceDetailSet;
}

void Price::SetPriceDetailSet(const vector<ItemPriceDetail>& _priceDetailSet)
{
    m_priceDetailSet = _priceDetailSet;
    m_priceDetailSetHasBeenSet = true;
}

bool Price::PriceDetailSetHasBeenSet() const
{
    return m_priceDetailSetHasBeenSet;
}

