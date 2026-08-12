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

#include <tencentcloud/rce/v20260130/model/Promotion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Promotion::Promotion() :
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviterUserIdHasBeenSet(false),
    m_couponHasBeenSet(false),
    m_creditPointHasBeenSet(false)
{
}

CoreInternalOutcome Promotion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("Coupon") && !value["Coupon"].IsNull())
    {
        if (!value["Coupon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.Coupon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coupon.Deserialize(value["Coupon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_couponHasBeenSet = true;
    }

    if (value.HasMember("CreditPoint") && !value["CreditPoint"].IsNull())
    {
        if (!value["CreditPoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Promotion.CreditPoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creditPoint.Deserialize(value["CreditPoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creditPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Promotion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promotionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromotionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promotionId.c_str(), allocator).Move(), allocator);
    }

    if (m_promotionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromotionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promotionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inviterUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviterUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviterUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_couponHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coupon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coupon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creditPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creditPoint.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Promotion::GetPromotionId() const
{
    return m_promotionId;
}

void Promotion::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool Promotion::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string Promotion::GetPromotionName() const
{
    return m_promotionName;
}

void Promotion::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool Promotion::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string Promotion::GetDescription() const
{
    return m_description;
}

void Promotion::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Promotion::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Promotion::GetInviterUserId() const
{
    return m_inviterUserId;
}

void Promotion::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool Promotion::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

Coupon Promotion::GetCoupon() const
{
    return m_coupon;
}

void Promotion::SetCoupon(const Coupon& _coupon)
{
    m_coupon = _coupon;
    m_couponHasBeenSet = true;
}

bool Promotion::CouponHasBeenSet() const
{
    return m_couponHasBeenSet;
}

CreditPoint Promotion::GetCreditPoint() const
{
    return m_creditPoint;
}

void Promotion::SetCreditPoint(const CreditPoint& _creditPoint)
{
    m_creditPoint = _creditPoint;
    m_creditPointHasBeenSet = true;
}

bool Promotion::CreditPointHasBeenSet() const
{
    return m_creditPointHasBeenSet;
}

