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
                     * 获取notebook ID
                     * @return Id notebook ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置notebook ID
                     * @param _id notebook ID
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
                     * 获取预付费资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 预付费资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置预付费资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 预付费资源组
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
                     * 获取存储卷大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB 存储卷大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置存储卷大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB 存储卷大小
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
                     * 获取计费金额信息，eg：2.00元/小时 (for后付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfos 计费金额信息，eg：2.00元/小时 (for后付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBillingInfos() const;

                    /**
                     * 设置计费金额信息，eg：2.00元/小时 (for后付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfos 计费金额信息，eg：2.00元/小时 (for后付费)
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
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 启动时间
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
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds 运行时间
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
                     * 获取计费状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus 计费状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置计费状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus 计费状态
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureReason 错误原因
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
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
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
                     * 获取Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName Pod名称
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
                     * 获取后付费资源规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTypeAlias 后付费资源规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置后付费资源规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTypeAlias 后付费资源规格名称
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
                     * 获取是否自动终止
                     * @return AutoStopping 是否自动终止
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置是否自动终止
                     * @param _autoStopping 是否自动终止
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
                     * 获取自动停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutomaticStopTime 自动停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutomaticStopTime() const;

                    /**
                     * 设置自动停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _automaticStopTime 自动停止时间
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
                     * 获取notebook用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserTypes notebook用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserTypes() const;

                    /**
                     * 设置notebook用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userTypes notebook用户类型
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin 子用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin 子用户ID
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
                     * 获取AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId AppId
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
                     * notebook ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * notebook 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * 预付费资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 存储卷大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 计费金额信息，eg：2.00元/小时 (for后付费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_billingInfos;
                    bool m_billingInfosHasBeenSet;

                    /**
                     * 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                    /**
                     * 计费状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 后付费资源规格名称
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
                     * 是否自动终止
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 自动停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

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
                     * notebook 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * notebook用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userTypes;
                    bool m_userTypesHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 子用户名称
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKSETITEM_H_
