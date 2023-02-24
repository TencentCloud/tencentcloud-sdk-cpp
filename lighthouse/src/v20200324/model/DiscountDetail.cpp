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

#include <tencentcloud/lighthouse/v20200324/model/DiscountDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DiscountDetail::DiscountDetail() :
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_policyDetailHasBeenSet(false)
{
}

CoreInternalOutcome DiscountDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.TotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.RealTotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetDouble();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("PolicyDetail") && !value["PolicyDetail"].IsNull())
    {
        if (!value["PolicyDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountDetail.PolicyDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policyDetail.Deserialize(value["PolicyDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiscountDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
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

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_policyDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policyDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t DiscountDetail::GetTimeSpan() const
{
    return m_timeSpan;
}

void DiscountDetail::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool DiscountDetail::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string DiscountDetail::GetTimeUnit() const
{
    return m_timeUnit;
}

void DiscountDetail::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool DiscountDetail::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

double DiscountDetail::GetTotalCost() const
{
    return m_totalCost;
}

void DiscountDetail::SetTotalCost(const double& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool DiscountDetail::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

double DiscountDetail::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void DiscountDetail::SetRealTotalCost(const double& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool DiscountDetail::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

double DiscountDetail::GetDiscount() const
{
    return m_discount;
}

void DiscountDetail::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool DiscountDetail::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

PolicyDetail DiscountDetail::GetPolicyDetail() const
{
    return m_policyDetail;
}

void DiscountDetail::SetPolicyDetail(const PolicyDetail& _policyDetail)
{
    m_policyDetail = _policyDetail;
    m_policyDetailHasBeenSet = true;
}

bool DiscountDetail::PolicyDetailHasBeenSet() const
{
    return m_policyDetailHasBeenSet;
}

