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

#include <tencentcloud/teo/v20220901/model/ExceptUserRuleScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ExceptUserRuleScope::ExceptUserRuleScope() :
    m_typeHasBeenSet(false),
    m_modulesHasBeenSet(false),
    m_partialModulesHasBeenSet(false),
    m_skipConditionsHasBeenSet(false)
{
}

CoreInternalOutcome ExceptUserRuleScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRuleScope.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Modules") && !value["Modules"].IsNull())
    {
        if (!value["Modules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptUserRuleScope.Modules` is not array type"));

        const rapidjson::Value &tmpValue = value["Modules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modules.push_back((*itr).GetString());
        }
        m_modulesHasBeenSet = true;
    }

    if (value.HasMember("PartialModules") && !value["PartialModules"].IsNull())
    {
        if (!value["PartialModules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptUserRuleScope.PartialModules` is not array type"));

        const rapidjson::Value &tmpValue = value["PartialModules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartialModule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partialModules.push_back(item);
        }
        m_partialModulesHasBeenSet = true;
    }

    if (value.HasMember("SkipConditions") && !value["SkipConditions"].IsNull())
    {
        if (!value["SkipConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptUserRuleScope.SkipConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["SkipConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkipCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skipConditions.push_back(item);
        }
        m_skipConditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExceptUserRuleScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_modulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modules.begin(); itr != m_modules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partialModulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartialModules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partialModules.begin(); itr != m_partialModules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skipConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skipConditions.begin(); itr != m_skipConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExceptUserRuleScope::GetType() const
{
    return m_type;
}

void ExceptUserRuleScope::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExceptUserRuleScope::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ExceptUserRuleScope::GetModules() const
{
    return m_modules;
}

void ExceptUserRuleScope::SetModules(const vector<string>& _modules)
{
    m_modules = _modules;
    m_modulesHasBeenSet = true;
}

bool ExceptUserRuleScope::ModulesHasBeenSet() const
{
    return m_modulesHasBeenSet;
}

vector<PartialModule> ExceptUserRuleScope::GetPartialModules() const
{
    return m_partialModules;
}

void ExceptUserRuleScope::SetPartialModules(const vector<PartialModule>& _partialModules)
{
    m_partialModules = _partialModules;
    m_partialModulesHasBeenSet = true;
}

bool ExceptUserRuleScope::PartialModulesHasBeenSet() const
{
    return m_partialModulesHasBeenSet;
}

vector<SkipCondition> ExceptUserRuleScope::GetSkipConditions() const
{
    return m_skipConditions;
}

void ExceptUserRuleScope::SetSkipConditions(const vector<SkipCondition>& _skipConditions)
{
    m_skipConditions = _skipConditions;
    m_skipConditionsHasBeenSet = true;
}

bool ExceptUserRuleScope::SkipConditionsHasBeenSet() const
{
    return m_skipConditionsHasBeenSet;
}

