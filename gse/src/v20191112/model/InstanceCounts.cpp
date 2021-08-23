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

#include <tencentcloud/gse/v20191112/model/InstanceCounts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

InstanceCounts::InstanceCounts() :
    m_activeHasBeenSet(false),
    m_desiredHasBeenSet(false),
    m_idleHasBeenSet(false),
    m_maxiNumHasBeenSet(false),
    m_miniNumHasBeenSet(false),
    m_pendingHasBeenSet(false),
    m_terminatingHasBeenSet(false)
{
}

CoreInternalOutcome InstanceCounts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.Active` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetUint64();
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("Desired") && !value["Desired"].IsNull())
    {
        if (!value["Desired"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.Desired` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desired = value["Desired"].GetUint64();
        m_desiredHasBeenSet = true;
    }

    if (value.HasMember("Idle") && !value["Idle"].IsNull())
    {
        if (!value["Idle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.Idle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idle = value["Idle"].GetUint64();
        m_idleHasBeenSet = true;
    }

    if (value.HasMember("MaxiNum") && !value["MaxiNum"].IsNull())
    {
        if (!value["MaxiNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.MaxiNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxiNum = value["MaxiNum"].GetUint64();
        m_maxiNumHasBeenSet = true;
    }

    if (value.HasMember("MiniNum") && !value["MiniNum"].IsNull())
    {
        if (!value["MiniNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.MiniNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniNum = value["MiniNum"].GetUint64();
        m_miniNumHasBeenSet = true;
    }

    if (value.HasMember("Pending") && !value["Pending"].IsNull())
    {
        if (!value["Pending"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.Pending` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pending = value["Pending"].GetUint64();
        m_pendingHasBeenSet = true;
    }

    if (value.HasMember("Terminating") && !value["Terminating"].IsNull())
    {
        if (!value["Terminating"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCounts.Terminating` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_terminating = value["Terminating"].GetUint64();
        m_terminatingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceCounts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

    if (m_desiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desired, allocator);
    }

    if (m_idleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idle, allocator);
    }

    if (m_maxiNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxiNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxiNum, allocator);
    }

    if (m_miniNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniNum, allocator);
    }

    if (m_pendingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pending";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pending, allocator);
    }

    if (m_terminatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Terminating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_terminating, allocator);
    }

}


uint64_t InstanceCounts::GetActive() const
{
    return m_active;
}

void InstanceCounts::SetActive(const uint64_t& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool InstanceCounts::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

uint64_t InstanceCounts::GetDesired() const
{
    return m_desired;
}

void InstanceCounts::SetDesired(const uint64_t& _desired)
{
    m_desired = _desired;
    m_desiredHasBeenSet = true;
}

bool InstanceCounts::DesiredHasBeenSet() const
{
    return m_desiredHasBeenSet;
}

uint64_t InstanceCounts::GetIdle() const
{
    return m_idle;
}

void InstanceCounts::SetIdle(const uint64_t& _idle)
{
    m_idle = _idle;
    m_idleHasBeenSet = true;
}

bool InstanceCounts::IdleHasBeenSet() const
{
    return m_idleHasBeenSet;
}

uint64_t InstanceCounts::GetMaxiNum() const
{
    return m_maxiNum;
}

void InstanceCounts::SetMaxiNum(const uint64_t& _maxiNum)
{
    m_maxiNum = _maxiNum;
    m_maxiNumHasBeenSet = true;
}

bool InstanceCounts::MaxiNumHasBeenSet() const
{
    return m_maxiNumHasBeenSet;
}

uint64_t InstanceCounts::GetMiniNum() const
{
    return m_miniNum;
}

void InstanceCounts::SetMiniNum(const uint64_t& _miniNum)
{
    m_miniNum = _miniNum;
    m_miniNumHasBeenSet = true;
}

bool InstanceCounts::MiniNumHasBeenSet() const
{
    return m_miniNumHasBeenSet;
}

uint64_t InstanceCounts::GetPending() const
{
    return m_pending;
}

void InstanceCounts::SetPending(const uint64_t& _pending)
{
    m_pending = _pending;
    m_pendingHasBeenSet = true;
}

bool InstanceCounts::PendingHasBeenSet() const
{
    return m_pendingHasBeenSet;
}

uint64_t InstanceCounts::GetTerminating() const
{
    return m_terminating;
}

void InstanceCounts::SetTerminating(const uint64_t& _terminating)
{
    m_terminating = _terminating;
    m_terminatingHasBeenSet = true;
}

bool InstanceCounts::TerminatingHasBeenSet() const
{
    return m_terminatingHasBeenSet;
}

