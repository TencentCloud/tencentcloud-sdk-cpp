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

#include <tencentcloud/gse/v20191112/model/InstanceExtend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

InstanceExtend::InstanceExtend() :
    m_instanceHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_healthyProcessCntHasBeenSet(false),
    m_activeProcessCntHasBeenSet(false),
    m_gameSessionCntHasBeenSet(false),
    m_maxGameSessionCntHasBeenSet(false),
    m_playerSessionCntHasBeenSet(false),
    m_maxPlayerSessionCntHasBeenSet(false)
{
}

CoreInternalOutcome InstanceExtend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.Instance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instance.Deserialize(value["Instance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("HealthyProcessCnt") && !value["HealthyProcessCnt"].IsNull())
    {
        if (!value["HealthyProcessCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.HealthyProcessCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyProcessCnt = value["HealthyProcessCnt"].GetInt64();
        m_healthyProcessCntHasBeenSet = true;
    }

    if (value.HasMember("ActiveProcessCnt") && !value["ActiveProcessCnt"].IsNull())
    {
        if (!value["ActiveProcessCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.ActiveProcessCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeProcessCnt = value["ActiveProcessCnt"].GetInt64();
        m_activeProcessCntHasBeenSet = true;
    }

    if (value.HasMember("GameSessionCnt") && !value["GameSessionCnt"].IsNull())
    {
        if (!value["GameSessionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.GameSessionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gameSessionCnt = value["GameSessionCnt"].GetInt64();
        m_gameSessionCntHasBeenSet = true;
    }

    if (value.HasMember("MaxGameSessionCnt") && !value["MaxGameSessionCnt"].IsNull())
    {
        if (!value["MaxGameSessionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.MaxGameSessionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGameSessionCnt = value["MaxGameSessionCnt"].GetInt64();
        m_maxGameSessionCntHasBeenSet = true;
    }

    if (value.HasMember("PlayerSessionCnt") && !value["PlayerSessionCnt"].IsNull())
    {
        if (!value["PlayerSessionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.PlayerSessionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_playerSessionCnt = value["PlayerSessionCnt"].GetInt64();
        m_playerSessionCntHasBeenSet = true;
    }

    if (value.HasMember("MaxPlayerSessionCnt") && !value["MaxPlayerSessionCnt"].IsNull())
    {
        if (!value["MaxPlayerSessionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExtend.MaxPlayerSessionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPlayerSessionCnt = value["MaxPlayerSessionCnt"].GetInt64();
        m_maxPlayerSessionCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceExtend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyProcessCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyProcessCnt, allocator);
    }

    if (m_activeProcessCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeProcessCnt, allocator);
    }

    if (m_gameSessionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameSessionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gameSessionCnt, allocator);
    }

    if (m_maxGameSessionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxGameSessionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGameSessionCnt, allocator);
    }

    if (m_playerSessionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playerSessionCnt, allocator);
    }

    if (m_maxPlayerSessionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPlayerSessionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPlayerSessionCnt, allocator);
    }

}


Instance InstanceExtend::GetInstance() const
{
    return m_instance;
}

void InstanceExtend::SetInstance(const Instance& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool InstanceExtend::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string InstanceExtend::GetState() const
{
    return m_state;
}

void InstanceExtend::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool InstanceExtend::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t InstanceExtend::GetHealthyProcessCnt() const
{
    return m_healthyProcessCnt;
}

void InstanceExtend::SetHealthyProcessCnt(const int64_t& _healthyProcessCnt)
{
    m_healthyProcessCnt = _healthyProcessCnt;
    m_healthyProcessCntHasBeenSet = true;
}

bool InstanceExtend::HealthyProcessCntHasBeenSet() const
{
    return m_healthyProcessCntHasBeenSet;
}

int64_t InstanceExtend::GetActiveProcessCnt() const
{
    return m_activeProcessCnt;
}

void InstanceExtend::SetActiveProcessCnt(const int64_t& _activeProcessCnt)
{
    m_activeProcessCnt = _activeProcessCnt;
    m_activeProcessCntHasBeenSet = true;
}

bool InstanceExtend::ActiveProcessCntHasBeenSet() const
{
    return m_activeProcessCntHasBeenSet;
}

int64_t InstanceExtend::GetGameSessionCnt() const
{
    return m_gameSessionCnt;
}

void InstanceExtend::SetGameSessionCnt(const int64_t& _gameSessionCnt)
{
    m_gameSessionCnt = _gameSessionCnt;
    m_gameSessionCntHasBeenSet = true;
}

bool InstanceExtend::GameSessionCntHasBeenSet() const
{
    return m_gameSessionCntHasBeenSet;
}

int64_t InstanceExtend::GetMaxGameSessionCnt() const
{
    return m_maxGameSessionCnt;
}

void InstanceExtend::SetMaxGameSessionCnt(const int64_t& _maxGameSessionCnt)
{
    m_maxGameSessionCnt = _maxGameSessionCnt;
    m_maxGameSessionCntHasBeenSet = true;
}

bool InstanceExtend::MaxGameSessionCntHasBeenSet() const
{
    return m_maxGameSessionCntHasBeenSet;
}

int64_t InstanceExtend::GetPlayerSessionCnt() const
{
    return m_playerSessionCnt;
}

void InstanceExtend::SetPlayerSessionCnt(const int64_t& _playerSessionCnt)
{
    m_playerSessionCnt = _playerSessionCnt;
    m_playerSessionCntHasBeenSet = true;
}

bool InstanceExtend::PlayerSessionCntHasBeenSet() const
{
    return m_playerSessionCntHasBeenSet;
}

int64_t InstanceExtend::GetMaxPlayerSessionCnt() const
{
    return m_maxPlayerSessionCnt;
}

void InstanceExtend::SetMaxPlayerSessionCnt(const int64_t& _maxPlayerSessionCnt)
{
    m_maxPlayerSessionCnt = _maxPlayerSessionCnt;
    m_maxPlayerSessionCntHasBeenSet = true;
}

bool InstanceExtend::MaxPlayerSessionCntHasBeenSet() const
{
    return m_maxPlayerSessionCntHasBeenSet;
}

