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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICESIMPLEVERSIONSNAPSHOT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICESIMPLEVERSIONSNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseCodeRepoDetail.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CloudRunServiceSimpleVersionSnapshot 信息
                */
                class CloudRunServiceSimpleVersionSnapshot : public AbstractModel
                {
                public:
                    CloudRunServiceSimpleVersionSnapshot();
                    ~CloudRunServiceSimpleVersionSnapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取版本备注
                     * @return Remark 版本备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置版本备注
                     * @param _remark 版本备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取cpu规格
                     * @return Cpu cpu规格
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置cpu规格
                     * @param _cpu cpu规格
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存规格
                     * @return Mem 内存规格
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置内存规格
                     * @param _mem 内存规格
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取最小副本数
                     * @return MinNum 最小副本数
                     * 
                     */
                    int64_t GetMinNum() const;

                    /**
                     * 设置最小副本数
                     * @param _minNum 最小副本数
                     * 
                     */
                    void SetMinNum(const int64_t& _minNum);

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     * 
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取最大副本数
                     * @return MaxNum 最大副本数
                     * 
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 设置最大副本数
                     * @param _maxNum 最大副本数
                     * 
                     */
                    void SetMaxNum(const int64_t& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取镜像url
                     * @return ImageUrl 镜像url
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像url
                     * @param _imageUrl 镜像url
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取扩容策略
                     * @return PolicyType 扩容策略
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置扩容策略
                     * @param _policyType 扩容策略
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略阈值
                     * @return PolicyThreshold 策略阈值
                     * 
                     */
                    int64_t GetPolicyThreshold() const;

                    /**
                     * 设置策略阈值
                     * @param _policyThreshold 策略阈值
                     * 
                     */
                    void SetPolicyThreshold(const int64_t& _policyThreshold);

                    /**
                     * 判断参数 PolicyThreshold 是否已赋值
                     * @return PolicyThreshold 是否已赋值
                     * 
                     */
                    bool PolicyThresholdHasBeenSet() const;

                    /**
                     * 获取环境参数
                     * @return EnvParams 环境参数
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置环境参数
                     * @param _envParams 环境参数
                     * 
                     */
                    void SetEnvParams(const std::string& _envParams);

                    /**
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     * 
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取容器端口
                     * @return ContainerPort 容器端口
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置容器端口
                     * @param _containerPort 容器端口
                     * 
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取更新类型
                     * @return UploadType 更新类型
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置更新类型
                     * @param _uploadType 更新类型
                     * 
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取dockerfile路径
                     * @return DockerfilePath dockerfile路径
                     * 
                     */
                    std::string GetDockerfilePath() const;

                    /**
                     * 设置dockerfile路径
                     * @param _dockerfilePath dockerfile路径
                     * 
                     */
                    void SetDockerfilePath(const std::string& _dockerfilePath);

                    /**
                     * 判断参数 DockerfilePath 是否已赋值
                     * @return DockerfilePath 是否已赋值
                     * 
                     */
                    bool DockerfilePathHasBeenSet() const;

                    /**
                     * 获取构建路径
                     * @return BuildDir 构建路径
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 设置构建路径
                     * @param _buildDir 构建路径
                     * 
                     */
                    void SetBuildDir(const std::string& _buildDir);

                    /**
                     * 判断参数 BuildDir 是否已赋值
                     * @return BuildDir 是否已赋值
                     * 
                     */
                    bool BuildDirHasBeenSet() const;

                    /**
                     * 获取repo类型
                     * @return RepoType repo类型
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置repo类型
                     * @param _repoType repo类型
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取仓库
                     * @return Repo 仓库
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置仓库
                     * @param _repo 仓库
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取分支
                     * @return Branch 分支
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置分支
                     * @param _branch 分支
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取package名字
                     * @return PackageName package名字
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置package名字
                     * @param _packageName package名字
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取package版本
                     * @return PackageVersion package版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置package版本
                     * @param _packageVersion package版本
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取自定义log路径
                     * @return CustomLogs 自定义log路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置自定义log路径
                     * @param _customLogs 自定义log路径
                     * 
                     */
                    void SetCustomLogs(const std::string& _customLogs);

                    /**
                     * 判断参数 CustomLogs 是否已赋值
                     * @return CustomLogs 是否已赋值
                     * 
                     */
                    bool CustomLogsHasBeenSet() const;

                    /**
                     * 获取延时健康检查时间
                     * @return InitialDelaySeconds 延时健康检查时间
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置延时健康检查时间
                     * @param _initialDelaySeconds 延时健康检查时间
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取snapshot名
                     * @return SnapshotName snapshot名
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置snapshot名
                     * @param _snapshotName snapshot名
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取镜像信息
                     * @return ImageInfo 镜像信息
                     * 
                     */
                    CloudBaseRunImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
                     * @param _imageInfo 镜像信息
                     * 
                     */
                    void SetImageInfo(const CloudBaseRunImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取代码仓库信息
                     * @return CodeDetail 代码仓库信息
                     * 
                     */
                    CloudBaseCodeRepoDetail GetCodeDetail() const;

                    /**
                     * 设置代码仓库信息
                     * @param _codeDetail 代码仓库信息
                     * 
                     */
                    void SetCodeDetail(const CloudBaseCodeRepoDetail& _codeDetail);

                    /**
                     * 判断参数 CodeDetail 是否已赋值
                     * @return CodeDetail 是否已赋值
                     * 
                     */
                    bool CodeDetailHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * cpu规格
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存规格
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 最小副本数
                     */
                    int64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 镜像url
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 扩容策略
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略阈值
                     */
                    int64_t m_policyThreshold;
                    bool m_policyThresholdHasBeenSet;

                    /**
                     * 环境参数
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 容器端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 更新类型
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * dockerfile路径
                     */
                    std::string m_dockerfilePath;
                    bool m_dockerfilePathHasBeenSet;

                    /**
                     * 构建路径
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * repo类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 仓库
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 分支
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * package名字
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * package版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 自定义log路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * 延时健康检查时间
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * snapshot名
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 镜像信息
                     */
                    CloudBaseRunImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 代码仓库信息
                     */
                    CloudBaseCodeRepoDetail m_codeDetail;
                    bool m_codeDetailHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICESIMPLEVERSIONSNAPSHOT_H_
