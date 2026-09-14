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

#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ExpirationPolicy::ExpirationPolicy() :
    m_effectivePeriodHasBeenSet(false),
    m_expireBehaviorHasBeenSet(false)
{
}

CoreInternalOutcome ExpirationPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EffectivePeriod") && !value["EffectivePeriod"].IsNull())
    {
        if (!value["EffectivePeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExpirationPolicy.EffectivePeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_effectivePeriod.Deserialize(value["EffectivePeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_effectivePeriodHasBeenSet = true;
    }

    if (value.HasMember("ExpireBehavior") && !value["ExpireBehavior"].IsNull())
    {
        if (!value["ExpireBehavior"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpirationPolicy.ExpireBehavior` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireBehavior = value["ExpireBehavior"].GetInt64();
        m_expireBehaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpirationPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_effectivePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectivePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectivePeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expireBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireBehavior, allocator);
    }

}


EffectivePeriod ExpirationPolicy::GetEffectivePeriod() const
{
    return m_effectivePeriod;
}

void ExpirationPolicy::SetEffectivePeriod(const EffectivePeriod& _effectivePeriod)
{
    m_effectivePeriod = _effectivePeriod;
    m_effectivePeriodHasBeenSet = true;
}

bool ExpirationPolicy::EffectivePeriodHasBeenSet() const
{
    return m_effectivePeriodHasBeenSet;
}

int64_t ExpirationPolicy::GetExpireBehavior() const
{
    return m_expireBehavior;
}

void ExpirationPolicy::SetExpireBehavior(const int64_t& _expireBehavior)
{
    m_expireBehavior = _expireBehavior;
    m_expireBehaviorHasBeenSet = true;
}

bool ExpirationPolicy::ExpireBehaviorHasBeenSet() const
{
    return m_expireBehaviorHasBeenSet;
}

