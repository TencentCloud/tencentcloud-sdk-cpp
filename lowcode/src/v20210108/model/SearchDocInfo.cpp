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

#include <tencentcloud/lowcode/v20210108/model/SearchDocInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

SearchDocInfo::SearchDocInfo() :
    m_collectionViewNameHasBeenSet(false),
    m_docSetIdHasBeenSet(false),
    m_docSetNameHasBeenSet(false),
    m_docTypeHasBeenSet(false),
    m_fileTitleHasBeenSet(false),
    m_fileMetaDataHasBeenSet(false),
    m_docDescHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome SearchDocInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CollectionViewName") && !value["CollectionViewName"].IsNull())
    {
        if (!value["CollectionViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.CollectionViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectionViewName = string(value["CollectionViewName"].GetString());
        m_collectionViewNameHasBeenSet = true;
    }

    if (value.HasMember("DocSetId") && !value["DocSetId"].IsNull())
    {
        if (!value["DocSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.DocSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docSetId = string(value["DocSetId"].GetString());
        m_docSetIdHasBeenSet = true;
    }

    if (value.HasMember("DocSetName") && !value["DocSetName"].IsNull())
    {
        if (!value["DocSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.DocSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docSetName = string(value["DocSetName"].GetString());
        m_docSetNameHasBeenSet = true;
    }

    if (value.HasMember("DocType") && !value["DocType"].IsNull())
    {
        if (!value["DocType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.DocType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docType = string(value["DocType"].GetString());
        m_docTypeHasBeenSet = true;
    }

    if (value.HasMember("FileTitle") && !value["FileTitle"].IsNull())
    {
        if (!value["FileTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.FileTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTitle = string(value["FileTitle"].GetString());
        m_fileTitleHasBeenSet = true;
    }

    if (value.HasMember("FileMetaData") && !value["FileMetaData"].IsNull())
    {
        if (!value["FileMetaData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.FileMetaData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMetaData = string(value["FileMetaData"].GetString());
        m_fileMetaDataHasBeenSet = true;
    }

    if (value.HasMember("DocDesc") && !value["DocDesc"].IsNull())
    {
        if (!value["DocDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.DocDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docDesc = string(value["DocDesc"].GetString());
        m_docDescHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchDocInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_collectionViewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectionViewName.c_str(), allocator).Move(), allocator);
    }

    if (m_docSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_docSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_docTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docType.c_str(), allocator).Move(), allocator);
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

    if (m_docDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string SearchDocInfo::GetCollectionViewName() const
{
    return m_collectionViewName;
}

void SearchDocInfo::SetCollectionViewName(const string& _collectionViewName)
{
    m_collectionViewName = _collectionViewName;
    m_collectionViewNameHasBeenSet = true;
}

bool SearchDocInfo::CollectionViewNameHasBeenSet() const
{
    return m_collectionViewNameHasBeenSet;
}

string SearchDocInfo::GetDocSetId() const
{
    return m_docSetId;
}

void SearchDocInfo::SetDocSetId(const string& _docSetId)
{
    m_docSetId = _docSetId;
    m_docSetIdHasBeenSet = true;
}

bool SearchDocInfo::DocSetIdHasBeenSet() const
{
    return m_docSetIdHasBeenSet;
}

string SearchDocInfo::GetDocSetName() const
{
    return m_docSetName;
}

void SearchDocInfo::SetDocSetName(const string& _docSetName)
{
    m_docSetName = _docSetName;
    m_docSetNameHasBeenSet = true;
}

bool SearchDocInfo::DocSetNameHasBeenSet() const
{
    return m_docSetNameHasBeenSet;
}

string SearchDocInfo::GetDocType() const
{
    return m_docType;
}

void SearchDocInfo::SetDocType(const string& _docType)
{
    m_docType = _docType;
    m_docTypeHasBeenSet = true;
}

bool SearchDocInfo::DocTypeHasBeenSet() const
{
    return m_docTypeHasBeenSet;
}

string SearchDocInfo::GetFileTitle() const
{
    return m_fileTitle;
}

void SearchDocInfo::SetFileTitle(const string& _fileTitle)
{
    m_fileTitle = _fileTitle;
    m_fileTitleHasBeenSet = true;
}

bool SearchDocInfo::FileTitleHasBeenSet() const
{
    return m_fileTitleHasBeenSet;
}

string SearchDocInfo::GetFileMetaData() const
{
    return m_fileMetaData;
}

void SearchDocInfo::SetFileMetaData(const string& _fileMetaData)
{
    m_fileMetaData = _fileMetaData;
    m_fileMetaDataHasBeenSet = true;
}

bool SearchDocInfo::FileMetaDataHasBeenSet() const
{
    return m_fileMetaDataHasBeenSet;
}

string SearchDocInfo::GetDocDesc() const
{
    return m_docDesc;
}

void SearchDocInfo::SetDocDesc(const string& _docDesc)
{
    m_docDesc = _docDesc;
    m_docDescHasBeenSet = true;
}

bool SearchDocInfo::DocDescHasBeenSet() const
{
    return m_docDescHasBeenSet;
}

uint64_t SearchDocInfo::GetFileSize() const
{
    return m_fileSize;
}

void SearchDocInfo::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool SearchDocInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string SearchDocInfo::GetFileId() const
{
    return m_fileId;
}

void SearchDocInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool SearchDocInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

