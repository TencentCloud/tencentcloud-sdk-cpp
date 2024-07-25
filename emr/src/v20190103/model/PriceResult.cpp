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

#include <tencentcloud/emr/v20190103/model/PriceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PriceResult::PriceResult() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false)
{
}

CoreInternalOutcome PriceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResult.OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = value["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResult.DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = value["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCost, allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountCost, allocator);
    }

}


double PriceResult::GetOriginalCost() const
{
    return m_originalCost;
}

void PriceResult::SetOriginalCost(const double& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool PriceResult::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double PriceResult::GetDiscountCost() const
{
    return m_discountCost;
}

void PriceResult::SetDiscountCost(const double& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool PriceResult::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

