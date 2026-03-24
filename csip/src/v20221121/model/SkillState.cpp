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

#include <tencentcloud/csip/v20221121/model/SkillState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SkillState::SkillState() :
    m_skillInstallStatusHasBeenSet(false),
    m_skillInstallTimeHasBeenSet(false),
    m_skillInstallResultHasBeenSet(false)
{
}

CoreInternalOutcome SkillState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillInstallStatus") && !value["SkillInstallStatus"].IsNull())
    {
        if (!value["SkillInstallStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillState.SkillInstallStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillInstallStatus = value["SkillInstallStatus"].GetInt64();
        m_skillInstallStatusHasBeenSet = true;
    }

    if (value.HasMember("SkillInstallTime") && !value["SkillInstallTime"].IsNull())
    {
        if (!value["SkillInstallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillState.SkillInstallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillInstallTime = string(value["SkillInstallTime"].GetString());
        m_skillInstallTimeHasBeenSet = true;
    }

    if (value.HasMember("SkillInstallResult") && !value["SkillInstallResult"].IsNull())
    {
        if (!value["SkillInstallResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillState.SkillInstallResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillInstallResult = string(value["SkillInstallResult"].GetString());
        m_skillInstallResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillInstallStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillInstallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillInstallStatus, allocator);
    }

    if (m_skillInstallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillInstallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillInstallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_skillInstallResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillInstallResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillInstallResult.c_str(), allocator).Move(), allocator);
    }

}


int64_t SkillState::GetSkillInstallStatus() const
{
    return m_skillInstallStatus;
}

void SkillState::SetSkillInstallStatus(const int64_t& _skillInstallStatus)
{
    m_skillInstallStatus = _skillInstallStatus;
    m_skillInstallStatusHasBeenSet = true;
}

bool SkillState::SkillInstallStatusHasBeenSet() const
{
    return m_skillInstallStatusHasBeenSet;
}

string SkillState::GetSkillInstallTime() const
{
    return m_skillInstallTime;
}

void SkillState::SetSkillInstallTime(const string& _skillInstallTime)
{
    m_skillInstallTime = _skillInstallTime;
    m_skillInstallTimeHasBeenSet = true;
}

bool SkillState::SkillInstallTimeHasBeenSet() const
{
    return m_skillInstallTimeHasBeenSet;
}

string SkillState::GetSkillInstallResult() const
{
    return m_skillInstallResult;
}

void SkillState::SetSkillInstallResult(const string& _skillInstallResult)
{
    m_skillInstallResult = _skillInstallResult;
    m_skillInstallResultHasBeenSet = true;
}

bool SkillState::SkillInstallResultHasBeenSet() const
{
    return m_skillInstallResultHasBeenSet;
}

