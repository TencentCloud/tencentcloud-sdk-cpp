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

#include <tencentcloud/ctem/v20231128/model/CreateWechatOfficialAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateWechatOfficialAccountRequest::CreateWechatOfficialAccountRequest() :
    m_customerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_recordSubjectHasBeenSet(false)
{
}

string CreateWechatOfficialAccountRequest::ToJsonString() const
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


int64_t CreateWechatOfficialAccountRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateWechatOfficialAccountRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetName() const
{
    return m_name;
}

void CreateWechatOfficialAccountRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetLogo() const
{
    return m_logo;
}

void CreateWechatOfficialAccountRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetAccountId() const
{
    return m_accountId;
}

void CreateWechatOfficialAccountRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetQrCode() const
{
    return m_qrCode;
}

void CreateWechatOfficialAccountRequest::SetQrCode(const string& _qrCode)
{
    m_qrCode = _qrCode;
    m_qrCodeHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetDescription() const
{
    return m_description;
}

void CreateWechatOfficialAccountRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateWechatOfficialAccountRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string CreateWechatOfficialAccountRequest::GetRecordSubject() const
{
    return m_recordSubject;
}

void CreateWechatOfficialAccountRequest::SetRecordSubject(const string& _recordSubject)
{
    m_recordSubject = _recordSubject;
    m_recordSubjectHasBeenSet = true;
}

bool CreateWechatOfficialAccountRequest::RecordSubjectHasBeenSet() const
{
    return m_recordSubjectHasBeenSet;
}


