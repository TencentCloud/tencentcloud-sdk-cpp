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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeCloudBaseRunVersion返回参数结构体
                */
                class DescribeCloudBaseRunVersionResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunVersionResponse();
                    ~DescribeCloudBaseRunVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Dockerfile的路径
                     * @return DockerfilePath Dockerfile的路径
                     * 
                     */
                    std::string GetDockerfilePath() const;

                    /**
                     * 判断参数 DockerfilePath 是否已赋值
                     * @return DockerfilePath 是否已赋值
                     * 
                     */
                    bool DockerfilePathHasBeenSet() const;

                    /**
                     * 获取DockerBuild的目录
                     * @return BuildDir DockerBuild的目录
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 判断参数 BuildDir 是否已赋值
                     * @return BuildDir 是否已赋值
                     * 
                     */
                    bool BuildDirHasBeenSet() const;

                    /**
                     * 获取副本最小值
                     * @return MinNum 副本最小值
                     * 
                     */
                    int64_t GetMinNum() const;

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     * 
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取副本最大值
                     * @return MaxNum 副本最大值
                     * 
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return PolicyType 策略类型
                     * 
                     */
                    std::string GetPolicyType() const;

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
                    double GetPolicyThreshold() const;

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
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     * 
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取版本的IP
                     * @return VersionIP 版本的IP
                     * 
                     */
                    std::string GetVersionIP() const;

                    /**
                     * 判断参数 VersionIP 是否已赋值
                     * @return VersionIP 是否已赋值
                     * 
                     */
                    bool VersionIPHasBeenSet() const;

                    /**
                     * 获取版本的端口号
                     * @return VersionPort 版本的端口号
                     * 
                     */
                    int64_t GetVersionPort() const;

                    /**
                     * 判断参数 VersionPort 是否已赋值
                     * @return VersionPort 是否已赋值
                     * 
                     */
                    bool VersionPortHasBeenSet() const;

                    /**
                     * 获取版本状态
                     * @return Status 版本状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取代码包的名字
                     * @return PackageName 代码包的名字
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取代码版本的名字
                     * @return PackageVersion 代码版本的名字
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取枚举（package/repository/image)
                     * @return UploadType 枚举（package/repository/image)
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取Repo的类型(coding/gitlab/github/coding)
                     * @return RepoType Repo的类型(coding/gitlab/github/coding)
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Repo 地址
                     * 
                     */
                    std::string GetRepo() const;

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
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取服务名字
                     * @return ServerName 服务名字
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取是否对于外网开放
                     * @return IsPublic 是否对于外网开放
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例id
                     * @return SubnetIds 子网实例id
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取日志采集路径
                     * @return CustomLogs 日志采集路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 判断参数 CustomLogs 是否已赋值
                     * @return CustomLogs 是否已赋值
                     * 
                     */
                    bool CustomLogsHasBeenSet() const;

                    /**
                     * 获取监听端口
                     * @return ContainerPort 监听端口
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取延迟多长时间开始健康检查（单位s）
                     * @return InitialDelaySeconds 延迟多长时间开始健康检查（单位s）
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取镜像地址
                     * @return ImageUrl 镜像地址
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取CPU 大小
                     * @return CpuSize CPU 大小
                     * 
                     */
                    double GetCpuSize() const;

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取MEM 大小
                     * @return MemSize MEM 大小
                     * 
                     */
                    double GetMemSize() const;

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取扩缩容策略详情
                     * @return PolicyDetail 扩缩容策略详情
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetail() const;

                    /**
                     * 判断参数 PolicyDetail 是否已赋值
                     * @return PolicyDetail 是否已赋值
                     * 
                     */
                    bool PolicyDetailHasBeenSet() const;

                    /**
                     * 获取Cpu的Request值
                     * @return Cpu Cpu的Request值
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Mem的Request值
                     * @return Mem Mem的Request值
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Dockerfile的路径
                     */
                    std::string m_dockerfilePath;
                    bool m_dockerfilePathHasBeenSet;

                    /**
                     * DockerBuild的目录
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * 副本最小值
                     */
                    int64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 副本最大值
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略阈值
                     */
                    double m_policyThreshold;
                    bool m_policyThresholdHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 版本的IP
                     */
                    std::string m_versionIP;
                    bool m_versionIPHasBeenSet;

                    /**
                     * 版本的端口号
                     */
                    int64_t m_versionPort;
                    bool m_versionPortHasBeenSet;

                    /**
                     * 版本状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 代码包的名字
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 代码版本的名字
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 枚举（package/repository/image)
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * Repo的类型(coding/gitlab/github/coding)
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 分支
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 服务名字
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 是否对于外网开放
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例id
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 日志采集路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * 监听端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 延迟多长时间开始健康检查（单位s）
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * 镜像地址
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * CPU 大小
                     */
                    double m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * MEM 大小
                     */
                    double m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 扩缩容策略详情
                     */
                    std::vector<HpaPolicy> m_policyDetail;
                    bool m_policyDetailHasBeenSet;

                    /**
                     * Cpu的Request值
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Mem的Request值
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRESPONSE_H_
