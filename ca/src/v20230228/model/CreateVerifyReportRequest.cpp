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

#include <tencentcloud/ca/v20230228/model/CreateVerifyReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ca::V20230228::Model;
using namespace std;

CreateVerifyReportRequest::CreateVerifyReportRequest() :
    m_applyCustomerTypeHasBeenSet(false),
    m_applyCustomerNameHasBeenSet(false),
    m_applyNameHasBeenSet(false),
    m_applyMobileHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_applyEmailHasBeenSet(false),
    m_certificateIdentityUsersHasBeenSet(false)
{
}

string CreateVerifyReportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyCustomerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyCustomerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyCustomerType.c_str(), allocator).Move(), allocator);
    }

    if (m_applyCustomerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyCustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyCustomerName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdentityUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateIdentityUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certificateIdentityUsers.begin(); itr != m_certificateIdentityUsers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVerifyReportRequest::GetApplyCustomerType() const
{
    return m_applyCustomerType;
}

void CreateVerifyReportRequest::SetApplyCustomerType(const string& _applyCustomerType)
{
    m_applyCustomerType = _applyCustomerType;
    m_applyCustomerTypeHasBeenSet = true;
}

bool CreateVerifyReportRequest::ApplyCustomerTypeHasBeenSet() const
{
    return m_applyCustomerTypeHasBeenSet;
}

string CreateVerifyReportRequest::GetApplyCustomerName() const
{
    return m_applyCustomerName;
}

void CreateVerifyReportRequest::SetApplyCustomerName(const string& _applyCustomerName)
{
    m_applyCustomerName = _applyCustomerName;
    m_applyCustomerNameHasBeenSet = true;
}

bool CreateVerifyReportRequest::ApplyCustomerNameHasBeenSet() const
{
    return m_applyCustomerNameHasBeenSet;
}

string CreateVerifyReportRequest::GetApplyName() const
{
    return m_applyName;
}

void CreateVerifyReportRequest::SetApplyName(const string& _applyName)
{
    m_applyName = _applyName;
    m_applyNameHasBeenSet = true;
}

bool CreateVerifyReportRequest::ApplyNameHasBeenSet() const
{
    return m_applyNameHasBeenSet;
}

string CreateVerifyReportRequest::GetApplyMobile() const
{
    return m_applyMobile;
}

void CreateVerifyReportRequest::SetApplyMobile(const string& _applyMobile)
{
    m_applyMobile = _applyMobile;
    m_applyMobileHasBeenSet = true;
}

bool CreateVerifyReportRequest::ApplyMobileHasBeenSet() const
{
    return m_applyMobileHasBeenSet;
}

string CreateVerifyReportRequest::GetFileId() const
{
    return m_fileId;
}

void CreateVerifyReportRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool CreateVerifyReportRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string CreateVerifyReportRequest::GetApplyEmail() const
{
    return m_applyEmail;
}

void CreateVerifyReportRequest::SetApplyEmail(const string& _applyEmail)
{
    m_applyEmail = _applyEmail;
    m_applyEmailHasBeenSet = true;
}

bool CreateVerifyReportRequest::ApplyEmailHasBeenSet() const
{
    return m_applyEmailHasBeenSet;
}

vector<CertificateIdentityUser> CreateVerifyReportRequest::GetCertificateIdentityUsers() const
{
    return m_certificateIdentityUsers;
}

void CreateVerifyReportRequest::SetCertificateIdentityUsers(const vector<CertificateIdentityUser>& _certificateIdentityUsers)
{
    m_certificateIdentityUsers = _certificateIdentityUsers;
    m_certificateIdentityUsersHasBeenSet = true;
}

bool CreateVerifyReportRequest::CertificateIdentityUsersHasBeenSet() const
{
    return m_certificateIdentityUsersHasBeenSet;
}


