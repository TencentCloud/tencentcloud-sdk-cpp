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

#include <tencentcloud/databuddy/v20260715/model/FileStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileStorage::FileStorage() :
    m_storageTypeHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome FileStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileStorage.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StoragePath") && !value["StoragePath"].IsNull())
    {
        if (!value["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileStorage.StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(value["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileStorage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_storagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


int64_t FileStorage::GetStorageType() const
{
    return m_storageType;
}

void FileStorage::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool FileStorage::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string FileStorage::GetStoragePath() const
{
    return m_storagePath;
}

void FileStorage::SetStoragePath(const string& _storagePath)
{
    m_storagePath = _storagePath;
    m_storagePathHasBeenSet = true;
}

bool FileStorage::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

string FileStorage::GetContent() const
{
    return m_content;
}

void FileStorage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool FileStorage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

