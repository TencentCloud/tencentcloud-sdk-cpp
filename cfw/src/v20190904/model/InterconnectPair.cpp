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

#include <tencentcloud/cfw/v20190904/model/InterconnectPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

InterconnectPair::InterconnectPair() :
    m_groupAHasBeenSet(false),
    m_groupBHasBeenSet(false),
    m_interconnectModeHasBeenSet(false)
{
}

CoreInternalOutcome InterconnectPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupA") && !value["GroupA"].IsNull())
    {
        if (!value["GroupA"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InterconnectPair.GroupA` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupA"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupA.push_back(item);
        }
        m_groupAHasBeenSet = true;
    }

    if (value.HasMember("GroupB") && !value["GroupB"].IsNull())
    {
        if (!value["GroupB"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InterconnectPair.GroupB` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupB"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupB.push_back(item);
        }
        m_groupBHasBeenSet = true;
    }

    if (value.HasMember("InterconnectMode") && !value["InterconnectMode"].IsNull())
    {
        if (!value["InterconnectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InterconnectPair.InterconnectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interconnectMode = string(value["InterconnectMode"].GetString());
        m_interconnectModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InterconnectPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupA.begin(); itr != m_groupA.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupB.begin(); itr != m_groupB.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_interconnectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterconnectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interconnectMode.c_str(), allocator).Move(), allocator);
    }

}


vector<AccessInstanceInfo> InterconnectPair::GetGroupA() const
{
    return m_groupA;
}

void InterconnectPair::SetGroupA(const vector<AccessInstanceInfo>& _groupA)
{
    m_groupA = _groupA;
    m_groupAHasBeenSet = true;
}

bool InterconnectPair::GroupAHasBeenSet() const
{
    return m_groupAHasBeenSet;
}

vector<AccessInstanceInfo> InterconnectPair::GetGroupB() const
{
    return m_groupB;
}

void InterconnectPair::SetGroupB(const vector<AccessInstanceInfo>& _groupB)
{
    m_groupB = _groupB;
    m_groupBHasBeenSet = true;
}

bool InterconnectPair::GroupBHasBeenSet() const
{
    return m_groupBHasBeenSet;
}

string InterconnectPair::GetInterconnectMode() const
{
    return m_interconnectMode;
}

void InterconnectPair::SetInterconnectMode(const string& _interconnectMode)
{
    m_interconnectMode = _interconnectMode;
    m_interconnectModeHasBeenSet = true;
}

bool InterconnectPair::InterconnectModeHasBeenSet() const
{
    return m_interconnectModeHasBeenSet;
}

