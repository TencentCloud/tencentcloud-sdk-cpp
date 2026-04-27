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
                     * 获取<p>notebook  ID</p>
                     * @return Id <p>notebook  ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>notebook  ID</p>
                     * @param _id <p>notebook  ID</p>
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
                     * 获取<p>notebook 名称</p>
                     * @return Name <p>notebook 名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>notebook 名称</p>
                     * @param _name <p>notebook 名称</p>
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
                     * 获取<p>生命周期脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleScriptId <p>生命周期脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecycleScriptId() const;

                    /**
                     * 设置<p>生命周期脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycleScriptId <p>生命周期脚本</p>
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
                     * 获取<p>Pod-Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName <p>Pod-Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod-Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName <p>Pod-Name</p>
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
                     * 获取<p>Update-Time</p>
                     * @return UpdateTime <p>Update-Time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update-Time</p>
                     * @param _updateTime <p>Update-Time</p>
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
                     * 获取<p>是否访问公网</p>
                     * @return DirectInternetAccess <p>是否访问公网</p>
                     * 
                     */
                    bool GetDirectInternetAccess() const;

                    /**
                     * 设置<p>是否访问公网</p>
                     * @param _directInternetAccess <p>是否访问公网</p>
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
                     * 获取<p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签配置</p>
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
                     * 获取<p>是否自动停止</p>
                     * @return AutoStopping <p>是否自动停止</p>
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置<p>是否自动停止</p>
                     * @param _autoStopping <p>是否自动停止</p>
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
                     * 获取<p>其他GIT存储库，最多3个，单个<br>长度不超过512字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalCodeRepoIds <p>其他GIT存储库，最多3个，单个<br>长度不超过512字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepoIds() const;

                    /**
                     * 设置<p>其他GIT存储库，最多3个，单个<br>长度不超过512字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionalCodeRepoIds <p>其他GIT存储库，最多3个，单个<br>长度不超过512字符</p>
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
                     * 获取<p>自动停止时间，单位小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutomaticStopTime <p>自动停止时间，单位小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutomaticStopTime() const;

                    /**
                     * 设置<p>自动停止时间，单位小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _automaticStopTime <p>自动停止时间，单位小时</p>
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
                     * 获取<p>资源配置</p>
                     * @return ResourceConf <p>资源配置</p>
                     * 
                     */
                    ResourceConf GetResourceConf() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resourceConf <p>资源配置</p>
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
                     * 获取<p>默认GIT存储库，长度不超过512字符</p>
                     * @return DefaultCodeRepoId <p>默认GIT存储库，长度不超过512字符</p>
                     * 
                     */
                    std::string GetDefaultCodeRepoId() const;

                    /**
                     * 设置<p>默认GIT存储库，长度不超过512字符</p>
                     * @param _defaultCodeRepoId <p>默认GIT存储库，长度不超过512字符</p>
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
                     * 获取<p>训练输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>训练输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>训练输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>训练输出</p>
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
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
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
                     * 获取<p>是否ROOT权限</p>
                     * @return RootAccess <p>是否ROOT权限</p>
                     * 
                     */
                    bool GetRootAccess() const;

                    /**
                     * 设置<p>是否ROOT权限</p>
                     * @param _rootAccess <p>是否ROOT权限</p>
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
                     * 获取<p>计贺金额信息，eg:2.00元/小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfos <p>计贺金额信息，eg:2.00元/小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBillingInfos() const;

                    /**
                     * 设置<p>计贺金额信息，eg:2.00元/小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfos <p>计贺金额信息，eg:2.00元/小时</p>
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
                     * 获取<p>存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB <p>存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置<p>存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB <p>存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）</p>
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
                     * 获取<p>计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)</p>
                     * @return ChargeType <p>计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)</p>
                     * @param _chargeType <p>计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)</p>
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
                     * 获取<p>后付费资源规格说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTypeAlias <p>后付费资源规格说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置<p>后付费资源规格说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTypeAlias <p>后付费资源规格说明</p>
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
                     * 获取<p>预付费资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>预付费资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>预付费资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>预付费资源组名称</p>
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
                     * 获取<p>存储的类型。取值包含：<br>    FREE:        预付费的免费存储<br>    CLOUD_PREMIUM： 高性能云硬盘<br>    CLOUD_SSD： SSD云硬盘<br>    CFS:     CFS存储，包含NFS和turbo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceType <p>存储的类型。取值包含：<br>    FREE:        预付费的免费存储<br>    CLOUD_PREMIUM： 高性能云硬盘<br>    CLOUD_SSD： SSD云硬盘<br>    CFS:     CFS存储，包含NFS和turbo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置<p>存储的类型。取值包含：<br>    FREE:        预付费的免费存储<br>    CLOUD_PREMIUM： 高性能云硬盘<br>    CLOUD_SSD： SSD云硬盘<br>    CFS:     CFS存储，包含NFS和turbo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceType <p>存储的类型。取值包含：<br>    FREE:        预付费的免费存储<br>    CLOUD_PREMIUM： 高性能云硬盘<br>    CLOUD_SSD： SSD云硬盘<br>    CFS:     CFS存储，包含NFS和turbo</p>
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
                     * 获取<p>CFS存储的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceCFS <p>CFS存储的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSConfig GetVolumeSourceCFS() const;

                    /**
                     * 设置<p>CFS存储的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceCFS <p>CFS存储的配置</p>
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
                     * 获取<p>notebook 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>notebook 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>notebook 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>notebook 信息</p>
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
                     * 获取<p>数据源来源，eg：WeData_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource <p>数据源来源，eg：WeData_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置<p>数据源来源，eg：WeData_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource <p>数据源来源，eg：WeData_HDFS</p>
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
                     * 获取<p>镜像信息</p>
                     * @return ImageInfo <p>镜像信息</p>
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>镜像信息</p>
                     * @param _imageInfo <p>镜像信息</p>
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
                     * 获取<p>镜像类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageType <p>镜像类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置<p>镜像类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageType <p>镜像类型</p>
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
                     * 获取<p>SSH配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSHConfig <p>SSH配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SSHConfig GetSSHConfig() const;

                    /**
                     * 设置<p>SSH配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSHConfig <p>SSH配置</p>
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
                     * 获取<p>GooseFS存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSourceGooseFS <p>GooseFS存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GooseFS GetVolumeSourceGooseFS() const;

                    /**
                     * 设置<p>GooseFS存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSourceGooseFS <p>GooseFS存储配置</p>
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
                     * 获取<p>子用户ID</p>
                     * @return SubUin <p>子用户ID</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子用户ID</p>
                     * @param _subUin <p>子用户ID</p>
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
                     * 获取<p>调度节点ID</p>
                     * @return ResourceGroupInstanceId <p>调度节点ID</p>
                     * 
                     */
                    std::string GetResourceGroupInstanceId() const;

                    /**
                     * 设置<p>调度节点ID</p>
                     * @param _resourceGroupInstanceId <p>调度节点ID</p>
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
                     * 获取<p>子用户名称</p>
                     * @return SubUinName <p>子用户名称</p>
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>子用户名称</p>
                     * @param _subUinName <p>子用户名称</p>
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
                     * 获取<p>任务实例创建时间</p>
                     * @return JobCreateTime <p>任务实例创建时间</p>
                     * 
                     */
                    std::string GetJobCreateTime() const;

                    /**
                     * 设置<p>任务实例创建时间</p>
                     * @param _jobCreateTime <p>任务实例创建时间</p>
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
                     * 获取<p>Appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>Appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>Appid</p>
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

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>最后操作者信息</p>
                     * @return LatestOperatorInfo <p>最后操作者信息</p>
                     * 
                     */
                    OperatorInfo GetLatestOperatorInfo() const;

                    /**
                     * 设置<p>最后操作者信息</p>
                     * @param _latestOperatorInfo <p>最后操作者信息</p>
                     * 
                     */
                    void SetLatestOperatorInfo(const OperatorInfo& _latestOperatorInfo);

                    /**
                     * 判断参数 LatestOperatorInfo 是否已赋值
                     * @return LatestOperatorInfo 是否已赋值
                     * 
                     */
                    bool LatestOperatorInfoHasBeenSet() const;

                private:

                    /**
                     * <p>notebook  ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>notebook 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>生命周期脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecycleScriptId;
                    bool m_lifecycleScriptIdHasBeenSet;

                    /**
                     * <p>Pod-Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Update-Time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否访问公网</p>
                     */
                    bool m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否自动停止</p>
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * <p>其他GIT存储库，最多3个，单个<br>长度不超过512字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_additionalCodeRepoIds;
                    bool m_additionalCodeRepoIdsHasBeenSet;

                    /**
                     * <p>自动停止时间，单位小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * <p>默认GIT存储库，长度不超过512字符</p>
                     */
                    std::string m_defaultCodeRepoId;
                    bool m_defaultCodeRepoIdHasBeenSet;

                    /**
                     * <p>训练输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

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
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>是否ROOT权限</p>
                     */
                    bool m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * <p>计贺金额信息，eg:2.00元/小时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_billingInfos;
                    bool m_billingInfosHasBeenSet;

                    /**
                     * <p>存储卷大小 （单位时GB，最小10GB，必须是10G的倍数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>计算资源付费模式 (- PREPAID：预付费，即包年包月 - POSTPAID_BY_HOUR：按小时后付费)</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>后付费资源规格说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceTypeAlias;
                    bool m_instanceTypeAliasHasBeenSet;

                    /**
                     * <p>预付费资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>存储的类型。取值包含：<br>    FREE:        预付费的免费存储<br>    CLOUD_PREMIUM： 高性能云硬盘<br>    CLOUD_SSD： SSD云硬盘<br>    CFS:     CFS存储，包含NFS和turbo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                    /**
                     * <p>CFS存储的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSConfig m_volumeSourceCFS;
                    bool m_volumeSourceCFSHasBeenSet;

                    /**
                     * <p>数据配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * <p>notebook 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>数据源来源，eg：WeData_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * <p>镜像信息</p>
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>镜像类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * <p>SSH配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SSHConfig m_sSHConfig;
                    bool m_sSHConfigHasBeenSet;

                    /**
                     * <p>GooseFS存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GooseFS m_volumeSourceGooseFS;
                    bool m_volumeSourceGooseFSHasBeenSet;

                    /**
                     * <p>子用户ID</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>调度节点ID</p>
                     */
                    std::string m_resourceGroupInstanceId;
                    bool m_resourceGroupInstanceIdHasBeenSet;

                    /**
                     * <p>子用户名称</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>任务实例创建时间</p>
                     */
                    std::string m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * <p>Appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>最后操作者信息</p>
                     */
                    OperatorInfo m_latestOperatorInfo;
                    bool m_latestOperatorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKDETAIL_H_
