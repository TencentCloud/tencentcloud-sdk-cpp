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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubAccountBookBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubAccountBookBalanceRequest::QueryOpenBankExternalSubAccountBookBalanceRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_outAccountBookIdHasBeenSet(false),
    m_channelAccountBookIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::ToJsonString() const
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

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_outAccountBookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutAccountBookId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outAccountBookId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelAccountBookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelAccountBookId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelAccountBookId.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankExternalSubAccountBookBalanceRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetOutAccountBookId() const
{
    return m_outAccountBookId;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetOutAccountBookId(const string& _outAccountBookId)
{
    m_outAccountBookId = _outAccountBookId;
    m_outAccountBookIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::OutAccountBookIdHasBeenSet() const
{
    return m_outAccountBookIdHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetChannelAccountBookId() const
{
    return m_channelAccountBookId;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetChannelAccountBookId(const string& _channelAccountBookId)
{
    m_channelAccountBookId = _channelAccountBookId;
    m_channelAccountBookIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::ChannelAccountBookIdHasBeenSet() const
{
    return m_channelAccountBookIdHasBeenSet;
}

string QueryOpenBankExternalSubAccountBookBalanceRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankExternalSubAccountBookBalanceRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankExternalSubAccountBookBalanceRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


