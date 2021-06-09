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

#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UnifiedOrderRequest::UnifiedOrderRequest() :
    m_currencyTypeHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_totalAmtHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_realChannelHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_subOrderListHasBeenSet(false),
    m_totalMchIncomeHasBeenSet(false),
    m_totalPlatformIncomeHasBeenSet(false),
    m_wxOpenIdHasBeenSet(false),
    m_wxSubOpenIdHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_wxSubAppIdHasBeenSet(false),
    m_paymentNotifyUrlHasBeenSet(false)
{
}

string UnifiedOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_productDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productDetail.c_str(), allocator).Move(), allocator);
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

    if (m_totalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalAmt, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_realChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originalAmt, allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
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

    if (m_totalMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMchIncome";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalMchIncome, allocator);
    }

    if (m_totalPlatformIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPlatformIncome";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalPlatformIncome, allocator);
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

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
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

    if (m_paymentNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentNotifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnifiedOrderRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void UnifiedOrderRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool UnifiedOrderRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string UnifiedOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void UnifiedOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool UnifiedOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string UnifiedOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void UnifiedOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool UnifiedOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string UnifiedOrderRequest::GetProductDetail() const
{
    return m_productDetail;
}

void UnifiedOrderRequest::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool UnifiedOrderRequest::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

string UnifiedOrderRequest::GetProductId() const
{
    return m_productId;
}

void UnifiedOrderRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UnifiedOrderRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UnifiedOrderRequest::GetProductName() const
{
    return m_productName;
}

void UnifiedOrderRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool UnifiedOrderRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t UnifiedOrderRequest::GetTotalAmt() const
{
    return m_totalAmt;
}

void UnifiedOrderRequest::SetTotalAmt(const int64_t& _totalAmt)
{
    m_totalAmt = _totalAmt;
    m_totalAmtHasBeenSet = true;
}

bool UnifiedOrderRequest::TotalAmtHasBeenSet() const
{
    return m_totalAmtHasBeenSet;
}

string UnifiedOrderRequest::GetUserId() const
{
    return m_userId;
}

void UnifiedOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UnifiedOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UnifiedOrderRequest::GetRealChannel() const
{
    return m_realChannel;
}

void UnifiedOrderRequest::SetRealChannel(const string& _realChannel)
{
    m_realChannel = _realChannel;
    m_realChannelHasBeenSet = true;
}

bool UnifiedOrderRequest::RealChannelHasBeenSet() const
{
    return m_realChannelHasBeenSet;
}

int64_t UnifiedOrderRequest::GetOriginalAmt() const
{
    return m_originalAmt;
}

void UnifiedOrderRequest::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool UnifiedOrderRequest::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

string UnifiedOrderRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void UnifiedOrderRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool UnifiedOrderRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string UnifiedOrderRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void UnifiedOrderRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool UnifiedOrderRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string UnifiedOrderRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void UnifiedOrderRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool UnifiedOrderRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string UnifiedOrderRequest::GetChannel() const
{
    return m_channel;
}

void UnifiedOrderRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool UnifiedOrderRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string UnifiedOrderRequest::GetMetadata() const
{
    return m_metadata;
}

void UnifiedOrderRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool UnifiedOrderRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t UnifiedOrderRequest::GetQuantity() const
{
    return m_quantity;
}

void UnifiedOrderRequest::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool UnifiedOrderRequest::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string UnifiedOrderRequest::GetSubAppId() const
{
    return m_subAppId;
}

void UnifiedOrderRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool UnifiedOrderRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<UnifiedOrderInSubOrderList> UnifiedOrderRequest::GetSubOrderList() const
{
    return m_subOrderList;
}

void UnifiedOrderRequest::SetSubOrderList(const vector<UnifiedOrderInSubOrderList>& _subOrderList)
{
    m_subOrderList = _subOrderList;
    m_subOrderListHasBeenSet = true;
}

bool UnifiedOrderRequest::SubOrderListHasBeenSet() const
{
    return m_subOrderListHasBeenSet;
}

int64_t UnifiedOrderRequest::GetTotalMchIncome() const
{
    return m_totalMchIncome;
}

void UnifiedOrderRequest::SetTotalMchIncome(const int64_t& _totalMchIncome)
{
    m_totalMchIncome = _totalMchIncome;
    m_totalMchIncomeHasBeenSet = true;
}

bool UnifiedOrderRequest::TotalMchIncomeHasBeenSet() const
{
    return m_totalMchIncomeHasBeenSet;
}

int64_t UnifiedOrderRequest::GetTotalPlatformIncome() const
{
    return m_totalPlatformIncome;
}

void UnifiedOrderRequest::SetTotalPlatformIncome(const int64_t& _totalPlatformIncome)
{
    m_totalPlatformIncome = _totalPlatformIncome;
    m_totalPlatformIncomeHasBeenSet = true;
}

bool UnifiedOrderRequest::TotalPlatformIncomeHasBeenSet() const
{
    return m_totalPlatformIncomeHasBeenSet;
}

string UnifiedOrderRequest::GetWxOpenId() const
{
    return m_wxOpenId;
}

void UnifiedOrderRequest::SetWxOpenId(const string& _wxOpenId)
{
    m_wxOpenId = _wxOpenId;
    m_wxOpenIdHasBeenSet = true;
}

bool UnifiedOrderRequest::WxOpenIdHasBeenSet() const
{
    return m_wxOpenIdHasBeenSet;
}

string UnifiedOrderRequest::GetWxSubOpenId() const
{
    return m_wxSubOpenId;
}

void UnifiedOrderRequest::SetWxSubOpenId(const string& _wxSubOpenId)
{
    m_wxSubOpenId = _wxSubOpenId;
    m_wxSubOpenIdHasBeenSet = true;
}

bool UnifiedOrderRequest::WxSubOpenIdHasBeenSet() const
{
    return m_wxSubOpenIdHasBeenSet;
}

string UnifiedOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void UnifiedOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool UnifiedOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string UnifiedOrderRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void UnifiedOrderRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool UnifiedOrderRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string UnifiedOrderRequest::GetWxSubAppId() const
{
    return m_wxSubAppId;
}

void UnifiedOrderRequest::SetWxSubAppId(const string& _wxSubAppId)
{
    m_wxSubAppId = _wxSubAppId;
    m_wxSubAppIdHasBeenSet = true;
}

bool UnifiedOrderRequest::WxSubAppIdHasBeenSet() const
{
    return m_wxSubAppIdHasBeenSet;
}

string UnifiedOrderRequest::GetPaymentNotifyUrl() const
{
    return m_paymentNotifyUrl;
}

void UnifiedOrderRequest::SetPaymentNotifyUrl(const string& _paymentNotifyUrl)
{
    m_paymentNotifyUrl = _paymentNotifyUrl;
    m_paymentNotifyUrlHasBeenSet = true;
}

bool UnifiedOrderRequest::PaymentNotifyUrlHasBeenSet() const
{
    return m_paymentNotifyUrlHasBeenSet;
}


