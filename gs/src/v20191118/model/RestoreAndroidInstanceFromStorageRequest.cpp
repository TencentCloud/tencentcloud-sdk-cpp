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

#include <tencentcloud/gs/v20191118/model/RestoreAndroidInstanceFromStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

RestoreAndroidInstanceFromStorageRequest::RestoreAndroidInstanceFromStorageRequest() :
    m_androidInstanceIdHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_cOSOptionsHasBeenSet(false),
    m_s3OptionsHasBeenSet(false)
{
}

string RestoreAndroidInstanceFromStorageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectKey.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestoreAndroidInstanceFromStorageRequest::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void RestoreAndroidInstanceFromStorageRequest::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool RestoreAndroidInstanceFromStorageRequest::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string RestoreAndroidInstanceFromStorageRequest::GetObjectKey() const
{
    return m_objectKey;
}

void RestoreAndroidInstanceFromStorageRequest::SetObjectKey(const string& _objectKey)
{
    m_objectKey = _objectKey;
    m_objectKeyHasBeenSet = true;
}

bool RestoreAndroidInstanceFromStorageRequest::ObjectKeyHasBeenSet() const
{
    return m_objectKeyHasBeenSet;
}

string RestoreAndroidInstanceFromStorageRequest::GetStorageType() const
{
    return m_storageType;
}

void RestoreAndroidInstanceFromStorageRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool RestoreAndroidInstanceFromStorageRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

COSOptions RestoreAndroidInstanceFromStorageRequest::GetCOSOptions() const
{
    return m_cOSOptions;
}

void RestoreAndroidInstanceFromStorageRequest::SetCOSOptions(const COSOptions& _cOSOptions)
{
    m_cOSOptions = _cOSOptions;
    m_cOSOptionsHasBeenSet = true;
}

bool RestoreAndroidInstanceFromStorageRequest::COSOptionsHasBeenSet() const
{
    return m_cOSOptionsHasBeenSet;
}

S3Options RestoreAndroidInstanceFromStorageRequest::GetS3Options() const
{
    return m_s3Options;
}

void RestoreAndroidInstanceFromStorageRequest::SetS3Options(const S3Options& _s3Options)
{
    m_s3Options = _s3Options;
    m_s3OptionsHasBeenSet = true;
}

bool RestoreAndroidInstanceFromStorageRequest::S3OptionsHasBeenSet() const
{
    return m_s3OptionsHasBeenSet;
}


