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

#include <tencentcloud/csip/v20221121/model/BaselineUserOtherConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineUserOtherConf::BaselineUserOtherConf() :
    m_allowSyncHasBeenSet(false),
    m_cleanRiskWhenOfflineHasBeenSet(false),
    m_agentScanTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome BaselineUserOtherConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllowSync") && !value["AllowSync"].IsNull())
    {
        if (!value["AllowSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineUserOtherConf.AllowSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowSync = value["AllowSync"].GetBool();
        m_allowSyncHasBeenSet = true;
    }

    if (value.HasMember("CleanRiskWhenOffline") && !value["CleanRiskWhenOffline"].IsNull())
    {
        if (!value["CleanRiskWhenOffline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineUserOtherConf.CleanRiskWhenOffline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cleanRiskWhenOffline = value["CleanRiskWhenOffline"].GetBool();
        m_cleanRiskWhenOfflineHasBeenSet = true;
    }

    if (value.HasMember("AgentScanTimeout") && !value["AgentScanTimeout"].IsNull())
    {
        if (!value["AgentScanTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineUserOtherConf.AgentScanTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentScanTimeout = value["AgentScanTimeout"].GetUint64();
        m_agentScanTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineUserOtherConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allowSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowSync, allocator);
    }

    if (m_cleanRiskWhenOfflineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanRiskWhenOffline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cleanRiskWhenOffline, allocator);
    }

    if (m_agentScanTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentScanTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentScanTimeout, allocator);
    }

}


bool BaselineUserOtherConf::GetAllowSync() const
{
    return m_allowSync;
}

void BaselineUserOtherConf::SetAllowSync(const bool& _allowSync)
{
    m_allowSync = _allowSync;
    m_allowSyncHasBeenSet = true;
}

bool BaselineUserOtherConf::AllowSyncHasBeenSet() const
{
    return m_allowSyncHasBeenSet;
}

bool BaselineUserOtherConf::GetCleanRiskWhenOffline() const
{
    return m_cleanRiskWhenOffline;
}

void BaselineUserOtherConf::SetCleanRiskWhenOffline(const bool& _cleanRiskWhenOffline)
{
    m_cleanRiskWhenOffline = _cleanRiskWhenOffline;
    m_cleanRiskWhenOfflineHasBeenSet = true;
}

bool BaselineUserOtherConf::CleanRiskWhenOfflineHasBeenSet() const
{
    return m_cleanRiskWhenOfflineHasBeenSet;
}

uint64_t BaselineUserOtherConf::GetAgentScanTimeout() const
{
    return m_agentScanTimeout;
}

void BaselineUserOtherConf::SetAgentScanTimeout(const uint64_t& _agentScanTimeout)
{
    m_agentScanTimeout = _agentScanTimeout;
    m_agentScanTimeoutHasBeenSet = true;
}

bool BaselineUserOtherConf::AgentScanTimeoutHasBeenSet() const
{
    return m_agentScanTimeoutHasBeenSet;
}

