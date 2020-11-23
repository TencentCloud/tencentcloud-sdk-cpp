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
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param EnvId 环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取枚举（package/repository/image)
                     * @return UploadType 枚举（package/repository/image)
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置枚举（package/repository/image)
                     * @param UploadType 枚举（package/repository/image)
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取流量占比
                     * @return FlowRatio 流量占比
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量占比
                     * @param FlowRatio 流量占比
                     */
                    void SetFlowRatio(const int64_t& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     */
                    bool FlowRatioHasBeenSet() const;

                    /**
                     * 获取Cpu的大小，单位：核
                     * @return Cpu Cpu的大小，单位：核
                     */
                    double GetCpu() const;

                    /**
                     * 设置Cpu的大小，单位：核
                     * @param Cpu Cpu的大小，单位：核
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Mem的大小，单位：G
                     * @return Mem Mem的大小，单位：G
                     */
                    double GetMem() const;

                    /**
                     * 设置Mem的大小，单位：G
                     * @param Mem Mem的大小，单位：G
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取最小副本数，最小值：0
                     * @return MinNum 最小副本数，最小值：0
                     */
                    int64_t GetMinNum() const;

                    /**
                     * 设置最小副本数，最小值：0
                     * @param MinNum 最小副本数，最小值：0
                     */
                    void SetMinNum(const int64_t& _minNum);

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取副本最大数，最大值：50
                     * @return MaxNum 副本最大数，最大值：50
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 设置副本最大数，最大值：50
                     * @param MaxNum 副本最大数，最大值：50
                     */
                    void SetMaxNum(const int64_t& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取策略类型(枚举值：比如cpu)
                     * @return PolicyType 策略类型(枚举值：比如cpu)
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型(枚举值：比如cpu)
                     * @param PolicyType 策略类型(枚举值：比如cpu)
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略阈值
                     * @return PolicyThreshold 策略阈值
                     */
                    int64_t GetPolicyThreshold() const;

                    /**
                     * 设置策略阈值
                     * @param PolicyThreshold 策略阈值
                     */
                    void SetPolicyThreshold(const int64_t& _policyThreshold);

                    /**
                     * 判断参数 PolicyThreshold 是否已赋值
                     * @return PolicyThreshold 是否已赋值
                     */
                    bool PolicyThresholdHasBeenSet() const;

                    /**
                     * 获取服务端口
                     * @return ContainerPort 服务端口
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置服务端口
                     * @param ContainerPort 服务端口
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServerName 服务名称
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param ServerName 服务名称
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取repository的类型(coding/gitlab/github/coding)
                     * @return RepositoryType repository的类型(coding/gitlab/github/coding)
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置repository的类型(coding/gitlab/github/coding)
                     * @param RepositoryType repository的类型(coding/gitlab/github/coding)
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取Dockerfile地址
                     * @return DockerfilePath Dockerfile地址
                     */
                    std::string GetDockerfilePath() const;

                    /**
                     * 设置Dockerfile地址
                     * @param DockerfilePath Dockerfile地址
                     */
                    void SetDockerfilePath(const std::string& _dockerfilePath);

                    /**
                     * 判断参数 DockerfilePath 是否已赋值
                     * @return DockerfilePath 是否已赋值
                     */
                    bool DockerfilePathHasBeenSet() const;

                    /**
                     * 获取构建目录
                     * @return BuildDir 构建目录
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 设置构建目录
                     * @param BuildDir 构建目录
                     */
                    void SetBuildDir(const std::string& _buildDir);

                    /**
                     * 判断参数 BuildDir 是否已赋值
                     * @return BuildDir 是否已赋值
                     */
                    bool BuildDirHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvParams 环境变量
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置环境变量
                     * @param EnvParams 环境变量
                     */
                    void SetEnvParams(const std::string& _envParams);

                    /**
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取repository地址
                     * @return Repository repository地址
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置repository地址
                     * @param Repository repository地址
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     */
                    bool RepositoryHasBeenSet() const;

                    /**
                     * 获取分支
                     * @return Branch 分支
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置分支
                     * @param Branch 分支
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取版本备注
                     * @return VersionRemark 版本备注
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本备注
                     * @param VersionRemark 版本备注
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取代码包名字
                     * @return PackageName 代码包名字
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置代码包名字
                     * @param PackageName 代码包名字
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取代码包的版本
                     * @return PackageVersion 代码包的版本
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置代码包的版本
                     * @param PackageVersion 代码包的版本
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取Image的详情
                     * @return ImageInfo Image的详情
                     */
                    CloudBaseRunImageInfo GetImageInfo() const;

                    /**
                     * 设置Image的详情
                     * @param ImageInfo Image的详情
                     */
                    void SetImageInfo(const CloudBaseRunImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取Github等拉取代码的详情
                     * @return CodeDetail Github等拉取代码的详情
                     */
                    CloudBaseCodeRepoDetail GetCodeDetail() const;

                    /**
                     * 设置Github等拉取代码的详情
                     * @param CodeDetail Github等拉取代码的详情
                     */
                    void SetCodeDetail(const CloudBaseCodeRepoDetail& _codeDetail);

                    /**
                     * 判断参数 CodeDetail 是否已赋值
                     * @return CodeDetail 是否已赋值
                     */
                    bool CodeDetailHasBeenSet() const;

                    /**
                     * 获取私有镜像秘钥信息
                     * @return ImageSecretInfo 私有镜像秘钥信息
                     */
                    CloudBaseRunImageSecretInfo GetImageSecretInfo() const;

                    /**
                     * 设置私有镜像秘钥信息
                     * @param ImageSecretInfo 私有镜像秘钥信息
                     */
                    void SetImageSecretInfo(const CloudBaseRunImageSecretInfo& _imageSecretInfo);

                    /**
                     * 判断参数 ImageSecretInfo 是否已赋值
                     * @return ImageSecretInfo 是否已赋值
                     */
                    bool ImageSecretInfoHasBeenSet() const;

                    /**
                     * 获取私有镜像 认证名称
                     * @return ImagePullSecret 私有镜像 认证名称
                     */
                    std::string GetImagePullSecret() const;

                    /**
                     * 设置私有镜像 认证名称
                     * @param ImagePullSecret 私有镜像 认证名称
                     */
                    void SetImagePullSecret(const std::string& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     */
                    bool ImagePullSecretHasBeenSet() const;

                    /**
                     * 获取用户自定义采集日志路径
                     * @return CustomLogs 用户自定义采集日志路径
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置用户自定义采集日志路径
                     * @param CustomLogs 用户自定义采集日志路径
                     */
                    void SetCustomLogs(const std::string& _customLogs);

                    /**
                     * 判断参数 CustomLogs 是否已赋值
                     * @return CustomLogs 是否已赋值
                     */
                    bool CustomLogsHasBeenSet() const;

                    /**
                     * 获取延迟多长时间开始健康检查（单位s）
                     * @return InitialDelaySeconds 延迟多长时间开始健康检查（单位s）
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置延迟多长时间开始健康检查（单位s）
                     * @param InitialDelaySeconds 延迟多长时间开始健康检查（单位s）
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取cfs挂载信息
                     * @return MountVolumeInfo cfs挂载信息
                     */
                    std::vector<CloudBaseRunVolumeMount> GetMountVolumeInfo() const;

                    /**
                     * 设置cfs挂载信息
                     * @param MountVolumeInfo cfs挂载信息
                     */
                    void SetMountVolumeInfo(const std::vector<CloudBaseRunVolumeMount>& _mountVolumeInfo);

                    /**
                     * 判断参数 MountVolumeInfo 是否已赋值
                     * @return MountVolumeInfo 是否已赋值
                     */
                    bool MountVolumeInfoHasBeenSet() const;

                    /**
                     * 获取4 代表只能微信链路访问
                     * @return AccessType 4 代表只能微信链路访问
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置4 代表只能微信链路访问
                     * @param AccessType 4 代表只能微信链路访问
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取es信息
                     * @return EsInfo es信息
                     */
                    CloudBaseEsInfo GetEsInfo() const;

                    /**
                     * 设置es信息
                     * @param EsInfo es信息
                     */
                    void SetEsInfo(const CloudBaseEsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取是否使用统一域名
                     * @return EnableUnion 是否使用统一域名
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否使用统一域名
                     * @param EnableUnion 是否使用统一域名
                     */
                    void SetEnableUnion(const bool& _enableUnion);

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     */
                    bool EnableUnionHasBeenSet() const;

                    /**
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param OperatorRemark 操作备注
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 枚举（package/repository/image)
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONREQUEST_H_
