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

#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceBackupFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

DeleteAndroidInstanceBackupFilesRequest::DeleteAndroidInstanceBackupFilesRequest() :
    m_objectKeysHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_cOSOptionsHasBeenSet(false),
    m_s3OptionsHasBeenSet(false),
    m_androidInstanceZoneHasBeenSet(false)
{
}

string DeleteAndroidInstanceBackupFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_objectKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_objectKeys.begin(); itr != m_objectKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_s3OptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3Options";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3Options.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_androidInstanceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteAndroidInstanceBackupFilesRequest::GetObjectKeys() const
{
    return m_objectKeys;
}

void DeleteAndroidInstanceBackupFilesRequest::SetObjectKeys(const vector<string>& _objectKeys)
{
    m_objectKeys = _objectKeys;
    m_objectKeysHasBeenSet = true;
}

bool DeleteAndroidInstanceBackupFilesRequest::ObjectKeysHasBeenSet() const
{
    return m_objectKeysHasBeenSet;
}

string DeleteAndroidInstanceBackupFilesRequest::GetStorageType() const
{
    return m_storageType;
}

void DeleteAndroidInstanceBackupFilesRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool DeleteAndroidInstanceBackupFilesRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

COSOptions DeleteAndroidInstanceBackupFilesRequest::GetCOSOptions() const
{
    return m_cOSOptions;
}

void DeleteAndroidInstanceBackupFilesRequest::SetCOSOptions(const COSOptions& _cOSOptions)
{
    m_cOSOptions = _cOSOptions;
    m_cOSOptionsHasBeenSet = true;
}

bool DeleteAndroidInstanceBackupFilesRequest::COSOptionsHasBeenSet() const
{
    return m_cOSOptionsHasBeenSet;
}

S3Options DeleteAndroidInstanceBackupFilesRequest::GetS3Options() const
{
    return m_s3Options;
}

void DeleteAndroidInstanceBackupFilesRequest::SetS3Options(const S3Options& _s3Options)
{
    m_s3Options = _s3Options;
    m_s3OptionsHasBeenSet = true;
}

bool DeleteAndroidInstanceBackupFilesRequest::S3OptionsHasBeenSet() const
{
    return m_s3OptionsHasBeenSet;
}

string DeleteAndroidInstanceBackupFilesRequest::GetAndroidInstanceZone() const
{
    return m_androidInstanceZone;
}

void DeleteAndroidInstanceBackupFilesRequest::SetAndroidInstanceZone(const string& _androidInstanceZone)
{
    m_androidInstanceZone = _androidInstanceZone;
    m_androidInstanceZoneHasBeenSet = true;
}

bool DeleteAndroidInstanceBackupFilesRequest::AndroidInstanceZoneHasBeenSet() const
{
    return m_androidInstanceZoneHasBeenSet;
}


