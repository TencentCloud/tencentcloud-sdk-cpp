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

#include <tencentcloud/bdrc/v20260330/model/ResourceProtectStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ResourceProtectStat::ResourceProtectStat() :
    m_protectedCountHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ResourceProtectStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectedCount") && !value["ProtectedCount"].IsNull())
    {
        if (!value["ProtectedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceProtectStat.ProtectedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCount = value["ProtectedCount"].GetInt64();
        m_protectedCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceProtectStat.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceProtectStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


int64_t ResourceProtectStat::GetProtectedCount() const
{
    return m_protectedCount;
}

void ResourceProtectStat::SetProtectedCount(const int64_t& _protectedCount)
{
    m_protectedCount = _protectedCount;
    m_protectedCountHasBeenSet = true;
}

bool ResourceProtectStat::ProtectedCountHasBeenSet() const
{
    return m_protectedCountHasBeenSet;
}

int64_t ResourceProtectStat::GetTotalCount() const
{
    return m_totalCount;
}

void ResourceProtectStat::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ResourceProtectStat::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

