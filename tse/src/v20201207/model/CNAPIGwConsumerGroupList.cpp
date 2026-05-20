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

#include <tencentcloud/tse/v20201207/model/CNAPIGwConsumerGroupList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CNAPIGwConsumerGroupList::CNAPIGwConsumerGroupList() :
    m_totalCountHasBeenSet(false),
    m_consumerGroupsHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwConsumerGroupList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroupList.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroups") && !value["ConsumerGroups"].IsNull())
    {
        if (!value["ConsumerGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroupList.ConsumerGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumerGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CNAPIGwConsumerGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumerGroups.push_back(item);
        }
        m_consumerGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwConsumerGroupList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_consumerGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumerGroups.begin(); itr != m_consumerGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CNAPIGwConsumerGroupList::GetTotalCount() const
{
    return m_totalCount;
}

void CNAPIGwConsumerGroupList::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CNAPIGwConsumerGroupList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CNAPIGwConsumerGroup> CNAPIGwConsumerGroupList::GetConsumerGroups() const
{
    return m_consumerGroups;
}

void CNAPIGwConsumerGroupList::SetConsumerGroups(const vector<CNAPIGwConsumerGroup>& _consumerGroups)
{
    m_consumerGroups = _consumerGroups;
    m_consumerGroupsHasBeenSet = true;
}

bool CNAPIGwConsumerGroupList::ConsumerGroupsHasBeenSet() const
{
    return m_consumerGroupsHasBeenSet;
}

