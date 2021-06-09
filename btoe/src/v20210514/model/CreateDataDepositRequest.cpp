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

#include <tencentcloud/btoe/v20210514/model/CreateDataDepositRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

CreateDataDepositRequest::CreateDataDepositRequest() :
    m_evidenceInfoHasBeenSet(false),
    m_evidenceNameHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_hashTypeHasBeenSet(false),
    m_evidenceDescriptionHasBeenSet(false)
{
}

string CreateDataDepositRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_hashTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HashType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hashType, allocator);
    }

    if (m_evidenceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataDepositRequest::GetEvidenceInfo() const
{
    return m_evidenceInfo;
}

void CreateDataDepositRequest::SetEvidenceInfo(const string& _evidenceInfo)
{
    m_evidenceInfo = _evidenceInfo;
    m_evidenceInfoHasBeenSet = true;
}

bool CreateDataDepositRequest::EvidenceInfoHasBeenSet() const
{
    return m_evidenceInfoHasBeenSet;
}

string CreateDataDepositRequest::GetEvidenceName() const
{
    return m_evidenceName;
}

void CreateDataDepositRequest::SetEvidenceName(const string& _evidenceName)
{
    m_evidenceName = _evidenceName;
    m_evidenceNameHasBeenSet = true;
}

bool CreateDataDepositRequest::EvidenceNameHasBeenSet() const
{
    return m_evidenceNameHasBeenSet;
}

string CreateDataDepositRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateDataDepositRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateDataDepositRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t CreateDataDepositRequest::GetHashType() const
{
    return m_hashType;
}

void CreateDataDepositRequest::SetHashType(const uint64_t& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool CreateDataDepositRequest::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

string CreateDataDepositRequest::GetEvidenceDescription() const
{
    return m_evidenceDescription;
}

void CreateDataDepositRequest::SetEvidenceDescription(const string& _evidenceDescription)
{
    m_evidenceDescription = _evidenceDescription;
    m_evidenceDescriptionHasBeenSet = true;
}

bool CreateDataDepositRequest::EvidenceDescriptionHasBeenSet() const
{
    return m_evidenceDescriptionHasBeenSet;
}


