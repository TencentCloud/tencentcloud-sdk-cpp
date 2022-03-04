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

#include <tencentcloud/cpdp/v20190820/model/ApplyReconciliationFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyReconciliationFileRequest::ApplyReconciliationFileRequest() :
    m_applyFileTypeHasBeenSet(false),
    m_applyFileDateHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string ApplyReconciliationFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_applyFileDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyFileDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyFileDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyReconciliationFileRequest::GetApplyFileType() const
{
    return m_applyFileType;
}

void ApplyReconciliationFileRequest::SetApplyFileType(const string& _applyFileType)
{
    m_applyFileType = _applyFileType;
    m_applyFileTypeHasBeenSet = true;
}

bool ApplyReconciliationFileRequest::ApplyFileTypeHasBeenSet() const
{
    return m_applyFileTypeHasBeenSet;
}

string ApplyReconciliationFileRequest::GetApplyFileDate() const
{
    return m_applyFileDate;
}

void ApplyReconciliationFileRequest::SetApplyFileDate(const string& _applyFileDate)
{
    m_applyFileDate = _applyFileDate;
    m_applyFileDateHasBeenSet = true;
}

bool ApplyReconciliationFileRequest::ApplyFileDateHasBeenSet() const
{
    return m_applyFileDateHasBeenSet;
}

string ApplyReconciliationFileRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void ApplyReconciliationFileRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool ApplyReconciliationFileRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string ApplyReconciliationFileRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void ApplyReconciliationFileRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool ApplyReconciliationFileRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


