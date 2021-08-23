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

#include <tencentcloud/ckafka/v20190819/model/TopicSubscribeGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicSubscribeGroup::TopicSubscribeGroup() :
    m_totalCountHasBeenSet(false),
    m_statusCountInfoHasBeenSet(false),
    m_groupsInfoHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome TopicSubscribeGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSubscribeGroup.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("StatusCountInfo") && !value["StatusCountInfo"].IsNull())
    {
        if (!value["StatusCountInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSubscribeGroup.StatusCountInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCountInfo = string(value["StatusCountInfo"].GetString());
        m_statusCountInfoHasBeenSet = true;
    }

    if (value.HasMember("GroupsInfo") && !value["GroupsInfo"].IsNull())
    {
        if (!value["GroupsInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicSubscribeGroup.GroupsInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupsInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfoResponse item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupsInfo.push_back(item);
        }
        m_groupsInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSubscribeGroup.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicSubscribeGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_statusCountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusCountInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupsInfo.begin(); itr != m_groupsInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t TopicSubscribeGroup::GetTotalCount() const
{
    return m_totalCount;
}

void TopicSubscribeGroup::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TopicSubscribeGroup::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string TopicSubscribeGroup::GetStatusCountInfo() const
{
    return m_statusCountInfo;
}

void TopicSubscribeGroup::SetStatusCountInfo(const string& _statusCountInfo)
{
    m_statusCountInfo = _statusCountInfo;
    m_statusCountInfoHasBeenSet = true;
}

bool TopicSubscribeGroup::StatusCountInfoHasBeenSet() const
{
    return m_statusCountInfoHasBeenSet;
}

vector<GroupInfoResponse> TopicSubscribeGroup::GetGroupsInfo() const
{
    return m_groupsInfo;
}

void TopicSubscribeGroup::SetGroupsInfo(const vector<GroupInfoResponse>& _groupsInfo)
{
    m_groupsInfo = _groupsInfo;
    m_groupsInfoHasBeenSet = true;
}

bool TopicSubscribeGroup::GroupsInfoHasBeenSet() const
{
    return m_groupsInfoHasBeenSet;
}

int64_t TopicSubscribeGroup::GetStatus() const
{
    return m_status;
}

void TopicSubscribeGroup::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TopicSubscribeGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

