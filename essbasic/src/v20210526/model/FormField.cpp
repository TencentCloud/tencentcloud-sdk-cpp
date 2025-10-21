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

#include <tencentcloud/essbasic/v20210526/model/FormField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FormField::FormField() :
    m_componentValueHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_lockComponentValueHasBeenSet(false)
{
}

CoreInternalOutcome FormField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentValue") && !value["ComponentValue"].IsNull())
    {
        if (!value["ComponentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FormField.ComponentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentValue = string(value["ComponentValue"].GetString());
        m_componentValueHasBeenSet = true;
    }

    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FormField.ComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = string(value["ComponentId"].GetString());
        m_componentIdHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FormField.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("LockComponentValue") && !value["LockComponentValue"].IsNull())
    {
        if (!value["LockComponentValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FormField.LockComponentValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockComponentValue = value["LockComponentValue"].GetBool();
        m_lockComponentValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FormField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_lockComponentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockComponentValue, allocator);
    }

}


string FormField::GetComponentValue() const
{
    return m_componentValue;
}

void FormField::SetComponentValue(const string& _componentValue)
{
    m_componentValue = _componentValue;
    m_componentValueHasBeenSet = true;
}

bool FormField::ComponentValueHasBeenSet() const
{
    return m_componentValueHasBeenSet;
}

string FormField::GetComponentId() const
{
    return m_componentId;
}

void FormField::SetComponentId(const string& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool FormField::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

string FormField::GetComponentName() const
{
    return m_componentName;
}

void FormField::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool FormField::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

bool FormField::GetLockComponentValue() const
{
    return m_lockComponentValue;
}

void FormField::SetLockComponentValue(const bool& _lockComponentValue)
{
    m_lockComponentValue = _lockComponentValue;
    m_lockComponentValueHasBeenSet = true;
}

bool FormField::LockComponentValueHasBeenSet() const
{
    return m_lockComponentValueHasBeenSet;
}

