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

#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRCompanyVerifyRequest::CreateCRCompanyVerifyRequest() :
    m_companyNameHasBeenSet(false),
    m_companyIDHasBeenSet(false),
    m_companyLegalNameHasBeenSet(false),
    m_managerNameHasBeenSet(false),
    m_managerPhoneHasBeenSet(false),
    m_verificationCodeHasBeenSet(false),
    m_companyIDTypeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateCRCompanyVerifyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyID.c_str(), allocator).Move(), allocator);
    }

    if (m_companyLegalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyLegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyLegalName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verificationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_companyIDTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyIDType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyIDType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCRCompanyVerifyRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateCRCompanyVerifyRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetCompanyID() const
{
    return m_companyID;
}

void CreateCRCompanyVerifyRequest::SetCompanyID(const string& _companyID)
{
    m_companyID = _companyID;
    m_companyIDHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::CompanyIDHasBeenSet() const
{
    return m_companyIDHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetCompanyLegalName() const
{
    return m_companyLegalName;
}

void CreateCRCompanyVerifyRequest::SetCompanyLegalName(const string& _companyLegalName)
{
    m_companyLegalName = _companyLegalName;
    m_companyLegalNameHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::CompanyLegalNameHasBeenSet() const
{
    return m_companyLegalNameHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetManagerName() const
{
    return m_managerName;
}

void CreateCRCompanyVerifyRequest::SetManagerName(const string& _managerName)
{
    m_managerName = _managerName;
    m_managerNameHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::ManagerNameHasBeenSet() const
{
    return m_managerNameHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetManagerPhone() const
{
    return m_managerPhone;
}

void CreateCRCompanyVerifyRequest::SetManagerPhone(const string& _managerPhone)
{
    m_managerPhone = _managerPhone;
    m_managerPhoneHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::ManagerPhoneHasBeenSet() const
{
    return m_managerPhoneHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetVerificationCode() const
{
    return m_verificationCode;
}

void CreateCRCompanyVerifyRequest::SetVerificationCode(const string& _verificationCode)
{
    m_verificationCode = _verificationCode;
    m_verificationCodeHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::VerificationCodeHasBeenSet() const
{
    return m_verificationCodeHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetCompanyIDType() const
{
    return m_companyIDType;
}

void CreateCRCompanyVerifyRequest::SetCompanyIDType(const string& _companyIDType)
{
    m_companyIDType = _companyIDType;
    m_companyIDTypeHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::CompanyIDTypeHasBeenSet() const
{
    return m_companyIDTypeHasBeenSet;
}

string CreateCRCompanyVerifyRequest::GetType() const
{
    return m_type;
}

void CreateCRCompanyVerifyRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCRCompanyVerifyRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


