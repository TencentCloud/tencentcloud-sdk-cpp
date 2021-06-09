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

#include <tencentcloud/tms/v20200713/model/AccountTipoffAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tms::V20200713::Model;
using namespace std;

AccountTipoffAccessRequest::AccountTipoffAccessRequest() :
    m_reportedAccountHasBeenSet(false),
    m_reportedAccountTypeHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_senderAccountHasBeenSet(false),
    m_senderAccountTypeHasBeenSet(false),
    m_senderIPHasBeenSet(false),
    m_evilContentHasBeenSet(false)
{
}

string AccountTipoffAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reportedAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportedAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reportedAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_reportedAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportedAccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportedAccountType, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evilType, allocator);
    }

    if (m_senderAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_senderAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_senderAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderAccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_senderAccountType, allocator);
    }

    if (m_senderIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_senderIP.c_str(), allocator).Move(), allocator);
    }

    if (m_evilContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evilContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AccountTipoffAccessRequest::GetReportedAccount() const
{
    return m_reportedAccount;
}

void AccountTipoffAccessRequest::SetReportedAccount(const string& _reportedAccount)
{
    m_reportedAccount = _reportedAccount;
    m_reportedAccountHasBeenSet = true;
}

bool AccountTipoffAccessRequest::ReportedAccountHasBeenSet() const
{
    return m_reportedAccountHasBeenSet;
}

int64_t AccountTipoffAccessRequest::GetReportedAccountType() const
{
    return m_reportedAccountType;
}

void AccountTipoffAccessRequest::SetReportedAccountType(const int64_t& _reportedAccountType)
{
    m_reportedAccountType = _reportedAccountType;
    m_reportedAccountTypeHasBeenSet = true;
}

bool AccountTipoffAccessRequest::ReportedAccountTypeHasBeenSet() const
{
    return m_reportedAccountTypeHasBeenSet;
}

int64_t AccountTipoffAccessRequest::GetEvilType() const
{
    return m_evilType;
}

void AccountTipoffAccessRequest::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool AccountTipoffAccessRequest::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

string AccountTipoffAccessRequest::GetSenderAccount() const
{
    return m_senderAccount;
}

void AccountTipoffAccessRequest::SetSenderAccount(const string& _senderAccount)
{
    m_senderAccount = _senderAccount;
    m_senderAccountHasBeenSet = true;
}

bool AccountTipoffAccessRequest::SenderAccountHasBeenSet() const
{
    return m_senderAccountHasBeenSet;
}

int64_t AccountTipoffAccessRequest::GetSenderAccountType() const
{
    return m_senderAccountType;
}

void AccountTipoffAccessRequest::SetSenderAccountType(const int64_t& _senderAccountType)
{
    m_senderAccountType = _senderAccountType;
    m_senderAccountTypeHasBeenSet = true;
}

bool AccountTipoffAccessRequest::SenderAccountTypeHasBeenSet() const
{
    return m_senderAccountTypeHasBeenSet;
}

string AccountTipoffAccessRequest::GetSenderIP() const
{
    return m_senderIP;
}

void AccountTipoffAccessRequest::SetSenderIP(const string& _senderIP)
{
    m_senderIP = _senderIP;
    m_senderIPHasBeenSet = true;
}

bool AccountTipoffAccessRequest::SenderIPHasBeenSet() const
{
    return m_senderIPHasBeenSet;
}

string AccountTipoffAccessRequest::GetEvilContent() const
{
    return m_evilContent;
}

void AccountTipoffAccessRequest::SetEvilContent(const string& _evilContent)
{
    m_evilContent = _evilContent;
    m_evilContentHasBeenSet = true;
}

bool AccountTipoffAccessRequest::EvilContentHasBeenSet() const
{
    return m_evilContentHasBeenSet;
}


