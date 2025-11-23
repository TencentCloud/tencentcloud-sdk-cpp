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

#include <tencentcloud/ctem/v20231128/model/CreateAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateAppRequest::CreateAppRequest() :
    m_customerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_developerHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false)
{
}

string CreateAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_developerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Developer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developer.c_str(), allocator).Move(), allocator);
    }

    if (m_serverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAppRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateAppRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateAppRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateAppRequest::GetName() const
{
    return m_name;
}

void CreateAppRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAppRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAppRequest::GetLogo() const
{
    return m_logo;
}

void CreateAppRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool CreateAppRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string CreateAppRequest::GetPlatform() const
{
    return m_platform;
}

void CreateAppRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateAppRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateAppRequest::GetAppVersion() const
{
    return m_appVersion;
}

void CreateAppRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool CreateAppRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string CreateAppRequest::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void CreateAppRequest::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool CreateAppRequest::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string CreateAppRequest::GetPackageName() const
{
    return m_packageName;
}

void CreateAppRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CreateAppRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string CreateAppRequest::GetDeveloper() const
{
    return m_developer;
}

void CreateAppRequest::SetDeveloper(const string& _developer)
{
    m_developer = _developer;
    m_developerHasBeenSet = true;
}

bool CreateAppRequest::DeveloperHasBeenSet() const
{
    return m_developerHasBeenSet;
}

string CreateAppRequest::GetServerUrl() const
{
    return m_serverUrl;
}

void CreateAppRequest::SetServerUrl(const string& _serverUrl)
{
    m_serverUrl = _serverUrl;
    m_serverUrlHasBeenSet = true;
}

bool CreateAppRequest::ServerUrlHasBeenSet() const
{
    return m_serverUrlHasBeenSet;
}

string CreateAppRequest::GetDescription() const
{
    return m_description;
}

void CreateAppRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAppRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAppRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateAppRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateAppRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}


