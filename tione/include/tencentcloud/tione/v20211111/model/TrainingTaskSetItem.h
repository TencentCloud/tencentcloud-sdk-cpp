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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_

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
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 出参类型
                */
                class TrainingTaskSetItem : public AbstractModel
                {
                public:
                    TrainingTaskSetItem();
                    ~TrainingTaskSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取训练任务ID
                     * @return Id 训练任务ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置训练任务ID
                     * @param Id 训练任务ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取训练任务名称
                     * @return Name 训练任务名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置训练任务名称
                     * @param Name 训练任务名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取框架名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkName 框架名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置框架名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FrameworkName 框架名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrameworkName(const std::string& _frameworkName);

                    /**
                     * 判断参数 FrameworkName 是否已赋值
                     * @return FrameworkName 是否已赋值
                     */
                    bool FrameworkNameHasBeenSet() const;

                    /**
                     * 获取训练框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion 训练框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置训练框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FrameworkVersion 训练框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取训练模式eg：PS_WORKER、DDP、MPI、HOROVOD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingMode 训练模式eg：PS_WORKER、DDP、MPI、HOROVOD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置训练模式eg：PS_WORKER、DDP、MPI、HOROVOD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingMode 训练模式eg：PS_WORKER、DDP、MPI、HOROVOD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取计费模式
                     * @return ChargeType 计费模式
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式
                     * @param ChargeType 计费模式
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
                     * @return ChargeStatus 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
                     * @param ChargeStatus 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
                     */
                    void SetChargeStatus(const std::string& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceGroupId 预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return ResourceConfigInfos 资源配置
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置资源配置
                     * @param ResourceConfigInfos 资源配置
                     */
                    void SetResourceConfigInfos(const std::vector<ResourceConfigInfo>& _resourceConfigInfos);

                    /**
                     * 判断参数 ResourceConfigInfos 是否已赋值
                     * @return ResourceConfigInfos 是否已赋值
                     */
                    bool ResourceConfigInfosHasBeenSet() const;

                    /**
                     * 获取标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param Status 任务状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuntimeInSeconds 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds);

                    /**
                     * 判断参数 RuntimeInSeconds 是否已赋值
                     * @return RuntimeInSeconds 是否已赋值
                     */
                    bool RuntimeInSecondsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 训练开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取训练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 训练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置训练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 训练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取训练输出
                     * @return Output 训练输出
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置训练输出
                     * @param Output 训练输出
                     */
                    void SetOutput(const CosPathInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FailureReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取计费金额信息，eg：2.00元/小时 (for后付费)
                     * @return BillingInfo 计费金额信息，eg：2.00元/小时 (for后付费)
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置计费金额信息，eg：2.00元/小时 (for后付费)
                     * @param BillingInfo 计费金额信息，eg：2.00元/小时 (for后付费)
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取预付费专用资源组名称
                     * @return ResourceGroupName 预付费专用资源组名称
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置预付费专用资源组名称
                     * @param ResourceGroupName 预付费专用资源组名称
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo 自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageInfo 自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     */
                    bool ImageInfoHasBeenSet() const;

                private:

                    /**
                     * 训练任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 训练任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 框架名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * 训练框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * 训练模式eg：PS_WORKER、DDP、MPI、HOROVOD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 预付费专用资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源配置
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

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
                     * 训练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 训练输出
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 计费金额信息，eg：2.00元/小时 (for后付费)
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * 预付费专用资源组名称
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 自定义镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_
