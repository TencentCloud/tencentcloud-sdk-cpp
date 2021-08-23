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

#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

ResourceCreationLimitPolicy::ResourceCreationLimitPolicy() :
    m_newGameServerSessionsPerCreatorHasBeenSet(false),
    m_policyPeriodInMinutesHasBeenSet(false)
{
}

CoreInternalOutcome ResourceCreationLimitPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NewGameServerSessionsPerCreator") && !value["NewGameServerSessionsPerCreator"].IsNull())
    {
        if (!value["NewGameServerSessionsPerCreator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCreationLimitPolicy.NewGameServerSessionsPerCreator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newGameServerSessionsPerCreator = value["NewGameServerSessionsPerCreator"].GetUint64();
        m_newGameServerSessionsPerCreatorHasBeenSet = true;
    }

    if (value.HasMember("PolicyPeriodInMinutes") && !value["PolicyPeriodInMinutes"].IsNull())
    {
        if (!value["PolicyPeriodInMinutes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCreationLimitPolicy.PolicyPeriodInMinutes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyPeriodInMinutes = value["PolicyPeriodInMinutes"].GetUint64();
        m_policyPeriodInMinutesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceCreationLimitPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_newGameServerSessionsPerCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewGameServerSessionsPerCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newGameServerSessionsPerCreator, allocator);
    }

    if (m_policyPeriodInMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyPeriodInMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyPeriodInMinutes, allocator);
    }

}


uint64_t ResourceCreationLimitPolicy::GetNewGameServerSessionsPerCreator() const
{
    return m_newGameServerSessionsPerCreator;
}

void ResourceCreationLimitPolicy::SetNewGameServerSessionsPerCreator(const uint64_t& _newGameServerSessionsPerCreator)
{
    m_newGameServerSessionsPerCreator = _newGameServerSessionsPerCreator;
    m_newGameServerSessionsPerCreatorHasBeenSet = true;
}

bool ResourceCreationLimitPolicy::NewGameServerSessionsPerCreatorHasBeenSet() const
{
    return m_newGameServerSessionsPerCreatorHasBeenSet;
}

uint64_t ResourceCreationLimitPolicy::GetPolicyPeriodInMinutes() const
{
    return m_policyPeriodInMinutes;
}

void ResourceCreationLimitPolicy::SetPolicyPeriodInMinutes(const uint64_t& _policyPeriodInMinutes)
{
    m_policyPeriodInMinutes = _policyPeriodInMinutes;
    m_policyPeriodInMinutesHasBeenSet = true;
}

bool ResourceCreationLimitPolicy::PolicyPeriodInMinutesHasBeenSet() const
{
    return m_policyPeriodInMinutesHasBeenSet;
}

