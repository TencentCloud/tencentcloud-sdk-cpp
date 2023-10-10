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

#include <tencentcloud/cwp/v20180228/model/VulOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulOverview::VulOverview() :
    m_totalCountHasBeenSet(false),
    m_todayCountHasBeenSet(false)
{
}

CoreInternalOutcome VulOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulOverview.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TodayCount") && !value["TodayCount"].IsNull())
    {
        if (!value["TodayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulOverview.TodayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_todayCount = value["TodayCount"].GetInt64();
        m_todayCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_todayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TodayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayCount, allocator);
    }

}


uint64_t VulOverview::GetTotalCount() const
{
    return m_totalCount;
}

void VulOverview::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool VulOverview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t VulOverview::GetTodayCount() const
{
    return m_todayCount;
}

void VulOverview::SetTodayCount(const int64_t& _todayCount)
{
    m_todayCount = _todayCount;
    m_todayCountHasBeenSet = true;
}

bool VulOverview::TodayCountHasBeenSet() const
{
    return m_todayCountHasBeenSet;
}

