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

#include <tencentcloud/dbbrain/v20210527/model/IssueTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

IssueTypeInfo::IssueTypeInfo() :
    m_issueTypeHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome IssueTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IssueType") && !value["IssueType"].IsNull())
    {
        if (!value["IssueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueTypeInfo.IssueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueType = string(value["IssueType"].GetString());
        m_issueTypeHasBeenSet = true;
    }

    if (value.HasMember("Events") && !value["Events"].IsNull())
    {
        if (!value["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IssueTypeInfo.Events` is not array type"));

        const rapidjson::Value &tmpValue = value["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IssueTypeInfo.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IssueTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


string IssueTypeInfo::GetIssueType() const
{
    return m_issueType;
}

void IssueTypeInfo::SetIssueType(const string& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool IssueTypeInfo::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

vector<EventInfo> IssueTypeInfo::GetEvents() const
{
    return m_events;
}

void IssueTypeInfo::SetEvents(const vector<EventInfo>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool IssueTypeInfo::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

int64_t IssueTypeInfo::GetTotalCount() const
{
    return m_totalCount;
}

void IssueTypeInfo::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool IssueTypeInfo::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

