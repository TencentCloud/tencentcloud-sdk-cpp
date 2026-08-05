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

#include <tencentcloud/dlc/v20210125/model/ReplicaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ReplicaInfo::ReplicaInfo() :
    m_desiredHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome ReplicaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Desired") && !value["Desired"].IsNull())
    {
        if (!value["Desired"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Desired` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desired = value["Desired"].GetUint64();
        m_desiredHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Available` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetUint64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desired, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


uint64_t ReplicaInfo::GetDesired() const
{
    return m_desired;
}

void ReplicaInfo::SetDesired(const uint64_t& _desired)
{
    m_desired = _desired;
    m_desiredHasBeenSet = true;
}

bool ReplicaInfo::DesiredHasBeenSet() const
{
    return m_desiredHasBeenSet;
}

uint64_t ReplicaInfo::GetAvailable() const
{
    return m_available;
}

void ReplicaInfo::SetAvailable(const uint64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool ReplicaInfo::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

