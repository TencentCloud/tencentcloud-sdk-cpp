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

#include <tencentcloud/cynosdb/v20190107/model/Ability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

Ability::Ability() :
    m_isSupportSlaveZoneHasBeenSet(false),
    m_nonsupportSlaveZoneReasonHasBeenSet(false),
    m_isSupportRoHasBeenSet(false),
    m_nonsupportRoReasonHasBeenSet(false)
{
}

CoreInternalOutcome Ability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSupportSlaveZone") && !value["IsSupportSlaveZone"].IsNull())
    {
        if (!value["IsSupportSlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportSlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportSlaveZone = string(value["IsSupportSlaveZone"].GetString());
        m_isSupportSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("NonsupportSlaveZoneReason") && !value["NonsupportSlaveZoneReason"].IsNull())
    {
        if (!value["NonsupportSlaveZoneReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.NonsupportSlaveZoneReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonsupportSlaveZoneReason = string(value["NonsupportSlaveZoneReason"].GetString());
        m_nonsupportSlaveZoneReasonHasBeenSet = true;
    }

    if (value.HasMember("IsSupportRo") && !value["IsSupportRo"].IsNull())
    {
        if (!value["IsSupportRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRo = string(value["IsSupportRo"].GetString());
        m_isSupportRoHasBeenSet = true;
    }

    if (value.HasMember("NonsupportRoReason") && !value["NonsupportRoReason"].IsNull())
    {
        if (!value["NonsupportRoReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.NonsupportRoReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonsupportRoReason = string(value["NonsupportRoReason"].GetString());
        m_nonsupportRoReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSupportSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportSlaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_nonsupportSlaveZoneReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonsupportSlaveZoneReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonsupportSlaveZoneReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportRo.c_str(), allocator).Move(), allocator);
    }

    if (m_nonsupportRoReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonsupportRoReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonsupportRoReason.c_str(), allocator).Move(), allocator);
    }

}


string Ability::GetIsSupportSlaveZone() const
{
    return m_isSupportSlaveZone;
}

void Ability::SetIsSupportSlaveZone(const string& _isSupportSlaveZone)
{
    m_isSupportSlaveZone = _isSupportSlaveZone;
    m_isSupportSlaveZoneHasBeenSet = true;
}

bool Ability::IsSupportSlaveZoneHasBeenSet() const
{
    return m_isSupportSlaveZoneHasBeenSet;
}

string Ability::GetNonsupportSlaveZoneReason() const
{
    return m_nonsupportSlaveZoneReason;
}

void Ability::SetNonsupportSlaveZoneReason(const string& _nonsupportSlaveZoneReason)
{
    m_nonsupportSlaveZoneReason = _nonsupportSlaveZoneReason;
    m_nonsupportSlaveZoneReasonHasBeenSet = true;
}

bool Ability::NonsupportSlaveZoneReasonHasBeenSet() const
{
    return m_nonsupportSlaveZoneReasonHasBeenSet;
}

string Ability::GetIsSupportRo() const
{
    return m_isSupportRo;
}

void Ability::SetIsSupportRo(const string& _isSupportRo)
{
    m_isSupportRo = _isSupportRo;
    m_isSupportRoHasBeenSet = true;
}

bool Ability::IsSupportRoHasBeenSet() const
{
    return m_isSupportRoHasBeenSet;
}

string Ability::GetNonsupportRoReason() const
{
    return m_nonsupportRoReason;
}

void Ability::SetNonsupportRoReason(const string& _nonsupportRoReason)
{
    m_nonsupportRoReason = _nonsupportRoReason;
    m_nonsupportRoReasonHasBeenSet = true;
}

bool Ability::NonsupportRoReasonHasBeenSet() const
{
    return m_nonsupportRoReasonHasBeenSet;
}

