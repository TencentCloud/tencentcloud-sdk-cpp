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

#include <tencentcloud/rce/v20260130/model/Coupon.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Coupon::Coupon() :
    m_couponIdHasBeenSet(false),
    m_couponNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_percentageRateHasBeenSet(false),
    m_discountAmountHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

CoreInternalOutcome Coupon::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CouponId") && !value["CouponId"].IsNull())
    {
        if (!value["CouponId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.CouponId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_couponId = string(value["CouponId"].GetString());
        m_couponIdHasBeenSet = true;
    }

    if (value.HasMember("CouponName") && !value["CouponName"].IsNull())
    {
        if (!value["CouponName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.CouponName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_couponName = string(value["CouponName"].GetString());
        m_couponNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("PercentageRate") && !value["PercentageRate"].IsNull())
    {
        if (!value["PercentageRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.PercentageRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentageRate = value["PercentageRate"].GetDouble();
        m_percentageRateHasBeenSet = true;
    }

    if (value.HasMember("DiscountAmount") && !value["DiscountAmount"].IsNull())
    {
        if (!value["DiscountAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.DiscountAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_discountAmount.Deserialize(value["DiscountAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_discountAmountHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coupon.Threshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetDouble();
        m_thresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Coupon::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_couponIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CouponId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_couponId.c_str(), allocator).Move(), allocator);
    }

    if (m_couponNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CouponName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_couponName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PercentageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentageRate, allocator);
    }

    if (m_discountAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_discountAmount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

}


string Coupon::GetCouponId() const
{
    return m_couponId;
}

void Coupon::SetCouponId(const string& _couponId)
{
    m_couponId = _couponId;
    m_couponIdHasBeenSet = true;
}

bool Coupon::CouponIdHasBeenSet() const
{
    return m_couponIdHasBeenSet;
}

string Coupon::GetCouponName() const
{
    return m_couponName;
}

void Coupon::SetCouponName(const string& _couponName)
{
    m_couponName = _couponName;
    m_couponNameHasBeenSet = true;
}

bool Coupon::CouponNameHasBeenSet() const
{
    return m_couponNameHasBeenSet;
}

string Coupon::GetStartTime() const
{
    return m_startTime;
}

void Coupon::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Coupon::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Coupon::GetExpireTime() const
{
    return m_expireTime;
}

void Coupon::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Coupon::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

double Coupon::GetPercentageRate() const
{
    return m_percentageRate;
}

void Coupon::SetPercentageRate(const double& _percentageRate)
{
    m_percentageRate = _percentageRate;
    m_percentageRateHasBeenSet = true;
}

bool Coupon::PercentageRateHasBeenSet() const
{
    return m_percentageRateHasBeenSet;
}

Amount Coupon::GetDiscountAmount() const
{
    return m_discountAmount;
}

void Coupon::SetDiscountAmount(const Amount& _discountAmount)
{
    m_discountAmount = _discountAmount;
    m_discountAmountHasBeenSet = true;
}

bool Coupon::DiscountAmountHasBeenSet() const
{
    return m_discountAmountHasBeenSet;
}

double Coupon::GetThreshold() const
{
    return m_threshold;
}

void Coupon::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool Coupon::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

