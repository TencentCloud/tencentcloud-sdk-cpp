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

#include <tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

UploadKnowledgeDocumentSetRsp::UploadKnowledgeDocumentSetRsp() :
    m_documentSetIdHasBeenSet(false),
    m_documentSetNameHasBeenSet(false),
    m_fileTitleHasBeenSet(false),
    m_fileMetaDataHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome UploadKnowledgeDocumentSetRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentSetId") && !value["DocumentSetId"].IsNull())
    {
        if (!value["DocumentSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadKnowledgeDocumentSetRsp.DocumentSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentSetId = string(value["DocumentSetId"].GetString());
        m_documentSetIdHasBeenSet = true;
    }

    if (value.HasMember("DocumentSetName") && !value["DocumentSetName"].IsNull())
    {
        if (!value["DocumentSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadKnowledgeDocumentSetRsp.DocumentSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentSetName = string(value["DocumentSetName"].GetString());
        m_documentSetNameHasBeenSet = true;
    }

    if (value.HasMember("FileTitle") && !value["FileTitle"].IsNull())
    {
        if (!value["FileTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadKnowledgeDocumentSetRsp.FileTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTitle = string(value["FileTitle"].GetString());
        m_fileTitleHasBeenSet = true;
    }

    if (value.HasMember("FileMetaData") && !value["FileMetaData"].IsNull())
    {
        if (!value["FileMetaData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadKnowledgeDocumentSetRsp.FileMetaData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMetaData = string(value["FileMetaData"].GetString());
        m_fileMetaDataHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadKnowledgeDocumentSetRsp.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadKnowledgeDocumentSetRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_documentSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMetaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMetaData.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string UploadKnowledgeDocumentSetRsp::GetDocumentSetId() const
{
    return m_documentSetId;
}

void UploadKnowledgeDocumentSetRsp::SetDocumentSetId(const string& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRsp::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}

string UploadKnowledgeDocumentSetRsp::GetDocumentSetName() const
{
    return m_documentSetName;
}

void UploadKnowledgeDocumentSetRsp::SetDocumentSetName(const string& _documentSetName)
{
    m_documentSetName = _documentSetName;
    m_documentSetNameHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRsp::DocumentSetNameHasBeenSet() const
{
    return m_documentSetNameHasBeenSet;
}

string UploadKnowledgeDocumentSetRsp::GetFileTitle() const
{
    return m_fileTitle;
}

void UploadKnowledgeDocumentSetRsp::SetFileTitle(const string& _fileTitle)
{
    m_fileTitle = _fileTitle;
    m_fileTitleHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRsp::FileTitleHasBeenSet() const
{
    return m_fileTitleHasBeenSet;
}

string UploadKnowledgeDocumentSetRsp::GetFileMetaData() const
{
    return m_fileMetaData;
}

void UploadKnowledgeDocumentSetRsp::SetFileMetaData(const string& _fileMetaData)
{
    m_fileMetaData = _fileMetaData;
    m_fileMetaDataHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRsp::FileMetaDataHasBeenSet() const
{
    return m_fileMetaDataHasBeenSet;
}

string UploadKnowledgeDocumentSetRsp::GetFileId() const
{
    return m_fileId;
}

void UploadKnowledgeDocumentSetRsp::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool UploadKnowledgeDocumentSetRsp::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

