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

#include <tencentcloud/emr/v20190103/model/PartDetailPriceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PartDetailPriceItem::PartDetailPriceItem() :
    m_instanceTypeHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_goodsNumHasBeenSet(false)
{
}

CoreInternalOutcome PartDetailPriceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.RealCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = value["RealCost"].GetDouble();
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.RealTotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetDouble();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.Policy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policy = value["Policy"].GetDouble();
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartDetailPriceItem.GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = value["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartDetailPriceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_realCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realCost, allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsNum, allocator);
    }

}


string PartDetailPriceItem::GetInstanceType() const
{
    return m_instanceType;
}

void PartDetailPriceItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool PartDetailPriceItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

double PartDetailPriceItem::GetPrice() const
{
    return m_price;
}

void PartDetailPriceItem::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PartDetailPriceItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double PartDetailPriceItem::GetRealCost() const
{
    return m_realCost;
}

void PartDetailPriceItem::SetRealCost(const double& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool PartDetailPriceItem::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

double PartDetailPriceItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void PartDetailPriceItem::SetRealTotalCost(const double& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool PartDetailPriceItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

double PartDetailPriceItem::GetPolicy() const
{
    return m_policy;
}

void PartDetailPriceItem::SetPolicy(const double& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool PartDetailPriceItem::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

int64_t PartDetailPriceItem::GetGoodsNum() const
{
    return m_goodsNum;
}

void PartDetailPriceItem::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool PartDetailPriceItem::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

