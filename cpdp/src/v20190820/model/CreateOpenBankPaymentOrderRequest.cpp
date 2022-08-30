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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankPaymentOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankPaymentOrderRequest::CreateOpenBankPaymentOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_paymentModeHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_payerInfoHasBeenSet(false),
    m_payeeInfoHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_frontUrlHasBeenSet(false),
    m_refreshUrlHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_goodsInfoHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_profitShareFlagHasBeenSet(false),
    m_profitShareInfoListHasBeenSet(false),
    m_settlementRulesInfoHasBeenSet(false),
    m_externalPaymentDataHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankPaymentOrderRequest::ToJsonString() const
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

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMode.c_str(), allocator).Move(), allocator);
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

    if (m_payerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payerInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payeeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payeeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_frontUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frontUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refreshUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_goodsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_goodsInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_attachmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attachment.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profitShareFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_profitShareInfoList.begin(); itr != m_profitShareInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_settlementRulesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettlementRulesInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settlementRulesInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalPaymentDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPaymentData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalPaymentData.c_str(), allocator).Move(), allocator);
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


string CreateOpenBankPaymentOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankPaymentOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankPaymentOrderRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CreateOpenBankPaymentOrderRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetPaymentMode() const
{
    return m_paymentMode;
}

void CreateOpenBankPaymentOrderRequest::SetPaymentMode(const string& _paymentMode)
{
    m_paymentMode = _paymentMode;
    m_paymentModeHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::PaymentModeHasBeenSet() const
{
    return m_paymentModeHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankPaymentOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

int64_t CreateOpenBankPaymentOrderRequest::GetTotalAmount() const
{
    return m_totalAmount;
}

void CreateOpenBankPaymentOrderRequest::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetCurrency() const
{
    return m_currency;
}

void CreateOpenBankPaymentOrderRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

OpenBankPayerInfo CreateOpenBankPaymentOrderRequest::GetPayerInfo() const
{
    return m_payerInfo;
}

void CreateOpenBankPaymentOrderRequest::SetPayerInfo(const OpenBankPayerInfo& _payerInfo)
{
    m_payerInfo = _payerInfo;
    m_payerInfoHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::PayerInfoHasBeenSet() const
{
    return m_payerInfoHasBeenSet;
}

OpenBankPayeeInfo CreateOpenBankPaymentOrderRequest::GetPayeeInfo() const
{
    return m_payeeInfo;
}

void CreateOpenBankPaymentOrderRequest::SetPayeeInfo(const OpenBankPayeeInfo& _payeeInfo)
{
    m_payeeInfo = _payeeInfo;
    m_payeeInfoHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::PayeeInfoHasBeenSet() const
{
    return m_payeeInfoHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankPaymentOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateOpenBankPaymentOrderRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetFrontUrl() const
{
    return m_frontUrl;
}

void CreateOpenBankPaymentOrderRequest::SetFrontUrl(const string& _frontUrl)
{
    m_frontUrl = _frontUrl;
    m_frontUrlHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::FrontUrlHasBeenSet() const
{
    return m_frontUrlHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetRefreshUrl() const
{
    return m_refreshUrl;
}

void CreateOpenBankPaymentOrderRequest::SetRefreshUrl(const string& _refreshUrl)
{
    m_refreshUrl = _refreshUrl;
    m_refreshUrlHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::RefreshUrlHasBeenSet() const
{
    return m_refreshUrlHasBeenSet;
}

OpenBankSceneInfo CreateOpenBankPaymentOrderRequest::GetSceneInfo() const
{
    return m_sceneInfo;
}

void CreateOpenBankPaymentOrderRequest::SetSceneInfo(const OpenBankSceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

OpenBankGoodsInfo CreateOpenBankPaymentOrderRequest::GetGoodsInfo() const
{
    return m_goodsInfo;
}

void CreateOpenBankPaymentOrderRequest::SetGoodsInfo(const OpenBankGoodsInfo& _goodsInfo)
{
    m_goodsInfo = _goodsInfo;
    m_goodsInfoHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::GoodsInfoHasBeenSet() const
{
    return m_goodsInfoHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetAttachment() const
{
    return m_attachment;
}

void CreateOpenBankPaymentOrderRequest::SetAttachment(const string& _attachment)
{
    m_attachment = _attachment;
    m_attachmentHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::AttachmentHasBeenSet() const
{
    return m_attachmentHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetProfitShareFlag() const
{
    return m_profitShareFlag;
}

void CreateOpenBankPaymentOrderRequest::SetProfitShareFlag(const string& _profitShareFlag)
{
    m_profitShareFlag = _profitShareFlag;
    m_profitShareFlagHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ProfitShareFlagHasBeenSet() const
{
    return m_profitShareFlagHasBeenSet;
}

vector<OpenBankProfitShareInfo> CreateOpenBankPaymentOrderRequest::GetProfitShareInfoList() const
{
    return m_profitShareInfoList;
}

void CreateOpenBankPaymentOrderRequest::SetProfitShareInfoList(const vector<OpenBankProfitShareInfo>& _profitShareInfoList)
{
    m_profitShareInfoList = _profitShareInfoList;
    m_profitShareInfoListHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ProfitShareInfoListHasBeenSet() const
{
    return m_profitShareInfoListHasBeenSet;
}

OpenBankSettlementRulesInfo CreateOpenBankPaymentOrderRequest::GetSettlementRulesInfo() const
{
    return m_settlementRulesInfo;
}

void CreateOpenBankPaymentOrderRequest::SetSettlementRulesInfo(const OpenBankSettlementRulesInfo& _settlementRulesInfo)
{
    m_settlementRulesInfo = _settlementRulesInfo;
    m_settlementRulesInfoHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::SettlementRulesInfoHasBeenSet() const
{
    return m_settlementRulesInfoHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetExternalPaymentData() const
{
    return m_externalPaymentData;
}

void CreateOpenBankPaymentOrderRequest::SetExternalPaymentData(const string& _externalPaymentData)
{
    m_externalPaymentData = _externalPaymentData;
    m_externalPaymentDataHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::ExternalPaymentDataHasBeenSet() const
{
    return m_externalPaymentDataHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpenBankPaymentOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateOpenBankPaymentOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankPaymentOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankPaymentOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


