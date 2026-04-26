/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKDETAIL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/StartCmdInfo.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/CodeRepoConfig.h>
#include <tencentcloud/tione/v20211111/model/ExposeNetworkConfig.h>
#include <tencentcloud/tione/v20211111/model/OperatorInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 训练任务详情
                */
                class TrainingTaskDetail : public AbstractModel
                {
                public:
                    TrainingTaskDetail();
                    ~TrainingTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>训练任务ID</p>
                     * @return Id <p>训练任务ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>训练任务ID</p>
                     * @param _id <p>训练任务ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>训练任务名称</p>
                     * @return Name <p>训练任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>训练任务名称</p>
                     * @param _name <p>训练任务名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>主账号uin</p>
                     * @return Uin <p>主账号uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号uin</p>
                     * @param _uin <p>主账号uin</p>
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
                     * 获取<p>子账号uin</p>
                     * @return SubUin <p>子账号uin</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子账号uin</p>
                     * @param _subUin <p>子账号uin</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUinName <p>创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUinName <p>创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>训练框架名称，eg：SPARK、PYSARK、TENSORFLOW、PYTORCH</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkName <p>训练框架名称，eg：SPARK、PYSARK、TENSORFLOW、PYTORCH</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置<p>训练框架名称，eg：SPARK、PYSARK、TENSORFLOW、PYTORCH</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkName <p>训练框架名称，eg：SPARK、PYSARK、TENSORFLOW、PYTORCH</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkName(const std::string& _frameworkName);

                    /**
                     * 判断参数 FrameworkName 是否已赋值
                     * @return FrameworkName 是否已赋值
                     * 
                     */
                    bool FrameworkNameHasBeenSet() const;

                    /**
                     * 获取<p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置<p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkVersion <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取<p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkEnvironment <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkEnvironment() const;

                    /**
                     * 设置<p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkEnvironment <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkEnvironment(const std::string& _frameworkEnvironment);

                    /**
                     * 判断参数 FrameworkEnvironment 是否已赋值
                     * @return FrameworkEnvironment 是否已赋值
                     * 
                     */
                    bool FrameworkEnvironmentHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p>
                     * @return ChargeType <p>计费模式</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费模式</p>
                     * @param _chargeType <p>计费模式</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>资源配置</p>
                     * @return ResourceConfigInfos <p>资源配置</p>
                     * 
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resourceConfigInfos <p>资源配置</p>
                     * 
                     */
                    void SetResourceConfigInfos(const std::vector<ResourceConfigInfo>& _resourceConfigInfos);

                    /**
                     * 判断参数 ResourceConfigInfos 是否已赋值
                     * @return ResourceConfigInfos 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfosHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>训练模式，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingMode <p>训练模式，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置<p>训练模式，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingMode <p>训练模式，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     * 
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取<p>代码包</p>
                     * @return CodePackagePath <p>代码包</p>
                     * 
                     */
                    CosPathInfo GetCodePackagePath() const;

                    /**
                     * 设置<p>代码包</p>
                     * @param _codePackagePath <p>代码包</p>
                     * 
                     */
                    void SetCodePackagePath(const CosPathInfo& _codePackagePath);

                    /**
                     * 判断参数 CodePackagePath 是否已赋值
                     * @return CodePackagePath 是否已赋值
                     * 
                     */
                    bool CodePackagePathHasBeenSet() const;

                    /**
                     * 获取<p>启动命令信息</p>
                     * @return StartCmdInfo <p>启动命令信息</p>
                     * 
                     */
                    StartCmdInfo GetStartCmdInfo() const;

                    /**
                     * 设置<p>启动命令信息</p>
                     * @param _startCmdInfo <p>启动命令信息</p>
                     * 
                     */
                    void SetStartCmdInfo(const StartCmdInfo& _startCmdInfo);

                    /**
                     * 判断参数 StartCmdInfo 是否已赋值
                     * @return StartCmdInfo 是否已赋值
                     * 
                     */
                    bool StartCmdInfoHasBeenSet() const;

                    /**
                     * 获取<p>数据来源，eg：DATASET、COS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource <p>数据来源，eg：DATASET、COS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置<p>数据来源，eg：DATASET、COS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource <p>数据来源，eg：DATASET、COS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取<p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataConfigs <p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置<p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataConfigs <p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataConfigs(const std::vector<DataConfig>& _dataConfigs);

                    /**
                     * 判断参数 DataConfigs 是否已赋值
                     * @return DataConfigs 是否已赋值
                     * 
                     */
                    bool DataConfigsHasBeenSet() const;

                    /**
                     * 获取<p>调优参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TuningParameters <p>调优参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTuningParameters() const;

                    /**
                     * 设置<p>调优参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tuningParameters <p>调优参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTuningParameters(const std::string& _tuningParameters);

                    /**
                     * 判断参数 TuningParameters 是否已赋值
                     * @return TuningParameters 是否已赋值
                     * 
                     */
                    bool TuningParametersHasBeenSet() const;

                    /**
                     * 获取<p>训练输出</p>
                     * @return Output <p>训练输出</p>
                     * 
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置<p>训练输出</p>
                     * @param _output <p>训练输出</p>
                     * 
                     */
                    void SetOutput(const CosPathInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>是否上报日志</p>
                     * @return LogEnable <p>是否上报日志</p>
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置<p>是否上报日志</p>
                     * @param _logEnable <p>是否上报日志</p>
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取<p>日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConfig <p>日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logConfig <p>日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>VPC ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>VPC ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId <p>子网ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId <p>子网ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取<p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置<p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds);

                    /**
                     * 判断参数 RuntimeInSeconds 是否已赋值
                     * @return RuntimeInSeconds 是否已赋值
                     * 
                     */
                    bool RuntimeInSecondsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * @return ChargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * @param _chargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * 
                     */
                    void SetChargeStatus(const std::string& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取<p>最近一次实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestInstanceId <p>最近一次实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestInstanceId() const;

                    /**
                     * 设置<p>最近一次实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestInstanceId <p>最近一次实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestInstanceId(const std::string& _latestInstanceId);

                    /**
                     * 判断参数 LatestInstanceId 是否已赋值
                     * @return LatestInstanceId 是否已赋值
                     * 
                     */
                    bool LatestInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>TensorBoard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TensorBoardId <p>TensorBoard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTensorBoardId() const;

                    /**
                     * 设置<p>TensorBoard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tensorBoardId <p>TensorBoard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTensorBoardId(const std::string& _tensorBoardId);

                    /**
                     * 判断参数 TensorBoardId 是否已赋值
                     * @return TensorBoardId 是否已赋值
                     * 
                     */
                    bool TensorBoardIdHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置<p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取<p>预付费专用资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>预付费专用资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>预付费专用资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>预付费专用资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，eg：STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * @return Status <p>任务状态，eg：STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，eg：STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * @param _status <p>任务状态，eg：STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
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
                     * 获取<p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackUrl <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackUrl <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>任务关联的代码仓库配置</p>
                     * @return CodeRepos <p>任务关联的代码仓库配置</p>
                     * 
                     */
                    std::vector<CodeRepoConfig> GetCodeRepos() const;

                    /**
                     * 设置<p>任务关联的代码仓库配置</p>
                     * @param _codeRepos <p>任务关联的代码仓库配置</p>
                     * 
                     */
                    void SetCodeRepos(const std::vector<CodeRepoConfig>& _codeRepos);

                    /**
                     * 判断参数 CodeRepos 是否已赋值
                     * @return CodeRepos 是否已赋值
                     * 
                     */
                    bool CodeReposHasBeenSet() const;

                    /**
                     * 获取<p>暴露网络配置</p>
                     * @return ExposeNetworkConfig <p>暴露网络配置</p>
                     * 
                     */
                    ExposeNetworkConfig GetExposeNetworkConfig() const;

                    /**
                     * 设置<p>暴露网络配置</p>
                     * @param _exposeNetworkConfig <p>暴露网络配置</p>
                     * 
                     */
                    void SetExposeNetworkConfig(const ExposeNetworkConfig& _exposeNetworkConfig);

                    /**
                     * 判断参数 ExposeNetworkConfig 是否已赋值
                     * @return ExposeNetworkConfig 是否已赋值
                     * 
                     */
                    bool ExposeNetworkConfigHasBeenSet() const;

                    /**
                     * 获取<p>操作者信息</p>
                     * @return OperatorInfo <p>操作者信息</p>
                     * 
                     */
                    OperatorInfo GetOperatorInfo() const;

                    /**
                     * 设置<p>操作者信息</p>
                     * @param _operatorInfo <p>操作者信息</p>
                     * 
                     */
                    void SetOperatorInfo(const OperatorInfo& _operatorInfo);

                    /**
                     * 判断参数 OperatorInfo 是否已赋值
                     * @return OperatorInfo 是否已赋值
                     * 
                     */
                    bool OperatorInfoHasBeenSet() const;

                private:

                    /**
                     * <p>训练任务ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>训练任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>主账号uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号uin</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>训练框架名称，eg：SPARK、PYSARK、TENSORFLOW、PYTORCH</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkEnvironment;
                    bool m_frameworkEnvironmentHasBeenSet;

                    /**
                     * <p>计费模式</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>训练模式，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * <p>代码包</p>
                     */
                    CosPathInfo m_codePackagePath;
                    bool m_codePackagePathHasBeenSet;

                    /**
                     * <p>启动命令信息</p>
                     */
                    StartCmdInfo m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                    /**
                     * <p>数据来源，eg：DATASET、COS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * <p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * <p>调优参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tuningParameters;
                    bool m_tuningParametersHasBeenSet;

                    /**
                     * <p>训练输出</p>
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>是否上报日志</p>
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * <p>日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>VPC ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>最近一次实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestInstanceId;
                    bool m_latestInstanceIdHasBeenSet;

                    /**
                     * <p>TensorBoard ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tensorBoardId;
                    bool m_tensorBoardIdHasBeenSet;

                    /**
                     * <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * <p>预付费专用资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>任务状态，eg：STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>任务关联的代码仓库配置</p>
                     */
                    std::vector<CodeRepoConfig> m_codeRepos;
                    bool m_codeReposHasBeenSet;

                    /**
                     * <p>暴露网络配置</p>
                     */
                    ExposeNetworkConfig m_exposeNetworkConfig;
                    bool m_exposeNetworkConfigHasBeenSet;

                    /**
                     * <p>操作者信息</p>
                     */
                    OperatorInfo m_operatorInfo;
                    bool m_operatorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKDETAIL_H_
