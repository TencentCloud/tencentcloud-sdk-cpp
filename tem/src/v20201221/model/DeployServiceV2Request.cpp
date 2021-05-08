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

#include <tencentcloud/tem/v20201221/model/DeployServiceV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

DeployServiceV2Request::DeployServiceV2Request() :
    m_serviceIdHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_initPodNumHasBeenSet(false),
    m_cpuSpecHasBeenSet(false),
    m_memorySpecHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_imgRepoHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_envConfHasBeenSet(false),
    m_logConfsHasBeenSet(false),
    m_storageConfsHasBeenSet(false),
    m_storageMountConfsHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_jdkVersionHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_logOutputConfHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageCommandHasBeenSet(false),
    m_imageArgsHasBeenSet(false)
{
}

string DeployServiceV2Request::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_initPodNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InitPodNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initPodNum, allocator);
    }

    if (m_cpuSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpuSpec, allocator);
    }

    if (m_memorySpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemorySpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memorySpec, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_imgRepoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImgRepo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imgRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_versionDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envConf.begin(); itr != m_envConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logConfsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_logConfs.begin(); itr != m_logConfs.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageConfsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageConfs.begin(); itr != m_storageConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_storageMountConfsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageMountConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMountConfs.begin(); itr != m_storageMountConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deployModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_deployVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JdkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logOutputConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogOutputConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_logOutputConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCommandHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_imageArgsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_imageArgs.begin(); itr != m_imageArgs.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployServiceV2Request::GetServiceId() const
{
    return m_serviceId;
}

void DeployServiceV2Request::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DeployServiceV2Request::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

uint64_t DeployServiceV2Request::GetContainerPort() const
{
    return m_containerPort;
}

void DeployServiceV2Request::SetContainerPort(const uint64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool DeployServiceV2Request::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

uint64_t DeployServiceV2Request::GetInitPodNum() const
{
    return m_initPodNum;
}

void DeployServiceV2Request::SetInitPodNum(const uint64_t& _initPodNum)
{
    m_initPodNum = _initPodNum;
    m_initPodNumHasBeenSet = true;
}

bool DeployServiceV2Request::InitPodNumHasBeenSet() const
{
    return m_initPodNumHasBeenSet;
}

double DeployServiceV2Request::GetCpuSpec() const
{
    return m_cpuSpec;
}

void DeployServiceV2Request::SetCpuSpec(const double& _cpuSpec)
{
    m_cpuSpec = _cpuSpec;
    m_cpuSpecHasBeenSet = true;
}

bool DeployServiceV2Request::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

double DeployServiceV2Request::GetMemorySpec() const
{
    return m_memorySpec;
}

void DeployServiceV2Request::SetMemorySpec(const double& _memorySpec)
{
    m_memorySpec = _memorySpec;
    m_memorySpecHasBeenSet = true;
}

bool DeployServiceV2Request::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

string DeployServiceV2Request::GetNamespaceId() const
{
    return m_namespaceId;
}

void DeployServiceV2Request::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DeployServiceV2Request::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DeployServiceV2Request::GetImgRepo() const
{
    return m_imgRepo;
}

void DeployServiceV2Request::SetImgRepo(const string& _imgRepo)
{
    m_imgRepo = _imgRepo;
    m_imgRepoHasBeenSet = true;
}

bool DeployServiceV2Request::ImgRepoHasBeenSet() const
{
    return m_imgRepoHasBeenSet;
}

string DeployServiceV2Request::GetVersionDesc() const
{
    return m_versionDesc;
}

void DeployServiceV2Request::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool DeployServiceV2Request::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string DeployServiceV2Request::GetJvmOpts() const
{
    return m_jvmOpts;
}

void DeployServiceV2Request::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool DeployServiceV2Request::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

EsInfo DeployServiceV2Request::GetEsInfo() const
{
    return m_esInfo;
}

void DeployServiceV2Request::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool DeployServiceV2Request::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

vector<Pair> DeployServiceV2Request::GetEnvConf() const
{
    return m_envConf;
}

void DeployServiceV2Request::SetEnvConf(const vector<Pair>& _envConf)
{
    m_envConf = _envConf;
    m_envConfHasBeenSet = true;
}

bool DeployServiceV2Request::EnvConfHasBeenSet() const
{
    return m_envConfHasBeenSet;
}

vector<string> DeployServiceV2Request::GetLogConfs() const
{
    return m_logConfs;
}

void DeployServiceV2Request::SetLogConfs(const vector<string>& _logConfs)
{
    m_logConfs = _logConfs;
    m_logConfsHasBeenSet = true;
}

bool DeployServiceV2Request::LogConfsHasBeenSet() const
{
    return m_logConfsHasBeenSet;
}

vector<StorageConf> DeployServiceV2Request::GetStorageConfs() const
{
    return m_storageConfs;
}

void DeployServiceV2Request::SetStorageConfs(const vector<StorageConf>& _storageConfs)
{
    m_storageConfs = _storageConfs;
    m_storageConfsHasBeenSet = true;
}

bool DeployServiceV2Request::StorageConfsHasBeenSet() const
{
    return m_storageConfsHasBeenSet;
}

vector<StorageMountConf> DeployServiceV2Request::GetStorageMountConfs() const
{
    return m_storageMountConfs;
}

void DeployServiceV2Request::SetStorageMountConfs(const vector<StorageMountConf>& _storageMountConfs)
{
    m_storageMountConfs = _storageMountConfs;
    m_storageMountConfsHasBeenSet = true;
}

bool DeployServiceV2Request::StorageMountConfsHasBeenSet() const
{
    return m_storageMountConfsHasBeenSet;
}

string DeployServiceV2Request::GetDeployMode() const
{
    return m_deployMode;
}

void DeployServiceV2Request::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool DeployServiceV2Request::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string DeployServiceV2Request::GetDeployVersion() const
{
    return m_deployVersion;
}

void DeployServiceV2Request::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool DeployServiceV2Request::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

string DeployServiceV2Request::GetPkgName() const
{
    return m_pkgName;
}

void DeployServiceV2Request::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool DeployServiceV2Request::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string DeployServiceV2Request::GetJdkVersion() const
{
    return m_jdkVersion;
}

void DeployServiceV2Request::SetJdkVersion(const string& _jdkVersion)
{
    m_jdkVersion = _jdkVersion;
    m_jdkVersionHasBeenSet = true;
}

bool DeployServiceV2Request::JdkVersionHasBeenSet() const
{
    return m_jdkVersionHasBeenSet;
}

vector<string> DeployServiceV2Request::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void DeployServiceV2Request::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool DeployServiceV2Request::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

LogOutputConf DeployServiceV2Request::GetLogOutputConf() const
{
    return m_logOutputConf;
}

void DeployServiceV2Request::SetLogOutputConf(const LogOutputConf& _logOutputConf)
{
    m_logOutputConf = _logOutputConf;
    m_logOutputConfHasBeenSet = true;
}

bool DeployServiceV2Request::LogOutputConfHasBeenSet() const
{
    return m_logOutputConfHasBeenSet;
}

int64_t DeployServiceV2Request::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DeployServiceV2Request::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DeployServiceV2Request::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string DeployServiceV2Request::GetDescription() const
{
    return m_description;
}

void DeployServiceV2Request::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeployServiceV2Request::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DeployServiceV2Request::GetImageCommand() const
{
    return m_imageCommand;
}

void DeployServiceV2Request::SetImageCommand(const string& _imageCommand)
{
    m_imageCommand = _imageCommand;
    m_imageCommandHasBeenSet = true;
}

bool DeployServiceV2Request::ImageCommandHasBeenSet() const
{
    return m_imageCommandHasBeenSet;
}

vector<string> DeployServiceV2Request::GetImageArgs() const
{
    return m_imageArgs;
}

void DeployServiceV2Request::SetImageArgs(const vector<string>& _imageArgs)
{
    m_imageArgs = _imageArgs;
    m_imageArgsHasBeenSet = true;
}

bool DeployServiceV2Request::ImageArgsHasBeenSet() const
{
    return m_imageArgsHasBeenSet;
}


