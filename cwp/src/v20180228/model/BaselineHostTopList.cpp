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

#include <tencentcloud/cwp/v20180228/model/BaselineHostTopList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineHostTopList::BaselineHostTopList() :
    m_eventLevelListHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome BaselineHostTopList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventLevelList") && !value["EventLevelList"].IsNull())
    {
        if (!value["EventLevelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineHostTopList.EventLevelList` is not array type"));

        const rapidjson::Value &tmpValue = value["EventLevelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineEventLevelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventLevelList.push_back(item);
        }
        m_eventLevelListHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostTopList.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostTopList.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostTopList.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineHostTopList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLevelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventLevelList.begin(); itr != m_eventLevelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


vector<BaselineEventLevelInfo> BaselineHostTopList::GetEventLevelList() const
{
    return m_eventLevelList;
}

void BaselineHostTopList::SetEventLevelList(const vector<BaselineEventLevelInfo>& _eventLevelList)
{
    m_eventLevelList = _eventLevelList;
    m_eventLevelListHasBeenSet = true;
}

bool BaselineHostTopList::EventLevelListHasBeenSet() const
{
    return m_eventLevelListHasBeenSet;
}

string BaselineHostTopList::GetHostName() const
{
    return m_hostName;
}

void BaselineHostTopList::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool BaselineHostTopList::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string BaselineHostTopList::GetQuuid() const
{
    return m_quuid;
}

void BaselineHostTopList::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BaselineHostTopList::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t BaselineHostTopList::GetScore() const
{
    return m_score;
}

void BaselineHostTopList::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool BaselineHostTopList::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

