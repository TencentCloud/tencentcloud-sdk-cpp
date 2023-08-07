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

#include <tencentcloud/iss/v20230517/model/AddStreamAuthData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddStreamAuthData::AddStreamAuthData() :
    m_idHasBeenSet(false),
    m_pullStateHasBeenSet(false),
    m_pullSecretHasBeenSet(false),
    m_pullExpiredHasBeenSet(false),
    m_pushStateHasBeenSet(false),
    m_pushSecretHasBeenSet(false),
    m_pushExpiredHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome AddStreamAuthData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PullState") && !value["PullState"].IsNull())
    {
        if (!value["PullState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PullState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullState = value["PullState"].GetInt64();
        m_pullStateHasBeenSet = true;
    }

    if (value.HasMember("PullSecret") && !value["PullSecret"].IsNull())
    {
        if (!value["PullSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PullSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pullSecret = string(value["PullSecret"].GetString());
        m_pullSecretHasBeenSet = true;
    }

    if (value.HasMember("PullExpired") && !value["PullExpired"].IsNull())
    {
        if (!value["PullExpired"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PullExpired` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullExpired = value["PullExpired"].GetInt64();
        m_pullExpiredHasBeenSet = true;
    }

    if (value.HasMember("PushState") && !value["PushState"].IsNull())
    {
        if (!value["PushState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PushState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushState = value["PushState"].GetInt64();
        m_pushStateHasBeenSet = true;
    }

    if (value.HasMember("PushSecret") && !value["PushSecret"].IsNull())
    {
        if (!value["PushSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PushSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushSecret = string(value["PushSecret"].GetString());
        m_pushSecretHasBeenSet = true;
    }

    if (value.HasMember("PushExpired") && !value["PushExpired"].IsNull())
    {
        if (!value["PushExpired"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.PushExpired` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushExpired = value["PushExpired"].GetInt64();
        m_pushExpiredHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddStreamAuthData.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddStreamAuthData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pullStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullState, allocator);
    }

    if (m_pullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pullSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pullExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullExpired, allocator);
    }

    if (m_pushStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushState, allocator);
    }

    if (m_pushSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pushExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushExpired, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


string AddStreamAuthData::GetId() const
{
    return m_id;
}

void AddStreamAuthData::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AddStreamAuthData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AddStreamAuthData::GetPullState() const
{
    return m_pullState;
}

void AddStreamAuthData::SetPullState(const int64_t& _pullState)
{
    m_pullState = _pullState;
    m_pullStateHasBeenSet = true;
}

bool AddStreamAuthData::PullStateHasBeenSet() const
{
    return m_pullStateHasBeenSet;
}

string AddStreamAuthData::GetPullSecret() const
{
    return m_pullSecret;
}

void AddStreamAuthData::SetPullSecret(const string& _pullSecret)
{
    m_pullSecret = _pullSecret;
    m_pullSecretHasBeenSet = true;
}

bool AddStreamAuthData::PullSecretHasBeenSet() const
{
    return m_pullSecretHasBeenSet;
}

int64_t AddStreamAuthData::GetPullExpired() const
{
    return m_pullExpired;
}

void AddStreamAuthData::SetPullExpired(const int64_t& _pullExpired)
{
    m_pullExpired = _pullExpired;
    m_pullExpiredHasBeenSet = true;
}

bool AddStreamAuthData::PullExpiredHasBeenSet() const
{
    return m_pullExpiredHasBeenSet;
}

int64_t AddStreamAuthData::GetPushState() const
{
    return m_pushState;
}

void AddStreamAuthData::SetPushState(const int64_t& _pushState)
{
    m_pushState = _pushState;
    m_pushStateHasBeenSet = true;
}

bool AddStreamAuthData::PushStateHasBeenSet() const
{
    return m_pushStateHasBeenSet;
}

string AddStreamAuthData::GetPushSecret() const
{
    return m_pushSecret;
}

void AddStreamAuthData::SetPushSecret(const string& _pushSecret)
{
    m_pushSecret = _pushSecret;
    m_pushSecretHasBeenSet = true;
}

bool AddStreamAuthData::PushSecretHasBeenSet() const
{
    return m_pushSecretHasBeenSet;
}

int64_t AddStreamAuthData::GetPushExpired() const
{
    return m_pushExpired;
}

void AddStreamAuthData::SetPushExpired(const int64_t& _pushExpired)
{
    m_pushExpired = _pushExpired;
    m_pushExpiredHasBeenSet = true;
}

bool AddStreamAuthData::PushExpiredHasBeenSet() const
{
    return m_pushExpiredHasBeenSet;
}

int64_t AddStreamAuthData::GetAppId() const
{
    return m_appId;
}

void AddStreamAuthData::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AddStreamAuthData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

