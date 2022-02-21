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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankExternalSubMerchantRegistrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankExternalSubMerchantRegistrationRequest::CreateOpenBankExternalSubMerchantRegistrationRequest() :
    m_outRegistrationNoHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_outSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_businessLicenseNumberHasBeenSet(false),
    m_outSubMerchantNameHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_outSubMerchantShortNameHasBeenSet(false),
    m_outSubMerchantDescriptionHasBeenSet(false),
    m_externalSubMerchantRegistrationDataHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantId.c_str(), allocator).Move(), allocator);
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

    if (m_businessLicenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_externalSubMerchantRegistrationDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSubMerchantRegistrationData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalSubMerchantRegistrationData.c_str(), allocator).Move(), allocator);
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


string CreateOpenBankExternalSubMerchantRegistrationRequest::GetOutRegistrationNo() const
{
    return m_outRegistrationNo;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetOutRegistrationNo(const string& _outRegistrationNo)
{
    m_outRegistrationNo = _outRegistrationNo;
    m_outRegistrationNoHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::OutRegistrationNoHasBeenSet() const
{
    return m_outRegistrationNoHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetOutSubMerchantId() const
{
    return m_outSubMerchantId;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetOutSubMerchantId(const string& _outSubMerchantId)
{
    m_outSubMerchantId = _outSubMerchantId;
    m_outSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::OutSubMerchantIdHasBeenSet() const
{
    return m_outSubMerchantIdHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetBusinessLicenseNumber() const
{
    return m_businessLicenseNumber;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetBusinessLicenseNumber(const string& _businessLicenseNumber)
{
    m_businessLicenseNumber = _businessLicenseNumber;
    m_businessLicenseNumberHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::BusinessLicenseNumberHasBeenSet() const
{
    return m_businessLicenseNumberHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetOutSubMerchantName() const
{
    return m_outSubMerchantName;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetOutSubMerchantName(const string& _outSubMerchantName)
{
    m_outSubMerchantName = _outSubMerchantName;
    m_outSubMerchantNameHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::OutSubMerchantNameHasBeenSet() const
{
    return m_outSubMerchantNameHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetLegalName() const
{
    return m_legalName;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetOutSubMerchantShortName() const
{
    return m_outSubMerchantShortName;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetOutSubMerchantShortName(const string& _outSubMerchantShortName)
{
    m_outSubMerchantShortName = _outSubMerchantShortName;
    m_outSubMerchantShortNameHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::OutSubMerchantShortNameHasBeenSet() const
{
    return m_outSubMerchantShortNameHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetOutSubMerchantDescription() const
{
    return m_outSubMerchantDescription;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetOutSubMerchantDescription(const string& _outSubMerchantDescription)
{
    m_outSubMerchantDescription = _outSubMerchantDescription;
    m_outSubMerchantDescriptionHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::OutSubMerchantDescriptionHasBeenSet() const
{
    return m_outSubMerchantDescriptionHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetExternalSubMerchantRegistrationData() const
{
    return m_externalSubMerchantRegistrationData;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetExternalSubMerchantRegistrationData(const string& _externalSubMerchantRegistrationData)
{
    m_externalSubMerchantRegistrationData = _externalSubMerchantRegistrationData;
    m_externalSubMerchantRegistrationDataHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::ExternalSubMerchantRegistrationDataHasBeenSet() const
{
    return m_externalSubMerchantRegistrationDataHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankExternalSubMerchantRegistrationRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


