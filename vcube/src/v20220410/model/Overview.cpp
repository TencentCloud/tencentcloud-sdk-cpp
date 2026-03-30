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

#include <tencentcloud/vcube/v20220410/model/Overview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

Overview::Overview() :
    m_expiredHasBeenSet(false),
    m_validHasBeenSet(false),
    m_nearHasBeenSet(false)
{
}

CoreInternalOutcome Overview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.Expired` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetUint64();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("Valid") && !value["Valid"].IsNull())
    {
        if (!value["Valid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.Valid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valid = value["Valid"].GetUint64();
        m_validHasBeenSet = true;
    }

    if (value.HasMember("Near") && !value["Near"].IsNull())
    {
        if (!value["Near"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.Near` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_near = value["Near"].GetUint64();
        m_nearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Overview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

    if (m_nearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Near";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_near, allocator);
    }

}


uint64_t Overview::GetExpired() const
{
    return m_expired;
}

void Overview::SetExpired(const uint64_t& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool Overview::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

uint64_t Overview::GetValid() const
{
    return m_valid;
}

void Overview::SetValid(const uint64_t& _valid)
{
    m_valid = _valid;
    m_validHasBeenSet = true;
}

bool Overview::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

uint64_t Overview::GetNear() const
{
    return m_near;
}

void Overview::SetNear(const uint64_t& _near)
{
    m_near = _near;
    m_nearHasBeenSet = true;
}

bool Overview::NearHasBeenSet() const
{
    return m_nearHasBeenSet;
}

