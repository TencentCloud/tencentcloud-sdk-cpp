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

#include <tencentcloud/dlc/v20210125/model/DataGovernPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataGovernPolicy::DataGovernPolicy() :
    m_ruleTypeHasBeenSet(false),
    m_governEngineHasBeenSet(false)
{
}

CoreInternalOutcome DataGovernPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataGovernPolicy.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("GovernEngine") && !value["GovernEngine"].IsNull())
    {
        if (!value["GovernEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataGovernPolicy.GovernEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_governEngine = string(value["GovernEngine"].GetString());
        m_governEngineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataGovernPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_governEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_governEngine.c_str(), allocator).Move(), allocator);
    }

}


string DataGovernPolicy::GetRuleType() const
{
    return m_ruleType;
}

void DataGovernPolicy::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DataGovernPolicy::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DataGovernPolicy::GetGovernEngine() const
{
    return m_governEngine;
}

void DataGovernPolicy::SetGovernEngine(const string& _governEngine)
{
    m_governEngine = _governEngine;
    m_governEngineHasBeenSet = true;
}

bool DataGovernPolicy::GovernEngineHasBeenSet() const
{
    return m_governEngineHasBeenSet;
}

