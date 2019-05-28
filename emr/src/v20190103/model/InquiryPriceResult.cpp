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

#include <tencentcloud/emr/v20190103/model/InquiryPriceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceResult::InquiryPriceResult() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `InquiryPriceResult.OriginalCost` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = value["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `InquiryPriceResult.DiscountCost` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = value["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `InquiryPriceResult.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InquiryPriceResult.TimeSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetUint64();
        m_timeSpanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InquiryPriceResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_originalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCost, allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountCost, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

}


double InquiryPriceResult::GetOriginalCost() const
{
    return m_originalCost;
}

void InquiryPriceResult::SetOriginalCost(const double& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool InquiryPriceResult::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double InquiryPriceResult::GetDiscountCost() const
{
    return m_discountCost;
}

void InquiryPriceResult::SetDiscountCost(const double& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool InquiryPriceResult::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

string InquiryPriceResult::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceResult::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceResult::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t InquiryPriceResult::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceResult::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceResult::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

