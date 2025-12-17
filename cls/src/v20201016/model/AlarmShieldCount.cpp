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

#include <tencentcloud/cls/v20201016/model/AlarmShieldCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmShieldCount::AlarmShieldCount() :
    m_totalCountHasBeenSet(false),
    m_invalidCountHasBeenSet(false),
    m_validCountHasBeenSet(false),
    m_expireCountHasBeenSet(false)
{
}

CoreInternalOutcome AlarmShieldCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldCount.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("InvalidCount") && !value["InvalidCount"].IsNull())
    {
        if (!value["InvalidCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldCount.InvalidCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidCount = value["InvalidCount"].GetUint64();
        m_invalidCountHasBeenSet = true;
    }

    if (value.HasMember("ValidCount") && !value["ValidCount"].IsNull())
    {
        if (!value["ValidCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldCount.ValidCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validCount = value["ValidCount"].GetUint64();
        m_validCountHasBeenSet = true;
    }

    if (value.HasMember("ExpireCount") && !value["ExpireCount"].IsNull())
    {
        if (!value["ExpireCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldCount.ExpireCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireCount = value["ExpireCount"].GetUint64();
        m_expireCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmShieldCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_invalidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidCount, allocator);
    }

    if (m_validCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validCount, allocator);
    }

    if (m_expireCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireCount, allocator);
    }

}


uint64_t AlarmShieldCount::GetTotalCount() const
{
    return m_totalCount;
}

void AlarmShieldCount::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool AlarmShieldCount::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t AlarmShieldCount::GetInvalidCount() const
{
    return m_invalidCount;
}

void AlarmShieldCount::SetInvalidCount(const uint64_t& _invalidCount)
{
    m_invalidCount = _invalidCount;
    m_invalidCountHasBeenSet = true;
}

bool AlarmShieldCount::InvalidCountHasBeenSet() const
{
    return m_invalidCountHasBeenSet;
}

uint64_t AlarmShieldCount::GetValidCount() const
{
    return m_validCount;
}

void AlarmShieldCount::SetValidCount(const uint64_t& _validCount)
{
    m_validCount = _validCount;
    m_validCountHasBeenSet = true;
}

bool AlarmShieldCount::ValidCountHasBeenSet() const
{
    return m_validCountHasBeenSet;
}

uint64_t AlarmShieldCount::GetExpireCount() const
{
    return m_expireCount;
}

void AlarmShieldCount::SetExpireCount(const uint64_t& _expireCount)
{
    m_expireCount = _expireCount;
    m_expireCountHasBeenSet = true;
}

bool AlarmShieldCount::ExpireCountHasBeenSet() const
{
    return m_expireCountHasBeenSet;
}

