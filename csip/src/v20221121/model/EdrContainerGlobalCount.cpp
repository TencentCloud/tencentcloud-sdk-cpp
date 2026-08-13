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

#include <tencentcloud/csip/v20221121/model/EdrContainerGlobalCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrContainerGlobalCount::EdrContainerGlobalCount() :
    m_totalCountHasBeenSet(false),
    m_clustersCountHasBeenSet(false)
{
}

CoreInternalOutcome EdrContainerGlobalCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrContainerGlobalCount.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ClustersCount") && !value["ClustersCount"].IsNull())
    {
        if (!value["ClustersCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrContainerGlobalCount.ClustersCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clustersCount = value["ClustersCount"].GetUint64();
        m_clustersCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrContainerGlobalCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_clustersCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClustersCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clustersCount, allocator);
    }

}


int64_t EdrContainerGlobalCount::GetTotalCount() const
{
    return m_totalCount;
}

void EdrContainerGlobalCount::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool EdrContainerGlobalCount::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t EdrContainerGlobalCount::GetClustersCount() const
{
    return m_clustersCount;
}

void EdrContainerGlobalCount::SetClustersCount(const uint64_t& _clustersCount)
{
    m_clustersCount = _clustersCount;
    m_clustersCountHasBeenSet = true;
}

bool EdrContainerGlobalCount::ClustersCountHasBeenSet() const
{
    return m_clustersCountHasBeenSet;
}

