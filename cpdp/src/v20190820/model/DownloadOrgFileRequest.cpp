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

#include <tencentcloud/cpdp/v20190820/model/DownloadOrgFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DownloadOrgFileRequest::DownloadOrgFileRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DownloadOrgFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storage.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DownloadOrgFileRequest::GetOpenId() const
{
    return m_openId;
}

void DownloadOrgFileRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DownloadOrgFileRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DownloadOrgFileRequest::GetOpenKey() const
{
    return m_openKey;
}

void DownloadOrgFileRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DownloadOrgFileRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DownloadOrgFileRequest::GetStorage() const
{
    return m_storage;
}

void DownloadOrgFileRequest::SetStorage(const string& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DownloadOrgFileRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DownloadOrgFileRequest::GetFilePath() const
{
    return m_filePath;
}

void DownloadOrgFileRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool DownloadOrgFileRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string DownloadOrgFileRequest::GetProfile() const
{
    return m_profile;
}

void DownloadOrgFileRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DownloadOrgFileRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


