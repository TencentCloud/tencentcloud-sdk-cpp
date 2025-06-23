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

#include <tencentcloud/tcbr/v20220217/model/ServerBaseConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ServerBaseConfig::ServerBaseConfig() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_openAccessTypesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_hasDockerfileHasBeenSet(false),
    m_dockerfileHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_logParseTypeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_internalAccessHasBeenSet(false),
    m_internalDomainHasBeenSet(false),
    m_operationModeHasBeenSet(false),
    m_timerScaleHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_sessionAffinityHasBeenSet(false)
{
}

CoreInternalOutcome ServerBaseConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("OpenAccessTypes") && !value["OpenAccessTypes"].IsNull())
    {
        if (!value["OpenAccessTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.OpenAccessTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["OpenAccessTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_openAccessTypes.push_back((*itr).GetString());
        }
        m_openAccessTypesHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("MinNum") && !value["MinNum"].IsNull())
    {
        if (!value["MinNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.MinNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minNum = value["MinNum"].GetUint64();
        m_minNumHasBeenSet = true;
    }

    if (value.HasMember("MaxNum") && !value["MaxNum"].IsNull())
    {
        if (!value["MaxNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.MaxNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNum = value["MaxNum"].GetUint64();
        m_maxNumHasBeenSet = true;
    }

    if (value.HasMember("PolicyDetails") && !value["PolicyDetails"].IsNull())
    {
        if (!value["PolicyDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.PolicyDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HpaPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyDetails.push_back(item);
        }
        m_policyDetailsHasBeenSet = true;
    }

    if (value.HasMember("CustomLogs") && !value["CustomLogs"].IsNull())
    {
        if (!value["CustomLogs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.CustomLogs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customLogs = string(value["CustomLogs"].GetString());
        m_customLogsHasBeenSet = true;
    }

    if (value.HasMember("EnvParams") && !value["EnvParams"].IsNull())
    {
        if (!value["EnvParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.EnvParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envParams = string(value["EnvParams"].GetString());
        m_envParamsHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.InitialDelaySeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetUint64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("HasDockerfile") && !value["HasDockerfile"].IsNull())
    {
        if (!value["HasDockerfile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.HasDockerfile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasDockerfile = value["HasDockerfile"].GetBool();
        m_hasDockerfileHasBeenSet = true;
    }

    if (value.HasMember("Dockerfile") && !value["Dockerfile"].IsNull())
    {
        if (!value["Dockerfile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Dockerfile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerfile = string(value["Dockerfile"].GetString());
        m_dockerfileHasBeenSet = true;
    }

    if (value.HasMember("BuildDir") && !value["BuildDir"].IsNull())
    {
        if (!value["BuildDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.BuildDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildDir = string(value["BuildDir"].GetString());
        m_buildDirHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }

    if (value.HasMember("LogParseType") && !value["LogParseType"].IsNull())
    {
        if (!value["LogParseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.LogParseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logParseType = string(value["LogParseType"].GetString());
        m_logParseTypeHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("InternalAccess") && !value["InternalAccess"].IsNull())
    {
        if (!value["InternalAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.InternalAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalAccess = string(value["InternalAccess"].GetString());
        m_internalAccessHasBeenSet = true;
    }

    if (value.HasMember("InternalDomain") && !value["InternalDomain"].IsNull())
    {
        if (!value["InternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.InternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDomain = string(value["InternalDomain"].GetString());
        m_internalDomainHasBeenSet = true;
    }

    if (value.HasMember("OperationMode") && !value["OperationMode"].IsNull())
    {
        if (!value["OperationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.OperationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationMode = string(value["OperationMode"].GetString());
        m_operationModeHasBeenSet = true;
    }

    if (value.HasMember("TimerScale") && !value["TimerScale"].IsNull())
    {
        if (!value["TimerScale"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.TimerScale` is not array type"));

        const rapidjson::Value &tmpValue = value["TimerScale"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimerScale item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timerScale.push_back(item);
        }
        m_timerScaleHasBeenSet = true;
    }

    if (value.HasMember("EntryPoint") && !value["EntryPoint"].IsNull())
    {
        if (!value["EntryPoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.EntryPoint` is not array type"));

        const rapidjson::Value &tmpValue = value["EntryPoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_entryPoint.push_back((*itr).GetString());
        }
        m_entryPointHasBeenSet = true;
    }

    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.Cmd` is not array type"));

        const rapidjson::Value &tmpValue = value["Cmd"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cmd.push_back((*itr).GetString());
        }
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("SessionAffinity") && !value["SessionAffinity"].IsNull())
    {
        if (!value["SessionAffinity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfig.SessionAffinity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAffinity = string(value["SessionAffinity"].GetString());
        m_sessionAffinityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerBaseConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_openAccessTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenAccessTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openAccessTypes.begin(); itr != m_openAccessTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_minNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNum, allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNum, allocator);
    }

    if (m_policyDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyDetails.begin(); itr != m_policyDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_hasDockerfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasDockerfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasDockerfile, allocator);
    }

    if (m_dockerfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dockerfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerfile.c_str(), allocator).Move(), allocator);
    }

    if (m_buildDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildDir.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logParseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogParseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logParseType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_internalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_operationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_timerScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timerScale.begin(); itr != m_timerScale.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entryPoint.begin(); itr != m_entryPoint.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cmd.begin(); itr != m_cmd.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sessionAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionAffinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionAffinity.c_str(), allocator).Move(), allocator);
    }

}


string ServerBaseConfig::GetEnvId() const
{
    return m_envId;
}

void ServerBaseConfig::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ServerBaseConfig::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ServerBaseConfig::GetServerName() const
{
    return m_serverName;
}

void ServerBaseConfig::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ServerBaseConfig::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

vector<string> ServerBaseConfig::GetOpenAccessTypes() const
{
    return m_openAccessTypes;
}

void ServerBaseConfig::SetOpenAccessTypes(const vector<string>& _openAccessTypes)
{
    m_openAccessTypes = _openAccessTypes;
    m_openAccessTypesHasBeenSet = true;
}

bool ServerBaseConfig::OpenAccessTypesHasBeenSet() const
{
    return m_openAccessTypesHasBeenSet;
}

double ServerBaseConfig::GetCpu() const
{
    return m_cpu;
}

void ServerBaseConfig::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ServerBaseConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double ServerBaseConfig::GetMem() const
{
    return m_mem;
}

void ServerBaseConfig::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ServerBaseConfig::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

uint64_t ServerBaseConfig::GetMinNum() const
{
    return m_minNum;
}

void ServerBaseConfig::SetMinNum(const uint64_t& _minNum)
{
    m_minNum = _minNum;
    m_minNumHasBeenSet = true;
}

bool ServerBaseConfig::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

uint64_t ServerBaseConfig::GetMaxNum() const
{
    return m_maxNum;
}

void ServerBaseConfig::SetMaxNum(const uint64_t& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool ServerBaseConfig::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

vector<HpaPolicy> ServerBaseConfig::GetPolicyDetails() const
{
    return m_policyDetails;
}

void ServerBaseConfig::SetPolicyDetails(const vector<HpaPolicy>& _policyDetails)
{
    m_policyDetails = _policyDetails;
    m_policyDetailsHasBeenSet = true;
}

bool ServerBaseConfig::PolicyDetailsHasBeenSet() const
{
    return m_policyDetailsHasBeenSet;
}

string ServerBaseConfig::GetCustomLogs() const
{
    return m_customLogs;
}

void ServerBaseConfig::SetCustomLogs(const string& _customLogs)
{
    m_customLogs = _customLogs;
    m_customLogsHasBeenSet = true;
}

bool ServerBaseConfig::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

string ServerBaseConfig::GetEnvParams() const
{
    return m_envParams;
}

void ServerBaseConfig::SetEnvParams(const string& _envParams)
{
    m_envParams = _envParams;
    m_envParamsHasBeenSet = true;
}

bool ServerBaseConfig::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

uint64_t ServerBaseConfig::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void ServerBaseConfig::SetInitialDelaySeconds(const uint64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool ServerBaseConfig::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

string ServerBaseConfig::GetCreateTime() const
{
    return m_createTime;
}

void ServerBaseConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerBaseConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ServerBaseConfig::GetPort() const
{
    return m_port;
}

void ServerBaseConfig::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServerBaseConfig::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool ServerBaseConfig::GetHasDockerfile() const
{
    return m_hasDockerfile;
}

void ServerBaseConfig::SetHasDockerfile(const bool& _hasDockerfile)
{
    m_hasDockerfile = _hasDockerfile;
    m_hasDockerfileHasBeenSet = true;
}

bool ServerBaseConfig::HasDockerfileHasBeenSet() const
{
    return m_hasDockerfileHasBeenSet;
}

string ServerBaseConfig::GetDockerfile() const
{
    return m_dockerfile;
}

void ServerBaseConfig::SetDockerfile(const string& _dockerfile)
{
    m_dockerfile = _dockerfile;
    m_dockerfileHasBeenSet = true;
}

bool ServerBaseConfig::DockerfileHasBeenSet() const
{
    return m_dockerfileHasBeenSet;
}

string ServerBaseConfig::GetBuildDir() const
{
    return m_buildDir;
}

void ServerBaseConfig::SetBuildDir(const string& _buildDir)
{
    m_buildDir = _buildDir;
    m_buildDirHasBeenSet = true;
}

bool ServerBaseConfig::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

string ServerBaseConfig::GetLogType() const
{
    return m_logType;
}

void ServerBaseConfig::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ServerBaseConfig::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string ServerBaseConfig::GetLogSetId() const
{
    return m_logSetId;
}

void ServerBaseConfig::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool ServerBaseConfig::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string ServerBaseConfig::GetLogTopicId() const
{
    return m_logTopicId;
}

void ServerBaseConfig::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool ServerBaseConfig::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

string ServerBaseConfig::GetLogParseType() const
{
    return m_logParseType;
}

void ServerBaseConfig::SetLogParseType(const string& _logParseType)
{
    m_logParseType = _logParseType;
    m_logParseTypeHasBeenSet = true;
}

bool ServerBaseConfig::LogParseTypeHasBeenSet() const
{
    return m_logParseTypeHasBeenSet;
}

string ServerBaseConfig::GetTag() const
{
    return m_tag;
}

void ServerBaseConfig::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ServerBaseConfig::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string ServerBaseConfig::GetInternalAccess() const
{
    return m_internalAccess;
}

void ServerBaseConfig::SetInternalAccess(const string& _internalAccess)
{
    m_internalAccess = _internalAccess;
    m_internalAccessHasBeenSet = true;
}

bool ServerBaseConfig::InternalAccessHasBeenSet() const
{
    return m_internalAccessHasBeenSet;
}

string ServerBaseConfig::GetInternalDomain() const
{
    return m_internalDomain;
}

void ServerBaseConfig::SetInternalDomain(const string& _internalDomain)
{
    m_internalDomain = _internalDomain;
    m_internalDomainHasBeenSet = true;
}

bool ServerBaseConfig::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}

string ServerBaseConfig::GetOperationMode() const
{
    return m_operationMode;
}

void ServerBaseConfig::SetOperationMode(const string& _operationMode)
{
    m_operationMode = _operationMode;
    m_operationModeHasBeenSet = true;
}

bool ServerBaseConfig::OperationModeHasBeenSet() const
{
    return m_operationModeHasBeenSet;
}

vector<TimerScale> ServerBaseConfig::GetTimerScale() const
{
    return m_timerScale;
}

void ServerBaseConfig::SetTimerScale(const vector<TimerScale>& _timerScale)
{
    m_timerScale = _timerScale;
    m_timerScaleHasBeenSet = true;
}

bool ServerBaseConfig::TimerScaleHasBeenSet() const
{
    return m_timerScaleHasBeenSet;
}

vector<string> ServerBaseConfig::GetEntryPoint() const
{
    return m_entryPoint;
}

void ServerBaseConfig::SetEntryPoint(const vector<string>& _entryPoint)
{
    m_entryPoint = _entryPoint;
    m_entryPointHasBeenSet = true;
}

bool ServerBaseConfig::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

vector<string> ServerBaseConfig::GetCmd() const
{
    return m_cmd;
}

void ServerBaseConfig::SetCmd(const vector<string>& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool ServerBaseConfig::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

string ServerBaseConfig::GetSessionAffinity() const
{
    return m_sessionAffinity;
}

void ServerBaseConfig::SetSessionAffinity(const string& _sessionAffinity)
{
    m_sessionAffinity = _sessionAffinity;
    m_sessionAffinityHasBeenSet = true;
}

bool ServerBaseConfig::SessionAffinityHasBeenSet() const
{
    return m_sessionAffinityHasBeenSet;
}

