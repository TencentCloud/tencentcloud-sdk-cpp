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

#include <tencentcloud/ms/v20180408/model/AppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppInfo::AppInfo() :
    m_appUrlHasBeenSet(false),
    m_appMd5HasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appIconUrlHasBeenSet(false),
    m_appNameHasBeenSet(false)
{
}

CoreInternalOutcome AppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetUint64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppIconUrl") && !value["AppIconUrl"].IsNull())
    {
        if (!value["AppIconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppIconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIconUrl = string(value["AppIconUrl"].GetString());
        m_appIconUrlHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_appSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appSize, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appIconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

}


string AppInfo::GetAppUrl() const
{
    return m_appUrl;
}

void AppInfo::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool AppInfo::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

string AppInfo::GetAppMd5() const
{
    return m_appMd5;
}

void AppInfo::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AppInfo::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

uint64_t AppInfo::GetAppSize() const
{
    return m_appSize;
}

void AppInfo::SetAppSize(const uint64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AppInfo::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

string AppInfo::GetFileName() const
{
    return m_fileName;
}

void AppInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AppInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AppInfo::GetAppPkgName() const
{
    return m_appPkgName;
}

void AppInfo::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AppInfo::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AppInfo::GetAppVersion() const
{
    return m_appVersion;
}

void AppInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AppInfo::GetAppIconUrl() const
{
    return m_appIconUrl;
}

void AppInfo::SetAppIconUrl(const string& _appIconUrl)
{
    m_appIconUrl = _appIconUrl;
    m_appIconUrlHasBeenSet = true;
}

bool AppInfo::AppIconUrlHasBeenSet() const
{
    return m_appIconUrlHasBeenSet;
}

string AppInfo::GetAppName() const
{
    return m_appName;
}

void AppInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

