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

#include <tencentcloud/ags/v20250920/model/LifecycleConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

LifecycleConfiguration::LifecycleConfiguration() :
    m_idleTimeoutSecondsHasBeenSet(false),
    m_idleActionHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdleTimeoutSeconds") && !value["IdleTimeoutSeconds"].IsNull())
    {
        if (!value["IdleTimeoutSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleConfiguration.IdleTimeoutSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeoutSeconds = value["IdleTimeoutSeconds"].GetInt64();
        m_idleTimeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("IdleAction") && !value["IdleAction"].IsNull())
    {
        if (!value["IdleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleConfiguration.IdleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleAction = string(value["IdleAction"].GetString());
        m_idleActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idleTimeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeoutSeconds, allocator);
    }

    if (m_idleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleAction.c_str(), allocator).Move(), allocator);
    }

}


int64_t LifecycleConfiguration::GetIdleTimeoutSeconds() const
{
    return m_idleTimeoutSeconds;
}

void LifecycleConfiguration::SetIdleTimeoutSeconds(const int64_t& _idleTimeoutSeconds)
{
    m_idleTimeoutSeconds = _idleTimeoutSeconds;
    m_idleTimeoutSecondsHasBeenSet = true;
}

bool LifecycleConfiguration::IdleTimeoutSecondsHasBeenSet() const
{
    return m_idleTimeoutSecondsHasBeenSet;
}

string LifecycleConfiguration::GetIdleAction() const
{
    return m_idleAction;
}

void LifecycleConfiguration::SetIdleAction(const string& _idleAction)
{
    m_idleAction = _idleAction;
    m_idleActionHasBeenSet = true;
}

bool LifecycleConfiguration::IdleActionHasBeenSet() const
{
    return m_idleActionHasBeenSet;
}

