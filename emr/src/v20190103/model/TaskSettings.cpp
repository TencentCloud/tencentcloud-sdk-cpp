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

#include <tencentcloud/emr/v20190103/model/TaskSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TaskSettings::TaskSettings() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_editableHasBeenSet(false)
{
}

CoreInternalOutcome TaskSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSettings.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSettings.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSettings.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSettings.Editable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editable = string(value["Editable"].GetString());
        m_editableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editable.c_str(), allocator).Move(), allocator);
    }

}


string TaskSettings::GetName() const
{
    return m_name;
}

void TaskSettings::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TaskSettings::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TaskSettings::GetValue() const
{
    return m_value;
}

void TaskSettings::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TaskSettings::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string TaskSettings::GetKey() const
{
    return m_key;
}

void TaskSettings::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool TaskSettings::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string TaskSettings::GetEditable() const
{
    return m_editable;
}

void TaskSettings::SetEditable(const string& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool TaskSettings::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

