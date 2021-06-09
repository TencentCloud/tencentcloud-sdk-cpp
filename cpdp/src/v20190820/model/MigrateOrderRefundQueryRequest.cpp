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

#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundQueryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MigrateOrderRefundQueryRequest::MigrateOrderRefundQueryRequest() :
    m_merchantIdHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_refundOrderIdHasBeenSet(false),
    m_tradeSerialNoHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string MigrateOrderRefundQueryRequest::ToJsonString() const
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

    if (m_refundOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
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


string MigrateOrderRefundQueryRequest::GetMerchantId() const
{
    return m_merchantId;
}

void MigrateOrderRefundQueryRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool MigrateOrderRefundQueryRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string MigrateOrderRefundQueryRequest::GetPayChannel() const
{
    return m_payChannel;
}

void MigrateOrderRefundQueryRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool MigrateOrderRefundQueryRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

string MigrateOrderRefundQueryRequest::GetRefundOrderId() const
{
    return m_refundOrderId;
}

void MigrateOrderRefundQueryRequest::SetRefundOrderId(const string& _refundOrderId)
{
    m_refundOrderId = _refundOrderId;
    m_refundOrderIdHasBeenSet = true;
}

bool MigrateOrderRefundQueryRequest::RefundOrderIdHasBeenSet() const
{
    return m_refundOrderIdHasBeenSet;
}

string MigrateOrderRefundQueryRequest::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void MigrateOrderRefundQueryRequest::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool MigrateOrderRefundQueryRequest::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

string MigrateOrderRefundQueryRequest::GetProfile() const
{
    return m_profile;
}

void MigrateOrderRefundQueryRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool MigrateOrderRefundQueryRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


