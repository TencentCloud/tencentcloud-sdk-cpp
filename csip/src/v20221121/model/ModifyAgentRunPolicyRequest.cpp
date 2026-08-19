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

#include <tencentcloud/csip/v20221121/model/ModifyAgentRunPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAgentRunPolicyRequest::ModifyAgentRunPolicyRequest() :
    m_memberIdHasBeenSet(false),
    m_customPolicyHasBeenSet(false),
    m_advanceModeInstanceIDsHasBeenSet(false),
    m_customModeInstanceIDsHasBeenSet(false)
{
}

string ModifyAgentRunPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_advanceModeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceModeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advanceModeInstanceIDs.begin(); itr != m_advanceModeInstanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customModeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomModeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customModeInstanceIDs.begin(); itr != m_customModeInstanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAgentRunPolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAgentRunPolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAgentRunPolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

CustomAgentRunModePolicy ModifyAgentRunPolicyRequest::GetCustomPolicy() const
{
    return m_customPolicy;
}

void ModifyAgentRunPolicyRequest::SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy)
{
    m_customPolicy = _customPolicy;
    m_customPolicyHasBeenSet = true;
}

bool ModifyAgentRunPolicyRequest::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}

vector<string> ModifyAgentRunPolicyRequest::GetAdvanceModeInstanceIDs() const
{
    return m_advanceModeInstanceIDs;
}

void ModifyAgentRunPolicyRequest::SetAdvanceModeInstanceIDs(const vector<string>& _advanceModeInstanceIDs)
{
    m_advanceModeInstanceIDs = _advanceModeInstanceIDs;
    m_advanceModeInstanceIDsHasBeenSet = true;
}

bool ModifyAgentRunPolicyRequest::AdvanceModeInstanceIDsHasBeenSet() const
{
    return m_advanceModeInstanceIDsHasBeenSet;
}

vector<string> ModifyAgentRunPolicyRequest::GetCustomModeInstanceIDs() const
{
    return m_customModeInstanceIDs;
}

void ModifyAgentRunPolicyRequest::SetCustomModeInstanceIDs(const vector<string>& _customModeInstanceIDs)
{
    m_customModeInstanceIDs = _customModeInstanceIDs;
    m_customModeInstanceIDsHasBeenSet = true;
}

bool ModifyAgentRunPolicyRequest::CustomModeInstanceIDsHasBeenSet() const
{
    return m_customModeInstanceIDsHasBeenSet;
}


