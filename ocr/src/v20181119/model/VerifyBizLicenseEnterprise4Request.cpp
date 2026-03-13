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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseEnterprise4Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyBizLicenseEnterprise4Request::VerifyBizLicenseEnterprise4Request() :
    m_creditCodeHasBeenSet(false),
    m_entNameHasBeenSet(false),
    m_lrNameHasBeenSet(false),
    m_idNumHasBeenSet(false)
{
}

string VerifyBizLicenseEnterprise4Request::ToJsonString() const
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

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyBizLicenseEnterprise4Request::GetCreditCode() const
{
    return m_creditCode;
}

void VerifyBizLicenseEnterprise4Request::SetCreditCode(const string& _creditCode)
{
    m_creditCode = _creditCode;
    m_creditCodeHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise4Request::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string VerifyBizLicenseEnterprise4Request::GetEntName() const
{
    return m_entName;
}

void VerifyBizLicenseEnterprise4Request::SetEntName(const string& _entName)
{
    m_entName = _entName;
    m_entNameHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise4Request::EntNameHasBeenSet() const
{
    return m_entNameHasBeenSet;
}

string VerifyBizLicenseEnterprise4Request::GetLrName() const
{
    return m_lrName;
}

void VerifyBizLicenseEnterprise4Request::SetLrName(const string& _lrName)
{
    m_lrName = _lrName;
    m_lrNameHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise4Request::LrNameHasBeenSet() const
{
    return m_lrNameHasBeenSet;
}

string VerifyBizLicenseEnterprise4Request::GetIdNum() const
{
    return m_idNum;
}

void VerifyBizLicenseEnterprise4Request::SetIdNum(const string& _idNum)
{
    m_idNum = _idNum;
    m_idNumHasBeenSet = true;
}

bool VerifyBizLicenseEnterprise4Request::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}


