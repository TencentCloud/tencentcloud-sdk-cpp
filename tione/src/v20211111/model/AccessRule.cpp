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

#include <tencentcloud/tione/v20211111/model/AccessRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

AccessRule::AccessRule() :
    m_moduleHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_dataActionTypeHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome AccessRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRule.ActionType` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionType.push_back((*itr).GetString());
        }
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("DataActionType") && !value["DataActionType"].IsNull())
    {
        if (!value["DataActionType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRule.DataActionType` is not array type"));

        const rapidjson::Value &tmpValue = value["DataActionType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataActionType.push_back((*itr).GetString());
        }
        m_dataActionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRule.ActionTypeName` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionTypeName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionTypeName.push_back((*itr).GetString());
        }
        m_actionTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionType.begin(); itr != m_actionType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataActionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataActionType.begin(); itr != m_dataActionType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTypeName.begin(); itr != m_actionTypeName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccessRule::GetModule() const
{
    return m_module;
}

void AccessRule::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool AccessRule::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<string> AccessRule::GetActionType() const
{
    return m_actionType;
}

void AccessRule::SetActionType(const vector<string>& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AccessRule::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<string> AccessRule::GetDataActionType() const
{
    return m_dataActionType;
}

void AccessRule::SetDataActionType(const vector<string>& _dataActionType)
{
    m_dataActionType = _dataActionType;
    m_dataActionTypeHasBeenSet = true;
}

bool AccessRule::DataActionTypeHasBeenSet() const
{
    return m_dataActionTypeHasBeenSet;
}

vector<string> AccessRule::GetActionTypeName() const
{
    return m_actionTypeName;
}

void AccessRule::SetActionTypeName(const vector<string>& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool AccessRule::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

