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

#include <tencentcloud/domain/v20180808/model/BiddingResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BiddingResult::BiddingResult() :
    m_businessIDHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_currentPriceHasBeenSet(false),
    m_currentNicknameHasBeenSet(false),
    m_biddingPriceHasBeenSet(false),
    m_biddingBondPriceHasBeenSet(false),
    m_biddingEndTimeHasBeenSet(false),
    m_biddingFlagHasBeenSet(false),
    m_biddingNumHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BiddingResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessID") && !value["BusinessID"].IsNull())
    {
        if (!value["BusinessID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BusinessID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessID = string(value["BusinessID"].GetString());
        m_businessIDHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("CurrentPrice") && !value["CurrentPrice"].IsNull())
    {
        if (!value["CurrentPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.CurrentPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPrice = value["CurrentPrice"].GetUint64();
        m_currentPriceHasBeenSet = true;
    }

    if (value.HasMember("CurrentNickname") && !value["CurrentNickname"].IsNull())
    {
        if (!value["CurrentNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.CurrentNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentNickname = string(value["CurrentNickname"].GetString());
        m_currentNicknameHasBeenSet = true;
    }

    if (value.HasMember("BiddingPrice") && !value["BiddingPrice"].IsNull())
    {
        if (!value["BiddingPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BiddingPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingPrice = value["BiddingPrice"].GetUint64();
        m_biddingPriceHasBeenSet = true;
    }

    if (value.HasMember("BiddingBondPrice") && !value["BiddingBondPrice"].IsNull())
    {
        if (!value["BiddingBondPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BiddingBondPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondPrice = value["BiddingBondPrice"].GetUint64();
        m_biddingBondPriceHasBeenSet = true;
    }

    if (value.HasMember("BiddingEndTime") && !value["BiddingEndTime"].IsNull())
    {
        if (!value["BiddingEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BiddingEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingEndTime = string(value["BiddingEndTime"].GetString());
        m_biddingEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BiddingFlag") && !value["BiddingFlag"].IsNull())
    {
        if (!value["BiddingFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BiddingFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingFlag = value["BiddingFlag"].GetUint64();
        m_biddingFlagHasBeenSet = true;
    }

    if (value.HasMember("BiddingNum") && !value["BiddingNum"].IsNull())
    {
        if (!value["BiddingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.BiddingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingNum = value["BiddingNum"].GetUint64();
        m_biddingNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BiddingResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_currentPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPrice, allocator);
    }

    if (m_currentNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingPrice, allocator);
    }

    if (m_biddingBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingBondPrice, allocator);
    }

    if (m_biddingEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingFlag, allocator);
    }

    if (m_biddingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string BiddingResult::GetBusinessID() const
{
    return m_businessID;
}

void BiddingResult::SetBusinessID(const string& _businessID)
{
    m_businessID = _businessID;
    m_businessIDHasBeenSet = true;
}

bool BiddingResult::BusinessIDHasBeenSet() const
{
    return m_businessIDHasBeenSet;
}

string BiddingResult::GetDomain() const
{
    return m_domain;
}

void BiddingResult::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BiddingResult::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t BiddingResult::GetCurrentPrice() const
{
    return m_currentPrice;
}

void BiddingResult::SetCurrentPrice(const uint64_t& _currentPrice)
{
    m_currentPrice = _currentPrice;
    m_currentPriceHasBeenSet = true;
}

bool BiddingResult::CurrentPriceHasBeenSet() const
{
    return m_currentPriceHasBeenSet;
}

string BiddingResult::GetCurrentNickname() const
{
    return m_currentNickname;
}

void BiddingResult::SetCurrentNickname(const string& _currentNickname)
{
    m_currentNickname = _currentNickname;
    m_currentNicknameHasBeenSet = true;
}

bool BiddingResult::CurrentNicknameHasBeenSet() const
{
    return m_currentNicknameHasBeenSet;
}

uint64_t BiddingResult::GetBiddingPrice() const
{
    return m_biddingPrice;
}

void BiddingResult::SetBiddingPrice(const uint64_t& _biddingPrice)
{
    m_biddingPrice = _biddingPrice;
    m_biddingPriceHasBeenSet = true;
}

bool BiddingResult::BiddingPriceHasBeenSet() const
{
    return m_biddingPriceHasBeenSet;
}

uint64_t BiddingResult::GetBiddingBondPrice() const
{
    return m_biddingBondPrice;
}

void BiddingResult::SetBiddingBondPrice(const uint64_t& _biddingBondPrice)
{
    m_biddingBondPrice = _biddingBondPrice;
    m_biddingBondPriceHasBeenSet = true;
}

bool BiddingResult::BiddingBondPriceHasBeenSet() const
{
    return m_biddingBondPriceHasBeenSet;
}

string BiddingResult::GetBiddingEndTime() const
{
    return m_biddingEndTime;
}

void BiddingResult::SetBiddingEndTime(const string& _biddingEndTime)
{
    m_biddingEndTime = _biddingEndTime;
    m_biddingEndTimeHasBeenSet = true;
}

bool BiddingResult::BiddingEndTimeHasBeenSet() const
{
    return m_biddingEndTimeHasBeenSet;
}

uint64_t BiddingResult::GetBiddingFlag() const
{
    return m_biddingFlag;
}

void BiddingResult::SetBiddingFlag(const uint64_t& _biddingFlag)
{
    m_biddingFlag = _biddingFlag;
    m_biddingFlagHasBeenSet = true;
}

bool BiddingResult::BiddingFlagHasBeenSet() const
{
    return m_biddingFlagHasBeenSet;
}

uint64_t BiddingResult::GetBiddingNum() const
{
    return m_biddingNum;
}

void BiddingResult::SetBiddingNum(const uint64_t& _biddingNum)
{
    m_biddingNum = _biddingNum;
    m_biddingNumHasBeenSet = true;
}

bool BiddingResult::BiddingNumHasBeenSet() const
{
    return m_biddingNumHasBeenSet;
}

uint64_t BiddingResult::GetStatus() const
{
    return m_status;
}

void BiddingResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BiddingResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

