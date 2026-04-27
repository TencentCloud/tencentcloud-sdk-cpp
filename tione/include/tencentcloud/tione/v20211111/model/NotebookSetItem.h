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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKSETITEM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConf.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>
#include <tencentcloud/tione/v20211111/model/SSHConfig.h>
#include <tencentcloud/tione/v20211111/model/GooseFS.h>
#include <tencentcloud/tione/v20211111/model/ExposePortConfig.h>
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
                * Notebook列表元素
                */
                class NotebookSetItem : public AbstractModel
                {
                public:
                    NotebookSetItem();
                    ~NotebookSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>notebook ID</p>
                     * @return Id <p>notebook ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>notebook ID</p>
                     * @param _id <p>notebook ID</p>
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
                     * 获取<p>预付费资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>预付费资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>预付费资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>预付费资源组</p>
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
                     * 获取<p>存储卷大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB <p>存储卷大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置<p>存储卷大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB <p>存储卷大小</p>
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
                     * 获取<p>计费金额信息，eg：2.00元/小时 (for后付费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfos <p>计费金额信息，eg：2.00元/小时 (for后付费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBillingInfos() const;

                    /**
                     * 设置<p>计费金额信息，eg：2.00元/小时 (for后付费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfos <p>计费金额信息，eg：2.00元/小时 (for后付费)</p>
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
                     * 获取<p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>启动时间</p>
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
                     * 获取<p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds <p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置<p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds <p>运行时间</p>
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
                     * 获取<p>计费状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus <p>计费状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus <p>计费状态</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>错误原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason <p>错误原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>错误原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureReason <p>错误原因</p>
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
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName <p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName <p>Pod名称</p>
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
                     * 获取<p>后付费资源规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTypeAlias <p>后付费资源规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置<p>后付费资源规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTypeAlias <p>后付费资源规格名称</p>
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
                     * 获取<p>是否自动终止</p>
                     * @return AutoStopping <p>是否自动终止</p>
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置<p>是否自动终止</p>
                     * @param _autoStopping <p>是否自动终止</p>
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
                     * 获取<p>自动停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutomaticStopTime <p>自动停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutomaticStopTime() const;

                    /**
                     * 设置<p>自动停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _automaticStopTime <p>自动停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutomaticStopTime(const uint64_t& _automaticStopTime);

                    /**
                     * 判断参数 AutomaticStopTime 是否已赋值
                     * @return AutomaticStopTime 是否已赋值
                     * 
                     */
                    bool AutomaticStopTimeHasBeenSet() const;

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
                     * 获取<p>notebook用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserTypes <p>notebook用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserTypes() const;

                    /**
                     * 设置<p>notebook用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userTypes <p>notebook用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserTypes(const std::vector<std::string>& _userTypes);

                    /**
                     * 判断参数 UserTypes 是否已赋值
                     * @return UserTypes 是否已赋值
                     * 
                     */
                    bool UserTypesHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin <p>子用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin <p>子用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>AppId</p>
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
                     * 获取<p>容器服务暴露端口配置</p>
                     * @return ExposePortConfig <p>容器服务暴露端口配置</p>
                     * 
                     */
                    ExposePortConfig GetExposePortConfig() const;

                    /**
                     * 设置<p>容器服务暴露端口配置</p>
                     * @param _exposePortConfig <p>容器服务暴露端口配置</p>
                     * 
                     */
                    void SetExposePortConfig(const ExposePortConfig& _exposePortConfig);

                    /**
                     * 判断参数 ExposePortConfig 是否已赋值
                     * @return ExposePortConfig 是否已赋值
                     * 
                     */
                    bool ExposePortConfigHasBeenSet() const;

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
                     * 获取<p>操作者信息</p>
                     * @return LatestOperatorInfo <p>操作者信息</p>
                     * 
                     */
                    OperatorInfo GetLatestOperatorInfo() const;

                    /**
                     * 设置<p>操作者信息</p>
                     * @param _latestOperatorInfo <p>操作者信息</p>
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
                     * <p>notebook ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>notebook 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>计费模式</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * <p>预付费资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>存储卷大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * <p>计费金额信息，eg：2.00元/小时 (for后付费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_billingInfos;
                    bool m_billingInfosHasBeenSet;

                    /**
                     * <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                    /**
                     * <p>计费状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>后付费资源规格名称</p>
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
                     * <p>是否自动终止</p>
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * <p>自动停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

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
                     * <p>notebook 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>notebook用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userTypes;
                    bool m_userTypesHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>子用户名称</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>容器服务暴露端口配置</p>
                     */
                    ExposePortConfig m_exposePortConfig;
                    bool m_exposePortConfigHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>操作者信息</p>
                     */
                    OperatorInfo m_latestOperatorInfo;
                    bool m_latestOperatorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKSETITEM_H_
