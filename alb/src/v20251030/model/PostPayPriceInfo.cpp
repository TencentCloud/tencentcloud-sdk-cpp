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

#include <tencentcloud/alb/v20251030/model/PostPayPriceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

PostPayPriceInfo::PostPayPriceInfo() :
    m_discountHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false)
{
}

CoreInternalOutcome PostPayPriceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPayPriceInfo.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPayPriceInfo.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPayPriceInfo.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostPayPriceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_unitPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
    }

}


double PostPayPriceInfo::GetDiscount() const
{
    return m_discount;
}

void PostPayPriceInfo::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool PostPayPriceInfo::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double PostPayPriceInfo::GetUnitPrice() const
{
    return m_unitPrice;
}

void PostPayPriceInfo::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool PostPayPriceInfo::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

double PostPayPriceInfo::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void PostPayPriceInfo::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool PostPayPriceInfo::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

