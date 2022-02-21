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

#include <tencentcloud/cpdp/v20190820/model/UnbindOpenBankExternalSubMerchantBankAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UnbindOpenBankExternalSubMerchantBankAccountRequest::UnbindOpenBankExternalSubMerchantBankAccountRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_bindSerialNoHasBeenSet(false),
    m_outApplyIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::ToJsonString() const
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

    if (m_bindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindSerialNo.c_str(), allocator).Move(), allocator);
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


string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetChannelName() const
{
    return m_channelName;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetBindSerialNo() const
{
    return m_bindSerialNo;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetBindSerialNo(const string& _bindSerialNo)
{
    m_bindSerialNo = _bindSerialNo;
    m_bindSerialNoHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::BindSerialNoHasBeenSet() const
{
    return m_bindSerialNoHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetOutApplyId() const
{
    return m_outApplyId;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetOutApplyId(const string& _outApplyId)
{
    m_outApplyId = _outApplyId;
    m_outApplyIdHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::OutApplyIdHasBeenSet() const
{
    return m_outApplyIdHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountRequest::GetEnvironment() const
{
    return m_environment;
}

void UnbindOpenBankExternalSubMerchantBankAccountRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


