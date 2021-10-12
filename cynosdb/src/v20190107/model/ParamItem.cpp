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

#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ParamItem::ParamItem() :
    m_paramNameHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_oldValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

}


string ParamItem::GetParamName() const
{
    return m_paramName;
}

void ParamItem::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ParamItem::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ParamItem::GetCurrentValue() const
{
    return m_currentValue;
}

void ParamItem::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool ParamItem::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string ParamItem::GetOldValue() const
{
    return m_oldValue;
}

void ParamItem::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ParamItem::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

