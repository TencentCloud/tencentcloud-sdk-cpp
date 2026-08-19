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

#include <tencentcloud/csip/v20221121/model/ModifyAgentRunModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAgentRunModeRequest::ModifyAgentRunModeRequest() :
    m_memberIdHasBeenSet(false),
    m_customPolicyHasBeenSet(false),
    m_advanceModeQuuidsHasBeenSet(false),
    m_customModeQuuidsHasBeenSet(false),
    m_enhanceLogModeHasBeenSet(false),
    m_malwarePocModeHasBeenSet(false),
    m_reportSourcePortHasBeenSet(false),
    m_logCollectSettingsHasBeenSet(false)
{
}

string ModifyAgentRunModeRequest::ToJsonString() const
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

    if (m_advanceModeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceModeQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advanceModeQuuids.begin(); itr != m_advanceModeQuuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customModeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomModeQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customModeQuuids.begin(); itr != m_customModeQuuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enhanceLogModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceLogMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enhanceLogMode, allocator);
    }

    if (m_malwarePocModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwarePocMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_malwarePocMode, allocator);
    }

    if (m_reportSourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportSourcePort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportSourcePort, allocator);
    }

    if (m_logCollectSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logCollectSettings.begin(); itr != m_logCollectSettings.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAgentRunModeRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAgentRunModeRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

CustomAgentRunModePolicy ModifyAgentRunModeRequest::GetCustomPolicy() const
{
    return m_customPolicy;
}

void ModifyAgentRunModeRequest::SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy)
{
    m_customPolicy = _customPolicy;
    m_customPolicyHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}

vector<string> ModifyAgentRunModeRequest::GetAdvanceModeQuuids() const
{
    return m_advanceModeQuuids;
}

void ModifyAgentRunModeRequest::SetAdvanceModeQuuids(const vector<string>& _advanceModeQuuids)
{
    m_advanceModeQuuids = _advanceModeQuuids;
    m_advanceModeQuuidsHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::AdvanceModeQuuidsHasBeenSet() const
{
    return m_advanceModeQuuidsHasBeenSet;
}

vector<string> ModifyAgentRunModeRequest::GetCustomModeQuuids() const
{
    return m_customModeQuuids;
}

void ModifyAgentRunModeRequest::SetCustomModeQuuids(const vector<string>& _customModeQuuids)
{
    m_customModeQuuids = _customModeQuuids;
    m_customModeQuuidsHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::CustomModeQuuidsHasBeenSet() const
{
    return m_customModeQuuidsHasBeenSet;
}

uint64_t ModifyAgentRunModeRequest::GetEnhanceLogMode() const
{
    return m_enhanceLogMode;
}

void ModifyAgentRunModeRequest::SetEnhanceLogMode(const uint64_t& _enhanceLogMode)
{
    m_enhanceLogMode = _enhanceLogMode;
    m_enhanceLogModeHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::EnhanceLogModeHasBeenSet() const
{
    return m_enhanceLogModeHasBeenSet;
}

uint64_t ModifyAgentRunModeRequest::GetMalwarePocMode() const
{
    return m_malwarePocMode;
}

void ModifyAgentRunModeRequest::SetMalwarePocMode(const uint64_t& _malwarePocMode)
{
    m_malwarePocMode = _malwarePocMode;
    m_malwarePocModeHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::MalwarePocModeHasBeenSet() const
{
    return m_malwarePocModeHasBeenSet;
}

uint64_t ModifyAgentRunModeRequest::GetReportSourcePort() const
{
    return m_reportSourcePort;
}

void ModifyAgentRunModeRequest::SetReportSourcePort(const uint64_t& _reportSourcePort)
{
    m_reportSourcePort = _reportSourcePort;
    m_reportSourcePortHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::ReportSourcePortHasBeenSet() const
{
    return m_reportSourcePortHasBeenSet;
}

vector<string> ModifyAgentRunModeRequest::GetLogCollectSettings() const
{
    return m_logCollectSettings;
}

void ModifyAgentRunModeRequest::SetLogCollectSettings(const vector<string>& _logCollectSettings)
{
    m_logCollectSettings = _logCollectSettings;
    m_logCollectSettingsHasBeenSet = true;
}

bool ModifyAgentRunModeRequest::LogCollectSettingsHasBeenSet() const
{
    return m_logCollectSettingsHasBeenSet;
}


