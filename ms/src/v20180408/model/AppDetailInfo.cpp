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

#include <tencentcloud/ms/v20180408/model/AppDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppDetailInfo::AppDetailInfo() :
    m_appNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_appMd5HasBeenSet(false),
    m_appIconUrlHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

CoreInternalOutcome AppDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetUint64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppIconUrl") && !value["AppIconUrl"].IsNull())
    {
        if (!value["AppIconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.AppIconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIconUrl = string(value["AppIconUrl"].GetString());
        m_appIconUrlHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
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

    if (m_appSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appSize, allocator);
    }

    if (m_appMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_appIconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

}


string AppDetailInfo::GetAppName() const
{
    return m_appName;
}

void AppDetailInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppDetailInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AppDetailInfo::GetAppPkgName() const
{
    return m_appPkgName;
}

void AppDetailInfo::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AppDetailInfo::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AppDetailInfo::GetAppVersion() const
{
    return m_appVersion;
}

void AppDetailInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppDetailInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

uint64_t AppDetailInfo::GetAppSize() const
{
    return m_appSize;
}

void AppDetailInfo::SetAppSize(const uint64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AppDetailInfo::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

string AppDetailInfo::GetAppMd5() const
{
    return m_appMd5;
}

void AppDetailInfo::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AppDetailInfo::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

string AppDetailInfo::GetAppIconUrl() const
{
    return m_appIconUrl;
}

void AppDetailInfo::SetAppIconUrl(const string& _appIconUrl)
{
    m_appIconUrl = _appIconUrl;
    m_appIconUrlHasBeenSet = true;
}

bool AppDetailInfo::AppIconUrlHasBeenSet() const
{
    return m_appIconUrlHasBeenSet;
}

string AppDetailInfo::GetFileName() const
{
    return m_fileName;
}

void AppDetailInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AppDetailInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

