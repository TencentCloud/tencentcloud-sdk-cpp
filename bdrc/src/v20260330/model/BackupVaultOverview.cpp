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

#include <tencentcloud/bdrc/v20260330/model/BackupVaultOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupVaultOverview::BackupVaultOverview() :
    m_totalCountHasBeenSet(false),
    m_totalSizeMbHasBeenSet(false)
{
}

CoreInternalOutcome BackupVaultOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVaultOverview.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSizeMb") && !value["TotalSizeMb"].IsNull())
    {
        if (!value["TotalSizeMb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVaultOverview.TotalSizeMb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSizeMb = value["TotalSizeMb"].GetInt64();
        m_totalSizeMbHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupVaultOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_totalSizeMbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSizeMb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSizeMb, allocator);
    }

}


int64_t BackupVaultOverview::GetTotalCount() const
{
    return m_totalCount;
}

void BackupVaultOverview::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BackupVaultOverview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t BackupVaultOverview::GetTotalSizeMb() const
{
    return m_totalSizeMb;
}

void BackupVaultOverview::SetTotalSizeMb(const int64_t& _totalSizeMb)
{
    m_totalSizeMb = _totalSizeMb;
    m_totalSizeMbHasBeenSet = true;
}

bool BackupVaultOverview::TotalSizeMbHasBeenSet() const
{
    return m_totalSizeMbHasBeenSet;
}

