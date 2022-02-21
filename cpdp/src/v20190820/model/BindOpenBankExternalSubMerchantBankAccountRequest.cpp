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

#include <tencentcloud/cpdp/v20190820/model/BindOpenBankExternalSubMerchantBankAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindOpenBankExternalSubMerchantBankAccountRequest::BindOpenBankExternalSubMerchantBankAccountRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_externalSubMerchantBindBankAccountDataHasBeenSet(false),
    m_outApplyIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string BindOpenBankExternalSubMerchantBankAccountRequest::ToJsonString() const
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

    if (m_externalSubMerchantBindBankAccountDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSubMerchantBindBankAccountData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalSubMerchantBindBankAccountData.c_str(), allocator).Move(), allocator);
    }

    if (m_outApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutApplyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outApplyId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
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


string BindOpenBankExternalSubMerchantBankAccountRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetChannelName() const
{
    return m_channelName;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetExternalSubMerchantBindBankAccountData() const
{
    return m_externalSubMerchantBindBankAccountData;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetExternalSubMerchantBindBankAccountData(const string& _externalSubMerchantBindBankAccountData)
{
    m_externalSubMerchantBindBankAccountData = _externalSubMerchantBindBankAccountData;
    m_externalSubMerchantBindBankAccountDataHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::ExternalSubMerchantBindBankAccountDataHasBeenSet() const
{
    return m_externalSubMerchantBindBankAccountDataHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetOutApplyId() const
{
    return m_outApplyId;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetOutApplyId(const string& _outApplyId)
{
    m_outApplyId = _outApplyId;
    m_outApplyIdHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::OutApplyIdHasBeenSet() const
{
    return m_outApplyIdHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountRequest::GetEnvironment() const
{
    return m_environment;
}

void BindOpenBankExternalSubMerchantBankAccountRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


