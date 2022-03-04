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

#include <tencentcloud/cpdp/v20190820/model/UnifiedTlinxOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UnifiedTlinxOrderRequest::UnifiedTlinxOrderRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_payTagHasBeenSet(false),
    m_tradeAmountHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_orderNameHasBeenSet(false),
    m_originalAmountHasBeenSet(false),
    m_ignoreAmountHasBeenSet(false),
    m_discountAmountHasBeenSet(false),
    m_tradeAccountHasBeenSet(false),
    m_tradeNoHasBeenSet(false),
    m_authCodeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tradeResultHasBeenSet(false),
    m_royaltyHasBeenSet(false),
    m_jsapiHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_subOpenIdHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string UnifiedTlinxOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_developerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payTag.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_payNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payName.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ignoreAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_discountAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_discountAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_authCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeResult.c_str(), allocator).Move(), allocator);
    }

    if (m_royaltyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Royalty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_royalty.c_str(), allocator).Move(), allocator);
    }

    if (m_jsapiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jsapi";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jsapi.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnifiedTlinxOrderRequest::GetOpenId() const
{
    return m_openId;
}

void UnifiedTlinxOrderRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetOpenKey() const
{
    return m_openKey;
}

void UnifiedTlinxOrderRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetDeveloperNo() const
{
    return m_developerNo;
}

void UnifiedTlinxOrderRequest::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetPayTag() const
{
    return m_payTag;
}

void UnifiedTlinxOrderRequest::SetPayTag(const string& _payTag)
{
    m_payTag = _payTag;
    m_payTagHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::PayTagHasBeenSet() const
{
    return m_payTagHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetTradeAmount() const
{
    return m_tradeAmount;
}

void UnifiedTlinxOrderRequest::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void UnifiedTlinxOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetPayName() const
{
    return m_payName;
}

void UnifiedTlinxOrderRequest::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void UnifiedTlinxOrderRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetOrderName() const
{
    return m_orderName;
}

void UnifiedTlinxOrderRequest::SetOrderName(const string& _orderName)
{
    m_orderName = _orderName;
    m_orderNameHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::OrderNameHasBeenSet() const
{
    return m_orderNameHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetOriginalAmount() const
{
    return m_originalAmount;
}

void UnifiedTlinxOrderRequest::SetOriginalAmount(const string& _originalAmount)
{
    m_originalAmount = _originalAmount;
    m_originalAmountHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::OriginalAmountHasBeenSet() const
{
    return m_originalAmountHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetIgnoreAmount() const
{
    return m_ignoreAmount;
}

void UnifiedTlinxOrderRequest::SetIgnoreAmount(const string& _ignoreAmount)
{
    m_ignoreAmount = _ignoreAmount;
    m_ignoreAmountHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::IgnoreAmountHasBeenSet() const
{
    return m_ignoreAmountHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetDiscountAmount() const
{
    return m_discountAmount;
}

void UnifiedTlinxOrderRequest::SetDiscountAmount(const string& _discountAmount)
{
    m_discountAmount = _discountAmount;
    m_discountAmountHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::DiscountAmountHasBeenSet() const
{
    return m_discountAmountHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetTradeAccount() const
{
    return m_tradeAccount;
}

void UnifiedTlinxOrderRequest::SetTradeAccount(const string& _tradeAccount)
{
    m_tradeAccount = _tradeAccount;
    m_tradeAccountHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::TradeAccountHasBeenSet() const
{
    return m_tradeAccountHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetTradeNo() const
{
    return m_tradeNo;
}

void UnifiedTlinxOrderRequest::SetTradeNo(const string& _tradeNo)
{
    m_tradeNo = _tradeNo;
    m_tradeNoHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::TradeNoHasBeenSet() const
{
    return m_tradeNoHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetAuthCode() const
{
    return m_authCode;
}

void UnifiedTlinxOrderRequest::SetAuthCode(const string& _authCode)
{
    m_authCode = _authCode;
    m_authCodeHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::AuthCodeHasBeenSet() const
{
    return m_authCodeHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetTag() const
{
    return m_tag;
}

void UnifiedTlinxOrderRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetRemark() const
{
    return m_remark;
}

void UnifiedTlinxOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetTradeResult() const
{
    return m_tradeResult;
}

void UnifiedTlinxOrderRequest::SetTradeResult(const string& _tradeResult)
{
    m_tradeResult = _tradeResult;
    m_tradeResultHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::TradeResultHasBeenSet() const
{
    return m_tradeResultHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetRoyalty() const
{
    return m_royalty;
}

void UnifiedTlinxOrderRequest::SetRoyalty(const string& _royalty)
{
    m_royalty = _royalty;
    m_royaltyHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::RoyaltyHasBeenSet() const
{
    return m_royaltyHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetJsapi() const
{
    return m_jsapi;
}

void UnifiedTlinxOrderRequest::SetJsapi(const string& _jsapi)
{
    m_jsapi = _jsapi;
    m_jsapiHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::JsapiHasBeenSet() const
{
    return m_jsapiHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetSubAppId() const
{
    return m_subAppId;
}

void UnifiedTlinxOrderRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetSubOpenId() const
{
    return m_subOpenId;
}

void UnifiedTlinxOrderRequest::SetSubOpenId(const string& _subOpenId)
{
    m_subOpenId = _subOpenId;
    m_subOpenIdHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::SubOpenIdHasBeenSet() const
{
    return m_subOpenIdHasBeenSet;
}

string UnifiedTlinxOrderRequest::GetProfile() const
{
    return m_profile;
}

void UnifiedTlinxOrderRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool UnifiedTlinxOrderRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


