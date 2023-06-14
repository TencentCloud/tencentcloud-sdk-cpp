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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/EsInfo.h>
#include <tencentcloud/tem/v20201221/model/Pair.h>
#include <tencentcloud/tem/v20201221/model/StorageConf.h>
#include <tencentcloud/tem/v20201221/model/StorageMountConf.h>
#include <tencentcloud/tem/v20201221/model/LogOutputConf.h>
#include <tencentcloud/tem/v20201221/model/PortMapping.h>
#include <tencentcloud/tem/v20201221/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20201221/model/EksService.h>
#include <tencentcloud/tem/v20201221/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20201221/model/HealthCheckConfig.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DeployServiceV2请求参数结构体
                */
                class DeployServiceV2Request : public AbstractModel
                {
                public:
                    DeployServiceV2Request();
                    ~DeployServiceV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取容器端口
                     * @return ContainerPort 容器端口
                     * 
                     */
                    uint64_t GetContainerPort() const;

                    /**
                     * 设置容器端口
                     * @param _containerPort 容器端口
                     * 
                     */
                    void SetContainerPort(const uint64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取初始化 pod 数
                     * @return InitPodNum 初始化 pod 数
                     * 
                     */
                    uint64_t GetInitPodNum() const;

                    /**
                     * 设置初始化 pod 数
                     * @param _initPodNum 初始化 pod 数
                     * 
                     */
                    void SetInitPodNum(const uint64_t& _initPodNum);

                    /**
                     * 判断参数 InitPodNum 是否已赋值
                     * @return InitPodNum 是否已赋值
                     * 
                     */
                    bool InitPodNumHasBeenSet() const;

                    /**
                     * 获取cpu规格
                     * @return CpuSpec cpu规格
                     * 
                     */
                    double GetCpuSpec() const;

                    /**
                     * 设置cpu规格
                     * @param _cpuSpec cpu规格
                     * 
                     */
                    void SetCpuSpec(const double& _cpuSpec);

                    /**
                     * 判断参数 CpuSpec 是否已赋值
                     * @return CpuSpec 是否已赋值
                     * 
                     */
                    bool CpuSpecHasBeenSet() const;

                    /**
                     * 获取内存规格
                     * @return MemorySpec 内存规格
                     * 
                     */
                    double GetMemorySpec() const;

                    /**
                     * 设置内存规格
                     * @param _memorySpec 内存规格
                     * 
                     */
                    void SetMemorySpec(const double& _memorySpec);

                    /**
                     * 判断参数 MemorySpec 是否已赋值
                     * @return MemorySpec 是否已赋值
                     * 
                     */
                    bool MemorySpecHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return NamespaceId 环境ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置环境ID
                     * @param _namespaceId 环境ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取镜像仓库
                     * @return ImgRepo 镜像仓库
                     * 
                     */
                    std::string GetImgRepo() const;

                    /**
                     * 设置镜像仓库
                     * @param _imgRepo 镜像仓库
                     * 
                     */
                    void SetImgRepo(const std::string& _imgRepo);

                    /**
                     * 判断参数 ImgRepo 是否已赋值
                     * @return ImgRepo 是否已赋值
                     * 
                     */
                    bool ImgRepoHasBeenSet() const;

                    /**
                     * 获取版本描述信息
                     * @return VersionDesc 版本描述信息
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置版本描述信息
                     * @param _versionDesc 版本描述信息
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取启动参数
                     * @return JvmOpts 启动参数
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置启动参数
                     * @param _jvmOpts 启动参数
                     * 
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     * 
                     */
                    bool JvmOptsHasBeenSet() const;

                    /**
                     * 获取弹性伸缩配置，不传默认不启用弹性伸缩配置
                     * @return EsInfo 弹性伸缩配置，不传默认不启用弹性伸缩配置
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置弹性伸缩配置，不传默认不启用弹性伸缩配置
                     * @param _esInfo 弹性伸缩配置，不传默认不启用弹性伸缩配置
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取环境变量配置
                     * @return EnvConf 环境变量配置
                     * 
                     */
                    std::vector<Pair> GetEnvConf() const;

                    /**
                     * 设置环境变量配置
                     * @param _envConf 环境变量配置
                     * 
                     */
                    void SetEnvConf(const std::vector<Pair>& _envConf);

                    /**
                     * 判断参数 EnvConf 是否已赋值
                     * @return EnvConf 是否已赋值
                     * 
                     */
                    bool EnvConfHasBeenSet() const;

                    /**
                     * 获取日志配置
                     * @return LogConfs 日志配置
                     * 
                     */
                    std::vector<std::string> GetLogConfs() const;

                    /**
                     * 设置日志配置
                     * @param _logConfs 日志配置
                     * 
                     */
                    void SetLogConfs(const std::vector<std::string>& _logConfs);

                    /**
                     * 判断参数 LogConfs 是否已赋值
                     * @return LogConfs 是否已赋值
                     * 
                     */
                    bool LogConfsHasBeenSet() const;

                    /**
                     * 获取数据卷配置
                     * @return StorageConfs 数据卷配置
                     * 
                     */
                    std::vector<StorageConf> GetStorageConfs() const;

                    /**
                     * 设置数据卷配置
                     * @param _storageConfs 数据卷配置
                     * 
                     */
                    void SetStorageConfs(const std::vector<StorageConf>& _storageConfs);

                    /**
                     * 判断参数 StorageConfs 是否已赋值
                     * @return StorageConfs 是否已赋值
                     * 
                     */
                    bool StorageConfsHasBeenSet() const;

                    /**
                     * 获取数据卷挂载配置
                     * @return StorageMountConfs 数据卷挂载配置
                     * 
                     */
                    std::vector<StorageMountConf> GetStorageMountConfs() const;

                    /**
                     * 设置数据卷挂载配置
                     * @param _storageMountConfs 数据卷挂载配置
                     * 
                     */
                    void SetStorageMountConfs(const std::vector<StorageMountConf>& _storageMountConfs);

                    /**
                     * 判断参数 StorageMountConfs 是否已赋值
                     * @return StorageMountConfs 是否已赋值
                     * 
                     */
                    bool StorageMountConfsHasBeenSet() const;

                    /**
                     * 获取部署类型。
- JAR：通过 jar 包部署
- WAR：通过 war 包部署
- IMAGE：通过镜像部署
                     * @return DeployMode 部署类型。
- JAR：通过 jar 包部署
- WAR：通过 war 包部署
- IMAGE：通过镜像部署
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署类型。
- JAR：通过 jar 包部署
- WAR：通过 war 包部署
- IMAGE：通过镜像部署
                     * @param _deployMode 部署类型。
- JAR：通过 jar 包部署
- WAR：通过 war 包部署
- IMAGE：通过镜像部署
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     * @return DeployVersion 部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     * @param _deployVersion 部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取包名。使用 JAR 包或者 WAR 包部署的时候必填。
                     * @return PkgName 包名。使用 JAR 包或者 WAR 包部署的时候必填。
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置包名。使用 JAR 包或者 WAR 包部署的时候必填。
                     * @param _pkgName 包名。使用 JAR 包或者 WAR 包部署的时候必填。
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取JDK 版本。
- KONA：使用 kona jdk。
- OPEN：使用 open jdk。
                     * @return JdkVersion JDK 版本。
- KONA：使用 kona jdk。
- OPEN：使用 open jdk。
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置JDK 版本。
- KONA：使用 kona jdk。
- OPEN：使用 open jdk。
                     * @param _jdkVersion JDK 版本。
- KONA：使用 kona jdk。
- OPEN：使用 open jdk。
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取安全组ID s
                     * @return SecurityGroupIds 安全组ID s
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID s
                     * @param _securityGroupIds 安全组ID s
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取日志输出配置
                     * @return LogOutputConf 日志输出配置
                     * 
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置日志输出配置
                     * @param _logOutputConf 日志输出配置
                     * 
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     * 
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取版本描述
                     * @return Description 版本描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本描述
                     * @param _description 版本描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取镜像命令
                     * @return ImageCommand 镜像命令
                     * 
                     */
                    std::string GetImageCommand() const;

                    /**
                     * 设置镜像命令
                     * @param _imageCommand 镜像命令
                     * 
                     */
                    void SetImageCommand(const std::string& _imageCommand);

                    /**
                     * 判断参数 ImageCommand 是否已赋值
                     * @return ImageCommand 是否已赋值
                     * 
                     */
                    bool ImageCommandHasBeenSet() const;

                    /**
                     * 获取镜像命令参数
                     * @return ImageArgs 镜像命令参数
                     * 
                     */
                    std::vector<std::string> GetImageArgs() const;

                    /**
                     * 设置镜像命令参数
                     * @param _imageArgs 镜像命令参数
                     * 
                     */
                    void SetImageArgs(const std::vector<std::string>& _imageArgs);

                    /**
                     * 判断参数 ImageArgs 是否已赋值
                     * @return ImageArgs 是否已赋值
                     * 
                     */
                    bool ImageArgsHasBeenSet() const;

                    /**
                     * 获取服务端口映射
                     * @return PortMappings 服务端口映射
                     * 
                     */
                    std::vector<PortMapping> GetPortMappings() const;

                    /**
                     * 设置服务端口映射
                     * @param _portMappings 服务端口映射
                     * 
                     */
                    void SetPortMappings(const std::vector<PortMapping>& _portMappings);

                    /**
                     * 判断参数 PortMappings 是否已赋值
                     * @return PortMappings 是否已赋值
                     * 
                     */
                    bool PortMappingsHasBeenSet() const;

                    /**
                     * 获取是否添加默认注册中心配置
                     * @return UseRegistryDefaultConfig 是否添加默认注册中心配置
                     * 
                     */
                    bool GetUseRegistryDefaultConfig() const;

                    /**
                     * 设置是否添加默认注册中心配置
                     * @param _useRegistryDefaultConfig 是否添加默认注册中心配置
                     * 
                     */
                    void SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig);

                    /**
                     * 判断参数 UseRegistryDefaultConfig 是否已赋值
                     * @return UseRegistryDefaultConfig 是否已赋值
                     * 
                     */
                    bool UseRegistryDefaultConfigHasBeenSet() const;

                    /**
                     * 获取挂载配置信息
                     * @return SettingConfs 挂载配置信息
                     * 
                     */
                    std::vector<MountedSettingConf> GetSettingConfs() const;

                    /**
                     * 设置挂载配置信息
                     * @param _settingConfs 挂载配置信息
                     * 
                     */
                    void SetSettingConfs(const std::vector<MountedSettingConf>& _settingConfs);

                    /**
                     * 判断参数 SettingConfs 是否已赋值
                     * @return SettingConfs 是否已赋值
                     * 
                     */
                    bool SettingConfsHasBeenSet() const;

                    /**
                     * 获取eks 访问设置
                     * @return EksService eks 访问设置
                     * 
                     */
                    EksService GetEksService() const;

                    /**
                     * 设置eks 访问设置
                     * @param _eksService eks 访问设置
                     * 
                     */
                    void SetEksService(const EksService& _eksService);

                    /**
                     * 判断参数 EksService 是否已赋值
                     * @return EksService 是否已赋值
                     * 
                     */
                    bool EksServiceHasBeenSet() const;

                    /**
                     * 获取要回滚到的历史版本id
                     * @return VersionId 要回滚到的历史版本id
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置要回滚到的历史版本id
                     * @param _versionId 要回滚到的历史版本id
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取启动后执行的脚本
                     * @return PostStart 启动后执行的脚本
                     * 
                     */
                    std::string GetPostStart() const;

                    /**
                     * 设置启动后执行的脚本
                     * @param _postStart 启动后执行的脚本
                     * 
                     */
                    void SetPostStart(const std::string& _postStart);

                    /**
                     * 判断参数 PostStart 是否已赋值
                     * @return PostStart 是否已赋值
                     * 
                     */
                    bool PostStartHasBeenSet() const;

                    /**
                     * 获取停止前执行的脚本
                     * @return PreStop 停止前执行的脚本
                     * 
                     */
                    std::string GetPreStop() const;

                    /**
                     * 设置停止前执行的脚本
                     * @param _preStop 停止前执行的脚本
                     * 
                     */
                    void SetPreStop(const std::string& _preStop);

                    /**
                     * 判断参数 PreStop 是否已赋值
                     * @return PreStop 是否已赋值
                     * 
                     */
                    bool PreStopHasBeenSet() const;

                    /**
                     * 获取分批发布策略配置
                     * @return DeployStrategyConf 分批发布策略配置
                     * 
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置分批发布策略配置
                     * @param _deployStrategyConf 分批发布策略配置
                     * 
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     * 
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取存活探针配置
                     * @return Liveness 存活探针配置
                     * 
                     */
                    HealthCheckConfig GetLiveness() const;

                    /**
                     * 设置存活探针配置
                     * @param _liveness 存活探针配置
                     * 
                     */
                    void SetLiveness(const HealthCheckConfig& _liveness);

                    /**
                     * 判断参数 Liveness 是否已赋值
                     * @return Liveness 是否已赋值
                     * 
                     */
                    bool LivenessHasBeenSet() const;

                    /**
                     * 获取就绪探针配置
                     * @return Readiness 就绪探针配置
                     * 
                     */
                    HealthCheckConfig GetReadiness() const;

                    /**
                     * 设置就绪探针配置
                     * @param _readiness 就绪探针配置
                     * 
                     */
                    void SetReadiness(const HealthCheckConfig& _readiness);

                    /**
                     * 判断参数 Readiness 是否已赋值
                     * @return Readiness 是否已赋值
                     * 
                     */
                    bool ReadinessHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 容器端口
                     */
                    uint64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 初始化 pod 数
                     */
                    uint64_t m_initPodNum;
                    bool m_initPodNumHasBeenSet;

                    /**
                     * cpu规格
                     */
                    double m_cpuSpec;
                    bool m_cpuSpecHasBeenSet;

                    /**
                     * 内存规格
                     */
                    double m_memorySpec;
                    bool m_memorySpecHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 镜像仓库
                     */
                    std::string m_imgRepo;
                    bool m_imgRepoHasBeenSet;

                    /**
                     * 版本描述信息
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 弹性伸缩配置，不传默认不启用弹性伸缩配置
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * 环境变量配置
                     */
                    std::vector<Pair> m_envConf;
                    bool m_envConfHasBeenSet;

                    /**
                     * 日志配置
                     */
                    std::vector<std::string> m_logConfs;
                    bool m_logConfsHasBeenSet;

                    /**
                     * 数据卷配置
                     */
                    std::vector<StorageConf> m_storageConfs;
                    bool m_storageConfsHasBeenSet;

                    /**
                     * 数据卷挂载配置
                     */
                    std::vector<StorageMountConf> m_storageMountConfs;
                    bool m_storageMountConfsHasBeenSet;

                    /**
                     * 部署类型。
- JAR：通过 jar 包部署
- WAR：通过 war 包部署
- IMAGE：通过镜像部署
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 包名。使用 JAR 包或者 WAR 包部署的时候必填。
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * JDK 版本。
- KONA：使用 kona jdk。
- OPEN：使用 open jdk。
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * 安全组ID s
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 日志输出配置
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 版本描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 镜像命令
                     */
                    std::string m_imageCommand;
                    bool m_imageCommandHasBeenSet;

                    /**
                     * 镜像命令参数
                     */
                    std::vector<std::string> m_imageArgs;
                    bool m_imageArgsHasBeenSet;

                    /**
                     * 服务端口映射
                     */
                    std::vector<PortMapping> m_portMappings;
                    bool m_portMappingsHasBeenSet;

                    /**
                     * 是否添加默认注册中心配置
                     */
                    bool m_useRegistryDefaultConfig;
                    bool m_useRegistryDefaultConfigHasBeenSet;

                    /**
                     * 挂载配置信息
                     */
                    std::vector<MountedSettingConf> m_settingConfs;
                    bool m_settingConfsHasBeenSet;

                    /**
                     * eks 访问设置
                     */
                    EksService m_eksService;
                    bool m_eksServiceHasBeenSet;

                    /**
                     * 要回滚到的历史版本id
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 启动后执行的脚本
                     */
                    std::string m_postStart;
                    bool m_postStartHasBeenSet;

                    /**
                     * 停止前执行的脚本
                     */
                    std::string m_preStop;
                    bool m_preStopHasBeenSet;

                    /**
                     * 分批发布策略配置
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * 存活探针配置
                     */
                    HealthCheckConfig m_liveness;
                    bool m_livenessHasBeenSet;

                    /**
                     * 就绪探针配置
                     */
                    HealthCheckConfig m_readiness;
                    bool m_readinessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_
