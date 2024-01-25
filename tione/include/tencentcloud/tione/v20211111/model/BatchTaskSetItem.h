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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKSETITEM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>


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
                class BatchTaskSetItem : public AbstractModel
                {
                public:
                    BatchTaskSetItem();
                    ~BatchTaskSetItem() = default;
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
                     * 获取模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInfo 模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInfo 模型信息
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
                     * 获取任务状态, 取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * @return Status 任务状态, 取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态, 取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * @param _status 任务状态, 取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
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
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 任务开始运行时间
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
                     * 获取任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取输出
                     * @return Outputs 输出
                     * 
                     */
                    std::vector<DataConfig> GetOutputs() const;

                    /**
                     * 设置输出
                     * @param _outputs 输出
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
                     * 获取失败原因
                     * @return FailureReason 失败原因
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置失败原因
                     * @param _failureReason 失败原因
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
                     * 获取按量计费信息
                     * @return BillingInfo 按量计费信息
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置按量计费信息
                     * @param _billingInfo 按量计费信息
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

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
                     * 模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

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
                     * 包年包月资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConfigInfo m_resourceConfigInfo;
                    bool m_resourceConfigInfoHasBeenSet;

                    /**
                     * 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 任务状态, 取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
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
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始运行时间
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
                     * 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 输出
                     */
                    std::vector<DataConfig> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 包年包月资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 按量计费信息
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKSETITEM_H_
