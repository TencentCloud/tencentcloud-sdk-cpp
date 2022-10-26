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

#include <tencentcloud/cpdp/v20190820/model/UnifiedCloudOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UnifiedCloudOrderRequest::UnifiedCloudOrderRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_totalAmtHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_realChannelHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_cancelUrlHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_wxSubAppIdHasBeenSet(false),
    m_wxOpenIdHasBeenSet(false),
    m_wxSubOpenIdHasBeenSet(false),
    m_totalPlatformIncomeHasBeenSet(false),
    m_totalMchIncomeHasBeenSet(false),
    m_subOrderListHasBeenSet(false),
    m_settleInfoHasBeenSet(false),
    m_attachmentInfoListHasBeenSet(false),
    m_paymentNotifyUrlHasBeenSet(false),
    m_paySceneHasBeenSet(false),
    m_localeCodeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_userClientIpHasBeenSet(false),
    m_channelOrderIdModeHasBeenSet(false),
    m_globalPayTimeInfoHasBeenSet(false),
    m_channelAppIdPolicyHasBeenSet(false),
    m_storeInfoHasBeenSet(false),
    m_clientInfoHasBeenSet(false),
    m_externalPromptGroupListHasBeenSet(false),
    m_orderReceiveModeHasBeenSet(false),
    m_externalUserInfoListHasBeenSet(false),
    m_externalAttachmentDataListHasBeenSet(false)
{
}

string UnifiedCloudOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originalAmt, allocator);
    }

    if (m_totalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalAmt, allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_realChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quantity, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxSubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxSubOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxSubOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxSubOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalPlatformIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPlatformIncome";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalPlatformIncome, allocator);
    }

    if (m_totalMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMchIncome";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalMchIncome, allocator);
    }

    if (m_subOrderListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subOrderList.begin(); itr != m_subOrderList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_settleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settleInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_attachmentInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachmentInfoList.begin(); itr != m_attachmentInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_paymentNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_paySceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payScene.c_str(), allocator).Move(), allocator);
    }

    if (m_localeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocaleCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderIdMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelOrderIdMode.c_str(), allocator).Move(), allocator);
    }

    if (m_globalPayTimeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPayTimeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_globalPayTimeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_channelAppIdPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelAppIdPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelAppIdPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_storeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalPromptGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPromptGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalPromptGroupList.begin(); itr != m_externalPromptGroupList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderReceiveModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderReceiveMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderReceiveMode.c_str(), allocator).Move(), allocator);
    }

    if (m_externalUserInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalUserInfoList.begin(); itr != m_externalUserInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_externalAttachmentDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAttachmentDataList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalAttachmentDataList.begin(); itr != m_externalAttachmentDataList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnifiedCloudOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void UnifiedCloudOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetUserId() const
{
    return m_userId;
}

void UnifiedCloudOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void UnifiedCloudOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string UnifiedCloudOrderRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void UnifiedCloudOrderRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string UnifiedCloudOrderRequest::GetProductId() const
{
    return m_productId;
}

void UnifiedCloudOrderRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetProductName() const
{
    return m_productName;
}

void UnifiedCloudOrderRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string UnifiedCloudOrderRequest::GetProductDetail() const
{
    return m_productDetail;
}

void UnifiedCloudOrderRequest::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

int64_t UnifiedCloudOrderRequest::GetOriginalAmt() const
{
    return m_originalAmt;
}

void UnifiedCloudOrderRequest::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

int64_t UnifiedCloudOrderRequest::GetTotalAmt() const
{
    return m_totalAmt;
}

void UnifiedCloudOrderRequest::SetTotalAmt(const int64_t& _totalAmt)
{
    m_totalAmt = _totalAmt;
    m_totalAmtHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::TotalAmtHasBeenSet() const
{
    return m_totalAmtHasBeenSet;
}

string UnifiedCloudOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void UnifiedCloudOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string UnifiedCloudOrderRequest::GetSubAppId() const
{
    return m_subAppId;
}

void UnifiedCloudOrderRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetRealChannel() const
{
    return m_realChannel;
}

void UnifiedCloudOrderRequest::SetRealChannel(const string& _realChannel)
{
    m_realChannel = _realChannel;
    m_realChannelHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::RealChannelHasBeenSet() const
{
    return m_realChannelHasBeenSet;
}

string UnifiedCloudOrderRequest::GetChannel() const
{
    return m_channel;
}

void UnifiedCloudOrderRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string UnifiedCloudOrderRequest::GetMetadata() const
{
    return m_metadata;
}

void UnifiedCloudOrderRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t UnifiedCloudOrderRequest::GetQuantity() const
{
    return m_quantity;
}

void UnifiedCloudOrderRequest::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string UnifiedCloudOrderRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void UnifiedCloudOrderRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string UnifiedCloudOrderRequest::GetCancelUrl() const
{
    return m_cancelUrl;
}

void UnifiedCloudOrderRequest::SetCancelUrl(const string& _cancelUrl)
{
    m_cancelUrl = _cancelUrl;
    m_cancelUrlHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::CancelUrlHasBeenSet() const
{
    return m_cancelUrlHasBeenSet;
}

string UnifiedCloudOrderRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void UnifiedCloudOrderRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetWxSubAppId() const
{
    return m_wxSubAppId;
}

void UnifiedCloudOrderRequest::SetWxSubAppId(const string& _wxSubAppId)
{
    m_wxSubAppId = _wxSubAppId;
    m_wxSubAppIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::WxSubAppIdHasBeenSet() const
{
    return m_wxSubAppIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetWxOpenId() const
{
    return m_wxOpenId;
}

void UnifiedCloudOrderRequest::SetWxOpenId(const string& _wxOpenId)
{
    m_wxOpenId = _wxOpenId;
    m_wxOpenIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::WxOpenIdHasBeenSet() const
{
    return m_wxOpenIdHasBeenSet;
}

string UnifiedCloudOrderRequest::GetWxSubOpenId() const
{
    return m_wxSubOpenId;
}

void UnifiedCloudOrderRequest::SetWxSubOpenId(const string& _wxSubOpenId)
{
    m_wxSubOpenId = _wxSubOpenId;
    m_wxSubOpenIdHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::WxSubOpenIdHasBeenSet() const
{
    return m_wxSubOpenIdHasBeenSet;
}

int64_t UnifiedCloudOrderRequest::GetTotalPlatformIncome() const
{
    return m_totalPlatformIncome;
}

void UnifiedCloudOrderRequest::SetTotalPlatformIncome(const int64_t& _totalPlatformIncome)
{
    m_totalPlatformIncome = _totalPlatformIncome;
    m_totalPlatformIncomeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::TotalPlatformIncomeHasBeenSet() const
{
    return m_totalPlatformIncomeHasBeenSet;
}

int64_t UnifiedCloudOrderRequest::GetTotalMchIncome() const
{
    return m_totalMchIncome;
}

void UnifiedCloudOrderRequest::SetTotalMchIncome(const int64_t& _totalMchIncome)
{
    m_totalMchIncome = _totalMchIncome;
    m_totalMchIncomeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::TotalMchIncomeHasBeenSet() const
{
    return m_totalMchIncomeHasBeenSet;
}

vector<CloudSubOrder> UnifiedCloudOrderRequest::GetSubOrderList() const
{
    return m_subOrderList;
}

void UnifiedCloudOrderRequest::SetSubOrderList(const vector<CloudSubOrder>& _subOrderList)
{
    m_subOrderList = _subOrderList;
    m_subOrderListHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::SubOrderListHasBeenSet() const
{
    return m_subOrderListHasBeenSet;
}

CloudSettleInfo UnifiedCloudOrderRequest::GetSettleInfo() const
{
    return m_settleInfo;
}

void UnifiedCloudOrderRequest::SetSettleInfo(const CloudSettleInfo& _settleInfo)
{
    m_settleInfo = _settleInfo;
    m_settleInfoHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::SettleInfoHasBeenSet() const
{
    return m_settleInfoHasBeenSet;
}

vector<CloudAttachmentInfo> UnifiedCloudOrderRequest::GetAttachmentInfoList() const
{
    return m_attachmentInfoList;
}

void UnifiedCloudOrderRequest::SetAttachmentInfoList(const vector<CloudAttachmentInfo>& _attachmentInfoList)
{
    m_attachmentInfoList = _attachmentInfoList;
    m_attachmentInfoListHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::AttachmentInfoListHasBeenSet() const
{
    return m_attachmentInfoListHasBeenSet;
}

string UnifiedCloudOrderRequest::GetPaymentNotifyUrl() const
{
    return m_paymentNotifyUrl;
}

void UnifiedCloudOrderRequest::SetPaymentNotifyUrl(const string& _paymentNotifyUrl)
{
    m_paymentNotifyUrl = _paymentNotifyUrl;
    m_paymentNotifyUrlHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::PaymentNotifyUrlHasBeenSet() const
{
    return m_paymentNotifyUrlHasBeenSet;
}

string UnifiedCloudOrderRequest::GetPayScene() const
{
    return m_payScene;
}

void UnifiedCloudOrderRequest::SetPayScene(const string& _payScene)
{
    m_payScene = _payScene;
    m_paySceneHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::PaySceneHasBeenSet() const
{
    return m_paySceneHasBeenSet;
}

string UnifiedCloudOrderRequest::GetLocaleCode() const
{
    return m_localeCode;
}

void UnifiedCloudOrderRequest::SetLocaleCode(const string& _localeCode)
{
    m_localeCode = _localeCode;
    m_localeCodeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::LocaleCodeHasBeenSet() const
{
    return m_localeCodeHasBeenSet;
}

string UnifiedCloudOrderRequest::GetRegionCode() const
{
    return m_regionCode;
}

void UnifiedCloudOrderRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string UnifiedCloudOrderRequest::GetUserClientIp() const
{
    return m_userClientIp;
}

void UnifiedCloudOrderRequest::SetUserClientIp(const string& _userClientIp)
{
    m_userClientIp = _userClientIp;
    m_userClientIpHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::UserClientIpHasBeenSet() const
{
    return m_userClientIpHasBeenSet;
}

string UnifiedCloudOrderRequest::GetChannelOrderIdMode() const
{
    return m_channelOrderIdMode;
}

void UnifiedCloudOrderRequest::SetChannelOrderIdMode(const string& _channelOrderIdMode)
{
    m_channelOrderIdMode = _channelOrderIdMode;
    m_channelOrderIdModeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ChannelOrderIdModeHasBeenSet() const
{
    return m_channelOrderIdModeHasBeenSet;
}

CloudGlobalPayTimeInfo UnifiedCloudOrderRequest::GetGlobalPayTimeInfo() const
{
    return m_globalPayTimeInfo;
}

void UnifiedCloudOrderRequest::SetGlobalPayTimeInfo(const CloudGlobalPayTimeInfo& _globalPayTimeInfo)
{
    m_globalPayTimeInfo = _globalPayTimeInfo;
    m_globalPayTimeInfoHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::GlobalPayTimeInfoHasBeenSet() const
{
    return m_globalPayTimeInfoHasBeenSet;
}

string UnifiedCloudOrderRequest::GetChannelAppIdPolicy() const
{
    return m_channelAppIdPolicy;
}

void UnifiedCloudOrderRequest::SetChannelAppIdPolicy(const string& _channelAppIdPolicy)
{
    m_channelAppIdPolicy = _channelAppIdPolicy;
    m_channelAppIdPolicyHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ChannelAppIdPolicyHasBeenSet() const
{
    return m_channelAppIdPolicyHasBeenSet;
}

CloudStoreInfo UnifiedCloudOrderRequest::GetStoreInfo() const
{
    return m_storeInfo;
}

void UnifiedCloudOrderRequest::SetStoreInfo(const CloudStoreInfo& _storeInfo)
{
    m_storeInfo = _storeInfo;
    m_storeInfoHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::StoreInfoHasBeenSet() const
{
    return m_storeInfoHasBeenSet;
}

CloudClientInfo UnifiedCloudOrderRequest::GetClientInfo() const
{
    return m_clientInfo;
}

void UnifiedCloudOrderRequest::SetClientInfo(const CloudClientInfo& _clientInfo)
{
    m_clientInfo = _clientInfo;
    m_clientInfoHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ClientInfoHasBeenSet() const
{
    return m_clientInfoHasBeenSet;
}

vector<CloudExternalPromptGroup> UnifiedCloudOrderRequest::GetExternalPromptGroupList() const
{
    return m_externalPromptGroupList;
}

void UnifiedCloudOrderRequest::SetExternalPromptGroupList(const vector<CloudExternalPromptGroup>& _externalPromptGroupList)
{
    m_externalPromptGroupList = _externalPromptGroupList;
    m_externalPromptGroupListHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ExternalPromptGroupListHasBeenSet() const
{
    return m_externalPromptGroupListHasBeenSet;
}

string UnifiedCloudOrderRequest::GetOrderReceiveMode() const
{
    return m_orderReceiveMode;
}

void UnifiedCloudOrderRequest::SetOrderReceiveMode(const string& _orderReceiveMode)
{
    m_orderReceiveMode = _orderReceiveMode;
    m_orderReceiveModeHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::OrderReceiveModeHasBeenSet() const
{
    return m_orderReceiveModeHasBeenSet;
}

vector<CloudExternalUserInfo> UnifiedCloudOrderRequest::GetExternalUserInfoList() const
{
    return m_externalUserInfoList;
}

void UnifiedCloudOrderRequest::SetExternalUserInfoList(const vector<CloudExternalUserInfo>& _externalUserInfoList)
{
    m_externalUserInfoList = _externalUserInfoList;
    m_externalUserInfoListHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ExternalUserInfoListHasBeenSet() const
{
    return m_externalUserInfoListHasBeenSet;
}

vector<CloudExternalAttachmentData> UnifiedCloudOrderRequest::GetExternalAttachmentDataList() const
{
    return m_externalAttachmentDataList;
}

void UnifiedCloudOrderRequest::SetExternalAttachmentDataList(const vector<CloudExternalAttachmentData>& _externalAttachmentDataList)
{
    m_externalAttachmentDataList = _externalAttachmentDataList;
    m_externalAttachmentDataListHasBeenSet = true;
}

bool UnifiedCloudOrderRequest::ExternalAttachmentDataListHasBeenSet() const
{
    return m_externalAttachmentDataListHasBeenSet;
}


