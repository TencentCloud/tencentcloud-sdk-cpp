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

#include <tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

UploadKnowledgeDocumentSetRequest::UploadKnowledgeDocumentSetRequest() :
    m_envIdHasBeenSet(false),
    m_collectionViewHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_documentDescHasBeenSet(false),
    m_fileTitleHasBeenSet(false),
    m_fileMetaDataHasBeenSet(false),
    m_documentSetIdHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

string UploadKnowledgeDocumentSetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionView";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collectionView.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentType.c_str(), allocator).Move(), allocator);
    }

    if (m_documentDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMetaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMetaData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMetaData.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadKnowledgeDocumentSetRequest::GetEnvId() const
{
    return m_envId;
}

void UploadKnowledgeDocumentSetRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetCollectionView() const
{
    return m_collectionView;
}

void UploadKnowledgeDocumentSetRequest::SetCollectionView(const string& _collectionView)
{
    m_collectionView = _collectionView;
    m_collectionViewHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::CollectionViewHasBeenSet() const
{
    return m_collectionViewHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetFileName() const
{
    return m_fileName;
}

void UploadKnowledgeDocumentSetRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetCosUrl() const
{
    return m_cosUrl;
}

void UploadKnowledgeDocumentSetRequest::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetDocumentType() const
{
    return m_documentType;
}

void UploadKnowledgeDocumentSetRequest::SetDocumentType(const string& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetDocumentDesc() const
{
    return m_documentDesc;
}

void UploadKnowledgeDocumentSetRequest::SetDocumentDesc(const string& _documentDesc)
{
    m_documentDesc = _documentDesc;
    m_documentDescHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::DocumentDescHasBeenSet() const
{
    return m_documentDescHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetFileTitle() const
{
    return m_fileTitle;
}

void UploadKnowledgeDocumentSetRequest::SetFileTitle(const string& _fileTitle)
{
    m_fileTitle = _fileTitle;
    m_fileTitleHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::FileTitleHasBeenSet() const
{
    return m_fileTitleHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetFileMetaData() const
{
    return m_fileMetaData;
}

void UploadKnowledgeDocumentSetRequest::SetFileMetaData(const string& _fileMetaData)
{
    m_fileMetaData = _fileMetaData;
    m_fileMetaDataHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::FileMetaDataHasBeenSet() const
{
    return m_fileMetaDataHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetDocumentSetId() const
{
    return m_documentSetId;
}

void UploadKnowledgeDocumentSetRequest::SetDocumentSetId(const string& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetDelimiter() const
{
    return m_delimiter;
}

void UploadKnowledgeDocumentSetRequest::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string UploadKnowledgeDocumentSetRequest::GetFileId() const
{
    return m_fileId;
}

void UploadKnowledgeDocumentSetRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}


