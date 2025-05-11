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

#include <tencentcloud/partners/v20180321/model/SubProductPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

SubProductPriceDetail::SubProductPriceDetail() :
    m_nameHasBeenSet(false),
    m_discountValueHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome SubProductPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubProductPriceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DiscountValue") && !value["DiscountValue"].IsNull())
    {
        if (!value["DiscountValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubProductPriceDetail.DiscountValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountValue = value["DiscountValue"].GetDouble();
        m_discountValueHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubProductPriceDetail.TotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetInt64();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubProductPriceDetail.RealTotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetInt64();
        m_realTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubProductPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_discountValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountValue, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

}


string SubProductPriceDetail::GetName() const
{
    return m_name;
}

void SubProductPriceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubProductPriceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double SubProductPriceDetail::GetDiscountValue() const
{
    return m_discountValue;
}

void SubProductPriceDetail::SetDiscountValue(const double& _discountValue)
{
    m_discountValue = _discountValue;
    m_discountValueHasBeenSet = true;
}

bool SubProductPriceDetail::DiscountValueHasBeenSet() const
{
    return m_discountValueHasBeenSet;
}

int64_t SubProductPriceDetail::GetTotalCost() const
{
    return m_totalCost;
}

void SubProductPriceDetail::SetTotalCost(const int64_t& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool SubProductPriceDetail::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

int64_t SubProductPriceDetail::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void SubProductPriceDetail::SetRealTotalCost(const int64_t& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool SubProductPriceDetail::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

