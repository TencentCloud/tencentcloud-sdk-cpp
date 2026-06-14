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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseEnterprise3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyBizLicenseEnterprise3Request::VerifyBizLicenseEnterprise3Request() :
    m_creditCodeHasBeenSet(false),
    m_entNameHasBeenSet(false),
    m_lrNameHasBeenSet(false),
    m_verifyTypeHasBeenSet(false)
{
}

string VerifyBizLicenseEnterprise3Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_creditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_entNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entName.c_str(), allocator).Move(), allocator);
    }

    if (m_lrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LrName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lrName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyBizLicenseEnterprise3Request::GetCreditCode() const
{
    return m_creditCode;
}

void VerifyBizLicenseEnterprise3Request::SetCreditCode(const string& _creditCode)
{
    m_creditCode = _creditCode;
    m_creditCodeHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise3Request::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string VerifyBizLicenseEnterprise3Request::GetEntName() const
{
    return m_entName;
}

void VerifyBizLicenseEnterprise3Request::SetEntName(const string& _entName)
{
    m_entName = _entName;
    m_entNameHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise3Request::EntNameHasBeenSet() const
{
    return m_entNameHasBeenSet;
}

string VerifyBizLicenseEnterprise3Request::GetLrName() const
{
    return m_lrName;
}

void VerifyBizLicenseEnterprise3Request::SetLrName(const string& _lrName)
{
    m_lrName = _lrName;
    m_lrNameHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise3Request::LrNameHasBeenSet() const
{
    return m_lrNameHasBeenSet;
}

string VerifyBizLicenseEnterprise3Request::GetVerifyType() const
{
    return m_verifyType;
}

void VerifyBizLicenseEnterprise3Request::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise3Request::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}


