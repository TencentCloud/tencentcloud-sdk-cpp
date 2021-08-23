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

#include <tencentcloud/gse/v20191112/model/GameServerSessionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GameServerSessionDetail::GameServerSessionDetail() :
    m_gameServerSessionHasBeenSet(false),
    m_protectionPolicyHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSessionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GameServerSession") && !value["GameServerSession"].IsNull())
    {
        if (!value["GameServerSession"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionDetail.GameServerSession` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gameServerSession.Deserialize(value["GameServerSession"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gameServerSessionHasBeenSet = true;
    }

    if (value.HasMember("ProtectionPolicy") && !value["ProtectionPolicy"].IsNull())
    {
        if (!value["ProtectionPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionDetail.ProtectionPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionPolicy = string(value["ProtectionPolicy"].GetString());
        m_protectionPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSessionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gameServerSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gameServerSession.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protectionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionPolicy.c_str(), allocator).Move(), allocator);
    }

}


GameServerSession GameServerSessionDetail::GetGameServerSession() const
{
    return m_gameServerSession;
}

void GameServerSessionDetail::SetGameServerSession(const GameServerSession& _gameServerSession)
{
    m_gameServerSession = _gameServerSession;
    m_gameServerSessionHasBeenSet = true;
}

bool GameServerSessionDetail::GameServerSessionHasBeenSet() const
{
    return m_gameServerSessionHasBeenSet;
}

string GameServerSessionDetail::GetProtectionPolicy() const
{
    return m_protectionPolicy;
}

void GameServerSessionDetail::SetProtectionPolicy(const string& _protectionPolicy)
{
    m_protectionPolicy = _protectionPolicy;
    m_protectionPolicyHasBeenSet = true;
}

bool GameServerSessionDetail::ProtectionPolicyHasBeenSet() const
{
    return m_protectionPolicyHasBeenSet;
}

