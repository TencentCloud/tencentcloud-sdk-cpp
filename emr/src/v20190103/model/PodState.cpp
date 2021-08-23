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

#include <tencentcloud/emr/v20190103/model/PodState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodState::PodState() :
    m_nameHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_ownerClusterHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

CoreInternalOutcome PodState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("OwnerCluster") && !value["OwnerCluster"].IsNull())
    {
        if (!value["OwnerCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.OwnerCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerCluster = string(value["OwnerCluster"].GetString());
        m_ownerClusterHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodState.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

}


string PodState::GetName() const
{
    return m_name;
}

void PodState::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PodState::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PodState::GetUuid() const
{
    return m_uuid;
}

void PodState::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool PodState::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string PodState::GetState() const
{
    return m_state;
}

void PodState::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PodState::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string PodState::GetReason() const
{
    return m_reason;
}

void PodState::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool PodState::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string PodState::GetOwnerCluster() const
{
    return m_ownerCluster;
}

void PodState::SetOwnerCluster(const string& _ownerCluster)
{
    m_ownerCluster = _ownerCluster;
    m_ownerClusterHasBeenSet = true;
}

bool PodState::OwnerClusterHasBeenSet() const
{
    return m_ownerClusterHasBeenSet;
}

int64_t PodState::GetMemory() const
{
    return m_memory;
}

void PodState::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool PodState::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

