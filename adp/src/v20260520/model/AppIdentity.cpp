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

#include <tencentcloud/adp/v20260520/model/AppIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppIdentity::AppIdentity() :
    m_appIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appModeHasBeenSet(false)
{
}

CoreInternalOutcome AppIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppIdentity.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppIdentity.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppMode") && !value["AppMode"].IsNull())
    {
        if (!value["AppMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppIdentity.AppMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appMode = value["AppMode"].GetInt64();
        m_appModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appMode, allocator);
    }

}


string AppIdentity::GetAppId() const
{
    return m_appId;
}

void AppIdentity::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppIdentity::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AppIdentity::GetAppName() const
{
    return m_appName;
}

void AppIdentity::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppIdentity::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

int64_t AppIdentity::GetAppMode() const
{
    return m_appMode;
}

void AppIdentity::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool AppIdentity::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

