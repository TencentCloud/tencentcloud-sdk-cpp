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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankPaymentOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankPaymentOrderRequest::QueryOpenBankPaymentOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankPaymentOrderRequest::ToJsonString() const
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

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankPaymentOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankPaymentOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankPaymentOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void QueryOpenBankPaymentOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string QueryOpenBankPaymentOrderRequest::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void QueryOpenBankPaymentOrderRequest::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderRequest::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string QueryOpenBankPaymentOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankPaymentOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


