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

#include <tencentcloud/tia/v20180226/model/CreateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

CreateJobRequest::CreateJobRequest() :
    m_nameHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_packageDirHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_scaleTierHasBeenSet(false),
    m_masterTypeHasBeenSet(false),
    m_workerTypeHasBeenSet(false),
    m_parameterServerTypeHasBeenSet(false),
    m_workerCountHasBeenSet(false),
    m_parameterServerCountHasBeenSet(false),
    m_debugHasBeenSet(false),
    m_runtimeConfHasBeenSet(false)
{
}

string CreateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageDir.begin(); itr != m_packageDir.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_command.begin(); itr != m_command.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scaleTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleTier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleTier.c_str(), allocator).Move(), allocator);
    }

    if (m_masterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterType.c_str(), allocator).Move(), allocator);
    }

    if (m_workerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workerType.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameterServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_workerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workerCount, allocator);
    }

    if (m_parameterServerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterServerCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parameterServerCount, allocator);
    }

    if (m_debugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debug";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_debug, allocator);
    }

    if (m_runtimeConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runtimeConf.begin(); itr != m_runtimeConf.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobRequest::GetName() const
{
    return m_name;
}

void CreateJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateJobRequest::GetCluster() const
{
    return m_cluster;
}

void CreateJobRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateJobRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string CreateJobRequest::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void CreateJobRequest::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool CreateJobRequest::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

vector<string> CreateJobRequest::GetPackageDir() const
{
    return m_packageDir;
}

void CreateJobRequest::SetPackageDir(const vector<string>& _packageDir)
{
    m_packageDir = _packageDir;
    m_packageDirHasBeenSet = true;
}

bool CreateJobRequest::PackageDirHasBeenSet() const
{
    return m_packageDirHasBeenSet;
}

vector<string> CreateJobRequest::GetCommand() const
{
    return m_command;
}

void CreateJobRequest::SetCommand(const vector<string>& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CreateJobRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

vector<string> CreateJobRequest::GetArgs() const
{
    return m_args;
}

void CreateJobRequest::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool CreateJobRequest::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string CreateJobRequest::GetScaleTier() const
{
    return m_scaleTier;
}

void CreateJobRequest::SetScaleTier(const string& _scaleTier)
{
    m_scaleTier = _scaleTier;
    m_scaleTierHasBeenSet = true;
}

bool CreateJobRequest::ScaleTierHasBeenSet() const
{
    return m_scaleTierHasBeenSet;
}

string CreateJobRequest::GetMasterType() const
{
    return m_masterType;
}

void CreateJobRequest::SetMasterType(const string& _masterType)
{
    m_masterType = _masterType;
    m_masterTypeHasBeenSet = true;
}

bool CreateJobRequest::MasterTypeHasBeenSet() const
{
    return m_masterTypeHasBeenSet;
}

string CreateJobRequest::GetWorkerType() const
{
    return m_workerType;
}

void CreateJobRequest::SetWorkerType(const string& _workerType)
{
    m_workerType = _workerType;
    m_workerTypeHasBeenSet = true;
}

bool CreateJobRequest::WorkerTypeHasBeenSet() const
{
    return m_workerTypeHasBeenSet;
}

string CreateJobRequest::GetParameterServerType() const
{
    return m_parameterServerType;
}

void CreateJobRequest::SetParameterServerType(const string& _parameterServerType)
{
    m_parameterServerType = _parameterServerType;
    m_parameterServerTypeHasBeenSet = true;
}

bool CreateJobRequest::ParameterServerTypeHasBeenSet() const
{
    return m_parameterServerTypeHasBeenSet;
}

uint64_t CreateJobRequest::GetWorkerCount() const
{
    return m_workerCount;
}

void CreateJobRequest::SetWorkerCount(const uint64_t& _workerCount)
{
    m_workerCount = _workerCount;
    m_workerCountHasBeenSet = true;
}

bool CreateJobRequest::WorkerCountHasBeenSet() const
{
    return m_workerCountHasBeenSet;
}

uint64_t CreateJobRequest::GetParameterServerCount() const
{
    return m_parameterServerCount;
}

void CreateJobRequest::SetParameterServerCount(const uint64_t& _parameterServerCount)
{
    m_parameterServerCount = _parameterServerCount;
    m_parameterServerCountHasBeenSet = true;
}

bool CreateJobRequest::ParameterServerCountHasBeenSet() const
{
    return m_parameterServerCountHasBeenSet;
}

bool CreateJobRequest::GetDebug() const
{
    return m_debug;
}

void CreateJobRequest::SetDebug(const bool& _debug)
{
    m_debug = _debug;
    m_debugHasBeenSet = true;
}

bool CreateJobRequest::DebugHasBeenSet() const
{
    return m_debugHasBeenSet;
}

vector<string> CreateJobRequest::GetRuntimeConf() const
{
    return m_runtimeConf;
}

void CreateJobRequest::SetRuntimeConf(const vector<string>& _runtimeConf)
{
    m_runtimeConf = _runtimeConf;
    m_runtimeConfHasBeenSet = true;
}

bool CreateJobRequest::RuntimeConfHasBeenSet() const
{
    return m_runtimeConfHasBeenSet;
}


