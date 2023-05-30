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

#include <tencentcloud/dts/v20211206/model/DynamicOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DynamicOptions::DynamicOptions() :
    m_opTypesHasBeenSet(false),
    m_ddlOptionsHasBeenSet(false),
    m_conflictHandleTypeHasBeenSet(false),
    m_conflictHandleOptionHasBeenSet(false)
{
}

CoreInternalOutcome DynamicOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpTypes") && !value["OpTypes"].IsNull())
    {
        if (!value["OpTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicOptions.OpTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["OpTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_opTypes.push_back((*itr).GetString());
        }
        m_opTypesHasBeenSet = true;
    }

    if (value.HasMember("DdlOptions") && !value["DdlOptions"].IsNull())
    {
        if (!value["DdlOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicOptions.DdlOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["DdlOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DdlOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ddlOptions.push_back(item);
        }
        m_ddlOptionsHasBeenSet = true;
    }

    if (value.HasMember("ConflictHandleType") && !value["ConflictHandleType"].IsNull())
    {
        if (!value["ConflictHandleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicOptions.ConflictHandleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictHandleType = string(value["ConflictHandleType"].GetString());
        m_conflictHandleTypeHasBeenSet = true;
    }

    if (value.HasMember("ConflictHandleOption") && !value["ConflictHandleOption"].IsNull())
    {
        if (!value["ConflictHandleOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicOptions.ConflictHandleOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conflictHandleOption.Deserialize(value["ConflictHandleOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conflictHandleOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_opTypes.begin(); itr != m_opTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ddlOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ddlOptions.begin(); itr != m_ddlOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_conflictHandleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictHandleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictHandleType.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictHandleOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictHandleOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conflictHandleOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> DynamicOptions::GetOpTypes() const
{
    return m_opTypes;
}

void DynamicOptions::SetOpTypes(const vector<string>& _opTypes)
{
    m_opTypes = _opTypes;
    m_opTypesHasBeenSet = true;
}

bool DynamicOptions::OpTypesHasBeenSet() const
{
    return m_opTypesHasBeenSet;
}

vector<DdlOption> DynamicOptions::GetDdlOptions() const
{
    return m_ddlOptions;
}

void DynamicOptions::SetDdlOptions(const vector<DdlOption>& _ddlOptions)
{
    m_ddlOptions = _ddlOptions;
    m_ddlOptionsHasBeenSet = true;
}

bool DynamicOptions::DdlOptionsHasBeenSet() const
{
    return m_ddlOptionsHasBeenSet;
}

string DynamicOptions::GetConflictHandleType() const
{
    return m_conflictHandleType;
}

void DynamicOptions::SetConflictHandleType(const string& _conflictHandleType)
{
    m_conflictHandleType = _conflictHandleType;
    m_conflictHandleTypeHasBeenSet = true;
}

bool DynamicOptions::ConflictHandleTypeHasBeenSet() const
{
    return m_conflictHandleTypeHasBeenSet;
}

ConflictHandleOption DynamicOptions::GetConflictHandleOption() const
{
    return m_conflictHandleOption;
}

void DynamicOptions::SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption)
{
    m_conflictHandleOption = _conflictHandleOption;
    m_conflictHandleOptionHasBeenSet = true;
}

bool DynamicOptions::ConflictHandleOptionHasBeenSet() const
{
    return m_conflictHandleOptionHasBeenSet;
}

