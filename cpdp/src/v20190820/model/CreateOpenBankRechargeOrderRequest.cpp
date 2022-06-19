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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankRechargeOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankRechargeOrderRequest::CreateOpenBankRechargeOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_payeeInfoHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankRechargeOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payeeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOpenBankRechargeOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankRechargeOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankRechargeOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

int64_t CreateOpenBankRechargeOrderRequest::GetTotalAmount() const
{
    return m_totalAmount;
}

void CreateOpenBankRechargeOrderRequest::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetCurrency() const
{
    return m_currency;
}

void CreateOpenBankRechargeOrderRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateOpenBankRechargeOrderRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankRechargeOrderRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CreateOpenBankRechargeOrderRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

OpenBankRechargePayeeInfo CreateOpenBankRechargeOrderRequest::GetPayeeInfo() const
{
    return m_payeeInfo;
}

void CreateOpenBankRechargeOrderRequest::SetPayeeInfo(const OpenBankRechargePayeeInfo& _payeeInfo)
{
    m_payeeInfo = _payeeInfo;
    m_payeeInfoHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::PayeeInfoHasBeenSet() const
{
    return m_payeeInfoHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankRechargeOrderRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankRechargeOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpenBankRechargeOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateOpenBankRechargeOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankRechargeOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankRechargeOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


