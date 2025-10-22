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

#include <tencentcloud/teo/v20220901/model/SecurityWeightedAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityWeightedAction::SecurityWeightedAction() :
    m_securityActionHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome SecurityWeightedAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityAction") && !value["SecurityAction"].IsNull())
    {
        if (!value["SecurityAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityWeightedAction.SecurityAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityAction.Deserialize(value["SecurityAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityActionHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityWeightedAction.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityWeightedAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


SecurityAction SecurityWeightedAction::GetSecurityAction() const
{
    return m_securityAction;
}

void SecurityWeightedAction::SetSecurityAction(const SecurityAction& _securityAction)
{
    m_securityAction = _securityAction;
    m_securityActionHasBeenSet = true;
}

bool SecurityWeightedAction::SecurityActionHasBeenSet() const
{
    return m_securityActionHasBeenSet;
}

int64_t SecurityWeightedAction::GetWeight() const
{
    return m_weight;
}

void SecurityWeightedAction::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool SecurityWeightedAction::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

