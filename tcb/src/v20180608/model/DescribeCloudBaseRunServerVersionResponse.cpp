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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DescribeCloudBaseRunServerVersionResponse::DescribeCloudBaseRunServerVersionResponse() :
    m_versionNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dockerfilePathHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyThresholdHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_versionIPHasBeenSet(false),
    m_versionPortHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cpuSizeHasBeenSet(false),
    m_memSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunServerVersionResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("DockerfilePath") && !rsp["DockerfilePath"].IsNull())
    {
        if (!rsp["DockerfilePath"].IsString())
        {
            return CoreInternalOutcome(Error("response `DockerfilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerfilePath = string(rsp["DockerfilePath"].GetString());
        m_dockerfilePathHasBeenSet = true;
    }

    if (rsp.HasMember("BuildDir") && !rsp["BuildDir"].IsNull())
    {
        if (!rsp["BuildDir"].IsString())
        {
            return CoreInternalOutcome(Error("response `BuildDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildDir = string(rsp["BuildDir"].GetString());
        m_buildDirHasBeenSet = true;
    }

    if (rsp.HasMember("Cpu") && !rsp["Cpu"].IsNull())
    {
        if (!rsp["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = rsp["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (rsp.HasMember("Mem") && !rsp["Mem"].IsNull())
    {
        if (!rsp["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = rsp["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (rsp.HasMember("MinNum") && !rsp["MinNum"].IsNull())
    {
        if (!rsp["MinNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MinNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNum = rsp["MinNum"].GetInt64();
        m_minNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxNum") && !rsp["MaxNum"].IsNull())
    {
        if (!rsp["MaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNum = rsp["MaxNum"].GetInt64();
        m_maxNumHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyType") && !rsp["PolicyType"].IsNull())
    {
        if (!rsp["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(rsp["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyThreshold") && !rsp["PolicyThreshold"].IsNull())
    {
        if (!rsp["PolicyThreshold"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `PolicyThreshold` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policyThreshold = rsp["PolicyThreshold"].GetDouble();
        m_policyThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("EnvParams") && !rsp["EnvParams"].IsNull())
    {
        if (!rsp["EnvParams"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envParams = string(rsp["EnvParams"].GetString());
        m_envParamsHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedTime") && !rsp["UpdatedTime"].IsNull())
    {
        if (!rsp["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(rsp["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VersionIP") && !rsp["VersionIP"].IsNull())
    {
        if (!rsp["VersionIP"].IsString())
        {
            return CoreInternalOutcome(Error("response `VersionIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionIP = string(rsp["VersionIP"].GetString());
        m_versionIPHasBeenSet = true;
    }

    if (rsp.HasMember("VersionPort") && !rsp["VersionPort"].IsNull())
    {
        if (!rsp["VersionPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VersionPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionPort = rsp["VersionPort"].GetInt64();
        m_versionPortHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("PackageName") && !rsp["PackageName"].IsNull())
    {
        if (!rsp["PackageName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(rsp["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (rsp.HasMember("PackageVersion") && !rsp["PackageVersion"].IsNull())
    {
        if (!rsp["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(rsp["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (rsp.HasMember("UploadType") && !rsp["UploadType"].IsNull())
    {
        if (!rsp["UploadType"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadType = string(rsp["UploadType"].GetString());
        m_uploadTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RepoType") && !rsp["RepoType"].IsNull())
    {
        if (!rsp["RepoType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(rsp["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Repo") && !rsp["Repo"].IsNull())
    {
        if (!rsp["Repo"].IsString())
        {
            return CoreInternalOutcome(Error("response `Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(rsp["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (rsp.HasMember("Branch") && !rsp["Branch"].IsNull())
    {
        if (!rsp["Branch"].IsString())
        {
            return CoreInternalOutcome(Error("response `Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(rsp["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (rsp.HasMember("ServerName") && !rsp["ServerName"].IsNull())
    {
        if (!rsp["ServerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(rsp["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsPublic") && !rsp["IsPublic"].IsNull())
    {
        if (!rsp["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = rsp["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetIds") && !rsp["SubnetIds"].IsNull())
    {
        if (!rsp["SubnetIds"].IsArray())
            return CoreInternalOutcome(Error("response `SubnetIds` is not array type"));

        const Value &tmpValue = rsp["SubnetIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (rsp.HasMember("CustomLogs") && !rsp["CustomLogs"].IsNull())
    {
        if (!rsp["CustomLogs"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomLogs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customLogs = string(rsp["CustomLogs"].GetString());
        m_customLogsHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerPort") && !rsp["ContainerPort"].IsNull())
    {
        if (!rsp["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = rsp["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (rsp.HasMember("InitialDelaySeconds") && !rsp["InitialDelaySeconds"].IsNull())
    {
        if (!rsp["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = rsp["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (rsp.HasMember("ImageUrl") && !rsp["ImageUrl"].IsNull())
    {
        if (!rsp["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(rsp["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CpuSize") && !rsp["CpuSize"].IsNull())
    {
        if (!rsp["CpuSize"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `CpuSize` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = rsp["CpuSize"].GetDouble();
        m_cpuSizeHasBeenSet = true;
    }

    if (rsp.HasMember("MemSize") && !rsp["MemSize"].IsNull())
    {
        if (!rsp["MemSize"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MemSize` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = rsp["MemSize"].GetDouble();
        m_memSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCloudBaseRunServerVersionResponse::GetVersionName() const
{
    return m_versionName;
}

bool DescribeCloudBaseRunServerVersionResponse::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeCloudBaseRunServerVersionResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetDockerfilePath() const
{
    return m_dockerfilePath;
}

bool DescribeCloudBaseRunServerVersionResponse::DockerfilePathHasBeenSet() const
{
    return m_dockerfilePathHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetBuildDir() const
{
    return m_buildDir;
}

bool DescribeCloudBaseRunServerVersionResponse::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeCloudBaseRunServerVersionResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetMem() const
{
    return m_mem;
}

bool DescribeCloudBaseRunServerVersionResponse::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetMinNum() const
{
    return m_minNum;
}

bool DescribeCloudBaseRunServerVersionResponse::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetMaxNum() const
{
    return m_maxNum;
}

bool DescribeCloudBaseRunServerVersionResponse::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetPolicyType() const
{
    return m_policyType;
}

bool DescribeCloudBaseRunServerVersionResponse::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

double DescribeCloudBaseRunServerVersionResponse::GetPolicyThreshold() const
{
    return m_policyThreshold;
}

bool DescribeCloudBaseRunServerVersionResponse::PolicyThresholdHasBeenSet() const
{
    return m_policyThresholdHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetEnvParams() const
{
    return m_envParams;
}

bool DescribeCloudBaseRunServerVersionResponse::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeCloudBaseRunServerVersionResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetUpdatedTime() const
{
    return m_updatedTime;
}

bool DescribeCloudBaseRunServerVersionResponse::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetVersionIP() const
{
    return m_versionIP;
}

bool DescribeCloudBaseRunServerVersionResponse::VersionIPHasBeenSet() const
{
    return m_versionIPHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetVersionPort() const
{
    return m_versionPort;
}

bool DescribeCloudBaseRunServerVersionResponse::VersionPortHasBeenSet() const
{
    return m_versionPortHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCloudBaseRunServerVersionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetPackageName() const
{
    return m_packageName;
}

bool DescribeCloudBaseRunServerVersionResponse::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetPackageVersion() const
{
    return m_packageVersion;
}

bool DescribeCloudBaseRunServerVersionResponse::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetUploadType() const
{
    return m_uploadType;
}

bool DescribeCloudBaseRunServerVersionResponse::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetRepoType() const
{
    return m_repoType;
}

bool DescribeCloudBaseRunServerVersionResponse::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetRepo() const
{
    return m_repo;
}

bool DescribeCloudBaseRunServerVersionResponse::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetBranch() const
{
    return m_branch;
}

bool DescribeCloudBaseRunServerVersionResponse::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetServerName() const
{
    return m_serverName;
}

bool DescribeCloudBaseRunServerVersionResponse::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

bool DescribeCloudBaseRunServerVersionResponse::GetIsPublic() const
{
    return m_isPublic;
}

bool DescribeCloudBaseRunServerVersionResponse::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeCloudBaseRunServerVersionResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> DescribeCloudBaseRunServerVersionResponse::GetSubnetIds() const
{
    return m_subnetIds;
}

bool DescribeCloudBaseRunServerVersionResponse::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetCustomLogs() const
{
    return m_customLogs;
}

bool DescribeCloudBaseRunServerVersionResponse::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetContainerPort() const
{
    return m_containerPort;
}

bool DescribeCloudBaseRunServerVersionResponse::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

int64_t DescribeCloudBaseRunServerVersionResponse::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

bool DescribeCloudBaseRunServerVersionResponse::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetImageUrl() const
{
    return m_imageUrl;
}

bool DescribeCloudBaseRunServerVersionResponse::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

double DescribeCloudBaseRunServerVersionResponse::GetCpuSize() const
{
    return m_cpuSize;
}

bool DescribeCloudBaseRunServerVersionResponse::CpuSizeHasBeenSet() const
{
    return m_cpuSizeHasBeenSet;
}

double DescribeCloudBaseRunServerVersionResponse::GetMemSize() const
{
    return m_memSize;
}

bool DescribeCloudBaseRunServerVersionResponse::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}


