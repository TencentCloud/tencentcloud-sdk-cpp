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

#include <tencentcloud/cls/v20201016/model/ConsumerGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsumerGroup::ConsumerGroup() :
    m_groupHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_protocolNameHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ProtocolName") && !value["ProtocolName"].IsNull())
    {
        if (!value["ProtocolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup.ProtocolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolName = string(value["ProtocolName"].GetString());
        m_protocolNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolName.c_str(), allocator).Move(), allocator);
    }

}


string ConsumerGroup::GetGroup() const
{
    return m_group;
}

void ConsumerGroup::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConsumerGroup::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConsumerGroup::GetState() const
{
    return m_state;
}

void ConsumerGroup::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ConsumerGroup::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ConsumerGroup::GetProtocolName() const
{
    return m_protocolName;
}

void ConsumerGroup::SetProtocolName(const string& _protocolName)
{
    m_protocolName = _protocolName;
    m_protocolNameHasBeenSet = true;
}

bool ConsumerGroup::ProtocolNameHasBeenSet() const
{
    return m_protocolNameHasBeenSet;
}

