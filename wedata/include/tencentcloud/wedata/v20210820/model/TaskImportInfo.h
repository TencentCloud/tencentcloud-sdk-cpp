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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKIMPORTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKIMPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集成任务导入到编排空间配置
                */
                class TaskImportInfo : public AbstractModel
                {
                public:
                    TaskImportInfo();
                    ~TaskImportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否导入编排空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsImport 是否导入编排空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsImport() const;

                    /**
                     * 设置是否导入编排空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isImport 是否导入编排空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsImport(const bool& _isImport);

                    /**
                     * 判断参数 IsImport 是否已赋值
                     * @return IsImport 是否已赋值
                     * 
                     */
                    bool IsImportHasBeenSet() const;

                    /**
                     * 获取是否新建工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNewWorkFlow 是否新建工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNewWorkFlow() const;

                    /**
                     * 设置是否新建工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNewWorkFlow 是否新建工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNewWorkFlow(const bool& _isNewWorkFlow);

                    /**
                     * 判断参数 IsNewWorkFlow 是否已赋值
                     * @return IsNewWorkFlow 是否已赋值
                     * 
                     */
                    bool IsNewWorkFlowHasBeenSet() const;

                    /**
                     * 获取工作流所属目录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowFolderId 工作流所属目录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowFolderId() const;

                    /**
                     * 设置工作流所属目录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowFolderId 工作流所属目录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowFolderId(const std::string& _workFlowFolderId);

                    /**
                     * 判断参数 WorkFlowFolderId 是否已赋值
                     * @return WorkFlowFolderId 是否已赋值
                     * 
                     */
                    bool WorkFlowFolderIdHasBeenSet() const;

                    /**
                     * 获取工作流所属目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowFolderName 工作流所属目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowFolderName() const;

                    /**
                     * 设置工作流所属目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowFolderName 工作流所属目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowFolderName(const std::string& _workFlowFolderName);

                    /**
                     * 判断参数 WorkFlowFolderName 是否已赋值
                     * @return WorkFlowFolderName 是否已赋值
                     * 
                     */
                    bool WorkFlowFolderNameHasBeenSet() const;

                    /**
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowName(const std::string& _workFlowName);

                    /**
                     * 判断参数 WorkFlowName 是否已赋值
                     * @return WorkFlowName 是否已赋值
                     * 
                     */
                    bool WorkFlowNameHasBeenSet() const;

                    /**
                     * 获取重名任务处理策略, 0:跳过,不导入; 1: 重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNameExistMode 重名任务处理策略, 0:跳过,不导入; 1: 重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskNameExistMode() const;

                    /**
                     * 设置重名任务处理策略, 0:跳过,不导入; 1: 重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNameExistMode 重名任务处理策略, 0:跳过,不导入; 1: 重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskNameExistMode(const uint64_t& _taskNameExistMode);

                    /**
                     * 判断参数 TaskNameExistMode 是否已赋值
                     * @return TaskNameExistMode 是否已赋值
                     * 
                     */
                    bool TaskNameExistModeHasBeenSet() const;

                private:

                    /**
                     * 是否导入编排空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isImport;
                    bool m_isImportHasBeenSet;

                    /**
                     * 是否新建工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNewWorkFlow;
                    bool m_isNewWorkFlowHasBeenSet;

                    /**
                     * 工作流所属目录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowFolderId;
                    bool m_workFlowFolderIdHasBeenSet;

                    /**
                     * 工作流所属目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowFolderName;
                    bool m_workFlowFolderNameHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowName;
                    bool m_workFlowNameHasBeenSet;

                    /**
                     * 重名任务处理策略, 0:跳过,不导入; 1: 重命名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskNameExistMode;
                    bool m_taskNameExistModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKIMPORTINFO_H_
