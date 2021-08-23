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

#include <tencentcloud/live/v20180801/model/PlayAuthKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PlayAuthKeyInfo::PlayAuthKeyInfo() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_authDeltaHasBeenSet(false),
    m_authBackKeyHasBeenSet(false)
{
}

CoreInternalOutcome PlayAuthKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayAuthKeyInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayAuthKeyInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("AuthKey") && !value["AuthKey"].IsNull())
    {
        if (!value["AuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayAuthKeyInfo.AuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authKey = string(value["AuthKey"].GetString());
        m_authKeyHasBeenSet = true;
    }

    if (value.HasMember("AuthDelta") && !value["AuthDelta"].IsNull())
    {
        if (!value["AuthDelta"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayAuthKeyInfo.AuthDelta` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authDelta = value["AuthDelta"].GetUint64();
        m_authDeltaHasBeenSet = true;
    }

    if (value.HasMember("AuthBackKey") && !value["AuthBackKey"].IsNull())
    {
        if (!value["AuthBackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayAuthKeyInfo.AuthBackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authBackKey = string(value["AuthBackKey"].GetString());
        m_authBackKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayAuthKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_authKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authDelta, allocator);
    }

    if (m_authBackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthBackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authBackKey.c_str(), allocator).Move(), allocator);
    }

}


string PlayAuthKeyInfo::GetDomainName() const
{
    return m_domainName;
}

void PlayAuthKeyInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PlayAuthKeyInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t PlayAuthKeyInfo::GetEnable() const
{
    return m_enable;
}

void PlayAuthKeyInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool PlayAuthKeyInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string PlayAuthKeyInfo::GetAuthKey() const
{
    return m_authKey;
}

void PlayAuthKeyInfo::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool PlayAuthKeyInfo::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

uint64_t PlayAuthKeyInfo::GetAuthDelta() const
{
    return m_authDelta;
}

void PlayAuthKeyInfo::SetAuthDelta(const uint64_t& _authDelta)
{
    m_authDelta = _authDelta;
    m_authDeltaHasBeenSet = true;
}

bool PlayAuthKeyInfo::AuthDeltaHasBeenSet() const
{
    return m_authDeltaHasBeenSet;
}

string PlayAuthKeyInfo::GetAuthBackKey() const
{
    return m_authBackKey;
}

void PlayAuthKeyInfo::SetAuthBackKey(const string& _authBackKey)
{
    m_authBackKey = _authBackKey;
    m_authBackKeyHasBeenSet = true;
}

bool PlayAuthKeyInfo::AuthBackKeyHasBeenSet() const
{
    return m_authBackKeyHasBeenSet;
}

