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

#include <tencentcloud/rce/v20260130/model/AddPromotionEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

AddPromotionEvent::AddPromotionEvent() :
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviterUserIdHasBeenSet(false),
    m_couponHasBeenSet(false),
    m_pointHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome AddPromotionEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("Coupon") && !value["Coupon"].IsNull())
    {
        if (!value["Coupon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.Coupon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coupon.Deserialize(value["Coupon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_couponHasBeenSet = true;
    }

    if (value.HasMember("Point") && !value["Point"].IsNull())
    {
        if (!value["Point"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.Point` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_point.Deserialize(value["Point"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pointHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddPromotionEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddPromotionEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Point";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_point.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AddPromotionEvent::GetPromotionId() const
{
    return m_promotionId;
}

void AddPromotionEvent::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool AddPromotionEvent::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string AddPromotionEvent::GetPromotionName() const
{
    return m_promotionName;
}

void AddPromotionEvent::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool AddPromotionEvent::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string AddPromotionEvent::GetDescription() const
{
    return m_description;
}

void AddPromotionEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddPromotionEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AddPromotionEvent::GetInviterUserId() const
{
    return m_inviterUserId;
}

void AddPromotionEvent::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool AddPromotionEvent::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

Coupon AddPromotionEvent::GetCoupon() const
{
    return m_coupon;
}

void AddPromotionEvent::SetCoupon(const Coupon& _coupon)
{
    m_coupon = _coupon;
    m_couponHasBeenSet = true;
}

bool AddPromotionEvent::CouponHasBeenSet() const
{
    return m_couponHasBeenSet;
}

CreditPoint AddPromotionEvent::GetPoint() const
{
    return m_point;
}

void AddPromotionEvent::SetPoint(const CreditPoint& _point)
{
    m_point = _point;
    m_pointHasBeenSet = true;
}

bool AddPromotionEvent::PointHasBeenSet() const
{
    return m_pointHasBeenSet;
}

Result AddPromotionEvent::GetResult() const
{
    return m_result;
}

void AddPromotionEvent::SetResult(const Result& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AddPromotionEvent::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<Cust> AddPromotionEvent::GetCust() const
{
    return m_cust;
}

void AddPromotionEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool AddPromotionEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

