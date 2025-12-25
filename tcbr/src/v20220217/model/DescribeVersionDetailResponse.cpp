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

#include <tencentcloud/tcbr/v20220217/model/DescribeVersionDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DescribeVersionDetailResponse::DescribeVersionDetailResponse() :
    m_nameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_dockerfileHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_logPathHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_vpcConfHasBeenSet(false),
    m_volumesConfHasBeenSet(false),
    m_buildPacksHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVersionDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Port") && !rsp["Port"].IsNull())
    {
        if (!rsp["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = rsp["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (rsp.HasMember("Cpu") && !rsp["Cpu"].IsNull())
    {
        if (!rsp["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = rsp["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (rsp.HasMember("Mem") && !rsp["Mem"].IsNull())
    {
        if (!rsp["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = rsp["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }

    if (rsp.HasMember("MinNum") && !rsp["MinNum"].IsNull())
    {
        if (!rsp["MinNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MinNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNum = rsp["MinNum"].GetInt64();
        m_minNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxNum") && !rsp["MaxNum"].IsNull())
    {
        if (!rsp["MaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNum = rsp["MaxNum"].GetInt64();
        m_maxNumHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyDetails") && !rsp["PolicyDetails"].IsNull())
    {
        if (!rsp["PolicyDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PolicyDetails"];
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

    if (rsp.HasMember("Dockerfile") && !rsp["Dockerfile"].IsNull())
    {
        if (!rsp["Dockerfile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dockerfile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerfile = string(rsp["Dockerfile"].GetString());
        m_dockerfileHasBeenSet = true;
    }

    if (rsp.HasMember("BuildDir") && !rsp["BuildDir"].IsNull())
    {
        if (!rsp["BuildDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildDir = string(rsp["BuildDir"].GetString());
        m_buildDirHasBeenSet = true;
    }

    if (rsp.HasMember("EnvParams") && !rsp["EnvParams"].IsNull())
    {
        if (!rsp["EnvParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envParams = string(rsp["EnvParams"].GetString());
        m_envParamsHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedTime") && !rsp["UpdatedTime"].IsNull())
    {
        if (!rsp["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(rsp["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogPath") && !rsp["LogPath"].IsNull())
    {
        if (!rsp["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(rsp["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (rsp.HasMember("EntryPoint") && !rsp["EntryPoint"].IsNull())
    {
        if (!rsp["EntryPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntryPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryPoint = string(rsp["EntryPoint"].GetString());
        m_entryPointHasBeenSet = true;
    }

    if (rsp.HasMember("Cmd") && !rsp["Cmd"].IsNull())
    {
        if (!rsp["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(rsp["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (rsp.HasMember("VpcConf") && !rsp["VpcConf"].IsNull())
    {
        if (!rsp["VpcConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConf.Deserialize(rsp["VpcConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfHasBeenSet = true;
    }

    if (rsp.HasMember("VolumesConf") && !rsp["VolumesConf"].IsNull())
    {
        if (!rsp["VolumesConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VolumesConf` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VolumesConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumesConf.push_back(item);
        }
        m_volumesConfHasBeenSet = true;
    }

    if (rsp.HasMember("BuildPacks") && !rsp["BuildPacks"].IsNull())
    {
        if (!rsp["BuildPacks"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacks` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_buildPacks.Deserialize(rsp["BuildPacks"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_buildPacksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVersionDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
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

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumesConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumesConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumesConf.begin(); itr != m_volumesConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_buildPacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildPacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_buildPacks.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeVersionDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeVersionDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeVersionDetailResponse::GetPort() const
{
    return m_port;
}

bool DescribeVersionDetailResponse::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

double DescribeVersionDetailResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeVersionDetailResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double DescribeVersionDetailResponse::GetMem() const
{
    return m_mem;
}

bool DescribeVersionDetailResponse::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t DescribeVersionDetailResponse::GetMinNum() const
{
    return m_minNum;
}

bool DescribeVersionDetailResponse::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

int64_t DescribeVersionDetailResponse::GetMaxNum() const
{
    return m_maxNum;
}

bool DescribeVersionDetailResponse::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

vector<HpaPolicy> DescribeVersionDetailResponse::GetPolicyDetails() const
{
    return m_policyDetails;
}

bool DescribeVersionDetailResponse::PolicyDetailsHasBeenSet() const
{
    return m_policyDetailsHasBeenSet;
}

string DescribeVersionDetailResponse::GetDockerfile() const
{
    return m_dockerfile;
}

bool DescribeVersionDetailResponse::DockerfileHasBeenSet() const
{
    return m_dockerfileHasBeenSet;
}

string DescribeVersionDetailResponse::GetBuildDir() const
{
    return m_buildDir;
}

bool DescribeVersionDetailResponse::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

string DescribeVersionDetailResponse::GetEnvParams() const
{
    return m_envParams;
}

bool DescribeVersionDetailResponse::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

string DescribeVersionDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVersionDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVersionDetailResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeVersionDetailResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeVersionDetailResponse::GetUpdatedTime() const
{
    return m_updatedTime;
}

bool DescribeVersionDetailResponse::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string DescribeVersionDetailResponse::GetLogPath() const
{
    return m_logPath;
}

bool DescribeVersionDetailResponse::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string DescribeVersionDetailResponse::GetEntryPoint() const
{
    return m_entryPoint;
}

bool DescribeVersionDetailResponse::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string DescribeVersionDetailResponse::GetCmd() const
{
    return m_cmd;
}

bool DescribeVersionDetailResponse::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

VpcConf DescribeVersionDetailResponse::GetVpcConf() const
{
    return m_vpcConf;
}

bool DescribeVersionDetailResponse::VpcConfHasBeenSet() const
{
    return m_vpcConfHasBeenSet;
}

vector<VolumeConf> DescribeVersionDetailResponse::GetVolumesConf() const
{
    return m_volumesConf;
}

bool DescribeVersionDetailResponse::VolumesConfHasBeenSet() const
{
    return m_volumesConfHasBeenSet;
}

BuildPacksInfo DescribeVersionDetailResponse::GetBuildPacks() const
{
    return m_buildPacks;
}

bool DescribeVersionDetailResponse::BuildPacksHasBeenSet() const
{
    return m_buildPacksHasBeenSet;
}


