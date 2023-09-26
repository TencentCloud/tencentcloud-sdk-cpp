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

#include <tencentcloud/bi/v20220105/model/ProjectConfigResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ProjectConfigResult::ProjectConfigResult() :
    m_moduleIdHasBeenSet(false),
    m_includeTypeHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome ProjectConfigResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectConfigResult.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("IncludeType") && !value["IncludeType"].IsNull())
    {
        if (!value["IncludeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectConfigResult.IncludeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeType = string(value["IncludeType"].GetString());
        m_includeTypeHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectConfigResult.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectConfigResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string ProjectConfigResult::GetModuleId() const
{
    return m_moduleId;
}

void ProjectConfigResult::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ProjectConfigResult::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string ProjectConfigResult::GetIncludeType() const
{
    return m_includeType;
}

void ProjectConfigResult::SetIncludeType(const string& _includeType)
{
    m_includeType = _includeType;
    m_includeTypeHasBeenSet = true;
}

bool ProjectConfigResult::IncludeTypeHasBeenSet() const
{
    return m_includeTypeHasBeenSet;
}

string ProjectConfigResult::GetParams() const
{
    return m_params;
}

void ProjectConfigResult::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ProjectConfigResult::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

