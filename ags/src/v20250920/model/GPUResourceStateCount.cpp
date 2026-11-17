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

#include <tencentcloud/ags/v20250920/model/GPUResourceStateCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GPUResourceStateCount::GPUResourceStateCount() :
    m_deliveringHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_isolatedHasBeenSet(false),
    m_destroyingHasBeenSet(false)
{
}

CoreInternalOutcome GPUResourceStateCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Delivering") && !value["Delivering"].IsNull())
    {
        if (!value["Delivering"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceStateCount.Delivering` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delivering = value["Delivering"].GetInt64();
        m_deliveringHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceStateCount.Active` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetInt64();
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("Isolated") && !value["Isolated"].IsNull())
    {
        if (!value["Isolated"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceStateCount.Isolated` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolated = value["Isolated"].GetInt64();
        m_isolatedHasBeenSet = true;
    }

    if (value.HasMember("Destroying") && !value["Destroying"].IsNull())
    {
        if (!value["Destroying"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceStateCount.Destroying` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destroying = value["Destroying"].GetInt64();
        m_destroyingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUResourceStateCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliveringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delivering";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delivering, allocator);
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

    if (m_isolatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolated, allocator);
    }

    if (m_destroyingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destroying";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroying, allocator);
    }

}


int64_t GPUResourceStateCount::GetDelivering() const
{
    return m_delivering;
}

void GPUResourceStateCount::SetDelivering(const int64_t& _delivering)
{
    m_delivering = _delivering;
    m_deliveringHasBeenSet = true;
}

bool GPUResourceStateCount::DeliveringHasBeenSet() const
{
    return m_deliveringHasBeenSet;
}

int64_t GPUResourceStateCount::GetActive() const
{
    return m_active;
}

void GPUResourceStateCount::SetActive(const int64_t& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool GPUResourceStateCount::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

int64_t GPUResourceStateCount::GetIsolated() const
{
    return m_isolated;
}

void GPUResourceStateCount::SetIsolated(const int64_t& _isolated)
{
    m_isolated = _isolated;
    m_isolatedHasBeenSet = true;
}

bool GPUResourceStateCount::IsolatedHasBeenSet() const
{
    return m_isolatedHasBeenSet;
}

int64_t GPUResourceStateCount::GetDestroying() const
{
    return m_destroying;
}

void GPUResourceStateCount::SetDestroying(const int64_t& _destroying)
{
    m_destroying = _destroying;
    m_destroyingHasBeenSet = true;
}

bool GPUResourceStateCount::DestroyingHasBeenSet() const
{
    return m_destroyingHasBeenSet;
}

