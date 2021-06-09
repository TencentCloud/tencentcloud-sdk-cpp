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

#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MigrateOrderRefundRequest::MigrateOrderRefundRequest() :
    m_merchantIdHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payOrderIdHasBeenSet(false),
    m_refundOrderIdHasBeenSet(false),
    m_refundAmtHasBeenSet(false),
    m_thirdChannelOrderIdHasBeenSet(false),
    m_payAmtHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_refundReasonHasBeenSet(false)
{
}

string MigrateOrderRefundRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_payOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refundAmt, allocator);
    }

    if (m_thirdChannelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thirdChannelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_payAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payAmt, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_refundReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundReason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MigrateOrderRefundRequest::GetMerchantId() const
{
    return m_merchantId;
}

void MigrateOrderRefundRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool MigrateOrderRefundRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string MigrateOrderRefundRequest::GetPayChannel() const
{
    return m_payChannel;
}

void MigrateOrderRefundRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool MigrateOrderRefundRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

string MigrateOrderRefundRequest::GetPayOrderId() const
{
    return m_payOrderId;
}

void MigrateOrderRefundRequest::SetPayOrderId(const string& _payOrderId)
{
    m_payOrderId = _payOrderId;
    m_payOrderIdHasBeenSet = true;
}

bool MigrateOrderRefundRequest::PayOrderIdHasBeenSet() const
{
    return m_payOrderIdHasBeenSet;
}

string MigrateOrderRefundRequest::GetRefundOrderId() const
{
    return m_refundOrderId;
}

void MigrateOrderRefundRequest::SetRefundOrderId(const string& _refundOrderId)
{
    m_refundOrderId = _refundOrderId;
    m_refundOrderIdHasBeenSet = true;
}

bool MigrateOrderRefundRequest::RefundOrderIdHasBeenSet() const
{
    return m_refundOrderIdHasBeenSet;
}

uint64_t MigrateOrderRefundRequest::GetRefundAmt() const
{
    return m_refundAmt;
}

void MigrateOrderRefundRequest::SetRefundAmt(const uint64_t& _refundAmt)
{
    m_refundAmt = _refundAmt;
    m_refundAmtHasBeenSet = true;
}

bool MigrateOrderRefundRequest::RefundAmtHasBeenSet() const
{
    return m_refundAmtHasBeenSet;
}

string MigrateOrderRefundRequest::GetThirdChannelOrderId() const
{
    return m_thirdChannelOrderId;
}

void MigrateOrderRefundRequest::SetThirdChannelOrderId(const string& _thirdChannelOrderId)
{
    m_thirdChannelOrderId = _thirdChannelOrderId;
    m_thirdChannelOrderIdHasBeenSet = true;
}

bool MigrateOrderRefundRequest::ThirdChannelOrderIdHasBeenSet() const
{
    return m_thirdChannelOrderIdHasBeenSet;
}

uint64_t MigrateOrderRefundRequest::GetPayAmt() const
{
    return m_payAmt;
}

void MigrateOrderRefundRequest::SetPayAmt(const uint64_t& _payAmt)
{
    m_payAmt = _payAmt;
    m_payAmtHasBeenSet = true;
}

bool MigrateOrderRefundRequest::PayAmtHasBeenSet() const
{
    return m_payAmtHasBeenSet;
}

string MigrateOrderRefundRequest::GetProfile() const
{
    return m_profile;
}

void MigrateOrderRefundRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool MigrateOrderRefundRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string MigrateOrderRefundRequest::GetRefundReason() const
{
    return m_refundReason;
}

void MigrateOrderRefundRequest::SetRefundReason(const string& _refundReason)
{
    m_refundReason = _refundReason;
    m_refundReasonHasBeenSet = true;
}

bool MigrateOrderRefundRequest::RefundReasonHasBeenSet() const
{
    return m_refundReasonHasBeenSet;
}


