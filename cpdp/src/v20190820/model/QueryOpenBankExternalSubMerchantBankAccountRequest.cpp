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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantBankAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubMerchantBankAccountRequest::QueryOpenBankExternalSubMerchantBankAccountRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankExternalSubMerchantBankAccountRequest::ToJsonString() const
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


string QueryOpenBankExternalSubMerchantBankAccountRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankExternalSubMerchantBankAccountRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void QueryOpenBankExternalSubMerchantBankAccountRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountRequest::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankExternalSubMerchantBankAccountRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void QueryOpenBankExternalSubMerchantBankAccountRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankExternalSubMerchantBankAccountRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


