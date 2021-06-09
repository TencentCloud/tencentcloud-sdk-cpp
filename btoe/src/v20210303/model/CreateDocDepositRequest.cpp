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

#include <tencentcloud/btoe/v20210303/model/CreateDocDepositRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210303::Model;
using namespace std;

CreateDocDepositRequest::CreateDocDepositRequest() :
    m_evidenceNameHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_evidenceHashHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_hashTypeHasBeenSet(false),
    m_evidenceDescriptionHasBeenSet(false)
{
}

string CreateDocDepositRequest::ToJsonString() const
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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
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


string CreateDocDepositRequest::GetEvidenceName() const
{
    return m_evidenceName;
}

void CreateDocDepositRequest::SetEvidenceName(const string& _evidenceName)
{
    m_evidenceName = _evidenceName;
    m_evidenceNameHasBeenSet = true;
}

bool CreateDocDepositRequest::EvidenceNameHasBeenSet() const
{
    return m_evidenceNameHasBeenSet;
}

string CreateDocDepositRequest::GetFileName() const
{
    return m_fileName;
}

void CreateDocDepositRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateDocDepositRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateDocDepositRequest::GetEvidenceHash() const
{
    return m_evidenceHash;
}

void CreateDocDepositRequest::SetEvidenceHash(const string& _evidenceHash)
{
    m_evidenceHash = _evidenceHash;
    m_evidenceHashHasBeenSet = true;
}

bool CreateDocDepositRequest::EvidenceHashHasBeenSet() const
{
    return m_evidenceHashHasBeenSet;
}

string CreateDocDepositRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateDocDepositRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateDocDepositRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CreateDocDepositRequest::GetFileContent() const
{
    return m_fileContent;
}

void CreateDocDepositRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool CreateDocDepositRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string CreateDocDepositRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateDocDepositRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateDocDepositRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

uint64_t CreateDocDepositRequest::GetHashType() const
{
    return m_hashType;
}

void CreateDocDepositRequest::SetHashType(const uint64_t& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool CreateDocDepositRequest::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

string CreateDocDepositRequest::GetEvidenceDescription() const
{
    return m_evidenceDescription;
}

void CreateDocDepositRequest::SetEvidenceDescription(const string& _evidenceDescription)
{
    m_evidenceDescription = _evidenceDescription;
    m_evidenceDescriptionHasBeenSet = true;
}

bool CreateDocDepositRequest::EvidenceDescriptionHasBeenSet() const
{
    return m_evidenceDescriptionHasBeenSet;
}


