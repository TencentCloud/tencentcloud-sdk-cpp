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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKDETAIL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ResourceConf.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/SSHConfig.h>
#include <tencentcloud/tione/v20211111/model/GooseFS.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 类型NotebookDetail
                */
                class NotebookDetail : public AbstractModel
                {
                public:
                    NotebookDetail();
                    ~NotebookDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取notebook  ID
                     * @return Id notebook  ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置notebook  ID
                     * @param _id notebook  ID
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
                     * 获取notebook 名称
                     * @return Name notebook 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置notebook 名称
                     * @param _name notebook 名称
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
                     * 获取生命周期脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleScriptId 生命周期脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecycleScriptId() const;

                    /**
                     * 设置生命周期脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycleScriptId 生命周期脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycleScriptId(const std::string& _lifecycleScriptId);

                    /**
                     * 判断参数 LifecycleScriptId 是否已赋值
                     * @return LifecycleScriptId 是否已赋值
                     * 
                     */
                    bool LifecycleScriptIdHasBeenSet() const;

                    /**
                     * 获取Pod-Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName Pod-Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod-Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName Pod-Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Update-Time
                     * @return UpdateTime Update-Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update-Time
                     * @param _updateTime Update-Time
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
                     * 获取是否访问公网
                     * @return DirectInternetAccess 是否访问公网
                     * 
                     */
                    bool GetDirectInternetAccess() const;

                    /**
                     * 设置是否访问公网
                     * @param _directInternetAccess 是否访问公网
                     * 
                     */
                    void SetDirectInternetAccess(const bool& _directInternetAccess);

                    /**
                     * 判断参数 DirectInternetAccess 是否已赋值
                     * @return DirectInternetAccess 是否已赋值
                     * 
                     */
                    bool DirectInternetAccessHasBeenSet() const;

                    /**
                     * 获取预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 预付费专用资源组
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
                     * 获取标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签配置
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
                     * 获取是否自动停止
                     * @return AutoStopping 是否自动停止
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置是否自动停止
                     * @param _autoStopping 是否自动停止
                     * 
                     */
                    void SetAutoStopping(const bool& _autoStopping);

                    /**
                     * 判断参数 AutoStopping 是否已赋值
                     * @return AutoStopping 是否已赋值
                     * 
                     */
                    bool AutoStoppingHasBeenSet() const;

                    /**
                     * 获取其他GIT存储库，最多3个，单个
长度不超过512字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalCodeRepoIds 其他GIT存储库，最多3个，单个
长度不超过512字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepoIds() const;

                    /**
                     * 设置其他GIT存储库，最多3个，单个
长度不超过512字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionalCodeRepoIds 其他GIT存储库，最多3个，单个
长度不超过512字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdditionalCodeRepoIds(const std::vector<std::string>& _additionalCodeRepoIds);

                    /**
                     * 判断参数 AdditionalCodeRepoIds 是否已赋值
                     * @return AdditionalCodeRepoIds 是否已赋值
                     * 
                     */
                    bool AdditionalCodeRepoIdsHasBeenSet() const;

                    /**
                     * 获取自动停止时间，单位小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutomaticStopTime 自动停止时间，单位小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutomaticStopTime() const;

                    /**
                     * 设置自动停止时间，单位小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _automaticStopTime 自动停止时间，单位小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutomaticStopTime(const int64_t& _automaticStopTime);

                    /**
                     * 判断参数 AutomaticStopTime 是否已赋值
                     * @return AutomaticStopTime 是否已赋值
                     * 
                     */
                    bool AutomaticStopTimeHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return ResourceConf 资源配置
                     * 
                     */
                    ResourceConf GetResourceConf() const;

                    /**
                     * 设置资源配置
                     * @param _resourceConf 资源配置
                     * 
                     */
                    void SetResourceConf(const ResourceConf& _resourceConf);

                    /**
                     * 判断参数 ResourceConf 是否已赋值
                     * @return ResourceConf 是否已赋值
                     * 
                     */
                    bool ResourceConfHasBeenSet() const;

                    /**
                     * 获取默认GIT存储库，长度不超过512字符
                     * @return DefaultCodeRepoId 默认GIT存储库，长度不超过512字符
                     * 
                     */
                    std::string GetDefaultCodeRepoId() const;

                    /**
                     * 设置默认GIT存储库，长度不超过512字符
                     * @param _defaultCodeRepoId 默认GIT存储库，长度不超过512字符
                     * 
                     */
                    void SetDefaultCodeRepoId(const std::string& _defaultCodeRepoId);

                    /**
                     * 判断参数 DefaultCodeRepoId 是否已赋值
                     * @return DefaultCodeRepoId 是否已赋值
                     * 
                     */
                    bool DefaultCodeRepoIdHasBeenSet() const;

                    /**
                     * 获取训练输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 训练输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置训练输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 训练输出
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
                     * 获取VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId VPC ID
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
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID
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
                     * 获取训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 训练开始时间
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
                     * 获取计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否ROOT权限
                     * @return RootAccess 是否ROOT权限
                     * 
                     */
                    bool GetRootAccess() const;

                    /**
                     * 设置是否ROOT权限
                     * @param _rootAccess 是否ROOT权限
                     * 
                     */
                    void SetRootAccess(const bool& _rootAccess);

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     * 
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取计贺金额信息，eg:2.00元/小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfos 计贺金额信息，eg:2.00元/小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBillingInfos() const;

                    /**
                     * 设置计贺金额信息，eg:2.00元/小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfos 计贺金额信息，eg:2.00元/小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingInfos(const std::vector<std::string>& _billingInfos);

                    /**
                     * 判断参数 BillingInfos 是否已赋值
                     * @return BillingInfos 是否已赋值
                     * 
                     */
                    bool BillingInfosHasBeenSet() const;

                    /**
                     * 获取存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB 存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB 存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

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
                     * 获取计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)
                     * @return ChargeType 计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)
                     * @param _chargeType 计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)
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
                     * 获取后付费资源规格说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTypeAlias 后付费资源规格说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置后付费资源规格说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTypeAlias 后付费资源规格说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTypeAlias(const std::string& _instanceTypeAlias);

                    /**
                     * 判断参数 InstanceTypeAlias 是否已赋值
                     * @return InstanceTypeAlias 是否已赋值
                     * 
                     */
                    bool InstanceTypeAliasHasBeenSet() const;

                    /**
                     * 获取预付费资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 预付费资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置预付费资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 预付费资源组名称
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
                     * 获取存储的类型。取值包含： 
    FREE:        预付费的免费存储
    CLOUD_PREMIUM： 高性能云硬盘
    CLOUD_SSD： SSD云硬盘
    CFS:     CFS存储，包含NFS和turbo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceType 存储的类型。取值包含： 
    FREE:        预付费的免费存储
    CLOUD_PREMIUM： 高性能云硬盘
    CLOUD_SSD： SSD云硬盘
    CFS:     CFS存储，包含NFS和turbo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置存储的类型。取值包含： 
    FREE:        预付费的免费存储
    CLOUD_PREMIUM： 高性能云硬盘
    CLOUD_SSD： SSD云硬盘
    CFS:     CFS存储，包含NFS和turbo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceType 存储的类型。取值包含： 
    FREE:        预付费的免费存储
    CLOUD_PREMIUM： 高性能云硬盘
    CLOUD_SSD： SSD云硬盘
    CFS:     CFS存储，包含NFS和turbo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSourceType(const std::string& _volumeSourceType);

                    /**
                     * 判断参数 VolumeSourceType 是否已赋值
                     * @return VolumeSourceType 是否已赋值
                     * 
                     */
                    bool VolumeSourceTypeHasBeenSet() const;

                    /**
                     * 获取CFS存储的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceCFS CFS存储的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSConfig GetVolumeSourceCFS() const;

                    /**
                     * 设置CFS存储的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceCFS CFS存储的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS);

                    /**
                     * 判断参数 VolumeSourceCFS 是否已赋值
                     * @return VolumeSourceCFS 是否已赋值
                     * 
                     */
                    bool VolumeSourceCFSHasBeenSet() const;

                    /**
                     * 获取数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataConfigs 数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataConfigs 数据配置
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
                     * 获取notebook 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message notebook 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置notebook 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message notebook 信息
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
                     * 获取数据源来源，eg：WeData_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource 数据源来源，eg：WeData_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据源来源，eg：WeData_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource 数据源来源，eg：WeData_HDFS
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
                     * 获取镜像信息
                     * @return ImageInfo 镜像信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
                     * @param _imageInfo 镜像信息
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
                     * 获取镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageType 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageType 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取SSH配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSHConfig SSH配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SSHConfig GetSSHConfig() const;

                    /**
                     * 设置SSH配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSHConfig SSH配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSHConfig(const SSHConfig& _sSHConfig);

                    /**
                     * 判断参数 SSHConfig 是否已赋值
                     * @return SSHConfig 是否已赋值
                     * 
                     */
                    bool SSHConfigHasBeenSet() const;

                    /**
                     * 获取GooseFS存储配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceGooseFS GooseFS存储配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GooseFS GetVolumeSourceGooseFS() const;

                    /**
                     * 设置GooseFS存储配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceGooseFS GooseFS存储配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS);

                    /**
                     * 判断参数 VolumeSourceGooseFS 是否已赋值
                     * @return VolumeSourceGooseFS 是否已赋值
                     * 
                     */
                    bool VolumeSourceGooseFSHasBeenSet() const;

                    /**
                     * 获取子用户ID
                     * @return SubUin 子用户ID
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子用户ID
                     * @param _subUin 子用户ID
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
                     * 获取调度节点ID
                     * @return ResourceGroupInstanceId 调度节点ID
                     * 
                     */
                    std::string GetResourceGroupInstanceId() const;

                    /**
                     * 设置调度节点ID
                     * @param _resourceGroupInstanceId 调度节点ID
                     * 
                     */
                    void SetResourceGroupInstanceId(const std::string& _resourceGroupInstanceId);

                    /**
                     * 判断参数 ResourceGroupInstanceId 是否已赋值
                     * @return ResourceGroupInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceGroupInstanceIdHasBeenSet() const;

                    /**
                     * 获取子用户名称
                     * @return SubUinName 子用户名称
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置子用户名称
                     * @param _subUinName 子用户名称
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
                     * 获取任务实例创建时间
                     * @return JobCreateTime 任务实例创建时间
                     * 
                     */
                    std::string GetJobCreateTime() const;

                    /**
                     * 设置任务实例创建时间
                     * @param _jobCreateTime 任务实例创建时间
                     * 
                     */
                    void SetJobCreateTime(const std::string& _jobCreateTime);

                    /**
                     * 判断参数 JobCreateTime 是否已赋值
                     * @return JobCreateTime 是否已赋值
                     * 
                     */
                    bool JobCreateTimeHasBeenSet() const;

                    /**
                     * 获取Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * notebook  ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * notebook 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 生命周期脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecycleScriptId;
                    bool m_lifecycleScriptIdHasBeenSet;

                    /**
                     * Pod-Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Update-Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否访问公网
                     */
                    bool m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * 预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否自动停止
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 其他GIT存储库，最多3个，单个
长度不超过512字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_additionalCodeRepoIds;
                    bool m_additionalCodeRepoIdsHasBeenSet;

                    /**
                     * 自动停止时间，单位小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * 默认GIT存储库，长度不超过512字符
                     */
                    std::string m_defaultCodeRepoId;
                    bool m_defaultCodeRepoIdHasBeenSet;

                    /**
                     * 训练输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

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
                     * VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
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
                     * 训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 是否ROOT权限
                     */
                    bool m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 计贺金额信息，eg:2.00元/小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_billingInfos;
                    bool m_billingInfosHasBeenSet;

                    /**
                     * 存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 后付费资源规格说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceTypeAlias;
                    bool m_instanceTypeAliasHasBeenSet;

                    /**
                     * 预付费资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 存储的类型。取值包含： 
    FREE:        预付费的免费存储
    CLOUD_PREMIUM： 高性能云硬盘
    CLOUD_SSD： SSD云硬盘
    CFS:     CFS存储，包含NFS和turbo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                    /**
                     * CFS存储的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSConfig m_volumeSourceCFS;
                    bool m_volumeSourceCFSHasBeenSet;

                    /**
                     * 数据配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * notebook 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 数据源来源，eg：WeData_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * SSH配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SSHConfig m_sSHConfig;
                    bool m_sSHConfigHasBeenSet;

                    /**
                     * GooseFS存储配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GooseFS m_volumeSourceGooseFS;
                    bool m_volumeSourceGooseFSHasBeenSet;

                    /**
                     * 子用户ID
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 调度节点ID
                     */
                    std::string m_resourceGroupInstanceId;
                    bool m_resourceGroupInstanceIdHasBeenSet;

                    /**
                     * 子用户名称
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * 任务实例创建时间
                     */
                    std::string m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * Appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKDETAIL_H_
