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

#include <tencentcloud/cpdp/v20190820/model/MerchantPayWayData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MerchantPayWayData::MerchantPayWayData() :
    m_payCurrencyHasBeenSet(false),
    m_payIconHasBeenSet(false),
    m_payInternalNameHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_paySplitRefundHasBeenSet(false),
    m_payTagHasBeenSet(false),
    m_payTicketIconHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_ticketNameHasBeenSet(false)
{
}

CoreInternalOutcome MerchantPayWayData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayCurrency") && !value["PayCurrency"].IsNull())
    {
        if (!value["PayCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payCurrency = string(value["PayCurrency"].GetString());
        m_payCurrencyHasBeenSet = true;
    }

    if (value.HasMember("PayIcon") && !value["PayIcon"].IsNull())
    {
        if (!value["PayIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payIcon = string(value["PayIcon"].GetString());
        m_payIconHasBeenSet = true;
    }

    if (value.HasMember("PayInternalName") && !value["PayInternalName"].IsNull())
    {
        if (!value["PayInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payInternalName = string(value["PayInternalName"].GetString());
        m_payInternalNameHasBeenSet = true;
    }

    if (value.HasMember("PayName") && !value["PayName"].IsNull())
    {
        if (!value["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(value["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (value.HasMember("PaySplitRefund") && !value["PaySplitRefund"].IsNull())
    {
        if (!value["PaySplitRefund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PaySplitRefund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paySplitRefund = string(value["PaySplitRefund"].GetString());
        m_paySplitRefundHasBeenSet = true;
    }

    if (value.HasMember("PayTag") && !value["PayTag"].IsNull())
    {
        if (!value["PayTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTag = string(value["PayTag"].GetString());
        m_payTagHasBeenSet = true;
    }

    if (value.HasMember("PayTicketIcon") && !value["PayTicketIcon"].IsNull())
    {
        if (!value["PayTicketIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayTicketIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTicketIcon = string(value["PayTicketIcon"].GetString());
        m_payTicketIconHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(value["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("TicketName") && !value["TicketName"].IsNull())
    {
        if (!value["TicketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantPayWayData.TicketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketName = string(value["TicketName"].GetString());
        m_ticketNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MerchantPayWayData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_payIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_payInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayInternalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_payNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payName.c_str(), allocator).Move(), allocator);
    }

    if (m_paySplitRefundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaySplitRefund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paySplitRefund.c_str(), allocator).Move(), allocator);
    }

    if (m_payTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTag.c_str(), allocator).Move(), allocator);
    }

    if (m_payTicketIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTicketIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTicketIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketName.c_str(), allocator).Move(), allocator);
    }

}


string MerchantPayWayData::GetPayCurrency() const
{
    return m_payCurrency;
}

void MerchantPayWayData::SetPayCurrency(const string& _payCurrency)
{
    m_payCurrency = _payCurrency;
    m_payCurrencyHasBeenSet = true;
}

bool MerchantPayWayData::PayCurrencyHasBeenSet() const
{
    return m_payCurrencyHasBeenSet;
}

string MerchantPayWayData::GetPayIcon() const
{
    return m_payIcon;
}

void MerchantPayWayData::SetPayIcon(const string& _payIcon)
{
    m_payIcon = _payIcon;
    m_payIconHasBeenSet = true;
}

bool MerchantPayWayData::PayIconHasBeenSet() const
{
    return m_payIconHasBeenSet;
}

string MerchantPayWayData::GetPayInternalName() const
{
    return m_payInternalName;
}

void MerchantPayWayData::SetPayInternalName(const string& _payInternalName)
{
    m_payInternalName = _payInternalName;
    m_payInternalNameHasBeenSet = true;
}

bool MerchantPayWayData::PayInternalNameHasBeenSet() const
{
    return m_payInternalNameHasBeenSet;
}

string MerchantPayWayData::GetPayName() const
{
    return m_payName;
}

void MerchantPayWayData::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool MerchantPayWayData::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

string MerchantPayWayData::GetPaySplitRefund() const
{
    return m_paySplitRefund;
}

void MerchantPayWayData::SetPaySplitRefund(const string& _paySplitRefund)
{
    m_paySplitRefund = _paySplitRefund;
    m_paySplitRefundHasBeenSet = true;
}

bool MerchantPayWayData::PaySplitRefundHasBeenSet() const
{
    return m_paySplitRefundHasBeenSet;
}

string MerchantPayWayData::GetPayTag() const
{
    return m_payTag;
}

void MerchantPayWayData::SetPayTag(const string& _payTag)
{
    m_payTag = _payTag;
    m_payTagHasBeenSet = true;
}

bool MerchantPayWayData::PayTagHasBeenSet() const
{
    return m_payTagHasBeenSet;
}

string MerchantPayWayData::GetPayTicketIcon() const
{
    return m_payTicketIcon;
}

void MerchantPayWayData::SetPayTicketIcon(const string& _payTicketIcon)
{
    m_payTicketIcon = _payTicketIcon;
    m_payTicketIconHasBeenSet = true;
}

bool MerchantPayWayData::PayTicketIconHasBeenSet() const
{
    return m_payTicketIconHasBeenSet;
}

string MerchantPayWayData::GetPayType() const
{
    return m_payType;
}

void MerchantPayWayData::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool MerchantPayWayData::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string MerchantPayWayData::GetTicketName() const
{
    return m_ticketName;
}

void MerchantPayWayData::SetTicketName(const string& _ticketName)
{
    m_ticketName = _ticketName;
    m_ticketNameHasBeenSet = true;
}

bool MerchantPayWayData::TicketNameHasBeenSet() const
{
    return m_ticketNameHasBeenSet;
}

