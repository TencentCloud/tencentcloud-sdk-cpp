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

#include <tencentcloud/ccc/v20200210/model/NumberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

NumberInfo::NumberInfo() :
    m_numberHasBeenSet(false),
    m_callOutSkillGroupIdsHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome NumberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NumberInfo.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("CallOutSkillGroupIds") && !value["CallOutSkillGroupIds"].IsNull())
    {
        if (!value["CallOutSkillGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NumberInfo.CallOutSkillGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CallOutSkillGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callOutSkillGroupIds.push_back((*itr).GetUint64());
        }
        m_callOutSkillGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NumberInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NumberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_callOutSkillGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallOutSkillGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callOutSkillGroupIds.begin(); itr != m_callOutSkillGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string NumberInfo::GetNumber() const
{
    return m_number;
}

void NumberInfo::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool NumberInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

vector<uint64_t> NumberInfo::GetCallOutSkillGroupIds() const
{
    return m_callOutSkillGroupIds;
}

void NumberInfo::SetCallOutSkillGroupIds(const vector<uint64_t>& _callOutSkillGroupIds)
{
    m_callOutSkillGroupIds = _callOutSkillGroupIds;
    m_callOutSkillGroupIdsHasBeenSet = true;
}

bool NumberInfo::CallOutSkillGroupIdsHasBeenSet() const
{
    return m_callOutSkillGroupIdsHasBeenSet;
}

int64_t NumberInfo::GetState() const
{
    return m_state;
}

void NumberInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NumberInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

