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

#include <tencentcloud/tke/v20180525/model/CreateRollOutSequenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateRollOutSequenceRequest::CreateRollOutSequenceRequest() :
    m_nameHasBeenSet(false),
    m_sequenceFlowsHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string CreateRollOutSequenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateRollOutSequenceRequest::GetName() const
{
    return m_name;
}

void CreateRollOutSequenceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRollOutSequenceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<SequenceFlow> CreateRollOutSequenceRequest::GetSequenceFlows() const
{
    return m_sequenceFlows;
}

void CreateRollOutSequenceRequest::SetSequenceFlows(const vector<SequenceFlow>& _sequenceFlows)
{
    m_sequenceFlows = _sequenceFlows;
    m_sequenceFlowsHasBeenSet = true;
}

bool CreateRollOutSequenceRequest::SequenceFlowsHasBeenSet() const
{
    return m_sequenceFlowsHasBeenSet;
}

bool CreateRollOutSequenceRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateRollOutSequenceRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateRollOutSequenceRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


