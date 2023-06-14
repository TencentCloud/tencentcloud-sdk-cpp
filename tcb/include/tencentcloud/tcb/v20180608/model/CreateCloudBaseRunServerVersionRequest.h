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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseCodeRepoDetail.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageSecretInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVolumeMount.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseEsInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunSideSpec.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseSecurityContext.h>
#include <tencentcloud/tcb/v20180608/model/CloudRunServiceVolume.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunServiceVolumeMount.h>
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
                * CreateCloudBaseRunServerVersion请求参数结构体
                */
                class CreateCloudBaseRunServerVersionRequest : public AbstractModel
                {
                public:
                    CreateCloudBaseRunServerVersionRequest();
                    ~CreateCloudBaseRunServerVersionRequest() = default;
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
                     * 获取枚举（package/repository/image/jar/war)
                     * @return UploadType 枚举（package/repository/image/jar/war)
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置枚举（package/repository/image/jar/war)
                     * @param _uploadType 枚举（package/repository/image/jar/war)
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
                     * 获取Cpu的大小，单位：核
                     * @return Cpu Cpu的大小，单位：核
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Cpu的大小，单位：核
                     * @param _cpu Cpu的大小，单位：核
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
                     * 获取Mem的大小，单位：G
                     * @return Mem Mem的大小，单位：G
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置Mem的大小，单位：G
                     * @param _mem Mem的大小，单位：G
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
                     * 获取最小副本数，最小值：0
                     * @return MinNum 最小副本数，最小值：0
                     * 
                     */
                    int64_t GetMinNum() const;

                    /**
                     * 设置最小副本数，最小值：0
                     * @param _minNum 最小副本数，最小值：0
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
                     * 获取副本最大数，最大值：50
                     * @return MaxNum 副本最大数，最大值：50
                     * 
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 设置副本最大数，最大值：50
                     * @param _maxNum 副本最大数，最大值：50
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
                     * 获取策略类型(枚举值：比如cpu)
                     * @return PolicyType 策略类型(枚举值：比如cpu)
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型(枚举值：比如cpu)
                     * @param _policyType 策略类型(枚举值：比如cpu)
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
                     * 获取服务端口
                     * @return ContainerPort 服务端口
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置服务端口
                     * @param _containerPort 服务端口
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
                     * 获取repository的类型(coding/gitlab/github/coding)
                     * @return RepositoryType repository的类型(coding/gitlab/github/coding)
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置repository的类型(coding/gitlab/github/coding)
                     * @param _repositoryType repository的类型(coding/gitlab/github/coding)
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
                     * 获取Dockerfile地址
                     * @return DockerfilePath Dockerfile地址
                     * 
                     */
                    std::string GetDockerfilePath() const;

                    /**
                     * 设置Dockerfile地址
                     * @param _dockerfilePath Dockerfile地址
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
                     * 获取代码包的版本
                     * @return PackageVersion 代码包的版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置代码包的版本
                     * @param _packageVersion 代码包的版本
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
                     * 获取私有镜像秘钥信息
                     * @return ImageSecretInfo 私有镜像秘钥信息
                     * 
                     */
                    CloudBaseRunImageSecretInfo GetImageSecretInfo() const;

                    /**
                     * 设置私有镜像秘钥信息
                     * @param _imageSecretInfo 私有镜像秘钥信息
                     * 
                     */
                    void SetImageSecretInfo(const CloudBaseRunImageSecretInfo& _imageSecretInfo);

                    /**
                     * 判断参数 ImageSecretInfo 是否已赋值
                     * @return ImageSecretInfo 是否已赋值
                     * 
                     */
                    bool ImageSecretInfoHasBeenSet() const;

                    /**
                     * 获取私有镜像 认证名称
                     * @return ImagePullSecret 私有镜像 认证名称
                     * 
                     */
                    std::string GetImagePullSecret() const;

                    /**
                     * 设置私有镜像 认证名称
                     * @param _imagePullSecret 私有镜像 认证名称
                     * 
                     */
                    void SetImagePullSecret(const std::string& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     * 
                     */
                    bool ImagePullSecretHasBeenSet() const;

                    /**
                     * 获取用户自定义采集日志路径
                     * @return CustomLogs 用户自定义采集日志路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置用户自定义采集日志路径
                     * @param _customLogs 用户自定义采集日志路径
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
                     * 获取4 代表只能微信链路访问
                     * @return AccessType 4 代表只能微信链路访问
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置4 代表只能微信链路访问
                     * @param _accessType 4 代表只能微信链路访问
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取es信息
                     * @return EsInfo es信息
                     * 
                     */
                    CloudBaseEsInfo GetEsInfo() const;

                    /**
                     * 设置es信息
                     * @param _esInfo es信息
                     * 
                     */
                    void SetEsInfo(const CloudBaseEsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取是否使用统一域名
                     * @return EnableUnion 是否使用统一域名
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否使用统一域名
                     * @param _enableUnion 是否使用统一域名
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
                     * 获取服务路径
                     * @return ServerPath 服务路径
                     * 
                     */
                    std::string GetServerPath() const;

                    /**
                     * 设置服务路径
                     * @param _serverPath 服务路径
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
                     * 获取镜像复用的key
                     * @return ImageReuseKey 镜像复用的key
                     * 
                     */
                    std::string GetImageReuseKey() const;

                    /**
                     * 设置镜像复用的key
                     * @param _imageReuseKey 镜像复用的key
                     * 
                     */
                    void SetImageReuseKey(const std::string& _imageReuseKey);

                    /**
                     * 判断参数 ImageReuseKey 是否已赋值
                     * @return ImageReuseKey 是否已赋值
                     * 
                     */
                    bool ImageReuseKeyHasBeenSet() const;

                    /**
                     * 获取容器的描述文件
                     * @return SidecarSpecs 容器的描述文件
                     * 
                     */
                    std::vector<CloudBaseRunSideSpec> GetSidecarSpecs() const;

                    /**
                     * 设置容器的描述文件
                     * @param _sidecarSpecs 容器的描述文件
                     * 
                     */
                    void SetSidecarSpecs(const std::vector<CloudBaseRunSideSpec>& _sidecarSpecs);

                    /**
                     * 判断参数 SidecarSpecs 是否已赋值
                     * @return SidecarSpecs 是否已赋值
                     * 
                     */
                    bool SidecarSpecsHasBeenSet() const;

                    /**
                     * 获取安全特性
                     * @return Security 安全特性
                     * 
                     */
                    CloudBaseSecurityContext GetSecurity() const;

                    /**
                     * 设置安全特性
                     * @param _security 安全特性
                     * 
                     */
                    void SetSecurity(const CloudBaseSecurityContext& _security);

                    /**
                     * 判断参数 Security 是否已赋值
                     * @return Security 是否已赋值
                     * 
                     */
                    bool SecurityHasBeenSet() const;

                    /**
                     * 获取服务磁盘挂载
                     * @return ServiceVolumes 服务磁盘挂载
                     * 
                     */
                    std::vector<CloudRunServiceVolume> GetServiceVolumes() const;

                    /**
                     * 设置服务磁盘挂载
                     * @param _serviceVolumes 服务磁盘挂载
                     * 
                     */
                    void SetServiceVolumes(const std::vector<CloudRunServiceVolume>& _serviceVolumes);

                    /**
                     * 判断参数 ServiceVolumes 是否已赋值
                     * @return ServiceVolumes 是否已赋值
                     * 
                     */
                    bool ServiceVolumesHasBeenSet() const;

                    /**
                     * 获取是否创建JnsGw 0未传默认创建 1创建 2不创建
                     * @return IsCreateJnsGw 是否创建JnsGw 0未传默认创建 1创建 2不创建
                     * 
                     */
                    int64_t GetIsCreateJnsGw() const;

                    /**
                     * 设置是否创建JnsGw 0未传默认创建 1创建 2不创建
                     * @param _isCreateJnsGw 是否创建JnsGw 0未传默认创建 1创建 2不创建
                     * 
                     */
                    void SetIsCreateJnsGw(const int64_t& _isCreateJnsGw);

                    /**
                     * 判断参数 IsCreateJnsGw 是否已赋值
                     * @return IsCreateJnsGw 是否已赋值
                     * 
                     */
                    bool IsCreateJnsGwHasBeenSet() const;

                    /**
                     * 获取数据卷挂载参数
                     * @return ServiceVolumeMounts 数据卷挂载参数
                     * 
                     */
                    std::vector<CloudBaseRunServiceVolumeMount> GetServiceVolumeMounts() const;

                    /**
                     * 设置数据卷挂载参数
                     * @param _serviceVolumeMounts 数据卷挂载参数
                     * 
                     */
                    void SetServiceVolumeMounts(const std::vector<CloudBaseRunServiceVolumeMount>& _serviceVolumeMounts);

                    /**
                     * 判断参数 ServiceVolumeMounts 是否已赋值
                     * @return ServiceVolumeMounts 是否已赋值
                     * 
                     */
                    bool ServiceVolumeMountsHasBeenSet() const;

                    /**
                     * 获取是否有Dockerfile：0-default has, 1-has, 2-has not
                     * @return HasDockerfile 是否有Dockerfile：0-default has, 1-has, 2-has not
                     * 
                     */
                    int64_t GetHasDockerfile() const;

                    /**
                     * 设置是否有Dockerfile：0-default has, 1-has, 2-has not
                     * @param _hasDockerfile 是否有Dockerfile：0-default has, 1-has, 2-has not
                     * 
                     */
                    void SetHasDockerfile(const int64_t& _hasDockerfile);

                    /**
                     * 判断参数 HasDockerfile 是否已赋值
                     * @return HasDockerfile 是否已赋值
                     * 
                     */
                    bool HasDockerfileHasBeenSet() const;

                    /**
                     * 获取基础镜像
                     * @return BaseImage 基础镜像
                     * 
                     */
                    std::string GetBaseImage() const;

                    /**
                     * 设置基础镜像
                     * @param _baseImage 基础镜像
                     * 
                     */
                    void SetBaseImage(const std::string& _baseImage);

                    /**
                     * 判断参数 BaseImage 是否已赋值
                     * @return BaseImage 是否已赋值
                     * 
                     */
                    bool BaseImageHasBeenSet() const;

                    /**
                     * 获取容器启动入口命令
                     * @return EntryPoint 容器启动入口命令
                     * 
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 设置容器启动入口命令
                     * @param _entryPoint 容器启动入口命令
                     * 
                     */
                    void SetEntryPoint(const std::string& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     * 
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取仓库语言
                     * @return RepoLanguage 仓库语言
                     * 
                     */
                    std::string GetRepoLanguage() const;

                    /**
                     * 设置仓库语言
                     * @param _repoLanguage 仓库语言
                     * 
                     */
                    void SetRepoLanguage(const std::string& _repoLanguage);

                    /**
                     * 判断参数 RepoLanguage 是否已赋值
                     * @return RepoLanguage 是否已赋值
                     * 
                     */
                    bool RepoLanguageHasBeenSet() const;

                    /**
                     * 获取用户实际上传文件名（仅UploadType为jar/war时必填）
                     * @return UploadFilename 用户实际上传文件名（仅UploadType为jar/war时必填）
                     * 
                     */
                    std::string GetUploadFilename() const;

                    /**
                     * 设置用户实际上传文件名（仅UploadType为jar/war时必填）
                     * @param _uploadFilename 用户实际上传文件名（仅UploadType为jar/war时必填）
                     * 
                     */
                    void SetUploadFilename(const std::string& _uploadFilename);

                    /**
                     * 判断参数 UploadFilename 是否已赋值
                     * @return UploadFilename 是否已赋值
                     * 
                     */
                    bool UploadFilenameHasBeenSet() const;

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
                     * 枚举（package/repository/image/jar/war)
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * 流量占比
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * Cpu的大小，单位：核
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Mem的大小，单位：G
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 最小副本数，最小值：0
                     */
                    int64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 副本最大数，最大值：50
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 策略类型(枚举值：比如cpu)
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略阈值
                     */
                    int64_t m_policyThreshold;
                    bool m_policyThresholdHasBeenSet;

                    /**
                     * 服务端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * repository的类型(coding/gitlab/github/coding)
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * Dockerfile地址
                     */
                    std::string m_dockerfilePath;
                    bool m_dockerfilePathHasBeenSet;

                    /**
                     * 构建目录
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

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
                     * 代码包的版本
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
                     * 私有镜像秘钥信息
                     */
                    CloudBaseRunImageSecretInfo m_imageSecretInfo;
                    bool m_imageSecretInfoHasBeenSet;

                    /**
                     * 私有镜像 认证名称
                     */
                    std::string m_imagePullSecret;
                    bool m_imagePullSecretHasBeenSet;

                    /**
                     * 用户自定义采集日志路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

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
                     * 4 代表只能微信链路访问
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * es信息
                     */
                    CloudBaseEsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * 是否使用统一域名
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                    /**
                     * 服务路径
                     */
                    std::string m_serverPath;
                    bool m_serverPathHasBeenSet;

                    /**
                     * 镜像复用的key
                     */
                    std::string m_imageReuseKey;
                    bool m_imageReuseKeyHasBeenSet;

                    /**
                     * 容器的描述文件
                     */
                    std::vector<CloudBaseRunSideSpec> m_sidecarSpecs;
                    bool m_sidecarSpecsHasBeenSet;

                    /**
                     * 安全特性
                     */
                    CloudBaseSecurityContext m_security;
                    bool m_securityHasBeenSet;

                    /**
                     * 服务磁盘挂载
                     */
                    std::vector<CloudRunServiceVolume> m_serviceVolumes;
                    bool m_serviceVolumesHasBeenSet;

                    /**
                     * 是否创建JnsGw 0未传默认创建 1创建 2不创建
                     */
                    int64_t m_isCreateJnsGw;
                    bool m_isCreateJnsGwHasBeenSet;

                    /**
                     * 数据卷挂载参数
                     */
                    std::vector<CloudBaseRunServiceVolumeMount> m_serviceVolumeMounts;
                    bool m_serviceVolumeMountsHasBeenSet;

                    /**
                     * 是否有Dockerfile：0-default has, 1-has, 2-has not
                     */
                    int64_t m_hasDockerfile;
                    bool m_hasDockerfileHasBeenSet;

                    /**
                     * 基础镜像
                     */
                    std::string m_baseImage;
                    bool m_baseImageHasBeenSet;

                    /**
                     * 容器启动入口命令
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * 仓库语言
                     */
                    std::string m_repoLanguage;
                    bool m_repoLanguageHasBeenSet;

                    /**
                     * 用户实际上传文件名（仅UploadType为jar/war时必填）
                     */
                    std::string m_uploadFilename;
                    bool m_uploadFilenameHasBeenSet;

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

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONREQUEST_H_
