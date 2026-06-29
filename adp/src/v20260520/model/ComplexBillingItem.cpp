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

#include <tencentcloud/adp/v20260520/model/ComplexBillingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ComplexBillingItem::ComplexBillingItem() :
    m_billingAttributeListHasBeenSet(false),
    m_billingUnitHasBeenSet(false),
    m_cashPriceHasBeenSet(false),
    m_puPriceHasBeenSet(false)
{
}

CoreInternalOutcome ComplexBillingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingAttributeList") && !value["BillingAttributeList"].IsNull())
    {
        if (!value["BillingAttributeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplexBillingItem.BillingAttributeList` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingAttributeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillingAttribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_billingAttributeList.push_back(item);
        }
        m_billingAttributeListHasBeenSet = true;
    }

    if (value.HasMember("BillingUnit") && !value["BillingUnit"].IsNull())
    {
        if (!value["BillingUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexBillingItem.BillingUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingUnit = value["BillingUnit"].GetInt64();
        m_billingUnitHasBeenSet = true;
    }

    if (value.HasMember("CashPrice") && !value["CashPrice"].IsNull())
    {
        if (!value["CashPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexBillingItem.CashPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cashPrice = value["CashPrice"].GetDouble();
        m_cashPriceHasBeenSet = true;
    }

    if (value.HasMember("PuPrice") && !value["PuPrice"].IsNull())
    {
        if (!value["PuPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexBillingItem.PuPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_puPrice = value["PuPrice"].GetDouble();
        m_puPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexBillingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingAttributeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingAttributeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_billingAttributeList.begin(); itr != m_billingAttributeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_billingUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingUnit, allocator);
    }

    if (m_cashPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cashPrice, allocator);
    }

    if (m_puPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PuPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_puPrice, allocator);
    }

}


vector<BillingAttribute> ComplexBillingItem::GetBillingAttributeList() const
{
    return m_billingAttributeList;
}

void ComplexBillingItem::SetBillingAttributeList(const vector<BillingAttribute>& _billingAttributeList)
{
    m_billingAttributeList = _billingAttributeList;
    m_billingAttributeListHasBeenSet = true;
}

bool ComplexBillingItem::BillingAttributeListHasBeenSet() const
{
    return m_billingAttributeListHasBeenSet;
}

int64_t ComplexBillingItem::GetBillingUnit() const
{
    return m_billingUnit;
}

void ComplexBillingItem::SetBillingUnit(const int64_t& _billingUnit)
{
    m_billingUnit = _billingUnit;
    m_billingUnitHasBeenSet = true;
}

bool ComplexBillingItem::BillingUnitHasBeenSet() const
{
    return m_billingUnitHasBeenSet;
}

double ComplexBillingItem::GetCashPrice() const
{
    return m_cashPrice;
}

void ComplexBillingItem::SetCashPrice(const double& _cashPrice)
{
    m_cashPrice = _cashPrice;
    m_cashPriceHasBeenSet = true;
}

bool ComplexBillingItem::CashPriceHasBeenSet() const
{
    return m_cashPriceHasBeenSet;
}

double ComplexBillingItem::GetPuPrice() const
{
    return m_puPrice;
}

void ComplexBillingItem::SetPuPrice(const double& _puPrice)
{
    m_puPrice = _puPrice;
    m_puPriceHasBeenSet = true;
}

bool ComplexBillingItem::PuPriceHasBeenSet() const
{
    return m_puPriceHasBeenSet;
}

