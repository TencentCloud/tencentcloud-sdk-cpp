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

#include <tencentcloud/scf/v20180416/model/Alias.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

Alias::Alias() :
    m_functionVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routingConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_modTimeHasBeenSet(false)
{
}

CoreInternalOutcome Alias::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionVersion") && !value["FunctionVersion"].IsNull())
    {
        if (!value["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(value["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RoutingConfig") && !value["RoutingConfig"].IsNull())
    {
        if (!value["RoutingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.RoutingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routingConfig.Deserialize(value["RoutingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routingConfigHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Alias::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_routingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

}


string Alias::GetFunctionVersion() const
{
    return m_functionVersion;
}

void Alias::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool Alias::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

string Alias::GetName() const
{
    return m_name;
}

void Alias::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Alias::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

RoutingConfig Alias::GetRoutingConfig() const
{
    return m_routingConfig;
}

void Alias::SetRoutingConfig(const RoutingConfig& _routingConfig)
{
    m_routingConfig = _routingConfig;
    m_routingConfigHasBeenSet = true;
}

bool Alias::RoutingConfigHasBeenSet() const
{
    return m_routingConfigHasBeenSet;
}

string Alias::GetDescription() const
{
    return m_description;
}

void Alias::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Alias::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Alias::GetAddTime() const
{
    return m_addTime;
}

void Alias::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Alias::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string Alias::GetModTime() const
{
    return m_modTime;
}

void Alias::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Alias::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

