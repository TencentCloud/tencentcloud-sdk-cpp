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

#include <tencentcloud/wedata/v20250806/model/UpdateTriggerTaskPart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateTriggerTaskPart::UpdateTriggerTaskPart() :
    m_triggerTaskBaseAttributeHasBeenSet(false),
    m_triggerTaskConfigurationHasBeenSet(false),
    m_triggerTaskSchedulerConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome UpdateTriggerTaskPart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerTaskBaseAttribute") && !value["TriggerTaskBaseAttribute"].IsNull())
    {
        if (!value["TriggerTaskBaseAttribute"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTriggerTaskPart.TriggerTaskBaseAttribute` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerTaskBaseAttribute.Deserialize(value["TriggerTaskBaseAttribute"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerTaskBaseAttributeHasBeenSet = true;
    }

    if (value.HasMember("TriggerTaskConfiguration") && !value["TriggerTaskConfiguration"].IsNull())
    {
        if (!value["TriggerTaskConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTriggerTaskPart.TriggerTaskConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerTaskConfiguration.Deserialize(value["TriggerTaskConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerTaskConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TriggerTaskSchedulerConfiguration") && !value["TriggerTaskSchedulerConfiguration"].IsNull())
    {
        if (!value["TriggerTaskSchedulerConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTriggerTaskPart.TriggerTaskSchedulerConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerTaskSchedulerConfiguration.Deserialize(value["TriggerTaskSchedulerConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerTaskSchedulerConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateTriggerTaskPart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerTaskBaseAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskBaseAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskBaseAttribute.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerTaskConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerTaskSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskSchedulerConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


UpdateTriggerTaskBaseAttributePart UpdateTriggerTaskPart::GetTriggerTaskBaseAttribute() const
{
    return m_triggerTaskBaseAttribute;
}

void UpdateTriggerTaskPart::SetTriggerTaskBaseAttribute(const UpdateTriggerTaskBaseAttributePart& _triggerTaskBaseAttribute)
{
    m_triggerTaskBaseAttribute = _triggerTaskBaseAttribute;
    m_triggerTaskBaseAttributeHasBeenSet = true;
}

bool UpdateTriggerTaskPart::TriggerTaskBaseAttributeHasBeenSet() const
{
    return m_triggerTaskBaseAttributeHasBeenSet;
}

TriggerTaskConfiguration UpdateTriggerTaskPart::GetTriggerTaskConfiguration() const
{
    return m_triggerTaskConfiguration;
}

void UpdateTriggerTaskPart::SetTriggerTaskConfiguration(const TriggerTaskConfiguration& _triggerTaskConfiguration)
{
    m_triggerTaskConfiguration = _triggerTaskConfiguration;
    m_triggerTaskConfigurationHasBeenSet = true;
}

bool UpdateTriggerTaskPart::TriggerTaskConfigurationHasBeenSet() const
{
    return m_triggerTaskConfigurationHasBeenSet;
}

TriggerTaskSchedulerConfiguration UpdateTriggerTaskPart::GetTriggerTaskSchedulerConfiguration() const
{
    return m_triggerTaskSchedulerConfiguration;
}

void UpdateTriggerTaskPart::SetTriggerTaskSchedulerConfiguration(const TriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration)
{
    m_triggerTaskSchedulerConfiguration = _triggerTaskSchedulerConfiguration;
    m_triggerTaskSchedulerConfigurationHasBeenSet = true;
}

bool UpdateTriggerTaskPart::TriggerTaskSchedulerConfigurationHasBeenSet() const
{
    return m_triggerTaskSchedulerConfigurationHasBeenSet;
}

