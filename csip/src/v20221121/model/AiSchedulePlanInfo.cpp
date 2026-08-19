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

#include <tencentcloud/csip/v20221121/model/AiSchedulePlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AiSchedulePlanInfo::AiSchedulePlanInfo() :
    m_triggerIdHasBeenSet(false),
    m_fireTimeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false)
{
}

CoreInternalOutcome AiSchedulePlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSchedulePlanInfo.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("FireTime") && !value["FireTime"].IsNull())
    {
        if (!value["FireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiSchedulePlanInfo.FireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fireTime = value["FireTime"].GetInt64();
        m_fireTimeHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiSchedulePlanInfo.TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiSchedulePlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_fireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fireTime, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

}


string AiSchedulePlanInfo::GetTriggerId() const
{
    return m_triggerId;
}

void AiSchedulePlanInfo::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AiSchedulePlanInfo::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

int64_t AiSchedulePlanInfo::GetFireTime() const
{
    return m_fireTime;
}

void AiSchedulePlanInfo::SetFireTime(const int64_t& _fireTime)
{
    m_fireTime = _fireTime;
    m_fireTimeHasBeenSet = true;
}

bool AiSchedulePlanInfo::FireTimeHasBeenSet() const
{
    return m_fireTimeHasBeenSet;
}

int64_t AiSchedulePlanInfo::GetTriggerType() const
{
    return m_triggerType;
}

void AiSchedulePlanInfo::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AiSchedulePlanInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

