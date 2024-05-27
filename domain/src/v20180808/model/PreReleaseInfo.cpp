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

#include <tencentcloud/domain/v20180808/model/PreReleaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

PreReleaseInfo::PreReleaseInfo() :
    m_domainHasBeenSet(false),
    m_reservationTimeHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_delTimeHasBeenSet(false),
    m_currentPeopleHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_isFollowHasBeenSet(false),
    m_isAppointHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_isDomainUserHasBeenSet(false)
{
}

CoreInternalOutcome PreReleaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ReservationTime") && !value["ReservationTime"].IsNull())
    {
        if (!value["ReservationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.ReservationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservationTime = string(value["ReservationTime"].GetString());
        m_reservationTimeHasBeenSet = true;
    }

    if (value.HasMember("RegTime") && !value["RegTime"].IsNull())
    {
        if (!value["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(value["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (value.HasMember("DelTime") && !value["DelTime"].IsNull())
    {
        if (!value["DelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.DelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delTime = string(value["DelTime"].GetString());
        m_delTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentPeople") && !value["CurrentPeople"].IsNull())
    {
        if (!value["CurrentPeople"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.CurrentPeople` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPeople = value["CurrentPeople"].GetInt64();
        m_currentPeopleHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("IsFollow") && !value["IsFollow"].IsNull())
    {
        if (!value["IsFollow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.IsFollow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFollow = value["IsFollow"].GetBool();
        m_isFollowHasBeenSet = true;
    }

    if (value.HasMember("IsAppoint") && !value["IsAppoint"].IsNull())
    {
        if (!value["IsAppoint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.IsAppoint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAppoint = value["IsAppoint"].GetBool();
        m_isAppointHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("IsDomainUser") && !value["IsDomainUser"].IsNull())
    {
        if (!value["IsDomainUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PreReleaseInfo.IsDomainUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDomainUser = value["IsDomainUser"].GetBool();
        m_isDomainUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreReleaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_reservationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_delTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPeopleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPeople";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPeople, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_isFollowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFollow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFollow, allocator);
    }

    if (m_isAppointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAppoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAppoint, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDomainUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDomainUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDomainUser, allocator);
    }

}


string PreReleaseInfo::GetDomain() const
{
    return m_domain;
}

void PreReleaseInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PreReleaseInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PreReleaseInfo::GetReservationTime() const
{
    return m_reservationTime;
}

void PreReleaseInfo::SetReservationTime(const string& _reservationTime)
{
    m_reservationTime = _reservationTime;
    m_reservationTimeHasBeenSet = true;
}

bool PreReleaseInfo::ReservationTimeHasBeenSet() const
{
    return m_reservationTimeHasBeenSet;
}

string PreReleaseInfo::GetRegTime() const
{
    return m_regTime;
}

void PreReleaseInfo::SetRegTime(const string& _regTime)
{
    m_regTime = _regTime;
    m_regTimeHasBeenSet = true;
}

bool PreReleaseInfo::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string PreReleaseInfo::GetDelTime() const
{
    return m_delTime;
}

void PreReleaseInfo::SetDelTime(const string& _delTime)
{
    m_delTime = _delTime;
    m_delTimeHasBeenSet = true;
}

bool PreReleaseInfo::DelTimeHasBeenSet() const
{
    return m_delTimeHasBeenSet;
}

int64_t PreReleaseInfo::GetCurrentPeople() const
{
    return m_currentPeople;
}

void PreReleaseInfo::SetCurrentPeople(const int64_t& _currentPeople)
{
    m_currentPeople = _currentPeople;
    m_currentPeopleHasBeenSet = true;
}

bool PreReleaseInfo::CurrentPeopleHasBeenSet() const
{
    return m_currentPeopleHasBeenSet;
}

double PreReleaseInfo::GetPrice() const
{
    return m_price;
}

void PreReleaseInfo::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PreReleaseInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

bool PreReleaseInfo::GetIsFollow() const
{
    return m_isFollow;
}

void PreReleaseInfo::SetIsFollow(const bool& _isFollow)
{
    m_isFollow = _isFollow;
    m_isFollowHasBeenSet = true;
}

bool PreReleaseInfo::IsFollowHasBeenSet() const
{
    return m_isFollowHasBeenSet;
}

bool PreReleaseInfo::GetIsAppoint() const
{
    return m_isAppoint;
}

void PreReleaseInfo::SetIsAppoint(const bool& _isAppoint)
{
    m_isAppoint = _isAppoint;
    m_isAppointHasBeenSet = true;
}

bool PreReleaseInfo::IsAppointHasBeenSet() const
{
    return m_isAppointHasBeenSet;
}

string PreReleaseInfo::GetBusinessId() const
{
    return m_businessId;
}

void PreReleaseInfo::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool PreReleaseInfo::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

bool PreReleaseInfo::GetIsDomainUser() const
{
    return m_isDomainUser;
}

void PreReleaseInfo::SetIsDomainUser(const bool& _isDomainUser)
{
    m_isDomainUser = _isDomainUser;
    m_isDomainUserHasBeenSet = true;
}

bool PreReleaseInfo::IsDomainUserHasBeenSet() const
{
    return m_isDomainUserHasBeenSet;
}

