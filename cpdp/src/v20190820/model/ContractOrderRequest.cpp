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

#include <tencentcloud/cpdp/v20190820/model/ContractOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractOrderRequest::ContractOrderRequest() :
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
    m_contractNotifyUrlHasBeenSet(false),
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
    m_paymentNotifyUrlHasBeenSet(false),
    m_contractSceneIdHasBeenSet(false),
    m_externalContractDataHasBeenSet(false),
    m_outContractCodeHasBeenSet(false),
    m_attachDataHasBeenSet(false),
    m_contractDisplayNameHasBeenSet(false)
{
}

string ContractOrderRequest::ToJsonString() const
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

    if (m_contractNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractNotifyUrl.c_str(), allocator).Move(), allocator);
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

    if (m_contractSceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractSceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractSceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalContractDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalContractData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalContractData.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_attachDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attachData.c_str(), allocator).Move(), allocator);
    }

    if (m_contractDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractDisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractDisplayName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ContractOrderRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void ContractOrderRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool ContractOrderRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string ContractOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void ContractOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool ContractOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string ContractOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void ContractOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool ContractOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string ContractOrderRequest::GetProductDetail() const
{
    return m_productDetail;
}

void ContractOrderRequest::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool ContractOrderRequest::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

string ContractOrderRequest::GetProductId() const
{
    return m_productId;
}

void ContractOrderRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ContractOrderRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ContractOrderRequest::GetProductName() const
{
    return m_productName;
}

void ContractOrderRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ContractOrderRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t ContractOrderRequest::GetTotalAmt() const
{
    return m_totalAmt;
}

void ContractOrderRequest::SetTotalAmt(const int64_t& _totalAmt)
{
    m_totalAmt = _totalAmt;
    m_totalAmtHasBeenSet = true;
}

bool ContractOrderRequest::TotalAmtHasBeenSet() const
{
    return m_totalAmtHasBeenSet;
}

string ContractOrderRequest::GetUserId() const
{
    return m_userId;
}

void ContractOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ContractOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ContractOrderRequest::GetRealChannel() const
{
    return m_realChannel;
}

void ContractOrderRequest::SetRealChannel(const string& _realChannel)
{
    m_realChannel = _realChannel;
    m_realChannelHasBeenSet = true;
}

bool ContractOrderRequest::RealChannelHasBeenSet() const
{
    return m_realChannelHasBeenSet;
}

int64_t ContractOrderRequest::GetOriginalAmt() const
{
    return m_originalAmt;
}

void ContractOrderRequest::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool ContractOrderRequest::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

string ContractOrderRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void ContractOrderRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool ContractOrderRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string ContractOrderRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void ContractOrderRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool ContractOrderRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string ContractOrderRequest::GetContractNotifyUrl() const
{
    return m_contractNotifyUrl;
}

void ContractOrderRequest::SetContractNotifyUrl(const string& _contractNotifyUrl)
{
    m_contractNotifyUrl = _contractNotifyUrl;
    m_contractNotifyUrlHasBeenSet = true;
}

bool ContractOrderRequest::ContractNotifyUrlHasBeenSet() const
{
    return m_contractNotifyUrlHasBeenSet;
}

string ContractOrderRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ContractOrderRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ContractOrderRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string ContractOrderRequest::GetChannel() const
{
    return m_channel;
}

void ContractOrderRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ContractOrderRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string ContractOrderRequest::GetMetadata() const
{
    return m_metadata;
}

void ContractOrderRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool ContractOrderRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t ContractOrderRequest::GetQuantity() const
{
    return m_quantity;
}

void ContractOrderRequest::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool ContractOrderRequest::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string ContractOrderRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ContractOrderRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ContractOrderRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<ContractOrderInSubOrder> ContractOrderRequest::GetSubOrderList() const
{
    return m_subOrderList;
}

void ContractOrderRequest::SetSubOrderList(const vector<ContractOrderInSubOrder>& _subOrderList)
{
    m_subOrderList = _subOrderList;
    m_subOrderListHasBeenSet = true;
}

bool ContractOrderRequest::SubOrderListHasBeenSet() const
{
    return m_subOrderListHasBeenSet;
}

int64_t ContractOrderRequest::GetTotalMchIncome() const
{
    return m_totalMchIncome;
}

void ContractOrderRequest::SetTotalMchIncome(const int64_t& _totalMchIncome)
{
    m_totalMchIncome = _totalMchIncome;
    m_totalMchIncomeHasBeenSet = true;
}

bool ContractOrderRequest::TotalMchIncomeHasBeenSet() const
{
    return m_totalMchIncomeHasBeenSet;
}

int64_t ContractOrderRequest::GetTotalPlatformIncome() const
{
    return m_totalPlatformIncome;
}

void ContractOrderRequest::SetTotalPlatformIncome(const int64_t& _totalPlatformIncome)
{
    m_totalPlatformIncome = _totalPlatformIncome;
    m_totalPlatformIncomeHasBeenSet = true;
}

bool ContractOrderRequest::TotalPlatformIncomeHasBeenSet() const
{
    return m_totalPlatformIncomeHasBeenSet;
}

string ContractOrderRequest::GetWxOpenId() const
{
    return m_wxOpenId;
}

void ContractOrderRequest::SetWxOpenId(const string& _wxOpenId)
{
    m_wxOpenId = _wxOpenId;
    m_wxOpenIdHasBeenSet = true;
}

bool ContractOrderRequest::WxOpenIdHasBeenSet() const
{
    return m_wxOpenIdHasBeenSet;
}

string ContractOrderRequest::GetWxSubOpenId() const
{
    return m_wxSubOpenId;
}

void ContractOrderRequest::SetWxSubOpenId(const string& _wxSubOpenId)
{
    m_wxSubOpenId = _wxSubOpenId;
    m_wxSubOpenIdHasBeenSet = true;
}

bool ContractOrderRequest::WxSubOpenIdHasBeenSet() const
{
    return m_wxSubOpenIdHasBeenSet;
}

string ContractOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void ContractOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool ContractOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string ContractOrderRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void ContractOrderRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool ContractOrderRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string ContractOrderRequest::GetWxSubAppId() const
{
    return m_wxSubAppId;
}

void ContractOrderRequest::SetWxSubAppId(const string& _wxSubAppId)
{
    m_wxSubAppId = _wxSubAppId;
    m_wxSubAppIdHasBeenSet = true;
}

bool ContractOrderRequest::WxSubAppIdHasBeenSet() const
{
    return m_wxSubAppIdHasBeenSet;
}

string ContractOrderRequest::GetPaymentNotifyUrl() const
{
    return m_paymentNotifyUrl;
}

void ContractOrderRequest::SetPaymentNotifyUrl(const string& _paymentNotifyUrl)
{
    m_paymentNotifyUrl = _paymentNotifyUrl;
    m_paymentNotifyUrlHasBeenSet = true;
}

bool ContractOrderRequest::PaymentNotifyUrlHasBeenSet() const
{
    return m_paymentNotifyUrlHasBeenSet;
}

string ContractOrderRequest::GetContractSceneId() const
{
    return m_contractSceneId;
}

void ContractOrderRequest::SetContractSceneId(const string& _contractSceneId)
{
    m_contractSceneId = _contractSceneId;
    m_contractSceneIdHasBeenSet = true;
}

bool ContractOrderRequest::ContractSceneIdHasBeenSet() const
{
    return m_contractSceneIdHasBeenSet;
}

string ContractOrderRequest::GetExternalContractData() const
{
    return m_externalContractData;
}

void ContractOrderRequest::SetExternalContractData(const string& _externalContractData)
{
    m_externalContractData = _externalContractData;
    m_externalContractDataHasBeenSet = true;
}

bool ContractOrderRequest::ExternalContractDataHasBeenSet() const
{
    return m_externalContractDataHasBeenSet;
}

string ContractOrderRequest::GetOutContractCode() const
{
    return m_outContractCode;
}

void ContractOrderRequest::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool ContractOrderRequest::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

string ContractOrderRequest::GetAttachData() const
{
    return m_attachData;
}

void ContractOrderRequest::SetAttachData(const string& _attachData)
{
    m_attachData = _attachData;
    m_attachDataHasBeenSet = true;
}

bool ContractOrderRequest::AttachDataHasBeenSet() const
{
    return m_attachDataHasBeenSet;
}

string ContractOrderRequest::GetContractDisplayName() const
{
    return m_contractDisplayName;
}

void ContractOrderRequest::SetContractDisplayName(const string& _contractDisplayName)
{
    m_contractDisplayName = _contractDisplayName;
    m_contractDisplayNameHasBeenSet = true;
}

bool ContractOrderRequest::ContractDisplayNameHasBeenSet() const
{
    return m_contractDisplayNameHasBeenSet;
}


