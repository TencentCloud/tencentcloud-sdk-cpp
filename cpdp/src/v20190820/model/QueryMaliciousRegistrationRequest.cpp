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

#include <tencentcloud/cpdp/v20190820/model/QueryMaliciousRegistrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryMaliciousRegistrationRequest::QueryMaliciousRegistrationRequest() :
    m_merchantIdHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_regAddressHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_uSCIHasBeenSet(false),
    m_regNumberHasBeenSet(false),
    m_encryptedPhoneNumberHasBeenSet(false),
    m_encryptedEmailAddressHasBeenSet(false),
    m_encryptedPersonIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string QueryMaliciousRegistrationRequest::ToJsonString() const
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

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_regAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regTime, allocator);
    }

    if (m_uSCIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "USCI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uSCI.c_str(), allocator).Move(), allocator);
    }

    if (m_regNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedPhoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedPhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedPhoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedPersonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedPersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedPersonId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryMaliciousRegistrationRequest::GetMerchantId() const
{
    return m_merchantId;
}

void QueryMaliciousRegistrationRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetMerchantName() const
{
    return m_merchantName;
}

void QueryMaliciousRegistrationRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetCompanyName() const
{
    return m_companyName;
}

void QueryMaliciousRegistrationRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetRegAddress() const
{
    return m_regAddress;
}

void QueryMaliciousRegistrationRequest::SetRegAddress(const string& _regAddress)
{
    m_regAddress = _regAddress;
    m_regAddressHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::RegAddressHasBeenSet() const
{
    return m_regAddressHasBeenSet;
}

uint64_t QueryMaliciousRegistrationRequest::GetRegTime() const
{
    return m_regTime;
}

void QueryMaliciousRegistrationRequest::SetRegTime(const uint64_t& _regTime)
{
    m_regTime = _regTime;
    m_regTimeHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetUSCI() const
{
    return m_uSCI;
}

void QueryMaliciousRegistrationRequest::SetUSCI(const string& _uSCI)
{
    m_uSCI = _uSCI;
    m_uSCIHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::USCIHasBeenSet() const
{
    return m_uSCIHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetRegNumber() const
{
    return m_regNumber;
}

void QueryMaliciousRegistrationRequest::SetRegNumber(const string& _regNumber)
{
    m_regNumber = _regNumber;
    m_regNumberHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::RegNumberHasBeenSet() const
{
    return m_regNumberHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetEncryptedPhoneNumber() const
{
    return m_encryptedPhoneNumber;
}

void QueryMaliciousRegistrationRequest::SetEncryptedPhoneNumber(const string& _encryptedPhoneNumber)
{
    m_encryptedPhoneNumber = _encryptedPhoneNumber;
    m_encryptedPhoneNumberHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::EncryptedPhoneNumberHasBeenSet() const
{
    return m_encryptedPhoneNumberHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetEncryptedEmailAddress() const
{
    return m_encryptedEmailAddress;
}

void QueryMaliciousRegistrationRequest::SetEncryptedEmailAddress(const string& _encryptedEmailAddress)
{
    m_encryptedEmailAddress = _encryptedEmailAddress;
    m_encryptedEmailAddressHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::EncryptedEmailAddressHasBeenSet() const
{
    return m_encryptedEmailAddressHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetEncryptedPersonId() const
{
    return m_encryptedPersonId;
}

void QueryMaliciousRegistrationRequest::SetEncryptedPersonId(const string& _encryptedPersonId)
{
    m_encryptedPersonId = _encryptedPersonId;
    m_encryptedPersonIdHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::EncryptedPersonIdHasBeenSet() const
{
    return m_encryptedPersonIdHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetIp() const
{
    return m_ip;
}

void QueryMaliciousRegistrationRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string QueryMaliciousRegistrationRequest::GetChannel() const
{
    return m_channel;
}

void QueryMaliciousRegistrationRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool QueryMaliciousRegistrationRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


