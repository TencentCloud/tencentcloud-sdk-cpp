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
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
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
                     * 获取责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 责任人ID
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
                     * 获取创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建人ID
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
                     * 获取工作流参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams 工作流参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置工作流参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams 工作流参数数组
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
                     * 获取统一调度参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerWorkflowSchedulerConfigurations 统一调度参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTriggerConfig> GetTriggerWorkflowSchedulerConfigurations() const;

                    /**
                     * 设置统一调度参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerWorkflowSchedulerConfigurations 统一调度参数
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
                     * 获取工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowDesc 工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowDesc 工作流描述
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
                     * 获取工作流所属路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 工作流所属路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置工作流所属路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 工作流所属路径
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
                     * 获取BundleId项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId BundleId项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId BundleId项
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
                     * 获取BundleInfo项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo BundleInfo项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置BundleInfo项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo BundleInfo项
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
                     * 获取通用参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GeneralTaskParams 通用参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowGeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置通用参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _generalTaskParams 通用参数
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
                     * 获取Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus Trigger 状态 启动ACTIVE，暂停PAUSED
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

                private:

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 工作流参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 统一调度参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTriggerConfig> m_triggerWorkflowSchedulerConfigurations;
                    bool m_triggerWorkflowSchedulerConfigurationsHasBeenSet;

                    /**
                     * 工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流所属路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * BundleId项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * BundleInfo项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * 通用参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowGeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                    /**
                     * Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_
