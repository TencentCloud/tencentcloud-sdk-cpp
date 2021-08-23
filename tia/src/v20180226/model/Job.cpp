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

#include <tencentcloud/tia/v20180226/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

Job::Job() :
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_scaleTierHasBeenSet(false),
    m_masterTypeHasBeenSet(false),
    m_workerTypeHasBeenSet(false),
    m_parameterServerTypeHasBeenSet(false),
    m_workerCountHasBeenSet(false),
    m_parameterServerCountHasBeenSet(false),
    m_packageDirHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_delTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_debugHasBeenSet(false),
    m_runtimeConfHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ScaleTier") && !value["ScaleTier"].IsNull())
    {
        if (!value["ScaleTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ScaleTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleTier = string(value["ScaleTier"].GetString());
        m_scaleTierHasBeenSet = true;
    }

    if (value.HasMember("MasterType") && !value["MasterType"].IsNull())
    {
        if (!value["MasterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.MasterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterType = string(value["MasterType"].GetString());
        m_masterTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkerType") && !value["WorkerType"].IsNull())
    {
        if (!value["WorkerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.WorkerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workerType = string(value["WorkerType"].GetString());
        m_workerTypeHasBeenSet = true;
    }

    if (value.HasMember("ParameterServerType") && !value["ParameterServerType"].IsNull())
    {
        if (!value["ParameterServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ParameterServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterServerType = string(value["ParameterServerType"].GetString());
        m_parameterServerTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkerCount") && !value["WorkerCount"].IsNull())
    {
        if (!value["WorkerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.WorkerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_workerCount = value["WorkerCount"].GetUint64();
        m_workerCountHasBeenSet = true;
    }

    if (value.HasMember("ParameterServerCount") && !value["ParameterServerCount"].IsNull())
    {
        if (!value["ParameterServerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ParameterServerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parameterServerCount = value["ParameterServerCount"].GetUint64();
        m_parameterServerCountHasBeenSet = true;
    }

    if (value.HasMember("PackageDir") && !value["PackageDir"].IsNull())
    {
        if (!value["PackageDir"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.PackageDir` is not array type"));

        const rapidjson::Value &tmpValue = value["PackageDir"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_packageDir.push_back((*itr).GetString());
        }
        m_packageDirHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Command` is not array type"));

        const rapidjson::Value &tmpValue = value["Command"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_command.push_back((*itr).GetString());
        }
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("DelTime") && !value["DelTime"].IsNull())
    {
        if (!value["DelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.DelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delTime = string(value["DelTime"].GetString());
        m_delTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Debug") && !value["Debug"].IsNull())
    {
        if (!value["Debug"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Debug` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_debug = value["Debug"].GetBool();
        m_debugHasBeenSet = true;
    }

    if (value.HasMember("RuntimeConf") && !value["RuntimeConf"].IsNull())
    {
        if (!value["RuntimeConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.RuntimeConf` is not array type"));

        const rapidjson::Value &tmpValue = value["RuntimeConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runtimeConf.push_back((*itr).GetString());
        }
        m_runtimeConfHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleTier.c_str(), allocator).Move(), allocator);
    }

    if (m_masterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterType.c_str(), allocator).Move(), allocator);
    }

    if (m_workerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workerType.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_workerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerCount, allocator);
    }

    if (m_parameterServerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterServerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parameterServerCount, allocator);
    }

    if (m_packageDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageDir.begin(); itr != m_packageDir.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_command.begin(); itr != m_command.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_delTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_debugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_debug, allocator);
    }

    if (m_runtimeConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runtimeConf.begin(); itr != m_runtimeConf.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string Job::GetName() const
{
    return m_name;
}

void Job::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Job::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Job::GetCreateTime() const
{
    return m_createTime;
}

void Job::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Job::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Job::GetStartTime() const
{
    return m_startTime;
}

void Job::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Job::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Job::GetEndTime() const
{
    return m_endTime;
}

void Job::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Job::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Job::GetState() const
{
    return m_state;
}

void Job::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Job::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Job::GetMessage() const
{
    return m_message;
}

void Job::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Job::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string Job::GetScaleTier() const
{
    return m_scaleTier;
}

void Job::SetScaleTier(const string& _scaleTier)
{
    m_scaleTier = _scaleTier;
    m_scaleTierHasBeenSet = true;
}

bool Job::ScaleTierHasBeenSet() const
{
    return m_scaleTierHasBeenSet;
}

string Job::GetMasterType() const
{
    return m_masterType;
}

void Job::SetMasterType(const string& _masterType)
{
    m_masterType = _masterType;
    m_masterTypeHasBeenSet = true;
}

bool Job::MasterTypeHasBeenSet() const
{
    return m_masterTypeHasBeenSet;
}

string Job::GetWorkerType() const
{
    return m_workerType;
}

void Job::SetWorkerType(const string& _workerType)
{
    m_workerType = _workerType;
    m_workerTypeHasBeenSet = true;
}

bool Job::WorkerTypeHasBeenSet() const
{
    return m_workerTypeHasBeenSet;
}

string Job::GetParameterServerType() const
{
    return m_parameterServerType;
}

void Job::SetParameterServerType(const string& _parameterServerType)
{
    m_parameterServerType = _parameterServerType;
    m_parameterServerTypeHasBeenSet = true;
}

bool Job::ParameterServerTypeHasBeenSet() const
{
    return m_parameterServerTypeHasBeenSet;
}

uint64_t Job::GetWorkerCount() const
{
    return m_workerCount;
}

void Job::SetWorkerCount(const uint64_t& _workerCount)
{
    m_workerCount = _workerCount;
    m_workerCountHasBeenSet = true;
}

bool Job::WorkerCountHasBeenSet() const
{
    return m_workerCountHasBeenSet;
}

uint64_t Job::GetParameterServerCount() const
{
    return m_parameterServerCount;
}

void Job::SetParameterServerCount(const uint64_t& _parameterServerCount)
{
    m_parameterServerCount = _parameterServerCount;
    m_parameterServerCountHasBeenSet = true;
}

bool Job::ParameterServerCountHasBeenSet() const
{
    return m_parameterServerCountHasBeenSet;
}

vector<string> Job::GetPackageDir() const
{
    return m_packageDir;
}

void Job::SetPackageDir(const vector<string>& _packageDir)
{
    m_packageDir = _packageDir;
    m_packageDirHasBeenSet = true;
}

bool Job::PackageDirHasBeenSet() const
{
    return m_packageDirHasBeenSet;
}

vector<string> Job::GetCommand() const
{
    return m_command;
}

void Job::SetCommand(const vector<string>& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool Job::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

vector<string> Job::GetArgs() const
{
    return m_args;
}

void Job::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool Job::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string Job::GetCluster() const
{
    return m_cluster;
}

void Job::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool Job::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string Job::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void Job::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool Job::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string Job::GetDelTime() const
{
    return m_delTime;
}

void Job::SetDelTime(const string& _delTime)
{
    m_delTime = _delTime;
    m_delTimeHasBeenSet = true;
}

bool Job::DelTimeHasBeenSet() const
{
    return m_delTimeHasBeenSet;
}

uint64_t Job::GetAppId() const
{
    return m_appId;
}

void Job::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Job::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Job::GetUin() const
{
    return m_uin;
}

void Job::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Job::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

bool Job::GetDebug() const
{
    return m_debug;
}

void Job::SetDebug(const bool& _debug)
{
    m_debug = _debug;
    m_debugHasBeenSet = true;
}

bool Job::DebugHasBeenSet() const
{
    return m_debugHasBeenSet;
}

vector<string> Job::GetRuntimeConf() const
{
    return m_runtimeConf;
}

void Job::SetRuntimeConf(const vector<string>& _runtimeConf)
{
    m_runtimeConf = _runtimeConf;
    m_runtimeConfHasBeenSet = true;
}

bool Job::RuntimeConfHasBeenSet() const
{
    return m_runtimeConfHasBeenSet;
}

string Job::GetId() const
{
    return m_id;
}

void Job::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Job::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

