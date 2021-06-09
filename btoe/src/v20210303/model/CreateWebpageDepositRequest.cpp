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

#include <tencentcloud/btoe/v20210303/model/CreateWebpageDepositRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210303::Model;
using namespace std;

CreateWebpageDepositRequest::CreateWebpageDepositRequest() :
    m_evidenceNameHasBeenSet(false),
    m_evidenceUrlHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_hashTypeHasBeenSet(false),
    m_evidenceDescriptionHasBeenSet(false)
{
}

string CreateWebpageDepositRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceUrl.c_str(), allocator).Move(), allocator);
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


string CreateWebpageDepositRequest::GetEvidenceName() const
{
    return m_evidenceName;
}

void CreateWebpageDepositRequest::SetEvidenceName(const string& _evidenceName)
{
    m_evidenceName = _evidenceName;
    m_evidenceNameHasBeenSet = true;
}

bool CreateWebpageDepositRequest::EvidenceNameHasBeenSet() const
{
    return m_evidenceNameHasBeenSet;
}

string CreateWebpageDepositRequest::GetEvidenceUrl() const
{
    return m_evidenceUrl;
}

void CreateWebpageDepositRequest::SetEvidenceUrl(const string& _evidenceUrl)
{
    m_evidenceUrl = _evidenceUrl;
    m_evidenceUrlHasBeenSet = true;
}

bool CreateWebpageDepositRequest::EvidenceUrlHasBeenSet() const
{
    return m_evidenceUrlHasBeenSet;
}

string CreateWebpageDepositRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateWebpageDepositRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateWebpageDepositRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t CreateWebpageDepositRequest::GetHashType() const
{
    return m_hashType;
}

void CreateWebpageDepositRequest::SetHashType(const uint64_t& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool CreateWebpageDepositRequest::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

string CreateWebpageDepositRequest::GetEvidenceDescription() const
{
    return m_evidenceDescription;
}

void CreateWebpageDepositRequest::SetEvidenceDescription(const string& _evidenceDescription)
{
    m_evidenceDescription = _evidenceDescription;
    m_evidenceDescriptionHasBeenSet = true;
}

bool CreateWebpageDepositRequest::EvidenceDescriptionHasBeenSet() const
{
    return m_evidenceDescriptionHasBeenSet;
}


