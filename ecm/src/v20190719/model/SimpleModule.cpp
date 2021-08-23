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

#include <tencentcloud/ecm/v20190719/model/SimpleModule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

SimpleModule::SimpleModule() :
    m_moduleIdHasBeenSet(false),
    m_moduleNameHasBeenSet(false)
{
}

CoreInternalOutcome SimpleModule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleModule.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("ModuleName") && !value["ModuleName"].IsNull())
    {
        if (!value["ModuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleModule.ModuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleName = string(value["ModuleName"].GetString());
        m_moduleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleModule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

}


string SimpleModule::GetModuleId() const
{
    return m_moduleId;
}

void SimpleModule::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool SimpleModule::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string SimpleModule::GetModuleName() const
{
    return m_moduleName;
}

void SimpleModule::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool SimpleModule::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

