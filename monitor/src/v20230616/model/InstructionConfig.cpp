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

#include <tencentcloud/monitor/v20230616/model/InstructionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

InstructionConfig::InstructionConfig() :
    m_rolePositionHasBeenSet(false),
    m_coreDutyHasBeenSet(false),
    m_coreTruthsHasBeenSet(false),
    m_vibeHasBeenSet(false),
    m_boundariesHasBeenSet(false)
{
}

CoreInternalOutcome InstructionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RolePosition") && !value["RolePosition"].IsNull())
    {
        if (!value["RolePosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstructionConfig.RolePosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolePosition = string(value["RolePosition"].GetString());
        m_rolePositionHasBeenSet = true;
    }

    if (value.HasMember("CoreDuty") && !value["CoreDuty"].IsNull())
    {
        if (!value["CoreDuty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstructionConfig.CoreDuty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreDuty = string(value["CoreDuty"].GetString());
        m_coreDutyHasBeenSet = true;
    }

    if (value.HasMember("CoreTruths") && !value["CoreTruths"].IsNull())
    {
        if (!value["CoreTruths"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstructionConfig.CoreTruths` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreTruths = string(value["CoreTruths"].GetString());
        m_coreTruthsHasBeenSet = true;
    }

    if (value.HasMember("Vibe") && !value["Vibe"].IsNull())
    {
        if (!value["Vibe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstructionConfig.Vibe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vibe = string(value["Vibe"].GetString());
        m_vibeHasBeenSet = true;
    }

    if (value.HasMember("Boundaries") && !value["Boundaries"].IsNull())
    {
        if (!value["Boundaries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstructionConfig.Boundaries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boundaries = string(value["Boundaries"].GetString());
        m_boundariesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstructionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rolePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolePosition.c_str(), allocator).Move(), allocator);
    }

    if (m_coreDutyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreDuty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreDuty.c_str(), allocator).Move(), allocator);
    }

    if (m_coreTruthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreTruths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreTruths.c_str(), allocator).Move(), allocator);
    }

    if (m_vibeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vibe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vibe.c_str(), allocator).Move(), allocator);
    }

    if (m_boundariesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Boundaries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boundaries.c_str(), allocator).Move(), allocator);
    }

}


string InstructionConfig::GetRolePosition() const
{
    return m_rolePosition;
}

void InstructionConfig::SetRolePosition(const string& _rolePosition)
{
    m_rolePosition = _rolePosition;
    m_rolePositionHasBeenSet = true;
}

bool InstructionConfig::RolePositionHasBeenSet() const
{
    return m_rolePositionHasBeenSet;
}

string InstructionConfig::GetCoreDuty() const
{
    return m_coreDuty;
}

void InstructionConfig::SetCoreDuty(const string& _coreDuty)
{
    m_coreDuty = _coreDuty;
    m_coreDutyHasBeenSet = true;
}

bool InstructionConfig::CoreDutyHasBeenSet() const
{
    return m_coreDutyHasBeenSet;
}

string InstructionConfig::GetCoreTruths() const
{
    return m_coreTruths;
}

void InstructionConfig::SetCoreTruths(const string& _coreTruths)
{
    m_coreTruths = _coreTruths;
    m_coreTruthsHasBeenSet = true;
}

bool InstructionConfig::CoreTruthsHasBeenSet() const
{
    return m_coreTruthsHasBeenSet;
}

string InstructionConfig::GetVibe() const
{
    return m_vibe;
}

void InstructionConfig::SetVibe(const string& _vibe)
{
    m_vibe = _vibe;
    m_vibeHasBeenSet = true;
}

bool InstructionConfig::VibeHasBeenSet() const
{
    return m_vibeHasBeenSet;
}

string InstructionConfig::GetBoundaries() const
{
    return m_boundaries;
}

void InstructionConfig::SetBoundaries(const string& _boundaries)
{
    m_boundaries = _boundaries;
    m_boundariesHasBeenSet = true;
}

bool InstructionConfig::BoundariesHasBeenSet() const
{
    return m_boundariesHasBeenSet;
}

