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

#include <tencentcloud/cpdp/v20190820/model/CreateOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOrderRequest::CreateOrderRequest() :
    m_channelCodeHasBeenSet(false),
    m_merchantAppIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_traceNoHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_returnUrlHasBeenSet(false)
{
}

string CreateOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_traceNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceNo.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_returnUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_returnUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOrderRequest::GetChannelCode() const
{
    return m_channelCode;
}

void CreateOrderRequest::SetChannelCode(const string& _channelCode)
{
    m_channelCode = _channelCode;
    m_channelCodeHasBeenSet = true;
}

bool CreateOrderRequest::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string CreateOrderRequest::GetMerchantAppId() const
{
    return m_merchantAppId;
}

void CreateOrderRequest::SetMerchantAppId(const string& _merchantAppId)
{
    m_merchantAppId = _merchantAppId;
    m_merchantAppIdHasBeenSet = true;
}

bool CreateOrderRequest::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string CreateOrderRequest::GetAmount() const
{
    return m_amount;
}

void CreateOrderRequest::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CreateOrderRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string CreateOrderRequest::GetTraceNo() const
{
    return m_traceNo;
}

void CreateOrderRequest::SetTraceNo(const string& _traceNo)
{
    m_traceNo = _traceNo;
    m_traceNoHasBeenSet = true;
}

bool CreateOrderRequest::TraceNoHasBeenSet() const
{
    return m_traceNoHasBeenSet;
}

string CreateOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOrderRequest::GetReturnUrl() const
{
    return m_returnUrl;
}

void CreateOrderRequest::SetReturnUrl(const string& _returnUrl)
{
    m_returnUrl = _returnUrl;
    m_returnUrlHasBeenSet = true;
}

bool CreateOrderRequest::ReturnUrlHasBeenSet() const
{
    return m_returnUrlHasBeenSet;
}


