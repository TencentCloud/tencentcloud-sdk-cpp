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

#include <tencentcloud/emr/v20190103/model/EmrPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

EmrPrice::EmrPrice() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_priceSpecHasBeenSet(false),
    m_supportSpotPaidHasBeenSet(false)
{
}

CoreInternalOutcome EmrPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrPrice.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrPrice.DiscountCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = string(value["DiscountCost"].GetString());
        m_discountCostHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrPrice.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("PriceSpec") && !value["PriceSpec"].IsNull())
    {
        if (!value["PriceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmrPrice.PriceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_priceSpec.Deserialize(value["PriceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceSpecHasBeenSet = true;
    }

    if (value.HasMember("SupportSpotPaid") && !value["SupportSpotPaid"].IsNull())
    {
        if (!value["SupportSpotPaid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrPrice.SupportSpotPaid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportSpotPaid = value["SupportSpotPaid"].GetBool();
        m_supportSpotPaidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountCost.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_priceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_priceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_supportSpotPaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportSpotPaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportSpotPaid, allocator);
    }

}


string EmrPrice::GetOriginalCost() const
{
    return m_originalCost;
}

void EmrPrice::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool EmrPrice::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string EmrPrice::GetDiscountCost() const
{
    return m_discountCost;
}

void EmrPrice::SetDiscountCost(const string& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool EmrPrice::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

string EmrPrice::GetUnit() const
{
    return m_unit;
}

void EmrPrice::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool EmrPrice::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

PriceResource EmrPrice::GetPriceSpec() const
{
    return m_priceSpec;
}

void EmrPrice::SetPriceSpec(const PriceResource& _priceSpec)
{
    m_priceSpec = _priceSpec;
    m_priceSpecHasBeenSet = true;
}

bool EmrPrice::PriceSpecHasBeenSet() const
{
    return m_priceSpecHasBeenSet;
}

bool EmrPrice::GetSupportSpotPaid() const
{
    return m_supportSpotPaid;
}

void EmrPrice::SetSupportSpotPaid(const bool& _supportSpotPaid)
{
    m_supportSpotPaid = _supportSpotPaid;
    m_supportSpotPaidHasBeenSet = true;
}

bool EmrPrice::SupportSpotPaidHasBeenSet() const
{
    return m_supportSpotPaidHasBeenSet;
}

