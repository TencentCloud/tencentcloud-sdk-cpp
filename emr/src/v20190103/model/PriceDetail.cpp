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

#include <tencentcloud/emr/v20190103/model/PriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PriceDetail::PriceDetail() :
    m_resourceIdHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false)
{
}

CoreInternalOutcome PriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Formula") && !value["Formula"].IsNull())
    {
        if (!value["Formula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = value["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = value["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
    }

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


string PriceDetail::GetResourceId() const
{
    return m_resourceId;
}

void PriceDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool PriceDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string PriceDetail::GetFormula() const
{
    return m_formula;
}

void PriceDetail::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool PriceDetail::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

double PriceDetail::GetOriginalCost() const
{
    return m_originalCost;
}

void PriceDetail::SetOriginalCost(const double& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool PriceDetail::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double PriceDetail::GetDiscountCost() const
{
    return m_discountCost;
}

void PriceDetail::SetDiscountCost(const double& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool PriceDetail::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

