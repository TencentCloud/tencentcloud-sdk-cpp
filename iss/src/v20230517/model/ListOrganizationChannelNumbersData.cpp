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

#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelNumbersData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListOrganizationChannelNumbersData::ListOrganizationChannelNumbersData() :
    m_totalCountHasBeenSet(false),
    m_notInPlanCountHasBeenSet(false)
{
}

CoreInternalOutcome ListOrganizationChannelNumbersData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelNumbersData.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("NotInPlanCount") && !value["NotInPlanCount"].IsNull())
    {
        if (!value["NotInPlanCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelNumbersData.NotInPlanCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notInPlanCount = value["NotInPlanCount"].GetInt64();
        m_notInPlanCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListOrganizationChannelNumbersData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_notInPlanCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotInPlanCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notInPlanCount, allocator);
    }

}


int64_t ListOrganizationChannelNumbersData::GetTotalCount() const
{
    return m_totalCount;
}

void ListOrganizationChannelNumbersData::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListOrganizationChannelNumbersData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t ListOrganizationChannelNumbersData::GetNotInPlanCount() const
{
    return m_notInPlanCount;
}

void ListOrganizationChannelNumbersData::SetNotInPlanCount(const int64_t& _notInPlanCount)
{
    m_notInPlanCount = _notInPlanCount;
    m_notInPlanCountHasBeenSet = true;
}

bool ListOrganizationChannelNumbersData::NotInPlanCountHasBeenSet() const
{
    return m_notInPlanCountHasBeenSet;
}

