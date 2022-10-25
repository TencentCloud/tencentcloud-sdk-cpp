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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSettleOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSettleOrderResult::QueryOpenBankSettleOrderResult() :
    m_outSettleIdHasBeenSet(false),
    m_channelSettleIdHasBeenSet(false),
    m_settleStatusHasBeenSet(false),
    m_settleAmountHasBeenSet(false),
    m_settleDateHasBeenSet(false),
    m_settleTypeHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_timeFinishHasBeenSet(false),
    m_settleFeeHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankSettleOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutSettleId") && !value["OutSettleId"].IsNull())
    {
        if (!value["OutSettleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.OutSettleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSettleId = string(value["OutSettleId"].GetString());
        m_outSettleIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSettleId") && !value["ChannelSettleId"].IsNull())
    {
        if (!value["ChannelSettleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.ChannelSettleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSettleId = string(value["ChannelSettleId"].GetString());
        m_channelSettleIdHasBeenSet = true;
    }

    if (value.HasMember("SettleStatus") && !value["SettleStatus"].IsNull())
    {
        if (!value["SettleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.SettleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleStatus = string(value["SettleStatus"].GetString());
        m_settleStatusHasBeenSet = true;
    }

    if (value.HasMember("SettleAmount") && !value["SettleAmount"].IsNull())
    {
        if (!value["SettleAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.SettleAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_settleAmount = value["SettleAmount"].GetInt64();
        m_settleAmountHasBeenSet = true;
    }

    if (value.HasMember("SettleDate") && !value["SettleDate"].IsNull())
    {
        if (!value["SettleDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.SettleDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleDate = string(value["SettleDate"].GetString());
        m_settleDateHasBeenSet = true;
    }

    if (value.HasMember("SettleType") && !value["SettleType"].IsNull())
    {
        if (!value["SettleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.SettleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleType = string(value["SettleType"].GetString());
        m_settleTypeHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("TimeFinish") && !value["TimeFinish"].IsNull())
    {
        if (!value["TimeFinish"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.TimeFinish` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFinish = string(value["TimeFinish"].GetString());
        m_timeFinishHasBeenSet = true;
    }

    if (value.HasMember("SettleFee") && !value["SettleFee"].IsNull())
    {
        if (!value["SettleFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.SettleFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleFee = string(value["SettleFee"].GetString());
        m_settleFeeHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSettleOrderResult.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankSettleOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outSettleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSettleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSettleId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSettleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSettleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSettleId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_settleAmount, allocator);
    }

    if (m_settleDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleDate.c_str(), allocator).Move(), allocator);
    }

    if (m_settleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleType.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFinishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFinish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFinish.c_str(), allocator).Move(), allocator);
    }

    if (m_settleFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleFee.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankSettleOrderResult::GetOutSettleId() const
{
    return m_outSettleId;
}

void QueryOpenBankSettleOrderResult::SetOutSettleId(const string& _outSettleId)
{
    m_outSettleId = _outSettleId;
    m_outSettleIdHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::OutSettleIdHasBeenSet() const
{
    return m_outSettleIdHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetChannelSettleId() const
{
    return m_channelSettleId;
}

void QueryOpenBankSettleOrderResult::SetChannelSettleId(const string& _channelSettleId)
{
    m_channelSettleId = _channelSettleId;
    m_channelSettleIdHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::ChannelSettleIdHasBeenSet() const
{
    return m_channelSettleIdHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetSettleStatus() const
{
    return m_settleStatus;
}

void QueryOpenBankSettleOrderResult::SetSettleStatus(const string& _settleStatus)
{
    m_settleStatus = _settleStatus;
    m_settleStatusHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::SettleStatusHasBeenSet() const
{
    return m_settleStatusHasBeenSet;
}

int64_t QueryOpenBankSettleOrderResult::GetSettleAmount() const
{
    return m_settleAmount;
}

void QueryOpenBankSettleOrderResult::SetSettleAmount(const int64_t& _settleAmount)
{
    m_settleAmount = _settleAmount;
    m_settleAmountHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::SettleAmountHasBeenSet() const
{
    return m_settleAmountHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetSettleDate() const
{
    return m_settleDate;
}

void QueryOpenBankSettleOrderResult::SetSettleDate(const string& _settleDate)
{
    m_settleDate = _settleDate;
    m_settleDateHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::SettleDateHasBeenSet() const
{
    return m_settleDateHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetSettleType() const
{
    return m_settleType;
}

void QueryOpenBankSettleOrderResult::SetSettleType(const string& _settleType)
{
    m_settleType = _settleType;
    m_settleTypeHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::SettleTypeHasBeenSet() const
{
    return m_settleTypeHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetFailReason() const
{
    return m_failReason;
}

void QueryOpenBankSettleOrderResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetTimeFinish() const
{
    return m_timeFinish;
}

void QueryOpenBankSettleOrderResult::SetTimeFinish(const string& _timeFinish)
{
    m_timeFinish = _timeFinish;
    m_timeFinishHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::TimeFinishHasBeenSet() const
{
    return m_timeFinishHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetSettleFee() const
{
    return m_settleFee;
}

void QueryOpenBankSettleOrderResult::SetSettleFee(const string& _settleFee)
{
    m_settleFee = _settleFee;
    m_settleFeeHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::SettleFeeHasBeenSet() const
{
    return m_settleFeeHasBeenSet;
}

string QueryOpenBankSettleOrderResult::GetCurrency() const
{
    return m_currency;
}

void QueryOpenBankSettleOrderResult::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool QueryOpenBankSettleOrderResult::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

