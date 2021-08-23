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

#include <tencentcloud/ms/v20180408/model/BindInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

BindInfo::BindInfo() :
    m_appIconUrlHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false)
{
}

CoreInternalOutcome BindInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppIconUrl") && !value["AppIconUrl"].IsNull())
    {
        if (!value["AppIconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindInfo.AppIconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIconUrl = string(value["AppIconUrl"].GetString());
        m_appIconUrlHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindInfo.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

}


string BindInfo::GetAppIconUrl() const
{
    return m_appIconUrl;
}

void BindInfo::SetAppIconUrl(const string& _appIconUrl)
{
    m_appIconUrl = _appIconUrl;
    m_appIconUrlHasBeenSet = true;
}

bool BindInfo::AppIconUrlHasBeenSet() const
{
    return m_appIconUrlHasBeenSet;
}

string BindInfo::GetAppName() const
{
    return m_appName;
}

void BindInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool BindInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string BindInfo::GetAppPkgName() const
{
    return m_appPkgName;
}

void BindInfo::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool BindInfo::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

