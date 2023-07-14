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
    m_memSizeHasBeenSet(false),
    m_hasDockerfileHasBeenSet(false),
    m_baseImageHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_repoLanguageHasBeenSet(false),
    m_policyDetailHasBeenSet(false),
    m_tkeClusterInfoHasBeenSet(false),
    m_tkeWorkloadTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunServerVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("DockerfilePath") && !rsp["DockerfilePath"].IsNull())
    {
        if (!rsp["DockerfilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerfilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerfilePath = string(rsp["DockerfilePath"].GetString());
        m_dockerfilePathHasBeenSet = true;
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

    if (rsp.HasMember("PolicyType") && !rsp["PolicyType"].IsNull())
    {
        if (!rsp["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(rsp["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyThreshold") && !rsp["PolicyThreshold"].IsNull())
    {
        if (!rsp["PolicyThreshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyThreshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policyThreshold = rsp["PolicyThreshold"].GetDouble();
        m_policyThresholdHasBeenSet = true;
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

    if (rsp.HasMember("VersionIP") && !rsp["VersionIP"].IsNull())
    {
        if (!rsp["VersionIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionIP = string(rsp["VersionIP"].GetString());
        m_versionIPHasBeenSet = true;
    }

    if (rsp.HasMember("VersionPort") && !rsp["VersionPort"].IsNull())
    {
        if (!rsp["VersionPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionPort = rsp["VersionPort"].GetInt64();
        m_versionPortHasBeenSet = true;
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

    if (rsp.HasMember("PackageName") && !rsp["PackageName"].IsNull())
    {
        if (!rsp["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(rsp["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (rsp.HasMember("PackageVersion") && !rsp["PackageVersion"].IsNull())
    {
        if (!rsp["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(rsp["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (rsp.HasMember("UploadType") && !rsp["UploadType"].IsNull())
    {
        if (!rsp["UploadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadType = string(rsp["UploadType"].GetString());
        m_uploadTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RepoType") && !rsp["RepoType"].IsNull())
    {
        if (!rsp["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(rsp["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Repo") && !rsp["Repo"].IsNull())
    {
        if (!rsp["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(rsp["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (rsp.HasMember("Branch") && !rsp["Branch"].IsNull())
    {
        if (!rsp["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(rsp["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (rsp.HasMember("ServerName") && !rsp["ServerName"].IsNull())
    {
        if (!rsp["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(rsp["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsPublic") && !rsp["IsPublic"].IsNull())
    {
        if (!rsp["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = rsp["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetIds") && !rsp["SubnetIds"].IsNull())
    {
        if (!rsp["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (rsp.HasMember("CustomLogs") && !rsp["CustomLogs"].IsNull())
    {
        if (!rsp["CustomLogs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customLogs = string(rsp["CustomLogs"].GetString());
        m_customLogsHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerPort") && !rsp["ContainerPort"].IsNull())
    {
        if (!rsp["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = rsp["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (rsp.HasMember("InitialDelaySeconds") && !rsp["InitialDelaySeconds"].IsNull())
    {
        if (!rsp["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = rsp["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (rsp.HasMember("ImageUrl") && !rsp["ImageUrl"].IsNull())
    {
        if (!rsp["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(rsp["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CpuSize") && !rsp["CpuSize"].IsNull())
    {
        if (!rsp["CpuSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CpuSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = rsp["CpuSize"].GetDouble();
        m_cpuSizeHasBeenSet = true;
    }

    if (rsp.HasMember("MemSize") && !rsp["MemSize"].IsNull())
    {
        if (!rsp["MemSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MemSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = rsp["MemSize"].GetDouble();
        m_memSizeHasBeenSet = true;
    }

    if (rsp.HasMember("HasDockerfile") && !rsp["HasDockerfile"].IsNull())
    {
        if (!rsp["HasDockerfile"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HasDockerfile` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasDockerfile = rsp["HasDockerfile"].GetInt64();
        m_hasDockerfileHasBeenSet = true;
    }

    if (rsp.HasMember("BaseImage") && !rsp["BaseImage"].IsNull())
    {
        if (!rsp["BaseImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseImage = string(rsp["BaseImage"].GetString());
        m_baseImageHasBeenSet = true;
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

    if (rsp.HasMember("RepoLanguage") && !rsp["RepoLanguage"].IsNull())
    {
        if (!rsp["RepoLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoLanguage = string(rsp["RepoLanguage"].GetString());
        m_repoLanguageHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyDetail") && !rsp["PolicyDetail"].IsNull())
    {
        if (!rsp["PolicyDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PolicyDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HpaPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyDetail.push_back(item);
        }
        m_policyDetailHasBeenSet = true;
    }

    if (rsp.HasMember("TkeClusterInfo") && !rsp["TkeClusterInfo"].IsNull())
    {
        if (!rsp["TkeClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tkeClusterInfo.Deserialize(rsp["TkeClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tkeClusterInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TkeWorkloadType") && !rsp["TkeWorkloadType"].IsNull())
    {
        if (!rsp["TkeWorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeWorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeWorkloadType = string(rsp["TkeWorkloadType"].GetString());
        m_tkeWorkloadTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseRunServerVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerfilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerfilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerfilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_buildDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildDir.c_str(), allocator).Move(), allocator);
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

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyThreshold, allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
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

    if (m_versionIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionIP.c_str(), allocator).Move(), allocator);
    }

    if (m_versionPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionPort, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSize, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_hasDockerfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasDockerfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasDockerfile, allocator);
    }

    if (m_baseImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseImage.c_str(), allocator).Move(), allocator);
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_repoLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyDetail.begin(); itr != m_policyDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tkeClusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tkeClusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tkeWorkloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeWorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tkeWorkloadType.c_str(), allocator).Move(), allocator);
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

double DescribeCloudBaseRunServerVersionResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeCloudBaseRunServerVersionResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double DescribeCloudBaseRunServerVersionResponse::GetMem() const
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

int64_t DescribeCloudBaseRunServerVersionResponse::GetHasDockerfile() const
{
    return m_hasDockerfile;
}

bool DescribeCloudBaseRunServerVersionResponse::HasDockerfileHasBeenSet() const
{
    return m_hasDockerfileHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetBaseImage() const
{
    return m_baseImage;
}

bool DescribeCloudBaseRunServerVersionResponse::BaseImageHasBeenSet() const
{
    return m_baseImageHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetEntryPoint() const
{
    return m_entryPoint;
}

bool DescribeCloudBaseRunServerVersionResponse::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetRepoLanguage() const
{
    return m_repoLanguage;
}

bool DescribeCloudBaseRunServerVersionResponse::RepoLanguageHasBeenSet() const
{
    return m_repoLanguageHasBeenSet;
}

vector<HpaPolicy> DescribeCloudBaseRunServerVersionResponse::GetPolicyDetail() const
{
    return m_policyDetail;
}

bool DescribeCloudBaseRunServerVersionResponse::PolicyDetailHasBeenSet() const
{
    return m_policyDetailHasBeenSet;
}

TkeClusterInfo DescribeCloudBaseRunServerVersionResponse::GetTkeClusterInfo() const
{
    return m_tkeClusterInfo;
}

bool DescribeCloudBaseRunServerVersionResponse::TkeClusterInfoHasBeenSet() const
{
    return m_tkeClusterInfoHasBeenSet;
}

string DescribeCloudBaseRunServerVersionResponse::GetTkeWorkloadType() const
{
    return m_tkeWorkloadType;
}

bool DescribeCloudBaseRunServerVersionResponse::TkeWorkloadTypeHasBeenSet() const
{
    return m_tkeWorkloadTypeHasBeenSet;
}


