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

#include <tencentcloud/vod/v20180717/model/FileContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileContent::FileContent() :
    m_keyHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_subtitleIDHasBeenSet(false)
{
}

CoreInternalOutcome FileContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.LastModified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = string(value["LastModified"].GetString());
        m_lastModifiedHasBeenSet = true;
    }

    if (value.HasMember("ETag") && !value["ETag"].IsNull())
    {
        if (!value["ETag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.ETag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eTag = string(value["ETag"].GetString());
        m_eTagHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("StorageClass") && !value["StorageClass"].IsNull())
    {
        if (!value["StorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.StorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageClass = string(value["StorageClass"].GetString());
        m_storageClassHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("SubtitleID") && !value["SubtitleID"].IsNull())
    {
        if (!value["SubtitleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent.SubtitleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleID = string(value["SubtitleID"].GetString());
        m_subtitleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModified.c_str(), allocator).Move(), allocator);
    }

    if (m_eTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ETag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eTag.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_storageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_subtitleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleID.c_str(), allocator).Move(), allocator);
    }

}


string FileContent::GetKey() const
{
    return m_key;
}

void FileContent::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool FileContent::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string FileContent::GetLastModified() const
{
    return m_lastModified;
}

void FileContent::SetLastModified(const string& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool FileContent::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

string FileContent::GetETag() const
{
    return m_eTag;
}

void FileContent::SetETag(const string& _eTag)
{
    m_eTag = _eTag;
    m_eTagHasBeenSet = true;
}

bool FileContent::ETagHasBeenSet() const
{
    return m_eTagHasBeenSet;
}

int64_t FileContent::GetSize() const
{
    return m_size;
}

void FileContent::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool FileContent::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string FileContent::GetStorageClass() const
{
    return m_storageClass;
}

void FileContent::SetStorageClass(const string& _storageClass)
{
    m_storageClass = _storageClass;
    m_storageClassHasBeenSet = true;
}

bool FileContent::StorageClassHasBeenSet() const
{
    return m_storageClassHasBeenSet;
}

string FileContent::GetFileId() const
{
    return m_fileId;
}

void FileContent::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileContent::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FileContent::GetCategory() const
{
    return m_category;
}

void FileContent::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool FileContent::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string FileContent::GetFileType() const
{
    return m_fileType;
}

void FileContent::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileContent::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t FileContent::GetDefinition() const
{
    return m_definition;
}

void FileContent::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool FileContent::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string FileContent::GetSubtitleID() const
{
    return m_subtitleID;
}

void FileContent::SetSubtitleID(const string& _subtitleID)
{
    m_subtitleID = _subtitleID;
    m_subtitleIDHasBeenSet = true;
}

bool FileContent::SubtitleIDHasBeenSet() const
{
    return m_subtitleIDHasBeenSet;
}

