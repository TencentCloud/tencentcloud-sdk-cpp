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

#include <tencentcloud/domain/v20180808/model/BiddingAppointResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BiddingAppointResult::BiddingAppointResult() :
    m_businessIDHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_appointPriceHasBeenSet(false),
    m_appointBondPriceHasBeenSet(false),
    m_appointEndTimeHasBeenSet(false),
    m_appointNumHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BiddingAppointResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessID") && !value["BusinessID"].IsNull())
    {
        if (!value["BusinessID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.BusinessID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessID = string(value["BusinessID"].GetString());
        m_businessIDHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AppointPrice") && !value["AppointPrice"].IsNull())
    {
        if (!value["AppointPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.AppointPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointPrice = value["AppointPrice"].GetUint64();
        m_appointPriceHasBeenSet = true;
    }

    if (value.HasMember("AppointBondPrice") && !value["AppointBondPrice"].IsNull())
    {
        if (!value["AppointBondPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.AppointBondPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointBondPrice = value["AppointBondPrice"].GetUint64();
        m_appointBondPriceHasBeenSet = true;
    }

    if (value.HasMember("AppointEndTime") && !value["AppointEndTime"].IsNull())
    {
        if (!value["AppointEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.AppointEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appointEndTime = string(value["AppointEndTime"].GetString());
        m_appointEndTimeHasBeenSet = true;
    }

    if (value.HasMember("AppointNum") && !value["AppointNum"].IsNull())
    {
        if (!value["AppointNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.AppointNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointNum = value["AppointNum"].GetUint64();
        m_appointNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingAppointResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BiddingAppointResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessID.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_appointPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointPrice, allocator);
    }

    if (m_appointBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointBondPrice, allocator);
    }

    if (m_appointEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appointEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appointNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string BiddingAppointResult::GetBusinessID() const
{
    return m_businessID;
}

void BiddingAppointResult::SetBusinessID(const string& _businessID)
{
    m_businessID = _businessID;
    m_businessIDHasBeenSet = true;
}

bool BiddingAppointResult::BusinessIDHasBeenSet() const
{
    return m_businessIDHasBeenSet;
}

string BiddingAppointResult::GetDomain() const
{
    return m_domain;
}

void BiddingAppointResult::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BiddingAppointResult::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t BiddingAppointResult::GetAppointPrice() const
{
    return m_appointPrice;
}

void BiddingAppointResult::SetAppointPrice(const uint64_t& _appointPrice)
{
    m_appointPrice = _appointPrice;
    m_appointPriceHasBeenSet = true;
}

bool BiddingAppointResult::AppointPriceHasBeenSet() const
{
    return m_appointPriceHasBeenSet;
}

uint64_t BiddingAppointResult::GetAppointBondPrice() const
{
    return m_appointBondPrice;
}

void BiddingAppointResult::SetAppointBondPrice(const uint64_t& _appointBondPrice)
{
    m_appointBondPrice = _appointBondPrice;
    m_appointBondPriceHasBeenSet = true;
}

bool BiddingAppointResult::AppointBondPriceHasBeenSet() const
{
    return m_appointBondPriceHasBeenSet;
}

string BiddingAppointResult::GetAppointEndTime() const
{
    return m_appointEndTime;
}

void BiddingAppointResult::SetAppointEndTime(const string& _appointEndTime)
{
    m_appointEndTime = _appointEndTime;
    m_appointEndTimeHasBeenSet = true;
}

bool BiddingAppointResult::AppointEndTimeHasBeenSet() const
{
    return m_appointEndTimeHasBeenSet;
}

uint64_t BiddingAppointResult::GetAppointNum() const
{
    return m_appointNum;
}

void BiddingAppointResult::SetAppointNum(const uint64_t& _appointNum)
{
    m_appointNum = _appointNum;
    m_appointNumHasBeenSet = true;
}

bool BiddingAppointResult::AppointNumHasBeenSet() const
{
    return m_appointNumHasBeenSet;
}

uint64_t BiddingAppointResult::GetStatus() const
{
    return m_status;
}

void BiddingAppointResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BiddingAppointResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

