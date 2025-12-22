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

#include <tencentcloud/bh/v20230418/model/SecuritySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SecuritySetting::SecuritySetting() :
    m_authModeGMHasBeenSet(false),
    m_reconnectionHasBeenSet(false),
    m_envInternetAccessHasBeenSet(false)
{
}

CoreInternalOutcome SecuritySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthModeGM") && !value["AuthModeGM"].IsNull())
    {
        if (!value["AuthModeGM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.AuthModeGM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authModeGM.Deserialize(value["AuthModeGM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authModeGMHasBeenSet = true;
    }

    if (value.HasMember("Reconnection") && !value["Reconnection"].IsNull())
    {
        if (!value["Reconnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.Reconnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reconnection.Deserialize(value["Reconnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reconnectionHasBeenSet = true;
    }

    if (value.HasMember("EnvInternetAccess") && !value["EnvInternetAccess"].IsNull())
    {
        if (!value["EnvInternetAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.EnvInternetAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envInternetAccess.Deserialize(value["EnvInternetAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envInternetAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecuritySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authModeGMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthModeGM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authModeGM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reconnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reconnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reconnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envInternetAccess.ToJsonObject(value[key.c_str()], allocator);
    }

}


AuthModeSetting SecuritySetting::GetAuthModeGM() const
{
    return m_authModeGM;
}

void SecuritySetting::SetAuthModeGM(const AuthModeSetting& _authModeGM)
{
    m_authModeGM = _authModeGM;
    m_authModeGMHasBeenSet = true;
}

bool SecuritySetting::AuthModeGMHasBeenSet() const
{
    return m_authModeGMHasBeenSet;
}

ReconnectionSetting SecuritySetting::GetReconnection() const
{
    return m_reconnection;
}

void SecuritySetting::SetReconnection(const ReconnectionSetting& _reconnection)
{
    m_reconnection = _reconnection;
    m_reconnectionHasBeenSet = true;
}

bool SecuritySetting::ReconnectionHasBeenSet() const
{
    return m_reconnectionHasBeenSet;
}

EnvInternetAccessSetting SecuritySetting::GetEnvInternetAccess() const
{
    return m_envInternetAccess;
}

void SecuritySetting::SetEnvInternetAccess(const EnvInternetAccessSetting& _envInternetAccess)
{
    m_envInternetAccess = _envInternetAccess;
    m_envInternetAccessHasBeenSet = true;
}

bool SecuritySetting::EnvInternetAccessHasBeenSet() const
{
    return m_envInternetAccessHasBeenSet;
}

