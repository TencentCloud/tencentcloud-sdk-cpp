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

#include <tencentcloud/cpdp/v20190820/model/UploadOpenBankSubMerchantCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadOpenBankSubMerchantCredentialRequest::UploadOpenBankSubMerchantCredentialRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_outApplyIdHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_credentialContentHasBeenSet(false),
    m_credentialUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string UploadOpenBankSubMerchantCredentialRequest::ToJsonString() const
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

    if (m_outApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutApplyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outApplyId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialContent.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialUrl.c_str(), allocator).Move(), allocator);
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


string UploadOpenBankSubMerchantCredentialRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void UploadOpenBankSubMerchantCredentialRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void UploadOpenBankSubMerchantCredentialRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetChannelName() const
{
    return m_channelName;
}

void UploadOpenBankSubMerchantCredentialRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetOutApplyId() const
{
    return m_outApplyId;
}

void UploadOpenBankSubMerchantCredentialRequest::SetOutApplyId(const string& _outApplyId)
{
    m_outApplyId = _outApplyId;
    m_outApplyIdHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::OutApplyIdHasBeenSet() const
{
    return m_outApplyIdHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetCredentialType() const
{
    return m_credentialType;
}

void UploadOpenBankSubMerchantCredentialRequest::SetCredentialType(const string& _credentialType)
{
    m_credentialType = _credentialType;
    m_credentialTypeHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::CredentialTypeHasBeenSet() const
{
    return m_credentialTypeHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetFileType() const
{
    return m_fileType;
}

void UploadOpenBankSubMerchantCredentialRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void UploadOpenBankSubMerchantCredentialRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetCredentialContent() const
{
    return m_credentialContent;
}

void UploadOpenBankSubMerchantCredentialRequest::SetCredentialContent(const string& _credentialContent)
{
    m_credentialContent = _credentialContent;
    m_credentialContentHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::CredentialContentHasBeenSet() const
{
    return m_credentialContentHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetCredentialUrl() const
{
    return m_credentialUrl;
}

void UploadOpenBankSubMerchantCredentialRequest::SetCredentialUrl(const string& _credentialUrl)
{
    m_credentialUrl = _credentialUrl;
    m_credentialUrlHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::CredentialUrlHasBeenSet() const
{
    return m_credentialUrlHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialRequest::GetEnvironment() const
{
    return m_environment;
}

void UploadOpenBankSubMerchantCredentialRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


