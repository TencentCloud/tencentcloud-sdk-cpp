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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKCYCLELINKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKCYCLELINKDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 循环依赖响应体
                */
                class TaskCycleLinkDTO : public AbstractModel
                {
                public:
                    TaskCycleLinkDTO();
                    ~TaskCycleLinkDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取依赖关系唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 依赖关系唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置依赖关系唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 依赖关系唯一标识
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFrom 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFrom 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取上游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFromProjectId 上游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFromProjectId() const;

                    /**
                     * 设置上游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFromProjectId 上游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFromProjectId(const std::string& _taskFromProjectId);

                    /**
                     * 判断参数 TaskFromProjectId 是否已赋值
                     * @return TaskFromProjectId 是否已赋值
                     * 
                     */
                    bool TaskFromProjectIdHasBeenSet() const;

                    /**
                     * 获取上游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFromWorkflowId 上游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFromWorkflowId() const;

                    /**
                     * 设置上游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFromWorkflowId 上游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFromWorkflowId(const std::string& _taskFromWorkflowId);

                    /**
                     * 判断参数 TaskFromWorkflowId 是否已赋值
                     * @return TaskFromWorkflowId 是否已赋值
                     * 
                     */
                    bool TaskFromWorkflowIdHasBeenSet() const;

                    /**
                     * 获取下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTo 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTo 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取下游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskToProjectId 下游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskToProjectId() const;

                    /**
                     * 设置下游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskToProjectId 下游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskToProjectId(const std::string& _taskToProjectId);

                    /**
                     * 判断参数 TaskToProjectId 是否已赋值
                     * @return TaskToProjectId 是否已赋值
                     * 
                     */
                    bool TaskToProjectIdHasBeenSet() const;

                    /**
                     * 获取下游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskToWorkflowId 下游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskToWorkflowId() const;

                    /**
                     * 设置下游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskToWorkflowId 下游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskToWorkflowId(const std::string& _taskToWorkflowId);

                    /**
                     * 判断参数 TaskToWorkflowId 是否已赋值
                     * @return TaskToWorkflowId 是否已赋值
                     * 
                     */
                    bool TaskToWorkflowIdHasBeenSet() const;

                    /**
                     * 获取下游任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskToInfo 下游任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTO GetTaskToInfo() const;

                    /**
                     * 设置下游任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskToInfo 下游任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskToInfo(const TaskDsDTO& _taskToInfo);

                    /**
                     * 判断参数 TaskToInfo 是否已赋值
                     * @return TaskToInfo 是否已赋值
                     * 
                     */
                    bool TaskToInfoHasBeenSet() const;

                    /**
                     * 获取依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainCyclicConfig 依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainCyclicConfig 依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取依赖偏移类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubordinateCyclicConfig 依赖偏移类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置依赖偏移类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subordinateCyclicConfig 依赖偏移类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyStrategy 依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyStrategy() const;

                    /**
                     * 设置依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyStrategy 依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyStrategy(const std::string& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                    /**
                     * 获取自定义依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 自定义依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置自定义依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 自定义依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取更新人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 更新人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置更新人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 更新人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取创建人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserId 创建人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserId() const;

                    /**
                     * 设置创建人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserId 创建人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserId(const std::string& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户ID
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
                     * 获取主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserId 主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserId() const;

                    /**
                     * 设置主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserId 主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserId(const std::string& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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

                private:

                    /**
                     * 依赖关系唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * 上游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFromProjectId;
                    bool m_taskFromProjectIdHasBeenSet;

                    /**
                     * 上游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFromWorkflowId;
                    bool m_taskFromWorkflowIdHasBeenSet;

                    /**
                     * 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * 下游任务项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskToProjectId;
                    bool m_taskToProjectIdHasBeenSet;

                    /**
                     * 下游任务工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskToWorkflowId;
                    bool m_taskToWorkflowIdHasBeenSet;

                    /**
                     * 下游任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTO m_taskToInfo;
                    bool m_taskToInfoHasBeenSet;

                    /**
                     * 依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * 依赖偏移类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * 依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                    /**
                     * 自定义依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 更新人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 创建人用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * 租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKCYCLELINKDTO_H_
