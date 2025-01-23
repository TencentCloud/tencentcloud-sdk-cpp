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

#include <tencentcloud/ses/v20201002/model/EmailSender.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

EmailSender::EmailSender() :
    m_emailAddressHasBeenSet(false),
    m_emailSenderNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_smtpPwdTypeHasBeenSet(false)
{
}

CoreInternalOutcome EmailSender::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSender.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("EmailSenderName") && !value["EmailSenderName"].IsNull())
    {
        if (!value["EmailSenderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSender.EmailSenderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailSenderName = string(value["EmailSenderName"].GetString());
        m_emailSenderNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTimestamp") && !value["CreatedTimestamp"].IsNull())
    {
        if (!value["CreatedTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSender.CreatedTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTimestamp = value["CreatedTimestamp"].GetUint64();
        m_createdTimestampHasBeenSet = true;
    }

    if (value.HasMember("SmtpPwdType") && !value["SmtpPwdType"].IsNull())
    {
        if (!value["SmtpPwdType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSender.SmtpPwdType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smtpPwdType = value["SmtpPwdType"].GetUint64();
        m_smtpPwdTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmailSender::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_emailSenderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailSenderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailSenderName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTimestamp, allocator);
    }

    if (m_smtpPwdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmtpPwdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smtpPwdType, allocator);
    }

}


string EmailSender::GetEmailAddress() const
{
    return m_emailAddress;
}

void EmailSender::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool EmailSender::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string EmailSender::GetEmailSenderName() const
{
    return m_emailSenderName;
}

void EmailSender::SetEmailSenderName(const string& _emailSenderName)
{
    m_emailSenderName = _emailSenderName;
    m_emailSenderNameHasBeenSet = true;
}

bool EmailSender::EmailSenderNameHasBeenSet() const
{
    return m_emailSenderNameHasBeenSet;
}

uint64_t EmailSender::GetCreatedTimestamp() const
{
    return m_createdTimestamp;
}

void EmailSender::SetCreatedTimestamp(const uint64_t& _createdTimestamp)
{
    m_createdTimestamp = _createdTimestamp;
    m_createdTimestampHasBeenSet = true;
}

bool EmailSender::CreatedTimestampHasBeenSet() const
{
    return m_createdTimestampHasBeenSet;
}

uint64_t EmailSender::GetSmtpPwdType() const
{
    return m_smtpPwdType;
}

void EmailSender::SetSmtpPwdType(const uint64_t& _smtpPwdType)
{
    m_smtpPwdType = _smtpPwdType;
    m_smtpPwdTypeHasBeenSet = true;
}

bool EmailSender::SmtpPwdTypeHasBeenSet() const
{
    return m_smtpPwdTypeHasBeenSet;
}

