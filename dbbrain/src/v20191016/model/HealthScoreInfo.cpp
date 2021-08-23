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

#include <tencentcloud/dbbrain/v20191016/model/HealthScoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

HealthScoreInfo::HealthScoreInfo() :
    m_issueTypesHasBeenSet(false),
    m_eventsTotalCountHasBeenSet(false),
    m_healthScoreHasBeenSet(false),
    m_healthLevelHasBeenSet(false)
{
}

CoreInternalOutcome HealthScoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IssueTypes") && !value["IssueTypes"].IsNull())
    {
        if (!value["IssueTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthScoreInfo.IssueTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["IssueTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IssueTypeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_issueTypes.push_back(item);
        }
        m_issueTypesHasBeenSet = true;
    }

    if (value.HasMember("EventsTotalCount") && !value["EventsTotalCount"].IsNull())
    {
        if (!value["EventsTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreInfo.EventsTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventsTotalCount = value["EventsTotalCount"].GetInt64();
        m_eventsTotalCountHasBeenSet = true;
    }

    if (value.HasMember("HealthScore") && !value["HealthScore"].IsNull())
    {
        if (!value["HealthScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreInfo.HealthScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthScore = value["HealthScore"].GetInt64();
        m_healthScoreHasBeenSet = true;
    }

    if (value.HasMember("HealthLevel") && !value["HealthLevel"].IsNull())
    {
        if (!value["HealthLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreInfo.HealthLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthLevel = string(value["HealthLevel"].GetString());
        m_healthLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthScoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issueTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_issueTypes.begin(); itr != m_issueTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventsTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventsTotalCount, allocator);
    }

    if (m_healthScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthScore, allocator);
    }

    if (m_healthLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthLevel.c_str(), allocator).Move(), allocator);
    }

}


vector<IssueTypeInfo> HealthScoreInfo::GetIssueTypes() const
{
    return m_issueTypes;
}

void HealthScoreInfo::SetIssueTypes(const vector<IssueTypeInfo>& _issueTypes)
{
    m_issueTypes = _issueTypes;
    m_issueTypesHasBeenSet = true;
}

bool HealthScoreInfo::IssueTypesHasBeenSet() const
{
    return m_issueTypesHasBeenSet;
}

int64_t HealthScoreInfo::GetEventsTotalCount() const
{
    return m_eventsTotalCount;
}

void HealthScoreInfo::SetEventsTotalCount(const int64_t& _eventsTotalCount)
{
    m_eventsTotalCount = _eventsTotalCount;
    m_eventsTotalCountHasBeenSet = true;
}

bool HealthScoreInfo::EventsTotalCountHasBeenSet() const
{
    return m_eventsTotalCountHasBeenSet;
}

int64_t HealthScoreInfo::GetHealthScore() const
{
    return m_healthScore;
}

void HealthScoreInfo::SetHealthScore(const int64_t& _healthScore)
{
    m_healthScore = _healthScore;
    m_healthScoreHasBeenSet = true;
}

bool HealthScoreInfo::HealthScoreHasBeenSet() const
{
    return m_healthScoreHasBeenSet;
}

string HealthScoreInfo::GetHealthLevel() const
{
    return m_healthLevel;
}

void HealthScoreInfo::SetHealthLevel(const string& _healthLevel)
{
    m_healthLevel = _healthLevel;
    m_healthLevelHasBeenSet = true;
}

bool HealthScoreInfo::HealthLevelHasBeenSet() const
{
    return m_healthLevelHasBeenSet;
}

