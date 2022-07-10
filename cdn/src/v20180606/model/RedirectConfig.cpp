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

#include <tencentcloud/cdn/v20180606/model/RedirectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RedirectConfig::RedirectConfig() :
    m_switchHasBeenSet(false),
    m_followRedirectHostHasBeenSet(false),
    m_followRedirectBackupHostHasBeenSet(false)
{
}

CoreInternalOutcome RedirectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirectHost") && !value["FollowRedirectHost"].IsNull())
    {
        if (!value["FollowRedirectHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectConfig.FollowRedirectHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRedirectHost = string(value["FollowRedirectHost"].GetString());
        m_followRedirectHostHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirectBackupHost") && !value["FollowRedirectBackupHost"].IsNull())
    {
        if (!value["FollowRedirectBackupHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectConfig.FollowRedirectBackupHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRedirectBackupHost = string(value["FollowRedirectBackupHost"].GetString());
        m_followRedirectBackupHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedirectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_followRedirectHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirectHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRedirectHost.c_str(), allocator).Move(), allocator);
    }

    if (m_followRedirectBackupHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirectBackupHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRedirectBackupHost.c_str(), allocator).Move(), allocator);
    }

}


string RedirectConfig::GetSwitch() const
{
    return m_switch;
}

void RedirectConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool RedirectConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string RedirectConfig::GetFollowRedirectHost() const
{
    return m_followRedirectHost;
}

void RedirectConfig::SetFollowRedirectHost(const string& _followRedirectHost)
{
    m_followRedirectHost = _followRedirectHost;
    m_followRedirectHostHasBeenSet = true;
}

bool RedirectConfig::FollowRedirectHostHasBeenSet() const
{
    return m_followRedirectHostHasBeenSet;
}

string RedirectConfig::GetFollowRedirectBackupHost() const
{
    return m_followRedirectBackupHost;
}

void RedirectConfig::SetFollowRedirectBackupHost(const string& _followRedirectBackupHost)
{
    m_followRedirectBackupHost = _followRedirectBackupHost;
    m_followRedirectBackupHostHasBeenSet = true;
}

bool RedirectConfig::FollowRedirectBackupHostHasBeenSet() const
{
    return m_followRedirectBackupHostHasBeenSet;
}

