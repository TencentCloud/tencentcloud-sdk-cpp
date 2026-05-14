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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowTriggerConfig.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowGeneralTaskParam.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowRunConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询工作流详细信息
                */
                class TriggerWorkflowDetail : public AbstractModel
                {
                public:
                    TriggerWorkflowDetail();
                    ~TriggerWorkflowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取<p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin <p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin <p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin <p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin <p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>工作流参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams <p>工作流参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置<p>工作流参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams <p>工作流参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowParams(const std::vector<ParamInfo>& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取<p>统一调度参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerWorkflowSchedulerConfigurations <p>统一调度参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTriggerConfig> GetTriggerWorkflowSchedulerConfigurations() const;

                    /**
                     * 设置<p>统一调度参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerWorkflowSchedulerConfigurations <p>统一调度参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerWorkflowSchedulerConfigurations(const std::vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations);

                    /**
                     * 判断参数 TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * @return TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowSchedulerConfigurationsHasBeenSet() const;

                    /**
                     * 获取<p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowDesc <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置<p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowDesc <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取<p>工作流所属路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>工作流所属路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>工作流所属路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>工作流所属路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>BundleId项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>BundleId项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>BundleId项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>BundleInfo项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>BundleInfo项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>BundleInfo项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>BundleInfo项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>通用参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GeneralTaskParams <p>通用参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowGeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置<p>通用参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _generalTaskParams <p>通用参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGeneralTaskParams(const std::vector<WorkflowGeneralTaskParam>& _generalTaskParams);

                    /**
                     * 判断参数 GeneralTaskParams 是否已赋值
                     * @return GeneralTaskParams 是否已赋值
                     * 
                     */
                    bool GeneralTaskParamsHasBeenSet() const;

                    /**
                     * 获取<p>Trigger 状态 启动ACTIVE，暂停PAUSED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置<p>Trigger 状态 启动ACTIVE，暂停PAUSED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerStatus(const std::string& _schedulerStatus);

                    /**
                     * 判断参数 SchedulerStatus 是否已赋值
                     * @return SchedulerStatus 是否已赋值
                     * 
                     */
                    bool SchedulerStatusHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行参数配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerWorkflowRunConfiguration <p>工作流运行参数配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowRunConfig GetTriggerWorkflowRunConfiguration() const;

                    /**
                     * 设置<p>工作流运行参数配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerWorkflowRunConfiguration <p>工作流运行参数配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerWorkflowRunConfiguration(const WorkflowRunConfig& _triggerWorkflowRunConfiguration);

                    /**
                     * 判断参数 TriggerWorkflowRunConfiguration 是否已赋值
                     * @return TriggerWorkflowRunConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowRunConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>工作流参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>统一调度参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTriggerConfig> m_triggerWorkflowSchedulerConfigurations;
                    bool m_triggerWorkflowSchedulerConfigurationsHasBeenSet;

                    /**
                     * <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * <p>工作流所属路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>BundleId项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>BundleInfo项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>通用参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowGeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                    /**
                     * <p>Trigger 状态 启动ACTIVE，暂停PAUSED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                    /**
                     * <p>工作流运行参数配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowRunConfig m_triggerWorkflowRunConfiguration;
                    bool m_triggerWorkflowRunConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_
