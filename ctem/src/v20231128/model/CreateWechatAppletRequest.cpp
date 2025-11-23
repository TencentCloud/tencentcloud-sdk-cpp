/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctem/v20231128/model/CreateWechatAppletRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateWechatAppletRequest::CreateWechatAppletRequest() :
    m_customerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_accountAppidHasBeenSet(false),
    m_recordSubjectHasBeenSet(false)
{
}

string CreateWechatAppletRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_accountAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_recordSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordSubject.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateWechatAppletRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateWechatAppletRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateWechatAppletRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateWechatAppletRequest::GetName() const
{
    return m_name;
}

void CreateWechatAppletRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateWechatAppletRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateWechatAppletRequest::GetLogo() const
{
    return m_logo;
}

void CreateWechatAppletRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool CreateWechatAppletRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string CreateWechatAppletRequest::GetAccountId() const
{
    return m_accountId;
}

void CreateWechatAppletRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool CreateWechatAppletRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string CreateWechatAppletRequest::GetQrCode() const
{
    return m_qrCode;
}

void CreateWechatAppletRequest::SetQrCode(const string& _qrCode)
{
    m_qrCode = _qrCode;
    m_qrCodeHasBeenSet = true;
}

bool CreateWechatAppletRequest::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

string CreateWechatAppletRequest::GetDescription() const
{
    return m_description;
}

void CreateWechatAppletRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateWechatAppletRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateWechatAppletRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateWechatAppletRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateWechatAppletRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string CreateWechatAppletRequest::GetAccountAppid() const
{
    return m_accountAppid;
}

void CreateWechatAppletRequest::SetAccountAppid(const string& _accountAppid)
{
    m_accountAppid = _accountAppid;
    m_accountAppidHasBeenSet = true;
}

bool CreateWechatAppletRequest::AccountAppidHasBeenSet() const
{
    return m_accountAppidHasBeenSet;
}

string CreateWechatAppletRequest::GetRecordSubject() const
{
    return m_recordSubject;
}

void CreateWechatAppletRequest::SetRecordSubject(const string& _recordSubject)
{
    m_recordSubject = _recordSubject;
    m_recordSubjectHasBeenSet = true;
}

bool CreateWechatAppletRequest::RecordSubjectHasBeenSet() const
{
    return m_recordSubjectHasBeenSet;
}


