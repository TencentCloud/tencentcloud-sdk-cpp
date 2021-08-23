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

#include <tencentcloud/partners/v20180321/model/DealGoodsPriceNewElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DealGoodsPriceNewElem::DealGoodsPriceNewElem() :
    m_realTotalCostHasBeenSet(false),
    m_originalTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome DealGoodsPriceNewElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DealGoodsPriceNewElem.RealTotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetInt64();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("OriginalTotalCost") && !value["OriginalTotalCost"].IsNull())
    {
        if (!value["OriginalTotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DealGoodsPriceNewElem.OriginalTotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalTotalCost = value["OriginalTotalCost"].GetInt64();
        m_originalTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DealGoodsPriceNewElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

    if (m_originalTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalTotalCost, allocator);
    }

}


int64_t DealGoodsPriceNewElem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void DealGoodsPriceNewElem::SetRealTotalCost(const int64_t& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool DealGoodsPriceNewElem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

int64_t DealGoodsPriceNewElem::GetOriginalTotalCost() const
{
    return m_originalTotalCost;
}

void DealGoodsPriceNewElem::SetOriginalTotalCost(const int64_t& _originalTotalCost)
{
    m_originalTotalCost = _originalTotalCost;
    m_originalTotalCostHasBeenSet = true;
}

bool DealGoodsPriceNewElem::OriginalTotalCostHasBeenSet() const
{
    return m_originalTotalCostHasBeenSet;
}

