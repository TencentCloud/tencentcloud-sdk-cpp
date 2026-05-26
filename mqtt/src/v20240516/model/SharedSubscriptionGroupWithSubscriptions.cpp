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

#include <tencentcloud/mqtt/v20240516/model/SharedSubscriptionGroupWithSubscriptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

SharedSubscriptionGroupWithSubscriptions::SharedSubscriptionGroupWithSubscriptions() :
    m_sharedNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_topicFiltersHasBeenSet(false)
{
}

CoreInternalOutcome SharedSubscriptionGroupWithSubscriptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SharedName") && !value["SharedName"].IsNull())
    {
        if (!value["SharedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionGroupWithSubscriptions.SharedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedName = string(value["SharedName"].GetString());
        m_sharedNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionGroupWithSubscriptions.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionGroupWithSubscriptions.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TopicFilters") && !value["TopicFilters"].IsNull())
    {
        if (!value["TopicFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionGroupWithSubscriptions.TopicFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_topicFilters.push_back((*itr).GetString());
        }
        m_topicFiltersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SharedSubscriptionGroupWithSubscriptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sharedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_topicFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicFilters.begin(); itr != m_topicFilters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SharedSubscriptionGroupWithSubscriptions::GetSharedName() const
{
    return m_sharedName;
}

void SharedSubscriptionGroupWithSubscriptions::SetSharedName(const string& _sharedName)
{
    m_sharedName = _sharedName;
    m_sharedNameHasBeenSet = true;
}

bool SharedSubscriptionGroupWithSubscriptions::SharedNameHasBeenSet() const
{
    return m_sharedNameHasBeenSet;
}

int64_t SharedSubscriptionGroupWithSubscriptions::GetCreateTime() const
{
    return m_createTime;
}

void SharedSubscriptionGroupWithSubscriptions::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SharedSubscriptionGroupWithSubscriptions::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t SharedSubscriptionGroupWithSubscriptions::GetUpdateTime() const
{
    return m_updateTime;
}

void SharedSubscriptionGroupWithSubscriptions::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SharedSubscriptionGroupWithSubscriptions::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> SharedSubscriptionGroupWithSubscriptions::GetTopicFilters() const
{
    return m_topicFilters;
}

void SharedSubscriptionGroupWithSubscriptions::SetTopicFilters(const vector<string>& _topicFilters)
{
    m_topicFilters = _topicFilters;
    m_topicFiltersHasBeenSet = true;
}

bool SharedSubscriptionGroupWithSubscriptions::TopicFiltersHasBeenSet() const
{
    return m_topicFiltersHasBeenSet;
}

