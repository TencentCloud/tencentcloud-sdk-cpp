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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ROLLUPDATECLOUDBASERUNSERVERVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ROLLUPDATECLOUDBASERUNSERVERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseCodeRepoDetail.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVolumeMount.h>
#include <tencentcloud/tcb/v20180608/model/HpaPolicy.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * RollUpdateCloudBaseRunServerVersion请求参数结构体
                */
                class RollUpdateCloudBaseRunServerVersionRequest : public AbstractModel
                {
                public:
                    RollUpdateCloudBaseRunServerVersionRequest();
                    ~RollUpdateCloudBaseRunServerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
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
                     * 获取要替换的版本名称，可以为latest
                     * @return VersionName 要替换的版本名称，可以为latest
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置要替换的版本名称，可以为latest
                     * @param _versionName 要替换的版本名称，可以为latest
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
                     * 获取枚举（package/repository/image)
                     * @return UploadType 枚举（package/repository/image)
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置枚举（package/repository/image)
                     * @param _uploadType 枚举（package/repository/image)
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
                     * 获取repository的类型(coding/gitlab/github)
                     * @return RepositoryType repository的类型(coding/gitlab/github)
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置repository的类型(coding/gitlab/github)
                     * @param _repositoryType repository的类型(coding/gitlab/github)
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取流量占比
                     * @return FlowRatio 流量占比
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量占比
                     * @param _flowRatio 流量占比
                     * 
                     */
                    void SetFlowRatio(const int64_t& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     * 
                     */
                    bool FlowRatioHasBeenSet() const;

                    /**
                     * 获取dockerfile地址
                     * @return DockerfilePath dockerfile地址
                     * 
                     */
                    std::string GetDockerfilePath() const;

                    /**
                     * 设置dockerfile地址
                     * @param _dockerfilePath dockerfile地址
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
                     * 获取构建目录
                     * @return BuildDir 构建目录
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 设置构建目录
                     * @param _buildDir 构建目录
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
                     * 获取Cpu的大小，单位：核
                     * @return Cpu Cpu的大小，单位：核
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置Cpu的大小，单位：核
                     * @param _cpu Cpu的大小，单位：核
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Mem的大小，单位：G
                     * @return Mem Mem的大小，单位：G
                     * 
                     */
                    std::string GetMem() const;

                    /**
                     * 设置Mem的大小，单位：G
                     * @param _mem Mem的大小，单位：G
                     * 
                     */
                    void SetMem(const std::string& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取最小副本数，最小值：0
                     * @return MinNum 最小副本数，最小值：0
                     * 
                     */
                    std::string GetMinNum() const;

                    /**
                     * 设置最小副本数，最小值：0
                     * @param _minNum 最小副本数，最小值：0
                     * 
                     */
                    void SetMinNum(const std::string& _minNum);

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
                    std::string GetMaxNum() const;

                    /**
                     * 设置最大副本数
                     * @param _maxNum 最大副本数
                     * 
                     */
                    void SetMaxNum(const std::string& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取策略类型
cpu/mem
                     * @return PolicyType 策略类型
cpu/mem
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型
cpu/mem
                     * @param _policyType 策略类型
cpu/mem
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
                    std::string GetPolicyThreshold() const;

                    /**
                     * 设置策略阈值
                     * @param _policyThreshold 策略阈值
                     * 
                     */
                    void SetPolicyThreshold(const std::string& _policyThreshold);

                    /**
                     * 判断参数 PolicyThreshold 是否已赋值
                     * @return PolicyThreshold 是否已赋值
                     * 
                     */
                    bool PolicyThresholdHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvParams 环境变量
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置环境变量
                     * @param _envParams 环境变量
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
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param _serverName 服务名称
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
                     * 获取repository地址
                     * @return Repository repository地址
                     * 
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置repository地址
                     * @param _repository repository地址
                     * 
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

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
                     * 获取版本备注
                     * @return VersionRemark 版本备注
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本备注
                     * @param _versionRemark 版本备注
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取代码包名字
                     * @return PackageName 代码包名字
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置代码包名字
                     * @param _packageName 代码包名字
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
                     * 获取代码包版本
                     * @return PackageVersion 代码包版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置代码包版本
                     * @param _packageVersion 代码包版本
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
                     * 获取Image的详情
                     * @return ImageInfo Image的详情
                     * 
                     */
                    CloudBaseRunImageInfo GetImageInfo() const;

                    /**
                     * 设置Image的详情
                     * @param _imageInfo Image的详情
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
                     * 获取Github等拉取代码的详情
                     * @return CodeDetail Github等拉取代码的详情
                     * 
                     */
                    CloudBaseCodeRepoDetail GetCodeDetail() const;

                    /**
                     * 设置Github等拉取代码的详情
                     * @param _codeDetail Github等拉取代码的详情
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
                     * 获取是否回放流量
                     * @return IsRebuild 是否回放流量
                     * 
                     */
                    bool GetIsRebuild() const;

                    /**
                     * 设置是否回放流量
                     * @param _isRebuild 是否回放流量
                     * 
                     */
                    void SetIsRebuild(const bool& _isRebuild);

                    /**
                     * 判断参数 IsRebuild 是否已赋值
                     * @return IsRebuild 是否已赋值
                     * 
                     */
                    bool IsRebuildHasBeenSet() const;

                    /**
                     * 获取延迟多长时间开始健康检查（单位s）
                     * @return InitialDelaySeconds 延迟多长时间开始健康检查（单位s）
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置延迟多长时间开始健康检查（单位s）
                     * @param _initialDelaySeconds 延迟多长时间开始健康检查（单位s）
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
                     * 获取cfs挂载信息
                     * @return MountVolumeInfo cfs挂载信息
                     * 
                     */
                    std::vector<CloudBaseRunVolumeMount> GetMountVolumeInfo() const;

                    /**
                     * 设置cfs挂载信息
                     * @param _mountVolumeInfo cfs挂载信息
                     * 
                     */
                    void SetMountVolumeInfo(const std::vector<CloudBaseRunVolumeMount>& _mountVolumeInfo);

                    /**
                     * 判断参数 MountVolumeInfo 是否已赋值
                     * @return MountVolumeInfo 是否已赋值
                     * 
                     */
                    bool MountVolumeInfoHasBeenSet() const;

                    /**
                     * 获取是否回滚
                     * @return Rollback 是否回滚
                     * 
                     */
                    bool GetRollback() const;

                    /**
                     * 设置是否回滚
                     * @param _rollback 是否回滚
                     * 
                     */
                    void SetRollback(const bool& _rollback);

                    /**
                     * 判断参数 Rollback 是否已赋值
                     * @return Rollback 是否已赋值
                     * 
                     */
                    bool RollbackHasBeenSet() const;

                    /**
                     * 获取版本历史名
                     * @return SnapshotName 版本历史名
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置版本历史名
                     * @param _snapshotName 版本历史名
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
                     * 获取自定义采集路径
                     * @return CustomLogs 自定义采集路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置自定义采集路径
                     * @param _customLogs 自定义采集路径
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
                     * 获取是否启用统一域名
                     * @return EnableUnion 是否启用统一域名
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否启用统一域名
                     * @param _enableUnion 是否启用统一域名
                     * 
                     */
                    void SetEnableUnion(const bool& _enableUnion);

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     * 
                     */
                    bool EnableUnionHasBeenSet() const;

                    /**
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param _operatorRemark 操作备注
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                    /**
                     * 获取服务路径（只会第一次生效）
                     * @return ServerPath 服务路径（只会第一次生效）
                     * 
                     */
                    std::string GetServerPath() const;

                    /**
                     * 设置服务路径（只会第一次生效）
                     * @param _serverPath 服务路径（只会第一次生效）
                     * 
                     */
                    void SetServerPath(const std::string& _serverPath);

                    /**
                     * 判断参数 ServerPath 是否已赋值
                     * @return ServerPath 是否已赋值
                     * 
                     */
                    bool ServerPathHasBeenSet() const;

                    /**
                     * 获取是否更新Cls
                     * @return IsUpdateCls 是否更新Cls
                     * 
                     */
                    bool GetIsUpdateCls() const;

                    /**
                     * 设置是否更新Cls
                     * @param _isUpdateCls 是否更新Cls
                     * 
                     */
                    void SetIsUpdateCls(const bool& _isUpdateCls);

                    /**
                     * 判断参数 IsUpdateCls 是否已赋值
                     * @return IsUpdateCls 是否已赋值
                     * 
                     */
                    bool IsUpdateClsHasBeenSet() const;

                    /**
                     * 获取自动扩缩容策略组
                     * @return PolicyDetail 自动扩缩容策略组
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetail() const;

                    /**
                     * 设置自动扩缩容策略组
                     * @param _policyDetail 自动扩缩容策略组
                     * 
                     */
                    void SetPolicyDetail(const std::vector<HpaPolicy>& _policyDetail);

                    /**
                     * 判断参数 PolicyDetail 是否已赋值
                     * @return PolicyDetail 是否已赋值
                     * 
                     */
                    bool PolicyDetailHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 要替换的版本名称，可以为latest
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 枚举（package/repository/image)
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * repository的类型(coding/gitlab/github)
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 流量占比
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * dockerfile地址
                     */
                    std::string m_dockerfilePath;
                    bool m_dockerfilePathHasBeenSet;

                    /**
                     * 构建目录
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * Cpu的大小，单位：核
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Mem的大小，单位：G
                     */
                    std::string m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 最小副本数，最小值：0
                     */
                    std::string m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    std::string m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 策略类型
cpu/mem
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略阈值
                     */
                    std::string m_policyThreshold;
                    bool m_policyThresholdHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 容器端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * repository地址
                     */
                    std::string m_repository;
                    bool m_repositoryHasBeenSet;

                    /**
                     * 分支
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 版本备注
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 代码包名字
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 代码包版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Image的详情
                     */
                    CloudBaseRunImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * Github等拉取代码的详情
                     */
                    CloudBaseCodeRepoDetail m_codeDetail;
                    bool m_codeDetailHasBeenSet;

                    /**
                     * 是否回放流量
                     */
                    bool m_isRebuild;
                    bool m_isRebuildHasBeenSet;

                    /**
                     * 延迟多长时间开始健康检查（单位s）
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * cfs挂载信息
                     */
                    std::vector<CloudBaseRunVolumeMount> m_mountVolumeInfo;
                    bool m_mountVolumeInfoHasBeenSet;

                    /**
                     * 是否回滚
                     */
                    bool m_rollback;
                    bool m_rollbackHasBeenSet;

                    /**
                     * 版本历史名
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 自定义采集路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * 是否启用统一域名
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                    /**
                     * 服务路径（只会第一次生效）
                     */
                    std::string m_serverPath;
                    bool m_serverPathHasBeenSet;

                    /**
                     * 是否更新Cls
                     */
                    bool m_isUpdateCls;
                    bool m_isUpdateClsHasBeenSet;

                    /**
                     * 自动扩缩容策略组
                     */
                    std::vector<HpaPolicy> m_policyDetail;
                    bool m_policyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ROLLUPDATECLOUDBASERUNSERVERVERSIONREQUEST_H_
