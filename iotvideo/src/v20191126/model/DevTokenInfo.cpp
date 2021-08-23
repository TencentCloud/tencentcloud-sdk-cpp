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

#include <tencentcloud/iotvideo/v20191126/model/DevTokenInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DevTokenInfo::DevTokenInfo() :
    m_accessIdHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome DevTokenInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessId") && !value["AccessId"].IsNull())
    {
        if (!value["AccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevTokenInfo.AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(value["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevTokenInfo.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevTokenInfo.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevTokenInfo.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevTokenInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

}


string DevTokenInfo::GetAccessId() const
{
    return m_accessId;
}

void DevTokenInfo::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool DevTokenInfo::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string DevTokenInfo::GetTid() const
{
    return m_tid;
}

void DevTokenInfo::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DevTokenInfo::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DevTokenInfo::GetAccessToken() const
{
    return m_accessToken;
}

void DevTokenInfo::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool DevTokenInfo::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

uint64_t DevTokenInfo::GetExpireTime() const
{
    return m_expireTime;
}

void DevTokenInfo::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DevTokenInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

