/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

LifeCycleData::LifeCycleData() :
    m_transitionHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
}

CoreInternalOutcome LifeCycleData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Transition") && !value["Transition"].IsNull())
    {
        if (!value["Transition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleData.Transition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transition = value["Transition"].GetInt64();
        m_transitionHasBeenSet = true;
    }

    if (value.HasMember("Expiration") && !value["Expiration"].IsNull())
    {
        if (!value["Expiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleData.Expiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = value["Expiration"].GetInt64();
        m_expirationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifeCycleData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transition, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiration, allocator);
    }

}


int64_t LifeCycleData::GetTransition() const
{
    return m_transition;
}

void LifeCycleData::SetTransition(const int64_t& _transition)
{
    m_transition = _transition;
    m_transitionHasBeenSet = true;
}

bool LifeCycleData::TransitionHasBeenSet() const
{
    return m_transitionHasBeenSet;
}

int64_t LifeCycleData::GetExpiration() const
{
    return m_expiration;
}

void LifeCycleData::SetExpiration(const int64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool LifeCycleData::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

