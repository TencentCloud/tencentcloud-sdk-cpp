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

#include <tencentcloud/fwm/v20250611/model/ModifyNatAclRuleSequenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

ModifyNatAclRuleSequenceRequest::ModifyNatAclRuleSequenceRequest() :
    m_groupIdHasBeenSet(false),
    m_sequencesHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

string ModifyNatAclRuleSequenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequences";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sequences.begin(); itr != m_sequences.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNatAclRuleSequenceRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyNatAclRuleSequenceRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyNatAclRuleSequenceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<SequenceIndex> ModifyNatAclRuleSequenceRequest::GetSequences() const
{
    return m_sequences;
}

void ModifyNatAclRuleSequenceRequest::SetSequences(const vector<SequenceIndex>& _sequences)
{
    m_sequences = _sequences;
    m_sequencesHasBeenSet = true;
}

bool ModifyNatAclRuleSequenceRequest::SequencesHasBeenSet() const
{
    return m_sequencesHasBeenSet;
}

int64_t ModifyNatAclRuleSequenceRequest::GetDirection() const
{
    return m_direction;
}

void ModifyNatAclRuleSequenceRequest::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool ModifyNatAclRuleSequenceRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}


