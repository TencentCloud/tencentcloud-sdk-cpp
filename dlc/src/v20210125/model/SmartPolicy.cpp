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

#include <tencentcloud/dlc/v20210125/model/SmartPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartPolicy::SmartPolicy() :
    m_baseInfoHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

CoreInternalOutcome SmartPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseInfo") && !value["BaseInfo"].IsNull())
    {
        if (!value["BaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPolicy.BaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseInfo.Deserialize(value["BaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseInfoHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPolicy.Policy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policy.Deserialize(value["Policy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(value[key.c_str()], allocator);
    }

}


SmartPolicyBaseInfo SmartPolicy::GetBaseInfo() const
{
    return m_baseInfo;
}

void SmartPolicy::SetBaseInfo(const SmartPolicyBaseInfo& _baseInfo)
{
    m_baseInfo = _baseInfo;
    m_baseInfoHasBeenSet = true;
}

bool SmartPolicy::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

SmartOptimizerPolicy SmartPolicy::GetPolicy() const
{
    return m_policy;
}

void SmartPolicy::SetPolicy(const SmartOptimizerPolicy& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool SmartPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

