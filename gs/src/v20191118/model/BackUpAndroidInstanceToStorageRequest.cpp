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

#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceToStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

BackUpAndroidInstanceToStorageRequest::BackUpAndroidInstanceToStorageRequest() :
    m_androidInstanceIdHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_includesHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_cOSOptionsHasBeenSet(false),
    m_s3OptionsHasBeenSet(false)
{
}

string BackUpAndroidInstanceToStorageRequest::ToJsonString() const
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

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectKey.c_str(), allocator).Move(), allocator);
    }

    if (m_includesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Includes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includes.begin(); itr != m_includes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Excludes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludes.begin(); itr != m_excludes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string BackUpAndroidInstanceToStorageRequest::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void BackUpAndroidInstanceToStorageRequest::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string BackUpAndroidInstanceToStorageRequest::GetStorageType() const
{
    return m_storageType;
}

void BackUpAndroidInstanceToStorageRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string BackUpAndroidInstanceToStorageRequest::GetObjectKey() const
{
    return m_objectKey;
}

void BackUpAndroidInstanceToStorageRequest::SetObjectKey(const string& _objectKey)
{
    m_objectKey = _objectKey;
    m_objectKeyHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::ObjectKeyHasBeenSet() const
{
    return m_objectKeyHasBeenSet;
}

vector<string> BackUpAndroidInstanceToStorageRequest::GetIncludes() const
{
    return m_includes;
}

void BackUpAndroidInstanceToStorageRequest::SetIncludes(const vector<string>& _includes)
{
    m_includes = _includes;
    m_includesHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::IncludesHasBeenSet() const
{
    return m_includesHasBeenSet;
}

vector<string> BackUpAndroidInstanceToStorageRequest::GetExcludes() const
{
    return m_excludes;
}

void BackUpAndroidInstanceToStorageRequest::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}

COSOptions BackUpAndroidInstanceToStorageRequest::GetCOSOptions() const
{
    return m_cOSOptions;
}

void BackUpAndroidInstanceToStorageRequest::SetCOSOptions(const COSOptions& _cOSOptions)
{
    m_cOSOptions = _cOSOptions;
    m_cOSOptionsHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::COSOptionsHasBeenSet() const
{
    return m_cOSOptionsHasBeenSet;
}

S3Options BackUpAndroidInstanceToStorageRequest::GetS3Options() const
{
    return m_s3Options;
}

void BackUpAndroidInstanceToStorageRequest::SetS3Options(const S3Options& _s3Options)
{
    m_s3Options = _s3Options;
    m_s3OptionsHasBeenSet = true;
}

bool BackUpAndroidInstanceToStorageRequest::S3OptionsHasBeenSet() const
{
    return m_s3OptionsHasBeenSet;
}


