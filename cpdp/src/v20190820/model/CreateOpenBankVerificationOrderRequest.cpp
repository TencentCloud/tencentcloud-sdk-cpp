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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankVerificationOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankVerificationOrderRequest::CreateOpenBankVerificationOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_outVerificationIdHasBeenSet(false),
    m_verificationAmountHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_externalVerificationDataHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankVerificationOrderRequest::ToJsonString() const
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

    if (m_outVerificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutVerificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outVerificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_verificationAmount, allocator);
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

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_externalVerificationDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalVerificationData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalVerificationData.c_str(), allocator).Move(), allocator);
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


string CreateOpenBankVerificationOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankVerificationOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetOutVerificationId() const
{
    return m_outVerificationId;
}

void CreateOpenBankVerificationOrderRequest::SetOutVerificationId(const string& _outVerificationId)
{
    m_outVerificationId = _outVerificationId;
    m_outVerificationIdHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::OutVerificationIdHasBeenSet() const
{
    return m_outVerificationIdHasBeenSet;
}

int64_t CreateOpenBankVerificationOrderRequest::GetVerificationAmount() const
{
    return m_verificationAmount;
}

void CreateOpenBankVerificationOrderRequest::SetVerificationAmount(const int64_t& _verificationAmount)
{
    m_verificationAmount = _verificationAmount;
    m_verificationAmountHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::VerificationAmountHasBeenSet() const
{
    return m_verificationAmountHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankVerificationOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void CreateOpenBankVerificationOrderRequest::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankVerificationOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpenBankVerificationOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetExternalVerificationData() const
{
    return m_externalVerificationData;
}

void CreateOpenBankVerificationOrderRequest::SetExternalVerificationData(const string& _externalVerificationData)
{
    m_externalVerificationData = _externalVerificationData;
    m_externalVerificationDataHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::ExternalVerificationDataHasBeenSet() const
{
    return m_externalVerificationDataHasBeenSet;
}

string CreateOpenBankVerificationOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankVerificationOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankVerificationOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


