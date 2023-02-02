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

#include <tencentcloud/ckafka/v20190819/model/GroupResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

GroupResponse::GroupResponse() :
    m_totalCountHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_groupCountQuotaHasBeenSet(false)
{
}

CoreInternalOutcome GroupResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResponse.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("GroupList") && !value["GroupList"].IsNull())
    {
        if (!value["GroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupResponse.GroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupList.push_back(item);
        }
        m_groupListHasBeenSet = true;
    }

    if (value.HasMember("GroupCountQuota") && !value["GroupCountQuota"].IsNull())
    {
        if (!value["GroupCountQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResponse.GroupCountQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCountQuota = value["GroupCountQuota"].GetUint64();
        m_groupCountQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_groupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupList.begin(); itr != m_groupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupCountQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCountQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCountQuota, allocator);
    }

}


int64_t GroupResponse::GetTotalCount() const
{
    return m_totalCount;
}

void GroupResponse::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool GroupResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DescribeGroup> GroupResponse::GetGroupList() const
{
    return m_groupList;
}

void GroupResponse::SetGroupList(const vector<DescribeGroup>& _groupList)
{
    m_groupList = _groupList;
    m_groupListHasBeenSet = true;
}

bool GroupResponse::GroupListHasBeenSet() const
{
    return m_groupListHasBeenSet;
}

uint64_t GroupResponse::GetGroupCountQuota() const
{
    return m_groupCountQuota;
}

void GroupResponse::SetGroupCountQuota(const uint64_t& _groupCountQuota)
{
    m_groupCountQuota = _groupCountQuota;
    m_groupCountQuotaHasBeenSet = true;
}

bool GroupResponse::GroupCountQuotaHasBeenSet() const
{
    return m_groupCountQuotaHasBeenSet;
}

