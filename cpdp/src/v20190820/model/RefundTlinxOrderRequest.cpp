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

#include <tencentcloud/cpdp/v20190820/model/RefundTlinxOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundTlinxOrderRequest::RefundTlinxOrderRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_refundOutNoHasBeenSet(false),
    m_refundOrderNameHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_shopPasswordHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string RefundTlinxOrderRequest::ToJsonString() const
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

    if (m_refundOutNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundOutNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundOutNo.c_str(), allocator).Move(), allocator);
    }

    if (m_refundOrderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundOrderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundOrderName.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_shopPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shopPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


string RefundTlinxOrderRequest::GetOpenId() const
{
    return m_openId;
}

void RefundTlinxOrderRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool RefundTlinxOrderRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string RefundTlinxOrderRequest::GetOpenKey() const
{
    return m_openKey;
}

void RefundTlinxOrderRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool RefundTlinxOrderRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string RefundTlinxOrderRequest::GetDeveloperNo() const
{
    return m_developerNo;
}

void RefundTlinxOrderRequest::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool RefundTlinxOrderRequest::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string RefundTlinxOrderRequest::GetRefundOutNo() const
{
    return m_refundOutNo;
}

void RefundTlinxOrderRequest::SetRefundOutNo(const string& _refundOutNo)
{
    m_refundOutNo = _refundOutNo;
    m_refundOutNoHasBeenSet = true;
}

bool RefundTlinxOrderRequest::RefundOutNoHasBeenSet() const
{
    return m_refundOutNoHasBeenSet;
}

string RefundTlinxOrderRequest::GetRefundOrderName() const
{
    return m_refundOrderName;
}

void RefundTlinxOrderRequest::SetRefundOrderName(const string& _refundOrderName)
{
    m_refundOrderName = _refundOrderName;
    m_refundOrderNameHasBeenSet = true;
}

bool RefundTlinxOrderRequest::RefundOrderNameHasBeenSet() const
{
    return m_refundOrderNameHasBeenSet;
}

string RefundTlinxOrderRequest::GetRefundAmount() const
{
    return m_refundAmount;
}

void RefundTlinxOrderRequest::SetRefundAmount(const string& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool RefundTlinxOrderRequest::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

string RefundTlinxOrderRequest::GetShopPassword() const
{
    return m_shopPassword;
}

void RefundTlinxOrderRequest::SetShopPassword(const string& _shopPassword)
{
    m_shopPassword = _shopPassword;
    m_shopPasswordHasBeenSet = true;
}

bool RefundTlinxOrderRequest::ShopPasswordHasBeenSet() const
{
    return m_shopPasswordHasBeenSet;
}

string RefundTlinxOrderRequest::GetRemark() const
{
    return m_remark;
}

void RefundTlinxOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RefundTlinxOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RefundTlinxOrderRequest::GetProfile() const
{
    return m_profile;
}

void RefundTlinxOrderRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool RefundTlinxOrderRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


