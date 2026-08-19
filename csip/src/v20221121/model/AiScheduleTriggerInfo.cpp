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

#include <tencentcloud/csip/v20221121/model/AiScheduleTriggerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AiScheduleTriggerInfo::AiScheduleTriggerInfo() :
    m_triggerIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false)
{
}

CoreInternalOutcome AiScheduleTriggerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTriggerInfo.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTriggerInfo.TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiScheduleTriggerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

}


string AiScheduleTriggerInfo::GetTriggerId() const
{
    return m_triggerId;
}

void AiScheduleTriggerInfo::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AiScheduleTriggerInfo::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

int64_t AiScheduleTriggerInfo::GetTriggerType() const
{
    return m_triggerType;
}

void AiScheduleTriggerInfo::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AiScheduleTriggerInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

