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

#include <tencentcloud/adp/v20260520/model/DocMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocMetadata::DocMetadata() :
    m_docCharCountHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_refFieldNameListHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DocMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocCharCount") && !value["DocCharCount"].IsNull())
    {
        if (!value["DocCharCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.DocCharCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docCharCount = string(value["DocCharCount"].GetString());
        m_docCharCountHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("RefFieldNameList") && !value["RefFieldNameList"].IsNull())
    {
        if (!value["RefFieldNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocMetadata.RefFieldNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["RefFieldNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_refFieldNameList.push_back((*itr).GetString());
        }
        m_refFieldNameListHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocMetadata.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docCharCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocCharCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docCharCount.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_refFieldNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefFieldNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_refFieldNameList.begin(); itr != m_refFieldNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

}


string DocMetadata::GetDocCharCount() const
{
    return m_docCharCount;
}

void DocMetadata::SetDocCharCount(const string& _docCharCount)
{
    m_docCharCount = _docCharCount;
    m_docCharCountHasBeenSet = true;
}

bool DocMetadata::DocCharCountHasBeenSet() const
{
    return m_docCharCountHasBeenSet;
}

string DocMetadata::GetFileName() const
{
    return m_fileName;
}

void DocMetadata::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DocMetadata::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DocMetadata::GetFileSize() const
{
    return m_fileSize;
}

void DocMetadata::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool DocMetadata::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string DocMetadata::GetFileType() const
{
    return m_fileType;
}

void DocMetadata::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DocMetadata::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

vector<string> DocMetadata::GetRefFieldNameList() const
{
    return m_refFieldNameList;
}

void DocMetadata::SetRefFieldNameList(const vector<string>& _refFieldNameList)
{
    m_refFieldNameList = _refFieldNameList;
    m_refFieldNameListHasBeenSet = true;
}

bool DocMetadata::RefFieldNameListHasBeenSet() const
{
    return m_refFieldNameListHasBeenSet;
}

string DocMetadata::GetSourceDesc() const
{
    return m_sourceDesc;
}

void DocMetadata::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool DocMetadata::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

int64_t DocMetadata::GetSourceType() const
{
    return m_sourceType;
}

void DocMetadata::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DocMetadata::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

