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

#include <tencentcloud/cwp/v20180228/model/AssetCoreModuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetCoreModuleDetail::AssetCoreModuleDetail() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_processesHasBeenSet(false),
    m_modulesHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetCoreModuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Processes") && !value["Processes"].IsNull())
    {
        if (!value["Processes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Processes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processes = string(value["Processes"].GetString());
        m_processesHasBeenSet = true;
    }

    if (value.HasMember("Modules") && !value["Modules"].IsNull())
    {
        if (!value["Modules"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Modules` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modules = string(value["Modules"].GetString());
        m_modulesHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetCoreModuleParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetCoreModuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_processesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processes.c_str(), allocator).Move(), allocator);
    }

    if (m_modulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modules.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetCoreModuleDetail::GetName() const
{
    return m_name;
}

void AssetCoreModuleDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetCoreModuleDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetCoreModuleDetail::GetDesc() const
{
    return m_desc;
}

void AssetCoreModuleDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetCoreModuleDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetCoreModuleDetail::GetPath() const
{
    return m_path;
}

void AssetCoreModuleDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AssetCoreModuleDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AssetCoreModuleDetail::GetVersion() const
{
    return m_version;
}

void AssetCoreModuleDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetCoreModuleDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t AssetCoreModuleDetail::GetSize() const
{
    return m_size;
}

void AssetCoreModuleDetail::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool AssetCoreModuleDetail::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string AssetCoreModuleDetail::GetProcesses() const
{
    return m_processes;
}

void AssetCoreModuleDetail::SetProcesses(const string& _processes)
{
    m_processes = _processes;
    m_processesHasBeenSet = true;
}

bool AssetCoreModuleDetail::ProcessesHasBeenSet() const
{
    return m_processesHasBeenSet;
}

string AssetCoreModuleDetail::GetModules() const
{
    return m_modules;
}

void AssetCoreModuleDetail::SetModules(const string& _modules)
{
    m_modules = _modules;
    m_modulesHasBeenSet = true;
}

bool AssetCoreModuleDetail::ModulesHasBeenSet() const
{
    return m_modulesHasBeenSet;
}

vector<AssetCoreModuleParam> AssetCoreModuleDetail::GetParams() const
{
    return m_params;
}

void AssetCoreModuleDetail::SetParams(const vector<AssetCoreModuleParam>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool AssetCoreModuleDetail::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string AssetCoreModuleDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetCoreModuleDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetCoreModuleDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

