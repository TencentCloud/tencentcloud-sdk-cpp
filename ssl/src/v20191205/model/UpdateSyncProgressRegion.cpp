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

#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgressRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UpdateSyncProgressRegion::UpdateSyncProgressRegion() :
    m_regionHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_offsetCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UpdateSyncProgressRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgressRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgressRegion.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("OffsetCount") && !value["OffsetCount"].IsNull())
    {
        if (!value["OffsetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgressRegion.OffsetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetCount = value["OffsetCount"].GetInt64();
        m_offsetCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgressRegion.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateSyncProgressRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_offsetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string UpdateSyncProgressRegion::GetRegion() const
{
    return m_region;
}

void UpdateSyncProgressRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UpdateSyncProgressRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t UpdateSyncProgressRegion::GetTotalCount() const
{
    return m_totalCount;
}

void UpdateSyncProgressRegion::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool UpdateSyncProgressRegion::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t UpdateSyncProgressRegion::GetOffsetCount() const
{
    return m_offsetCount;
}

void UpdateSyncProgressRegion::SetOffsetCount(const int64_t& _offsetCount)
{
    m_offsetCount = _offsetCount;
    m_offsetCountHasBeenSet = true;
}

bool UpdateSyncProgressRegion::OffsetCountHasBeenSet() const
{
    return m_offsetCountHasBeenSet;
}

int64_t UpdateSyncProgressRegion::GetStatus() const
{
    return m_status;
}

void UpdateSyncProgressRegion::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateSyncProgressRegion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

