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

#include <tencentcloud/adp/v20260520/model/AppTriggerParamSchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerParamSchema::AppTriggerParamSchema() :
    m_paramNameHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_subParamListHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerParamSchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamSchema.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamSchema.ParamType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = value["ParamType"].GetInt64();
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamSchema.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("SubParamList") && !value["SubParamList"].IsNull())
    {
        if (!value["SubParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamSchema.SubParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppTriggerParamSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParamList.push_back(item);
        }
        m_subParamListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerParamSchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paramType, allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_subParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParamList.begin(); itr != m_subParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AppTriggerParamSchema::GetParamName() const
{
    return m_paramName;
}

void AppTriggerParamSchema::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AppTriggerParamSchema::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

int64_t AppTriggerParamSchema::GetParamType() const
{
    return m_paramType;
}

void AppTriggerParamSchema::SetParamType(const int64_t& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool AppTriggerParamSchema::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

bool AppTriggerParamSchema::GetRequired() const
{
    return m_required;
}

void AppTriggerParamSchema::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool AppTriggerParamSchema::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

vector<AppTriggerParamSchema> AppTriggerParamSchema::GetSubParamList() const
{
    return m_subParamList;
}

void AppTriggerParamSchema::SetSubParamList(const vector<AppTriggerParamSchema>& _subParamList)
{
    m_subParamList = _subParamList;
    m_subParamListHasBeenSet = true;
}

bool AppTriggerParamSchema::SubParamListHasBeenSet() const
{
    return m_subParamListHasBeenSet;
}

