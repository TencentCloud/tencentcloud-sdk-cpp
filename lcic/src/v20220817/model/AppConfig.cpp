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

#include <tencentcloud/lcic/v20220817/model/AppConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

AppConfig::AppConfig() :
    m_applicationIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_callbackKeyHasBeenSet(false)
{
}

CoreInternalOutcome AppConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.AppVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = value["AppVersion"].GetInt64();
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Callback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callback = string(value["Callback"].GetString());
        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("CallbackKey") && !value["CallbackKey"].IsNull())
    {
        if (!value["CallbackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.CallbackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackKey = string(value["CallbackKey"].GetString());
        m_callbackKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appVersion, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

}


string AppConfig::GetApplicationId() const
{
    return m_applicationId;
}

void AppConfig::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool AppConfig::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string AppConfig::GetAppName() const
{
    return m_appName;
}

void AppConfig::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppConfig::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

int64_t AppConfig::GetState() const
{
    return m_state;
}

void AppConfig::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AppConfig::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t AppConfig::GetAppVersion() const
{
    return m_appVersion;
}

void AppConfig::SetAppVersion(const int64_t& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppConfig::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AppConfig::GetCreatedAt() const
{
    return m_createdAt;
}

void AppConfig::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AppConfig::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string AppConfig::GetCallback() const
{
    return m_callback;
}

void AppConfig::SetCallback(const string& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool AppConfig::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string AppConfig::GetCallbackKey() const
{
    return m_callbackKey;
}

void AppConfig::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool AppConfig::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

