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

#include <tencentcloud/lighthouse/v20200324/model/PolicyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

PolicyDetail::PolicyDetail() :
    m_userDiscountHasBeenSet(false),
    m_commonDiscountHasBeenSet(false),
    m_finalDiscountHasBeenSet(false),
    m_activityDiscountHasBeenSet(false),
    m_discountTypeHasBeenSet(false)
{
}

CoreInternalOutcome PolicyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserDiscount") && !value["UserDiscount"].IsNull())
    {
        if (!value["UserDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.UserDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_userDiscount = value["UserDiscount"].GetDouble();
        m_userDiscountHasBeenSet = true;
    }

    if (value.HasMember("CommonDiscount") && !value["CommonDiscount"].IsNull())
    {
        if (!value["CommonDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.CommonDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_commonDiscount = value["CommonDiscount"].GetDouble();
        m_commonDiscountHasBeenSet = true;
    }

    if (value.HasMember("FinalDiscount") && !value["FinalDiscount"].IsNull())
    {
        if (!value["FinalDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.FinalDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_finalDiscount = value["FinalDiscount"].GetDouble();
        m_finalDiscountHasBeenSet = true;
    }

    if (value.HasMember("ActivityDiscount") && !value["ActivityDiscount"].IsNull())
    {
        if (!value["ActivityDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.ActivityDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_activityDiscount = value["ActivityDiscount"].GetDouble();
        m_activityDiscountHasBeenSet = true;
    }

    if (value.HasMember("DiscountType") && !value["DiscountType"].IsNull())
    {
        if (!value["DiscountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.DiscountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountType = string(value["DiscountType"].GetString());
        m_discountTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userDiscount, allocator);
    }

    if (m_commonDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonDiscount, allocator);
    }

    if (m_finalDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finalDiscount, allocator);
    }

    if (m_activityDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityDiscount, allocator);
    }

    if (m_discountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountType.c_str(), allocator).Move(), allocator);
    }

}


double PolicyDetail::GetUserDiscount() const
{
    return m_userDiscount;
}

void PolicyDetail::SetUserDiscount(const double& _userDiscount)
{
    m_userDiscount = _userDiscount;
    m_userDiscountHasBeenSet = true;
}

bool PolicyDetail::UserDiscountHasBeenSet() const
{
    return m_userDiscountHasBeenSet;
}

double PolicyDetail::GetCommonDiscount() const
{
    return m_commonDiscount;
}

void PolicyDetail::SetCommonDiscount(const double& _commonDiscount)
{
    m_commonDiscount = _commonDiscount;
    m_commonDiscountHasBeenSet = true;
}

bool PolicyDetail::CommonDiscountHasBeenSet() const
{
    return m_commonDiscountHasBeenSet;
}

double PolicyDetail::GetFinalDiscount() const
{
    return m_finalDiscount;
}

void PolicyDetail::SetFinalDiscount(const double& _finalDiscount)
{
    m_finalDiscount = _finalDiscount;
    m_finalDiscountHasBeenSet = true;
}

bool PolicyDetail::FinalDiscountHasBeenSet() const
{
    return m_finalDiscountHasBeenSet;
}

double PolicyDetail::GetActivityDiscount() const
{
    return m_activityDiscount;
}

void PolicyDetail::SetActivityDiscount(const double& _activityDiscount)
{
    m_activityDiscount = _activityDiscount;
    m_activityDiscountHasBeenSet = true;
}

bool PolicyDetail::ActivityDiscountHasBeenSet() const
{
    return m_activityDiscountHasBeenSet;
}

string PolicyDetail::GetDiscountType() const
{
    return m_discountType;
}

void PolicyDetail::SetDiscountType(const string& _discountType)
{
    m_discountType = _discountType;
    m_discountTypeHasBeenSet = true;
}

bool PolicyDetail::DiscountTypeHasBeenSet() const
{
    return m_discountTypeHasBeenSet;
}

