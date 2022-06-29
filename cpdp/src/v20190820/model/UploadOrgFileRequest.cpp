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

#include <tencentcloud/cpdp/v20190820/model/UploadOrgFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadOrgFileRequest::UploadOrgFileRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileExtensionHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string UploadOrgFileRequest::ToJsonString() const
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

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileExtension.c_str(), allocator).Move(), allocator);
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


string UploadOrgFileRequest::GetOpenId() const
{
    return m_openId;
}

void UploadOrgFileRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool UploadOrgFileRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string UploadOrgFileRequest::GetOpenKey() const
{
    return m_openKey;
}

void UploadOrgFileRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool UploadOrgFileRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string UploadOrgFileRequest::GetStorage() const
{
    return m_storage;
}

void UploadOrgFileRequest::SetStorage(const string& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UploadOrgFileRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string UploadOrgFileRequest::GetFileMd5() const
{
    return m_fileMd5;
}

void UploadOrgFileRequest::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool UploadOrgFileRequest::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string UploadOrgFileRequest::GetFileContent() const
{
    return m_fileContent;
}

void UploadOrgFileRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool UploadOrgFileRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string UploadOrgFileRequest::GetFileExtension() const
{
    return m_fileExtension;
}

void UploadOrgFileRequest::SetFileExtension(const string& _fileExtension)
{
    m_fileExtension = _fileExtension;
    m_fileExtensionHasBeenSet = true;
}

bool UploadOrgFileRequest::FileExtensionHasBeenSet() const
{
    return m_fileExtensionHasBeenSet;
}

string UploadOrgFileRequest::GetProfile() const
{
    return m_profile;
}

void UploadOrgFileRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool UploadOrgFileRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


