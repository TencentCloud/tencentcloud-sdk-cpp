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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKDETAIL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 批量预测任务详情
                */
                class BatchTaskDetail : public AbstractModel
                {
                public:
                    BatchTaskDetail();
                    ~BatchTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量预测任务ID
                     * @return BatchTaskId 批量预测任务ID
                     * 
                     */
                    std::string GetBatchTaskId() const;

                    /**
                     * 设置批量预测任务ID
                     * @param _batchTaskId 批量预测任务ID
                     * 
                     */
                    void SetBatchTaskId(const std::string& _batchTaskId);

                    /**
                     * 判断参数 BatchTaskId 是否已赋值
                     * @return BatchTaskId 是否已赋值
                     * 
                     */
                    bool BatchTaskIdHasBeenSet() const;

                    /**
                     * 获取批量预测任务名称
                     * @return BatchTaskName 批量预测任务名称
                     * 
                     */
                    std::string GetBatchTaskName() const;

                    /**
                     * 设置批量预测任务名称
                     * @param _batchTaskName 批量预测任务名称
                     * 
                     */
                    void SetBatchTaskName(const std::string& _batchTaskName);

                    /**
                     * 判断参数 BatchTaskName 是否已赋值
                     * @return BatchTaskName 是否已赋值
                     * 
                     */
                    bool BatchTaskNameHasBeenSet() const;

                    /**
                     * 获取主账号uin
                     * @return Uin 主账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号uin
                     * @param _uin 主账号uin
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
                     * 获取子账号uin
                     * @return SubUin 子账号uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子账号uin
                     * @param _subUin 子账号uin
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
                     * 获取计费模式
                     * @return ChargeType 计费模式
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式
                     * @param _chargeType 计费模式
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
                     * 获取包年包月资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 包年包月资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置包年包月资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 包年包月资源组ID
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
                     * 获取包年包月资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 包年包月资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置包年包月资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 包年包月资源组名称
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
                     * 获取资源配置
                     * @return ResourceConfigInfo 资源配置
                     * 
                     */
                    ResourceConfigInfo GetResourceConfigInfo() const;

                    /**
                     * 设置资源配置
                     * @param _resourceConfigInfo 资源配置
                     * 
                     */
                    void SetResourceConfigInfo(const ResourceConfigInfo& _resourceConfigInfo);

                    /**
                     * 判断参数 ResourceConfigInfo 是否已赋值
                     * @return ResourceConfigInfo 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfoHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
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
                     * 获取服务对应的模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInfo 服务对应的模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置服务对应的模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInfo 服务对应的模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     * 
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo 自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo 自定义镜像信息
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
                     * 获取代码包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodePackagePath 代码包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCodePackagePath() const;

                    /**
                     * 设置代码包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codePackagePath 代码包
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartCmd 启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartCmd() const;

                    /**
                     * 设置启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startCmd 启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartCmd(const std::string& _startCmd);

                    /**
                     * 判断参数 StartCmd 是否已赋值
                     * @return StartCmd 是否已赋值
                     * 
                     */
                    bool StartCmdHasBeenSet() const;

                    /**
                     * 获取输入数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataConfigs 输入数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置输入数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataConfigs 输入数据配置
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
                     * 获取输出数据配置
                     * @return Outputs 输出数据配置
                     * 
                     */
                    std::vector<DataConfig> GetOutputs() const;

                    /**
                     * 设置输出数据配置
                     * @param _outputs 输出数据配置
                     * 
                     */
                    void SetOutputs(const std::vector<DataConfig>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取是否上报日志
                     * @return LogEnable 是否上报日志
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否上报日志
                     * @param _logEnable 是否上报日志
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
                     * 获取日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConfig 日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logConfig 日志配置
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
                     * 获取vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc id
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
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网id
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
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds 运行时长
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
                     * 获取任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 任务开始时间
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
                     * 获取任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 任务结束时间
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
                     * 获取计费状态，取值范围:
BILLING: 计费中
NOT_BILLING: 未计费
WHITELIST_USING: 白名单使用中
WHITELIST_STOP: 白名单到期
ARREARS_STOP: 欠费停止
                     * @return ChargeStatus 计费状态，取值范围:
BILLING: 计费中
NOT_BILLING: 未计费
WHITELIST_USING: 白名单使用中
WHITELIST_STOP: 白名单到期
ARREARS_STOP: 欠费停止
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置计费状态，取值范围:
BILLING: 计费中
NOT_BILLING: 未计费
WHITELIST_USING: 白名单使用中
WHITELIST_STOP: 白名单到期
ARREARS_STOP: 欠费停止
                     * @param _chargeStatus 计费状态，取值范围:
BILLING: 计费中
NOT_BILLING: 未计费
WHITELIST_USING: 白名单使用中
WHITELIST_STOP: 白名单到期
ARREARS_STOP: 欠费停止
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
                     * 获取最近一次实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestInstanceId 最近一次实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestInstanceId() const;

                    /**
                     * 设置最近一次实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestInstanceId 最近一次实例ID
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
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
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
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureReason 失败原因
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
                     * 获取计费金额信息，eg：2.00元/小时 (for 按量计费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo 计费金额信息，eg：2.00元/小时 (for 按量计费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置计费金额信息，eg：2.00元/小时 (for 按量计费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo 计费金额信息，eg：2.00元/小时 (for 按量计费)
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
                     * 获取运行中的Pod的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodList 运行中的Pod的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPodList() const;

                    /**
                     * 设置运行中的Pod的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podList 运行中的Pod的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodList(const std::vector<std::string>& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     * 
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取模型推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInferenceCodeInfo 模型推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetModelInferenceCodeInfo() const;

                    /**
                     * 设置模型推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInferenceCodeInfo 模型推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelInferenceCodeInfo(const CosPathInfo& _modelInferenceCodeInfo);

                    /**
                     * 判断参数 ModelInferenceCodeInfo 是否已赋值
                     * @return ModelInferenceCodeInfo 是否已赋值
                     * 
                     */
                    bool ModelInferenceCodeInfoHasBeenSet() const;

                private:

                    /**
                     * 批量预测任务ID
                     */
                    std::string m_batchTaskId;
                    bool m_batchTaskIdHasBeenSet;

                    /**
                     * 批量预测任务名称
                     */
                    std::string m_batchTaskName;
                    bool m_batchTaskNameHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 包年包月资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 包年包月资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConfigInfo m_resourceConfigInfo;
                    bool m_resourceConfigInfoHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务对应的模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 代码包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_codePackagePath;
                    bool m_codePackagePathHasBeenSet;

                    /**
                     * 启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startCmd;
                    bool m_startCmdHasBeenSet;

                    /**
                     * 输入数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * 输出数据配置
                     */
                    std::vector<DataConfig> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 是否上报日志
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

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
                     * 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 计费状态，取值范围:
BILLING: 计费中
NOT_BILLING: 未计费
WHITELIST_USING: 白名单使用中
WHITELIST_STOP: 白名单到期
ARREARS_STOP: 欠费停止
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 最近一次实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestInstanceId;
                    bool m_latestInstanceIdHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 计费金额信息，eg：2.00元/小时 (for 按量计费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * 运行中的Pod的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * 模型推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_modelInferenceCodeInfo;
                    bool m_modelInferenceCodeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKDETAIL_H_
