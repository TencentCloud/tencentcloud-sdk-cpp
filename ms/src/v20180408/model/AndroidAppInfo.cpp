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

#include <tencentcloud/ms/v20180408/model/AndroidAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AndroidAppInfo::AndroidAppInfo() :
    m_appMd5HasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_appUrlHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appFileNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appTypeHasBeenSet(false)
{
}

CoreInternalOutcome AndroidAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetInt64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppFileName") && !value["AppFileName"].IsNull())
    {
        if (!value["AppFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appFileName = string(value["AppFileName"].GetString());
        m_appFileNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppInfo.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

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

    if (m_appFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

}


string AndroidAppInfo::GetAppMd5() const
{
    return m_appMd5;
}

void AndroidAppInfo::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AndroidAppInfo::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

int64_t AndroidAppInfo::GetAppSize() const
{
    return m_appSize;
}

void AndroidAppInfo::SetAppSize(const int64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AndroidAppInfo::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

string AndroidAppInfo::GetAppUrl() const
{
    return m_appUrl;
}

void AndroidAppInfo::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool AndroidAppInfo::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

string AndroidAppInfo::GetAppName() const
{
    return m_appName;
}

void AndroidAppInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AndroidAppInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AndroidAppInfo::GetAppPkgName() const
{
    return m_appPkgName;
}

void AndroidAppInfo::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AndroidAppInfo::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AndroidAppInfo::GetAppFileName() const
{
    return m_appFileName;
}

void AndroidAppInfo::SetAppFileName(const string& _appFileName)
{
    m_appFileName = _appFileName;
    m_appFileNameHasBeenSet = true;
}

bool AndroidAppInfo::AppFileNameHasBeenSet() const
{
    return m_appFileNameHasBeenSet;
}

string AndroidAppInfo::GetAppVersion() const
{
    return m_appVersion;
}

void AndroidAppInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AndroidAppInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AndroidAppInfo::GetAppType() const
{
    return m_appType;
}

void AndroidAppInfo::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool AndroidAppInfo::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

