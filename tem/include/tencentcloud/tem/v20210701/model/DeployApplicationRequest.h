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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/EsInfo.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>
#include <tencentcloud/tem/v20210701/model/StorageConf.h>
#include <tencentcloud/tem/v20210701/model/StorageMountConf.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>
#include <tencentcloud/tem/v20210701/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20210701/model/EksService.h>
#include <tencentcloud/tem/v20210701/model/HealthCheckConfig.h>
#include <tencentcloud/tem/v20210701/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/EnablePrometheusConf.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DeployApplication请求参数结构体
                */
                class DeployApplicationRequest : public AbstractModel
                {
                public:
                    DeployApplicationRequest();
                    ~DeployApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

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
                     * 获取cpu规格 单位：核
                     * @return CpuSpec cpu规格 单位：核
                     * 
                     */
                    double GetCpuSpec() const;

                    /**
                     * 设置cpu规格 单位：核
                     * @param _cpuSpec cpu规格 单位：核
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
                     * 获取内存规格 单位：G
                     * @return MemorySpec 内存规格 单位：G
                     * 
                     */
                    double GetMemorySpec() const;

                    /**
                     * 设置内存规格 单位：G
                     * @param _memorySpec 内存规格 单位：G
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
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

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
                     * 获取弹性伸缩配置（已废弃，请使用HorizontalAutoscaler设置弹性策略）
                     * @return EsInfo 弹性伸缩配置（已废弃，请使用HorizontalAutoscaler设置弹性策略）
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置弹性伸缩配置（已废弃，请使用HorizontalAutoscaler设置弹性策略）
                     * @param _esInfo 弹性伸缩配置（已废弃，请使用HorizontalAutoscaler设置弹性策略）
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
                     * 获取传入内容为 /jar包名字 的形式。也就是在 jar包名字前增加一个/。

如上传的 jar 包名字为 demo-1.0.0.jar，那么这里传入内容为：/demo-1.0.0.jar

注：jar 包需要通过 tem 页面上传过，tem 后端才能拉到该 jar 包。
                     * @return PkgName 传入内容为 /jar包名字 的形式。也就是在 jar包名字前增加一个/。

如上传的 jar 包名字为 demo-1.0.0.jar，那么这里传入内容为：/demo-1.0.0.jar

注：jar 包需要通过 tem 页面上传过，tem 后端才能拉到该 jar 包。
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置传入内容为 /jar包名字 的形式。也就是在 jar包名字前增加一个/。

如上传的 jar 包名字为 demo-1.0.0.jar，那么这里传入内容为：/demo-1.0.0.jar

注：jar 包需要通过 tem 页面上传过，tem 后端才能拉到该 jar 包。
                     * @param _pkgName 传入内容为 /jar包名字 的形式。也就是在 jar包名字前增加一个/。

如上传的 jar 包名字为 demo-1.0.0.jar，那么这里传入内容为：/demo-1.0.0.jar

注：jar 包需要通过 tem 页面上传过，tem 后端才能拉到该 jar 包。
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
- KONA:8：使用 kona jdk 8。
- OPEN:8：使用 open jdk 8。
- KONA:11：使用 kona jdk 11。
- OPEN:11：使用 open jdk 11。
                     * @return JdkVersion JDK 版本。
- KONA:8：使用 kona jdk 8。
- OPEN:8：使用 open jdk 8。
- KONA:11：使用 kona jdk 11。
- OPEN:11：使用 open jdk 11。
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置JDK 版本。
- KONA:8：使用 kona jdk 8。
- OPEN:8：使用 open jdk 8。
- KONA:11：使用 kona jdk 11。
- OPEN:11：使用 open jdk 11。
                     * @param _jdkVersion JDK 版本。
- KONA:8：使用 kona jdk 8。
- OPEN:8：使用 open jdk 8。
- KONA:11：使用 kona jdk 11。
- OPEN:11：使用 open jdk 11。
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
                     * 获取应用访问设置
                     * @return Service 应用访问设置
                     * 
                     */
                    EksService GetService() const;

                    /**
                     * 设置应用访问设置
                     * @param _service 应用访问设置
                     * 
                     */
                    void SetService(const EksService& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

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
                     * 获取弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * @return HorizontalAutoscaler 弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * 
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * @param _horizontalAutoscaler 弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * 
                     */
                    void SetHorizontalAutoscaler(const std::vector<HorizontalAutoscaler>& _horizontalAutoscaler);

                    /**
                     * 判断参数 HorizontalAutoscaler 是否已赋值
                     * @return HorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取定时弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * @return CronHorizontalAutoscaler 定时弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * 
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置定时弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * @param _cronHorizontalAutoscaler 定时弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     * 
                     */
                    void SetCronHorizontalAutoscaler(const std::vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler);

                    /**
                     * 判断参数 CronHorizontalAutoscaler 是否已赋值
                     * @return CronHorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool CronHorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取是否启用log，1为启用，0为不启用
                     * @return LogEnable 是否启用log，1为启用，0为不启用
                     * 
                     */
                    int64_t GetLogEnable() const;

                    /**
                     * 设置是否启用log，1为启用，0为不启用
                     * @param _logEnable 是否启用log，1为启用，0为不启用
                     * 
                     */
                    void SetLogEnable(const int64_t& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取（除开镜像配置）配置是否修改
                     * @return ConfEdited （除开镜像配置）配置是否修改
                     * 
                     */
                    bool GetConfEdited() const;

                    /**
                     * 设置（除开镜像配置）配置是否修改
                     * @param _confEdited （除开镜像配置）配置是否修改
                     * 
                     */
                    void SetConfEdited(const bool& _confEdited);

                    /**
                     * 判断参数 ConfEdited 是否已赋值
                     * @return ConfEdited 是否已赋值
                     * 
                     */
                    bool ConfEditedHasBeenSet() const;

                    /**
                     * 获取是否开启应用加速
                     * @return SpeedUp 是否开启应用加速
                     * 
                     */
                    bool GetSpeedUp() const;

                    /**
                     * 设置是否开启应用加速
                     * @param _speedUp 是否开启应用加速
                     * 
                     */
                    void SetSpeedUp(const bool& _speedUp);

                    /**
                     * 判断参数 SpeedUp 是否已赋值
                     * @return SpeedUp 是否已赋值
                     * 
                     */
                    bool SpeedUpHasBeenSet() const;

                    /**
                     * 获取启动探针配置
                     * @return StartupProbe 启动探针配置
                     * 
                     */
                    HealthCheckConfig GetStartupProbe() const;

                    /**
                     * 设置启动探针配置
                     * @param _startupProbe 启动探针配置
                     * 
                     */
                    void SetStartupProbe(const HealthCheckConfig& _startupProbe);

                    /**
                     * 判断参数 StartupProbe 是否已赋值
                     * @return StartupProbe 是否已赋值
                     * 
                     */
                    bool StartupProbeHasBeenSet() const;

                    /**
                     * 获取操作系统版本；
当选择openjdk时，可选参数：
- ALPINE
- CENTOS
当选择konajdk时，可选参数：
- ALPINE
- TENCENTOS
                     * @return OsFlavour 操作系统版本；
当选择openjdk时，可选参数：
- ALPINE
- CENTOS
当选择konajdk时，可选参数：
- ALPINE
- TENCENTOS
                     * 
                     */
                    std::string GetOsFlavour() const;

                    /**
                     * 设置操作系统版本；
当选择openjdk时，可选参数：
- ALPINE
- CENTOS
当选择konajdk时，可选参数：
- ALPINE
- TENCENTOS
                     * @param _osFlavour 操作系统版本；
当选择openjdk时，可选参数：
- ALPINE
- CENTOS
当选择konajdk时，可选参数：
- ALPINE
- TENCENTOS
                     * 
                     */
                    void SetOsFlavour(const std::string& _osFlavour);

                    /**
                     * 判断参数 OsFlavour 是否已赋值
                     * @return OsFlavour 是否已赋值
                     * 
                     */
                    bool OsFlavourHasBeenSet() const;

                    /**
                     * 获取metrics业务指标监控配置
                     * @return EnablePrometheusConf metrics业务指标监控配置
                     * 
                     */
                    EnablePrometheusConf GetEnablePrometheusConf() const;

                    /**
                     * 设置metrics业务指标监控配置
                     * @param _enablePrometheusConf metrics业务指标监控配置
                     * 
                     */
                    void SetEnablePrometheusConf(const EnablePrometheusConf& _enablePrometheusConf);

                    /**
                     * 判断参数 EnablePrometheusConf 是否已赋值
                     * @return EnablePrometheusConf 是否已赋值
                     * 
                     */
                    bool EnablePrometheusConfHasBeenSet() const;

                    /**
                     * 获取1：开始自动apm采集（skywalking）；
0：关闭apm采集；
                     * @return EnableTracing 1：开始自动apm采集（skywalking）；
0：关闭apm采集；
                     * 
                     */
                    int64_t GetEnableTracing() const;

                    /**
                     * 设置1：开始自动apm采集（skywalking）；
0：关闭apm采集；
                     * @param _enableTracing 1：开始自动apm采集（skywalking）；
0：关闭apm采集；
                     * 
                     */
                    void SetEnableTracing(const int64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     * 
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     * @return EnableMetrics 1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     * 
                     */
                    int64_t GetEnableMetrics() const;

                    /**
                     * 设置1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     * @param _enableMetrics 1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     * 
                     */
                    void SetEnableMetrics(const int64_t& _enableMetrics);

                    /**
                     * 判断参数 EnableMetrics 是否已赋值
                     * @return EnableMetrics 是否已赋值
                     * 
                     */
                    bool EnableMetricsHasBeenSet() const;

                    /**
                     * 获取镜像部署时，选择的tcr实例id
                     * @return TcrInstanceId 镜像部署时，选择的tcr实例id
                     * 
                     */
                    std::string GetTcrInstanceId() const;

                    /**
                     * 设置镜像部署时，选择的tcr实例id
                     * @param _tcrInstanceId 镜像部署时，选择的tcr实例id
                     * 
                     */
                    void SetTcrInstanceId(const std::string& _tcrInstanceId);

                    /**
                     * 判断参数 TcrInstanceId 是否已赋值
                     * @return TcrInstanceId 是否已赋值
                     * 
                     */
                    bool TcrInstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像部署时，选择的镜像服务器地址
                     * @return RepoServer 镜像部署时，选择的镜像服务器地址
                     * 
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置镜像部署时，选择的镜像服务器地址
                     * @param _repoServer 镜像部署时，选择的镜像服务器地址
                     * 
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     * 
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取镜像部署时，仓库类型：0：个人仓库；1：企业版；2：公共仓库；3：tem托管仓库；4：demo仓库
                     * @return RepoType 镜像部署时，仓库类型：0：个人仓库；1：企业版；2：公共仓库；3：tem托管仓库；4：demo仓库
                     * 
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置镜像部署时，仓库类型：0：个人仓库；1：企业版；2：公共仓库；3：tem托管仓库；4：demo仓库
                     * @param _repoType 镜像部署时，仓库类型：0：个人仓库；1：企业版；2：公共仓库；3：tem托管仓库；4：demo仓库
                     * 
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取启动后执行的脚本，base64 编码
                     * @return PostStartEncoded 启动后执行的脚本，base64 编码
                     * 
                     */
                    std::string GetPostStartEncoded() const;

                    /**
                     * 设置启动后执行的脚本，base64 编码
                     * @param _postStartEncoded 启动后执行的脚本，base64 编码
                     * 
                     */
                    void SetPostStartEncoded(const std::string& _postStartEncoded);

                    /**
                     * 判断参数 PostStartEncoded 是否已赋值
                     * @return PostStartEncoded 是否已赋值
                     * 
                     */
                    bool PostStartEncodedHasBeenSet() const;

                    /**
                     * 获取停止前执行的脚本，base64 编码
                     * @return PreStopEncoded 停止前执行的脚本，base64 编码
                     * 
                     */
                    std::string GetPreStopEncoded() const;

                    /**
                     * 设置停止前执行的脚本，base64 编码
                     * @param _preStopEncoded 停止前执行的脚本，base64 编码
                     * 
                     */
                    void SetPreStopEncoded(const std::string& _preStopEncoded);

                    /**
                     * 判断参数 PreStopEncoded 是否已赋值
                     * @return PreStopEncoded 是否已赋值
                     * 
                     */
                    bool PreStopEncodedHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 初始化 pod 数
                     */
                    uint64_t m_initPodNum;
                    bool m_initPodNumHasBeenSet;

                    /**
                     * cpu规格 单位：核
                     */
                    double m_cpuSpec;
                    bool m_cpuSpecHasBeenSet;

                    /**
                     * 内存规格 单位：G
                     */
                    double m_memorySpec;
                    bool m_memorySpecHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 部署类型为 IMAGE 时，该参数表示镜像 tag。
部署类型为 JAR/WAR 时，该参数表示包版本号。
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

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
                     * 弹性伸缩配置（已废弃，请使用HorizontalAutoscaler设置弹性策略）
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
                     * 传入内容为 /jar包名字 的形式。也就是在 jar包名字前增加一个/。

如上传的 jar 包名字为 demo-1.0.0.jar，那么这里传入内容为：/demo-1.0.0.jar

注：jar 包需要通过 tem 页面上传过，tem 后端才能拉到该 jar 包。
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * JDK 版本。
- KONA:8：使用 kona jdk 8。
- OPEN:8：使用 open jdk 8。
- KONA:11：使用 kona jdk 11。
- OPEN:11：使用 open jdk 11。
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
                     * 应用访问设置
                     */
                    EksService m_service;
                    bool m_serviceHasBeenSet;

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
                     * 存活探针配置
                     */
                    HealthCheckConfig m_liveness;
                    bool m_livenessHasBeenSet;

                    /**
                     * 就绪探针配置
                     */
                    HealthCheckConfig m_readiness;
                    bool m_readinessHasBeenSet;

                    /**
                     * 分批发布策略配置
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * 弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * 定时弹性策略（已弃用，请使用弹性伸缩策略组合相关接口）
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * 是否启用log，1为启用，0为不启用
                     */
                    int64_t m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * （除开镜像配置）配置是否修改
                     */
                    bool m_confEdited;
                    bool m_confEditedHasBeenSet;

                    /**
                     * 是否开启应用加速
                     */
                    bool m_speedUp;
                    bool m_speedUpHasBeenSet;

                    /**
                     * 启动探针配置
                     */
                    HealthCheckConfig m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                    /**
                     * 操作系统版本；
当选择openjdk时，可选参数：
- ALPINE
- CENTOS
当选择konajdk时，可选参数：
- ALPINE
- TENCENTOS
                     */
                    std::string m_osFlavour;
                    bool m_osFlavourHasBeenSet;

                    /**
                     * metrics业务指标监控配置
                     */
                    EnablePrometheusConf m_enablePrometheusConf;
                    bool m_enablePrometheusConfHasBeenSet;

                    /**
                     * 1：开始自动apm采集（skywalking）；
0：关闭apm采集；
                     */
                    int64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * 1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     */
                    int64_t m_enableMetrics;
                    bool m_enableMetricsHasBeenSet;

                    /**
                     * 镜像部署时，选择的tcr实例id
                     */
                    std::string m_tcrInstanceId;
                    bool m_tcrInstanceIdHasBeenSet;

                    /**
                     * 镜像部署时，选择的镜像服务器地址
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * 镜像部署时，仓库类型：0：个人仓库；1：企业版；2：公共仓库；3：tem托管仓库；4：demo仓库
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 启动后执行的脚本，base64 编码
                     */
                    std::string m_postStartEncoded;
                    bool m_postStartEncodedHasBeenSet;

                    /**
                     * 停止前执行的脚本，base64 编码
                     */
                    std::string m_preStopEncoded;
                    bool m_preStopEncodedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_
