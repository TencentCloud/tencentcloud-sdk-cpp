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

#include <tencentcloud/cynosdb/v20190107/model/Module.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

Module::Module() :
    m_isDisableHasBeenSet(false),
    m_moduleNameHasBeenSet(false)
{
}

CoreInternalOutcome Module::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDisable") && !value["IsDisable"].IsNull())
    {
        if (!value["IsDisable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.IsDisable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDisable = string(value["IsDisable"].GetString());
        m_isDisableHasBeenSet = true;
    }

    if (value.HasMember("ModuleName") && !value["ModuleName"].IsNull())
    {
        if (!value["ModuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.ModuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleName = string(value["ModuleName"].GetString());
        m_moduleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Module::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDisableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDisable.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

}


string Module::GetIsDisable() const
{
    return m_isDisable;
}

void Module::SetIsDisable(const string& _isDisable)
{
    m_isDisable = _isDisable;
    m_isDisableHasBeenSet = true;
}

bool Module::IsDisableHasBeenSet() const
{
    return m_isDisableHasBeenSet;
}

string Module::GetModuleName() const
{
    return m_moduleName;
}

void Module::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool Module::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

