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

#include <tencentcloud/fwm/v20250611/model/ModifyStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

ModifyStrategyRequest::ModifyStrategyRequest() :
    m_strategyIdHasBeenSet(false),
    m_receiveAccountHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_receiveGroupHasBeenSet(false)
{
}

string ModifyStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveAccount.begin(); itr != m_receiveAccount.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sequence, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveGroup.begin(); itr != m_receiveGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void ModifyStrategyRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool ModifyStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

vector<string> ModifyStrategyRequest::GetReceiveAccount() const
{
    return m_receiveAccount;
}

void ModifyStrategyRequest::SetReceiveAccount(const vector<string>& _receiveAccount)
{
    m_receiveAccount = _receiveAccount;
    m_receiveAccountHasBeenSet = true;
}

bool ModifyStrategyRequest::ReceiveAccountHasBeenSet() const
{
    return m_receiveAccountHasBeenSet;
}

int64_t ModifyStrategyRequest::GetSequence() const
{
    return m_sequence;
}

void ModifyStrategyRequest::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool ModifyStrategyRequest::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string ModifyStrategyRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyStrategyRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyStrategyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> ModifyStrategyRequest::GetReceiveGroup() const
{
    return m_receiveGroup;
}

void ModifyStrategyRequest::SetReceiveGroup(const vector<string>& _receiveGroup)
{
    m_receiveGroup = _receiveGroup;
    m_receiveGroupHasBeenSet = true;
}

bool ModifyStrategyRequest::ReceiveGroupHasBeenSet() const
{
    return m_receiveGroupHasBeenSet;
}


