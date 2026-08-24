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

#include <tencentcloud/bdrc/v20260330/model/BackupPolicyOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupPolicyOverview::BackupPolicyOverview() :
    m_totalCountHasBeenSet(false),
    m_boundCountHasBeenSet(false),
    m_unboundCountHasBeenSet(false)
{
}

CoreInternalOutcome BackupPolicyOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyOverview.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("BoundCount") && !value["BoundCount"].IsNull())
    {
        if (!value["BoundCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyOverview.BoundCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boundCount = value["BoundCount"].GetInt64();
        m_boundCountHasBeenSet = true;
    }

    if (value.HasMember("UnboundCount") && !value["UnboundCount"].IsNull())
    {
        if (!value["UnboundCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyOverview.UnboundCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unboundCount = value["UnboundCount"].GetInt64();
        m_unboundCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPolicyOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_boundCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundCount, allocator);
    }

    if (m_unboundCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnboundCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unboundCount, allocator);
    }

}


int64_t BackupPolicyOverview::GetTotalCount() const
{
    return m_totalCount;
}

void BackupPolicyOverview::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BackupPolicyOverview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t BackupPolicyOverview::GetBoundCount() const
{
    return m_boundCount;
}

void BackupPolicyOverview::SetBoundCount(const int64_t& _boundCount)
{
    m_boundCount = _boundCount;
    m_boundCountHasBeenSet = true;
}

bool BackupPolicyOverview::BoundCountHasBeenSet() const
{
    return m_boundCountHasBeenSet;
}

int64_t BackupPolicyOverview::GetUnboundCount() const
{
    return m_unboundCount;
}

void BackupPolicyOverview::SetUnboundCount(const int64_t& _unboundCount)
{
    m_unboundCount = _unboundCount;
    m_unboundCountHasBeenSet = true;
}

bool BackupPolicyOverview::UnboundCountHasBeenSet() const
{
    return m_unboundCountHasBeenSet;
}

