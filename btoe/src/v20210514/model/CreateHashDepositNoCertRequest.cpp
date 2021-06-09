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

#include <tencentcloud/btoe/v20210514/model/CreateHashDepositNoCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

CreateHashDepositNoCertRequest::CreateHashDepositNoCertRequest() :
    m_evidenceHashHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_evidenceInfoHasBeenSet(false)
{
}

string CreateHashDepositNoCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceHash.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHashDepositNoCertRequest::GetEvidenceHash() const
{
    return m_evidenceHash;
}

void CreateHashDepositNoCertRequest::SetEvidenceHash(const string& _evidenceHash)
{
    m_evidenceHash = _evidenceHash;
    m_evidenceHashHasBeenSet = true;
}

bool CreateHashDepositNoCertRequest::EvidenceHashHasBeenSet() const
{
    return m_evidenceHashHasBeenSet;
}

string CreateHashDepositNoCertRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateHashDepositNoCertRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateHashDepositNoCertRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CreateHashDepositNoCertRequest::GetEvidenceInfo() const
{
    return m_evidenceInfo;
}

void CreateHashDepositNoCertRequest::SetEvidenceInfo(const string& _evidenceInfo)
{
    m_evidenceInfo = _evidenceInfo;
    m_evidenceInfoHasBeenSet = true;
}

bool CreateHashDepositNoCertRequest::EvidenceInfoHasBeenSet() const
{
    return m_evidenceInfoHasBeenSet;
}


