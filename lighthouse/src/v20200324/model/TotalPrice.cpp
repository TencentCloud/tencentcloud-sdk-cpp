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

#include <tencentcloud/lighthouse/v20200324/model/TotalPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

TotalPrice::TotalPrice() :
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome TotalPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TotalPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

}


double TotalPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void TotalPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool TotalPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double TotalPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void TotalPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool TotalPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

