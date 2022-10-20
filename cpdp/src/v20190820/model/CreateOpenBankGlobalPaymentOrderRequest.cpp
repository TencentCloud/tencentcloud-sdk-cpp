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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankGlobalPaymentOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankGlobalPaymentOrderRequest::CreateOpenBankGlobalPaymentOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_frontUrlHasBeenSet(false),
    m_frontLanguageHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_externalPaymentDataHasBeenSet(false),
    m_goodsInfosHasBeenSet(false),
    m_shippingInfoHasBeenSet(false),
    m_billingInfoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankGlobalPaymentOrderRequest::ToJsonString() const
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

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
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

    if (m_frontUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frontUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_frontLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frontLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_externalPaymentDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPaymentData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalPaymentData.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_goodsInfos.begin(); itr != m_goodsInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_shippingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShippingInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shippingInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billingInfo.ToJsonObject(d[key.c_str()], allocator);
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


string CreateOpenBankGlobalPaymentOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetPayType() const
{
    return m_payType;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

int64_t CreateOpenBankGlobalPaymentOrderRequest::GetTotalAmount() const
{
    return m_totalAmount;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetCurrency() const
{
    return m_currency;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetFrontUrl() const
{
    return m_frontUrl;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetFrontUrl(const string& _frontUrl)
{
    m_frontUrl = _frontUrl;
    m_frontUrlHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::FrontUrlHasBeenSet() const
{
    return m_frontUrlHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetFrontLanguage() const
{
    return m_frontLanguage;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetFrontLanguage(const string& _frontLanguage)
{
    m_frontLanguage = _frontLanguage;
    m_frontLanguageHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::FrontLanguageHasBeenSet() const
{
    return m_frontLanguageHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetExternalPaymentData() const
{
    return m_externalPaymentData;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetExternalPaymentData(const string& _externalPaymentData)
{
    m_externalPaymentData = _externalPaymentData;
    m_externalPaymentDataHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::ExternalPaymentDataHasBeenSet() const
{
    return m_externalPaymentDataHasBeenSet;
}

vector<OpenBankGoodsInfo> CreateOpenBankGlobalPaymentOrderRequest::GetGoodsInfos() const
{
    return m_goodsInfos;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetGoodsInfos(const vector<OpenBankGoodsInfo>& _goodsInfos)
{
    m_goodsInfos = _goodsInfos;
    m_goodsInfosHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::GoodsInfosHasBeenSet() const
{
    return m_goodsInfosHasBeenSet;
}

OpenBankShippingInfo CreateOpenBankGlobalPaymentOrderRequest::GetShippingInfo() const
{
    return m_shippingInfo;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetShippingInfo(const OpenBankShippingInfo& _shippingInfo)
{
    m_shippingInfo = _shippingInfo;
    m_shippingInfoHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::ShippingInfoHasBeenSet() const
{
    return m_shippingInfoHasBeenSet;
}

OpenBankBillingInfo CreateOpenBankGlobalPaymentOrderRequest::GetBillingInfo() const
{
    return m_billingInfo;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetBillingInfo(const OpenBankBillingInfo& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

string CreateOpenBankGlobalPaymentOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankGlobalPaymentOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankGlobalPaymentOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


