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

#include <tencentcloud/teo/v20220106/model/WebAttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

WebAttackEvent::WebAttackEvent() :
    m_clientIpHasBeenSet(false),
    m_attackUrlHasBeenSet(false),
    m_attackTimeHasBeenSet(false)
{
}

CoreInternalOutcome WebAttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebAttackEvent.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("AttackUrl") && !value["AttackUrl"].IsNull())
    {
        if (!value["AttackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebAttackEvent.AttackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackUrl = string(value["AttackUrl"].GetString());
        m_attackUrlHasBeenSet = true;
    }

    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebAttackEvent.AttackTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = value["AttackTime"].GetInt64();
        m_attackTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebAttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

}


string WebAttackEvent::GetClientIp() const
{
    return m_clientIp;
}

void WebAttackEvent::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool WebAttackEvent::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string WebAttackEvent::GetAttackUrl() const
{
    return m_attackUrl;
}

void WebAttackEvent::SetAttackUrl(const string& _attackUrl)
{
    m_attackUrl = _attackUrl;
    m_attackUrlHasBeenSet = true;
}

bool WebAttackEvent::AttackUrlHasBeenSet() const
{
    return m_attackUrlHasBeenSet;
}

int64_t WebAttackEvent::GetAttackTime() const
{
    return m_attackTime;
}

void WebAttackEvent::SetAttackTime(const int64_t& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool WebAttackEvent::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

