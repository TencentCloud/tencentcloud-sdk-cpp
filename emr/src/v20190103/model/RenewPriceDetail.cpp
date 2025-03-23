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

#include <tencentcloud/emr/v20190103/model/RenewPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RenewPriceDetail::RenewPriceDetail() :
    m_billingNameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false)
{
}

CoreInternalOutcome RenewPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingName") && !value["BillingName"].IsNull())
    {
        if (!value["BillingName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewPriceDetail.BillingName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingName = string(value["BillingName"].GetString());
        m_billingNameHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RenewPriceDetail.Policy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policy = value["Policy"].GetDouble();
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewPriceDetail.Quantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = value["Quantity"].GetInt64();
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RenewPriceDetail.OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = value["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RenewPriceDetail.DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = value["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenewPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quantity, allocator);
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


string RenewPriceDetail::GetBillingName() const
{
    return m_billingName;
}

void RenewPriceDetail::SetBillingName(const string& _billingName)
{
    m_billingName = _billingName;
    m_billingNameHasBeenSet = true;
}

bool RenewPriceDetail::BillingNameHasBeenSet() const
{
    return m_billingNameHasBeenSet;
}

double RenewPriceDetail::GetPolicy() const
{
    return m_policy;
}

void RenewPriceDetail::SetPolicy(const double& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool RenewPriceDetail::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

int64_t RenewPriceDetail::GetQuantity() const
{
    return m_quantity;
}

void RenewPriceDetail::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool RenewPriceDetail::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

double RenewPriceDetail::GetOriginalCost() const
{
    return m_originalCost;
}

void RenewPriceDetail::SetOriginalCost(const double& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool RenewPriceDetail::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double RenewPriceDetail::GetDiscountCost() const
{
    return m_discountCost;
}

void RenewPriceDetail::SetDiscountCost(const double& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool RenewPriceDetail::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

