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

#include <tencentcloud/tke/v20180525/model/ModifyRollOutSequenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyRollOutSequenceRequest::ModifyRollOutSequenceRequest() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sequenceFlowsHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string ModifyRollOutSequenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceFlowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceFlows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sequenceFlows.begin(); itr != m_sequenceFlows.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyRollOutSequenceRequest::GetID() const
{
    return m_iD;
}

void ModifyRollOutSequenceRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyRollOutSequenceRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyRollOutSequenceRequest::GetName() const
{
    return m_name;
}

void ModifyRollOutSequenceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRollOutSequenceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<SequenceFlow> ModifyRollOutSequenceRequest::GetSequenceFlows() const
{
    return m_sequenceFlows;
}

void ModifyRollOutSequenceRequest::SetSequenceFlows(const vector<SequenceFlow>& _sequenceFlows)
{
    m_sequenceFlows = _sequenceFlows;
    m_sequenceFlowsHasBeenSet = true;
}

bool ModifyRollOutSequenceRequest::SequenceFlowsHasBeenSet() const
{
    return m_sequenceFlowsHasBeenSet;
}

bool ModifyRollOutSequenceRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyRollOutSequenceRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyRollOutSequenceRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


