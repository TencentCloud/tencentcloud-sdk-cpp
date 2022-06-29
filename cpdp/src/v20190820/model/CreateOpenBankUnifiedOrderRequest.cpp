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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankUnifiedOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankUnifiedOrderRequest::CreateOpenBankUnifiedOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_profitShareInfoListHasBeenSet(false),
    m_orderSubjectHasBeenSet(false),
    m_goodsDetailHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_frontUrlHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_externalPaymentDataHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_storeInfoHasBeenSet(false),
    m_payLimitInfoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankUnifiedOrderRequest::ToJsonString() const
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

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_orderSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSubject.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_goodsDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
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

    if (m_attachmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attachment.c_str(), allocator).Move(), allocator);
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

    if (m_storeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payLimitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayLimitInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payLimitInfo.ToJsonObject(d[key.c_str()], allocator);
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


string CreateOpenBankUnifiedOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankUnifiedOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankUnifiedOrderRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetPayType() const
{
    return m_payType;
}

void CreateOpenBankUnifiedOrderRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankUnifiedOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

int64_t CreateOpenBankUnifiedOrderRequest::GetTotalAmount() const
{
    return m_totalAmount;
}

void CreateOpenBankUnifiedOrderRequest::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetCurrency() const
{
    return m_currency;
}

void CreateOpenBankUnifiedOrderRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankUnifiedOrderRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetPayChannel() const
{
    return m_payChannel;
}

void CreateOpenBankUnifiedOrderRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

OpenBankSceneInfo CreateOpenBankUnifiedOrderRequest::GetSceneInfo() const
{
    return m_sceneInfo;
}

void CreateOpenBankUnifiedOrderRequest::SetSceneInfo(const OpenBankSceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

vector<OpenBankProfitShareInfo> CreateOpenBankUnifiedOrderRequest::GetProfitShareInfoList() const
{
    return m_profitShareInfoList;
}

void CreateOpenBankUnifiedOrderRequest::SetProfitShareInfoList(const vector<OpenBankProfitShareInfo>& _profitShareInfoList)
{
    m_profitShareInfoList = _profitShareInfoList;
    m_profitShareInfoListHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ProfitShareInfoListHasBeenSet() const
{
    return m_profitShareInfoListHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetOrderSubject() const
{
    return m_orderSubject;
}

void CreateOpenBankUnifiedOrderRequest::SetOrderSubject(const string& _orderSubject)
{
    m_orderSubject = _orderSubject;
    m_orderSubjectHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::OrderSubjectHasBeenSet() const
{
    return m_orderSubjectHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetGoodsDetail() const
{
    return m_goodsDetail;
}

void CreateOpenBankUnifiedOrderRequest::SetGoodsDetail(const string& _goodsDetail)
{
    m_goodsDetail = _goodsDetail;
    m_goodsDetailHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateOpenBankUnifiedOrderRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankUnifiedOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetFrontUrl() const
{
    return m_frontUrl;
}

void CreateOpenBankUnifiedOrderRequest::SetFrontUrl(const string& _frontUrl)
{
    m_frontUrl = _frontUrl;
    m_frontUrlHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::FrontUrlHasBeenSet() const
{
    return m_frontUrlHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetAttachment() const
{
    return m_attachment;
}

void CreateOpenBankUnifiedOrderRequest::SetAttachment(const string& _attachment)
{
    m_attachment = _attachment;
    m_attachmentHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::AttachmentHasBeenSet() const
{
    return m_attachmentHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetExternalPaymentData() const
{
    return m_externalPaymentData;
}

void CreateOpenBankUnifiedOrderRequest::SetExternalPaymentData(const string& _externalPaymentData)
{
    m_externalPaymentData = _externalPaymentData;
    m_externalPaymentDataHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::ExternalPaymentDataHasBeenSet() const
{
    return m_externalPaymentDataHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpenBankUnifiedOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

OpenBankStoreInfo CreateOpenBankUnifiedOrderRequest::GetStoreInfo() const
{
    return m_storeInfo;
}

void CreateOpenBankUnifiedOrderRequest::SetStoreInfo(const OpenBankStoreInfo& _storeInfo)
{
    m_storeInfo = _storeInfo;
    m_storeInfoHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::StoreInfoHasBeenSet() const
{
    return m_storeInfoHasBeenSet;
}

OpenBankPayLimitInfo CreateOpenBankUnifiedOrderRequest::GetPayLimitInfo() const
{
    return m_payLimitInfo;
}

void CreateOpenBankUnifiedOrderRequest::SetPayLimitInfo(const OpenBankPayLimitInfo& _payLimitInfo)
{
    m_payLimitInfo = _payLimitInfo;
    m_payLimitInfoHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::PayLimitInfoHasBeenSet() const
{
    return m_payLimitInfoHasBeenSet;
}

string CreateOpenBankUnifiedOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankUnifiedOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankUnifiedOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


