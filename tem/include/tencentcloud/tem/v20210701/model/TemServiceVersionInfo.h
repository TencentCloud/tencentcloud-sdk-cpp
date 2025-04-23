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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/EsInfo.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>
#include <tencentcloud/tem/v20210701/model/StorageConf.h>
#include <tencentcloud/tem/v20210701/model/StorageMountConf.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>
#include <tencentcloud/tem/v20210701/model/EksService.h>
#include <tencentcloud/tem/v20210701/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20210701/model/HealthCheckConfig.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/NodeInfo.h>
#include <tencentcloud/tem/v20210701/model/WorkloadInfo.h>
#include <tencentcloud/tem/v20210701/model/EnablePrometheusConf.h>
#include <tencentcloud/tem/v20210701/model/Autoscaler.h>
#include <tencentcloud/tem/v20210701/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20210701/model/DescribeRunPodPage.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 版本信息
                */
                class TemServiceVersionInfo : public AbstractModel
                {
                public:
                    TemServiceVersionInfo();
                    ~TemServiceVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键
                     * @return VersionId 主键
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置主键
                     * @param _versionId 主键
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
                     * 获取服务id
                     * @return ApplicationId 服务id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务id
                     * @param _applicationId 服务id
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
                     * 获取部署方式
                     * @return DeployMode 部署方式
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署方式
                     * @param _deployMode 部署方式
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
                     * 获取jdk版本
                     * @return JdkVersion jdk版本
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置jdk版本
                     * @param _jdkVersion jdk版本
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取部署版本
                     * @return DeployVersion 部署版本
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置部署版本
                     * @param _deployVersion 部署版本
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
                     * 获取发布方式
                     * @return PublishMode 发布方式
                     * 
                     */
                    std::string GetPublishMode() const;

                    /**
                     * 设置发布方式
                     * @param _publishMode 发布方式
                     * 
                     */
                    void SetPublishMode(const std::string& _publishMode);

                    /**
                     * 判断参数 PublishMode 是否已赋值
                     * @return PublishMode 是否已赋值
                     * 
                     */
                    bool PublishModeHasBeenSet() const;

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
                     * 获取初始实例
                     * @return InitPodNum 初始实例
                     * 
                     */
                    int64_t GetInitPodNum() const;

                    /**
                     * 设置初始实例
                     * @param _initPodNum 初始实例
                     * 
                     */
                    void SetInitPodNum(const int64_t& _initPodNum);

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
                     * 获取镜像路径
                     * @return ImgRepo 镜像路径
                     * 
                     */
                    std::string GetImgRepo() const;

                    /**
                     * 设置镜像路径
                     * @param _imgRepo 镜像路径
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
                     * 获取镜像名称
                     * @return ImgName 镜像名称
                     * 
                     */
                    std::string GetImgName() const;

                    /**
                     * 设置镜像名称
                     * @param _imgName 镜像名称
                     * 
                     */
                    void SetImgName(const std::string& _imgName);

                    /**
                     * 判断参数 ImgName 是否已赋值
                     * @return ImgName 是否已赋值
                     * 
                     */
                    bool ImgNameHasBeenSet() const;

                    /**
                     * 获取镜像版本
                     * @return ImgVersion 镜像版本
                     * 
                     */
                    std::string GetImgVersion() const;

                    /**
                     * 设置镜像版本
                     * @param _imgVersion 镜像版本
                     * 
                     */
                    void SetImgVersion(const std::string& _imgVersion);

                    /**
                     * 判断参数 ImgVersion 是否已赋值
                     * @return ImgVersion 是否已赋值
                     * 
                     */
                    bool ImgVersionHasBeenSet() const;

                    /**
                     * 获取弹性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsInfo 弹性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置弹性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esInfo 弹性配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取环境配置
                     * @return EnvConf 环境配置
                     * 
                     */
                    std::vector<Pair> GetEnvConf() const;

                    /**
                     * 设置环境配置
                     * @param _envConf 环境配置
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
                     * 获取存储配置
                     * @return StorageConfs 存储配置
                     * 
                     */
                    std::vector<StorageConf> GetStorageConfs() const;

                    /**
                     * 设置存储配置
                     * @param _storageConfs 存储配置
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
                     * 获取运行状态
                     * @return Status 运行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置运行状态
                     * @param _status 运行状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私有网络
                     * @return Vpc 私有网络
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置私有网络
                     * @param _vpc 私有网络
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取子网网络
                     * @return SubnetId 子网网络
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网网络
                     * @param _subnetId 子网网络
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyDate 修改时间
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间
                     * @param _modifyDate 修改时间
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取挂载配置
                     * @return StorageMountConfs 挂载配置
                     * 
                     */
                    std::vector<StorageMountConf> GetStorageMountConfs() const;

                    /**
                     * 设置挂载配置
                     * @param _storageMountConfs 挂载配置
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
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
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
                     * 获取日志输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogOutputConf 日志输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置日志输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logOutputConf 日志输出配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务名称
                     * @return ApplicationName 服务名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置服务名称
                     * @param _applicationName 服务名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取服务描述
                     * @return ApplicationDescription 服务描述
                     * 
                     */
                    std::string GetApplicationDescription() const;

                    /**
                     * 设置服务描述
                     * @param _applicationDescription 服务描述
                     * 
                     */
                    void SetApplicationDescription(const std::string& _applicationDescription);

                    /**
                     * 判断参数 ApplicationDescription 是否已赋值
                     * @return ApplicationDescription 是否已赋值
                     * 
                     */
                    bool ApplicationDescriptionHasBeenSet() const;

                    /**
                     * 获取环境名称
                     * @return EnvironmentName 环境名称
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称
                     * @param _environmentName 环境名称
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

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
                     * 获取公网地址
                     * @return PublicDomain 公网地址
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置公网地址
                     * @param _publicDomain 公网地址
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取是否开通公网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnablePublicAccess 是否开通公网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnablePublicAccess() const;

                    /**
                     * 设置是否开通公网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enablePublicAccess 是否开通公网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnablePublicAccess(const bool& _enablePublicAccess);

                    /**
                     * 判断参数 EnablePublicAccess 是否已赋值
                     * @return EnablePublicAccess 是否已赋值
                     * 
                     */
                    bool EnablePublicAccessHasBeenSet() const;

                    /**
                     * 获取现有的实例
                     * @return CurrentInstances 现有的实例
                     * 
                     */
                    int64_t GetCurrentInstances() const;

                    /**
                     * 设置现有的实例
                     * @param _currentInstances 现有的实例
                     * 
                     */
                    void SetCurrentInstances(const int64_t& _currentInstances);

                    /**
                     * 判断参数 CurrentInstances 是否已赋值
                     * @return CurrentInstances 是否已赋值
                     * 
                     */
                    bool CurrentInstancesHasBeenSet() const;

                    /**
                     * 获取期望的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectedInstances 期望的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpectedInstances() const;

                    /**
                     * 设置期望的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expectedInstances 期望的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpectedInstances(const int64_t& _expectedInstances);

                    /**
                     * 判断参数 ExpectedInstances 是否已赋值
                     * @return ExpectedInstances 是否已赋值
                     * 
                     */
                    bool ExpectedInstancesHasBeenSet() const;

                    /**
                     * 获取编程语言
                     * @return CodingLanguage 编程语言
                     * 
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置编程语言
                     * @param _codingLanguage 编程语言
                     * 
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     * 
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取程序包名
                     * @return PkgName 程序包名
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置程序包名
                     * @param _pkgName 程序包名
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
                     * 获取是否启用弹性伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsEnable 是否启用弹性伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEsEnable() const;

                    /**
                     * 设置是否启用弹性伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esEnable 是否启用弹性伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsEnable(const int64_t& _esEnable);

                    /**
                     * 判断参数 EsEnable 是否已赋值
                     * @return EsEnable 是否已赋值
                     * 
                     */
                    bool EsEnableHasBeenSet() const;

                    /**
                     * 获取弹性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsStrategy 弹性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEsStrategy() const;

                    /**
                     * 设置弹性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esStrategy 弹性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsStrategy(const int64_t& _esStrategy);

                    /**
                     * 判断参数 EsStrategy 是否已赋值
                     * @return EsStrategy 是否已赋值
                     * 
                     */
                    bool EsStrategyHasBeenSet() const;

                    /**
                     * 获取镜像tag
                     * @return ImageTag 镜像tag
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置镜像tag
                     * @param _imageTag 镜像tag
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取是否启用log
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogEnable 是否启用log
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogEnable() const;

                    /**
                     * 设置是否启用log
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logEnable 是否启用log
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最小实例数
                     * @return MinAliveInstances 最小实例数
                     * 
                     */
                    std::string GetMinAliveInstances() const;

                    /**
                     * 设置最小实例数
                     * @param _minAliveInstances 最小实例数
                     * 
                     */
                    void SetMinAliveInstances(const std::string& _minAliveInstances);

                    /**
                     * 判断参数 MinAliveInstances 是否已赋值
                     * @return MinAliveInstances 是否已赋值
                     * 
                     */
                    bool MinAliveInstancesHasBeenSet() const;

                    /**
                     * 获取安全组
                     * @return SecurityGroupIds 安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组
                     * @param _securityGroupIds 安全组
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageArgs 镜像命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetImageArgs() const;

                    /**
                     * 设置镜像命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageArgs 镜像命令参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否使用默认注册中心配置
                     * @return UseRegistryDefaultConfig 是否使用默认注册中心配置
                     * 
                     */
                    bool GetUseRegistryDefaultConfig() const;

                    /**
                     * 设置是否使用默认注册中心配置
                     * @param _useRegistryDefaultConfig 是否使用默认注册中心配置
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
                     * 获取eks 访问设置
                     * @return Service eks 访问设置
                     * 
                     */
                    EksService GetService() const;

                    /**
                     * 设置eks 访问设置
                     * @param _service eks 访问设置
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
                     * 获取log path数组信息
                     * @return LogConfs log path数组信息
                     * 
                     */
                    std::vector<std::string> GetLogConfs() const;

                    /**
                     * 设置log path数组信息
                     * @param _logConfs log path数组信息
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
                     * 获取启动后立即执行的脚本
                     * @return PostStart 启动后立即执行的脚本
                     * 
                     */
                    std::string GetPostStart() const;

                    /**
                     * 设置启动后立即执行的脚本
                     * @param _postStart 启动后立即执行的脚本
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Liveness 存活探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckConfig GetLiveness() const;

                    /**
                     * 设置存活探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveness 存活探针配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Readiness 就绪探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckConfig GetReadiness() const;

                    /**
                     * 设置就绪探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readiness 就绪探针配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取弹性策略
                     * @return HorizontalAutoscaler 弹性策略
                     * 
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置弹性策略
                     * @param _horizontalAutoscaler 弹性策略
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
                     * 获取定时弹性策略
                     * @return CronHorizontalAutoscaler 定时弹性策略
                     * 
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置定时弹性策略
                     * @param _cronHorizontalAutoscaler 定时弹性策略
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
                     * 获取应用实际可用区
                     * @return Zones 应用实际可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置应用实际可用区
                     * @param _zones 应用实际可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取最新部署时间
                     * @return LastDeployDate 最新部署时间
                     * 
                     */
                    std::string GetLastDeployDate() const;

                    /**
                     * 设置最新部署时间
                     * @param _lastDeployDate 最新部署时间
                     * 
                     */
                    void SetLastDeployDate(const std::string& _lastDeployDate);

                    /**
                     * 判断参数 LastDeployDate 是否已赋值
                     * @return LastDeployDate 是否已赋值
                     * 
                     */
                    bool LastDeployDateHasBeenSet() const;

                    /**
                     * 获取最新部署成功时间
                     * @return LastDeploySuccessDate 最新部署成功时间
                     * 
                     */
                    std::string GetLastDeploySuccessDate() const;

                    /**
                     * 设置最新部署成功时间
                     * @param _lastDeploySuccessDate 最新部署成功时间
                     * 
                     */
                    void SetLastDeploySuccessDate(const std::string& _lastDeploySuccessDate);

                    /**
                     * 判断参数 LastDeploySuccessDate 是否已赋值
                     * @return LastDeploySuccessDate 是否已赋值
                     * 
                     */
                    bool LastDeploySuccessDateHasBeenSet() const;

                    /**
                     * 获取应用所在node信息
                     * @return NodeInfos 应用所在node信息
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfos() const;

                    /**
                     * 设置应用所在node信息
                     * @param _nodeInfos 应用所在node信息
                     * 
                     */
                    void SetNodeInfos(const std::vector<NodeInfo>& _nodeInfos);

                    /**
                     * 判断参数 NodeInfos 是否已赋值
                     * @return NodeInfos 是否已赋值
                     * 
                     */
                    bool NodeInfosHasBeenSet() const;

                    /**
                     * 获取image类型 -0 为demo -1为正常image
                     * @return ImageType image类型 -0 为demo -1为正常image
                     * 
                     */
                    int64_t GetImageType() const;

                    /**
                     * 设置image类型 -0 为demo -1为正常image
                     * @param _imageType image类型 -0 为demo -1为正常image
                     * 
                     */
                    void SetImageType(const int64_t& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取是否启用调用链组件
                     * @return EnableTracing 是否启用调用链组件
                     * 
                     */
                    uint64_t GetEnableTracing() const;

                    /**
                     * 设置是否启用调用链组件
                     * @param _enableTracing 是否启用调用链组件
                     * 
                     */
                    void SetEnableTracing(const uint64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     * 
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取是否开启调用链上报，只有 EnableTracing=1 时生效（参数已弃用）
                     * @return EnableTracingReport 是否开启调用链上报，只有 EnableTracing=1 时生效（参数已弃用）
                     * 
                     */
                    uint64_t GetEnableTracingReport() const;

                    /**
                     * 设置是否开启调用链上报，只有 EnableTracing=1 时生效（参数已弃用）
                     * @param _enableTracingReport 是否开启调用链上报，只有 EnableTracing=1 时生效（参数已弃用）
                     * 
                     */
                    void SetEnableTracingReport(const uint64_t& _enableTracingReport);

                    /**
                     * 判断参数 EnableTracingReport 是否已赋值
                     * @return EnableTracingReport 是否已赋值
                     * 
                     */
                    bool EnableTracingReportHasBeenSet() const;

                    /**
                     * 获取镜像类型：0-个人镜像、1-企业镜像、2-公有镜像
                     * @return RepoType 镜像类型：0-个人镜像、1-企业镜像、2-公有镜像
                     * 
                     */
                    uint64_t GetRepoType() const;

                    /**
                     * 设置镜像类型：0-个人镜像、1-企业镜像、2-公有镜像
                     * @param _repoType 镜像类型：0-个人镜像、1-企业镜像、2-公有镜像
                     * 
                     */
                    void SetRepoType(const uint64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取分批发布子状态：batch_updating、batch_updating_waiting_confirm
                     * @return BatchDeployStatus 分批发布子状态：batch_updating、batch_updating_waiting_confirm
                     * 
                     */
                    std::string GetBatchDeployStatus() const;

                    /**
                     * 设置分批发布子状态：batch_updating、batch_updating_waiting_confirm
                     * @param _batchDeployStatus 分批发布子状态：batch_updating、batch_updating_waiting_confirm
                     * 
                     */
                    void SetBatchDeployStatus(const std::string& _batchDeployStatus);

                    /**
                     * 判断参数 BatchDeployStatus 是否已赋值
                     * @return BatchDeployStatus 是否已赋值
                     * 
                     */
                    bool BatchDeployStatusHasBeenSet() const;

                    /**
                     * 获取APM 资源 ID
                     * @return ApmInstanceId APM 资源 ID
                     * 
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置APM 资源 ID
                     * @param _apmInstanceId APM 资源 ID
                     * 
                     */
                    void SetApmInstanceId(const std::string& _apmInstanceId);

                    /**
                     * 判断参数 ApmInstanceId 是否已赋值
                     * @return ApmInstanceId 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdHasBeenSet() const;

                    /**
                     * 获取工作负载信息
                     * @return WorkloadInfo 工作负载信息
                     * 
                     */
                    WorkloadInfo GetWorkloadInfo() const;

                    /**
                     * 设置工作负载信息
                     * @param _workloadInfo 工作负载信息
                     * 
                     */
                    void SetWorkloadInfo(const WorkloadInfo& _workloadInfo);

                    /**
                     * 判断参数 WorkloadInfo 是否已赋值
                     * @return WorkloadInfo 是否已赋值
                     * 
                     */
                    bool WorkloadInfoHasBeenSet() const;

                    /**
                     * 获取是否启用应用加速
                     * @return SpeedUp 是否启用应用加速
                     * 
                     */
                    bool GetSpeedUp() const;

                    /**
                     * 设置是否启用应用加速
                     * @param _speedUp 是否启用应用加速
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
                     * 获取启动检测探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupProbe 启动检测探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckConfig GetStartupProbe() const;

                    /**
                     * 设置启动检测探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupProbe 启动检测探针配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取操作系统版本，可选参数：
- ALPINE
- CENTOS
                     * @return OsFlavour 操作系统版本，可选参数：
- ALPINE
- CENTOS
                     * 
                     */
                    std::string GetOsFlavour() const;

                    /**
                     * 设置操作系统版本，可选参数：
- ALPINE
- CENTOS
                     * @param _osFlavour 操作系统版本，可选参数：
- ALPINE
- CENTOS
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
                     * 获取镜像仓库server
                     * @return RepoServer 镜像仓库server
                     * 
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置镜像仓库server
                     * @param _repoServer 镜像仓库server
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
                     * 获取是否正在发布中
                     * @return UnderDeploying 是否正在发布中
                     * 
                     */
                    bool GetUnderDeploying() const;

                    /**
                     * 设置是否正在发布中
                     * @param _underDeploying 是否正在发布中
                     * 
                     */
                    void SetUnderDeploying(const bool& _underDeploying);

                    /**
                     * 判断参数 UnderDeploying 是否已赋值
                     * @return UnderDeploying 是否已赋值
                     * 
                     */
                    bool UnderDeployingHasBeenSet() const;

                    /**
                     * 获取监控业务指标监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnablePrometheusConf 监控业务指标监控
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnablePrometheusConf GetEnablePrometheusConf() const;

                    /**
                     * 设置监控业务指标监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enablePrometheusConf 监控业务指标监控
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否为手动停止
                     * @return StoppedManually 是否为手动停止
                     * 
                     */
                    bool GetStoppedManually() const;

                    /**
                     * 设置是否为手动停止
                     * @param _stoppedManually 是否为手动停止
                     * 
                     */
                    void SetStoppedManually(const bool& _stoppedManually);

                    /**
                     * 判断参数 StoppedManually 是否已赋值
                     * @return StoppedManually 是否已赋值
                     * 
                     */
                    bool StoppedManuallyHasBeenSet() const;

                    /**
                     * 获取tcr实例ID
                     * @return TcrInstanceId tcr实例ID
                     * 
                     */
                    std::string GetTcrInstanceId() const;

                    /**
                     * 设置tcr实例ID
                     * @param _tcrInstanceId tcr实例ID
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
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户SubAccountUin
                     * @return SubAccountUin 用户SubAccountUin
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置用户SubAccountUin
                     * @param _subAccountUin 用户SubAccountUin
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param _uin 用户Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取应用分组ID
                     * @return GroupId 应用分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置应用分组ID
                     * @param _groupId 应用分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否启用注册中心
                     * @return EnableRegistry 是否启用注册中心
                     * 
                     */
                    int64_t GetEnableRegistry() const;

                    /**
                     * 设置是否启用注册中心
                     * @param _enableRegistry 是否启用注册中心
                     * 
                     */
                    void SetEnableRegistry(const int64_t& _enableRegistry);

                    /**
                     * 判断参数 EnableRegistry 是否已赋值
                     * @return EnableRegistry 是否已赋值
                     * 
                     */
                    bool EnableRegistryHasBeenSet() const;

                    /**
                     * 获取弹性伸缩数组
                     * @return AutoscalerList 弹性伸缩数组
                     * 
                     */
                    std::vector<Autoscaler> GetAutoscalerList() const;

                    /**
                     * 设置弹性伸缩数组
                     * @param _autoscalerList 弹性伸缩数组
                     * 
                     */
                    void SetAutoscalerList(const std::vector<Autoscaler>& _autoscalerList);

                    /**
                     * 判断参数 AutoscalerList 是否已赋值
                     * @return AutoscalerList 是否已赋值
                     * 
                     */
                    bool AutoscalerListHasBeenSet() const;

                    /**
                     * 获取修改人
                     * @return Modifier 修改人
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改人
                     * @param _modifier 修改人
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取部署策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployStrategyConf 部署策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置部署策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployStrategyConf 部署策略
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例列表
                     * @return PodList 实例列表
                     * 
                     */
                    DescribeRunPodPage GetPodList() const;

                    /**
                     * 设置实例列表
                     * @param _podList 实例列表
                     * 
                     */
                    void SetPodList(const DescribeRunPodPage& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     * 
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取发布时配置是否有修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfEdited 发布时配置是否有修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetConfEdited() const;

                    /**
                     * 设置发布时配置是否有修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confEdited 发布时配置是否有修改
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否编码
                     * @return PreStopEncoded 是否编码
                     * 
                     */
                    std::string GetPreStopEncoded() const;

                    /**
                     * 设置是否编码
                     * @param _preStopEncoded 是否编码
                     * 
                     */
                    void SetPreStopEncoded(const std::string& _preStopEncoded);

                    /**
                     * 判断参数 PreStopEncoded 是否已赋值
                     * @return PreStopEncoded 是否已赋值
                     * 
                     */
                    bool PreStopEncodedHasBeenSet() const;

                    /**
                     * 获取是否编码
                     * @return PostStartEncoded 是否编码
                     * 
                     */
                    std::string GetPostStartEncoded() const;

                    /**
                     * 设置是否编码
                     * @param _postStartEncoded 是否编码
                     * 
                     */
                    void SetPostStartEncoded(const std::string& _postStartEncoded);

                    /**
                     * 判断参数 PostStartEncoded 是否已赋值
                     * @return PostStartEncoded 是否已赋值
                     * 
                     */
                    bool PostStartEncodedHasBeenSet() const;

                private:

                    /**
                     * 主键
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 服务id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 部署方式
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * jdk版本
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 部署版本
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 发布方式
                     */
                    std::string m_publishMode;
                    bool m_publishModeHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 初始实例
                     */
                    int64_t m_initPodNum;
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
                     * 镜像路径
                     */
                    std::string m_imgRepo;
                    bool m_imgRepoHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imgName;
                    bool m_imgNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imgVersion;
                    bool m_imgVersionHasBeenSet;

                    /**
                     * 弹性配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * 环境配置
                     */
                    std::vector<Pair> m_envConf;
                    bool m_envConfHasBeenSet;

                    /**
                     * 存储配置
                     */
                    std::vector<StorageConf> m_storageConfs;
                    bool m_storageConfsHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有网络
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 子网网络
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 挂载配置
                     */
                    std::vector<StorageMountConf> m_storageMountConfs;
                    bool m_storageMountConfsHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 日志输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 服务描述
                     */
                    std::string m_applicationDescription;
                    bool m_applicationDescriptionHasBeenSet;

                    /**
                     * 环境名称
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 公网地址
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * 是否开通公网访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enablePublicAccess;
                    bool m_enablePublicAccessHasBeenSet;

                    /**
                     * 现有的实例
                     */
                    int64_t m_currentInstances;
                    bool m_currentInstancesHasBeenSet;

                    /**
                     * 期望的实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expectedInstances;
                    bool m_expectedInstancesHasBeenSet;

                    /**
                     * 编程语言
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * 程序包名
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 是否启用弹性伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_esEnable;
                    bool m_esEnableHasBeenSet;

                    /**
                     * 弹性策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_esStrategy;
                    bool m_esStrategyHasBeenSet;

                    /**
                     * 镜像tag
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 是否启用log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 最小实例数
                     */
                    std::string m_minAliveInstances;
                    bool m_minAliveInstancesHasBeenSet;

                    /**
                     * 安全组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 镜像命令
                     */
                    std::string m_imageCommand;
                    bool m_imageCommandHasBeenSet;

                    /**
                     * 镜像命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imageArgs;
                    bool m_imageArgsHasBeenSet;

                    /**
                     * 是否使用默认注册中心配置
                     */
                    bool m_useRegistryDefaultConfig;
                    bool m_useRegistryDefaultConfigHasBeenSet;

                    /**
                     * eks 访问设置
                     */
                    EksService m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 挂载配置信息
                     */
                    std::vector<MountedSettingConf> m_settingConfs;
                    bool m_settingConfsHasBeenSet;

                    /**
                     * log path数组信息
                     */
                    std::vector<std::string> m_logConfs;
                    bool m_logConfsHasBeenSet;

                    /**
                     * 启动后立即执行的脚本
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckConfig m_liveness;
                    bool m_livenessHasBeenSet;

                    /**
                     * 就绪探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckConfig m_readiness;
                    bool m_readinessHasBeenSet;

                    /**
                     * 弹性策略
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * 定时弹性策略
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * 应用实际可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 最新部署时间
                     */
                    std::string m_lastDeployDate;
                    bool m_lastDeployDateHasBeenSet;

                    /**
                     * 最新部署成功时间
                     */
                    std::string m_lastDeploySuccessDate;
                    bool m_lastDeploySuccessDateHasBeenSet;

                    /**
                     * 应用所在node信息
                     */
                    std::vector<NodeInfo> m_nodeInfos;
                    bool m_nodeInfosHasBeenSet;

                    /**
                     * image类型 -0 为demo -1为正常image
                     */
                    int64_t m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 是否启用调用链组件
                     */
                    uint64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * 是否开启调用链上报，只有 EnableTracing=1 时生效（参数已弃用）
                     */
                    uint64_t m_enableTracingReport;
                    bool m_enableTracingReportHasBeenSet;

                    /**
                     * 镜像类型：0-个人镜像、1-企业镜像、2-公有镜像
                     */
                    uint64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 分批发布子状态：batch_updating、batch_updating_waiting_confirm
                     */
                    std::string m_batchDeployStatus;
                    bool m_batchDeployStatusHasBeenSet;

                    /**
                     * APM 资源 ID
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * 工作负载信息
                     */
                    WorkloadInfo m_workloadInfo;
                    bool m_workloadInfoHasBeenSet;

                    /**
                     * 是否启用应用加速
                     */
                    bool m_speedUp;
                    bool m_speedUpHasBeenSet;

                    /**
                     * 启动检测探针配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckConfig m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                    /**
                     * 操作系统版本，可选参数：
- ALPINE
- CENTOS
                     */
                    std::string m_osFlavour;
                    bool m_osFlavourHasBeenSet;

                    /**
                     * 镜像仓库server
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * 是否正在发布中
                     */
                    bool m_underDeploying;
                    bool m_underDeployingHasBeenSet;

                    /**
                     * 监控业务指标监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnablePrometheusConf m_enablePrometheusConf;
                    bool m_enablePrometheusConfHasBeenSet;

                    /**
                     * 是否为手动停止
                     */
                    bool m_stoppedManually;
                    bool m_stoppedManuallyHasBeenSet;

                    /**
                     * tcr实例ID
                     */
                    std::string m_tcrInstanceId;
                    bool m_tcrInstanceIdHasBeenSet;

                    /**
                     * 1：开始自动metrics采集（open-telemetry）；
0：关闭metrics采集；
                     */
                    int64_t m_enableMetrics;
                    bool m_enableMetricsHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户SubAccountUin
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 应用分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否启用注册中心
                     */
                    int64_t m_enableRegistry;
                    bool m_enableRegistryHasBeenSet;

                    /**
                     * 弹性伸缩数组
                     */
                    std::vector<Autoscaler> m_autoscalerList;
                    bool m_autoscalerListHasBeenSet;

                    /**
                     * 修改人
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 部署策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * 实例列表
                     */
                    DescribeRunPodPage m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * 发布时配置是否有修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_confEdited;
                    bool m_confEditedHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否编码
                     */
                    std::string m_preStopEncoded;
                    bool m_preStopEncodedHasBeenSet;

                    /**
                     * 是否编码
                     */
                    std::string m_postStartEncoded;
                    bool m_postStartEncodedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_
