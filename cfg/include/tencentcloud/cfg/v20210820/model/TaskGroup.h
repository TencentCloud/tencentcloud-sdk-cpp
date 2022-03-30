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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupAction.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分组
                */
                class TaskGroup : public AbstractModel
                {
                public:
                    TaskGroup();
                    ~TaskGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务动作ID
                     * @return TaskGroupId 任务动作ID
                     */
                    int64_t GetTaskGroupId() const;

                    /**
                     * 设置任务动作ID
                     * @param TaskGroupId 任务动作ID
                     */
                    void SetTaskGroupId(const int64_t& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     */
                    bool TaskGroupIdHasBeenSet() const;

                    /**
                     * 获取分组标题
                     * @return TaskGroupTitle 分组标题
                     */
                    std::string GetTaskGroupTitle() const;

                    /**
                     * 设置分组标题
                     * @param TaskGroupTitle 分组标题
                     */
                    void SetTaskGroupTitle(const std::string& _taskGroupTitle);

                    /**
                     * 判断参数 TaskGroupTitle 是否已赋值
                     * @return TaskGroupTitle 是否已赋值
                     */
                    bool TaskGroupTitleHasBeenSet() const;

                    /**
                     * 获取分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskGroupDescription 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskGroupDescription() const;

                    /**
                     * 设置分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskGroupDescription 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskGroupDescription(const std::string& _taskGroupDescription);

                    /**
                     * 判断参数 TaskGroupDescription 是否已赋值
                     * @return TaskGroupDescription 是否已赋值
                     */
                    bool TaskGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取任务分组顺序
                     * @return TaskGroupOrder 任务分组顺序
                     */
                    int64_t GetTaskGroupOrder() const;

                    /**
                     * 设置任务分组顺序
                     * @param TaskGroupOrder 任务分组顺序
                     */
                    void SetTaskGroupOrder(const int64_t& _taskGroupOrder);

                    /**
                     * 判断参数 TaskGroupOrder 是否已赋值
                     * @return TaskGroupOrder 是否已赋值
                     */
                    bool TaskGroupOrderHasBeenSet() const;

                    /**
                     * 获取对象类型ID
                     * @return ObjectTypeId 对象类型ID
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置对象类型ID
                     * @param ObjectTypeId 对象类型ID
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取任务分组创建时间
                     * @return TaskGroupCreateTime 任务分组创建时间
                     */
                    std::string GetTaskGroupCreateTime() const;

                    /**
                     * 设置任务分组创建时间
                     * @param TaskGroupCreateTime 任务分组创建时间
                     */
                    void SetTaskGroupCreateTime(const std::string& _taskGroupCreateTime);

                    /**
                     * 判断参数 TaskGroupCreateTime 是否已赋值
                     * @return TaskGroupCreateTime 是否已赋值
                     */
                    bool TaskGroupCreateTimeHasBeenSet() const;

                    /**
                     * 获取任务分组更新时间
                     * @return TaskGroupUpdateTime 任务分组更新时间
                     */
                    std::string GetTaskGroupUpdateTime() const;

                    /**
                     * 设置任务分组更新时间
                     * @param TaskGroupUpdateTime 任务分组更新时间
                     */
                    void SetTaskGroupUpdateTime(const std::string& _taskGroupUpdateTime);

                    /**
                     * 判断参数 TaskGroupUpdateTime 是否已赋值
                     * @return TaskGroupUpdateTime 是否已赋值
                     */
                    bool TaskGroupUpdateTimeHasBeenSet() const;

                    /**
                     * 获取动作分组动作列表
                     * @return TaskGroupActions 动作分组动作列表
                     */
                    std::vector<TaskGroupAction> GetTaskGroupActions() const;

                    /**
                     * 设置动作分组动作列表
                     * @param TaskGroupActions 动作分组动作列表
                     */
                    void SetTaskGroupActions(const std::vector<TaskGroupAction>& _taskGroupActions);

                    /**
                     * 判断参数 TaskGroupActions 是否已赋值
                     * @return TaskGroupActions 是否已赋值
                     */
                    bool TaskGroupActionsHasBeenSet() const;

                    /**
                     * 获取实例列表
                     * @return TaskGroupInstanceList 实例列表
                     */
                    std::vector<std::string> GetTaskGroupInstanceList() const;

                    /**
                     * 设置实例列表
                     * @param TaskGroupInstanceList 实例列表
                     */
                    void SetTaskGroupInstanceList(const std::vector<std::string>& _taskGroupInstanceList);

                    /**
                     * 判断参数 TaskGroupInstanceList 是否已赋值
                     * @return TaskGroupInstanceList 是否已赋值
                     */
                    bool TaskGroupInstanceListHasBeenSet() const;

                    /**
                     * 获取执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * @return TaskGroupMode 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     */
                    int64_t GetTaskGroupMode() const;

                    /**
                     * 设置执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * @param TaskGroupMode 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     */
                    void SetTaskGroupMode(const int64_t& _taskGroupMode);

                    /**
                     * 判断参数 TaskGroupMode 是否已赋值
                     * @return TaskGroupMode 是否已赋值
                     */
                    bool TaskGroupModeHasBeenSet() const;

                private:

                    /**
                     * 任务动作ID
                     */
                    int64_t m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                    /**
                     * 分组标题
                     */
                    std::string m_taskGroupTitle;
                    bool m_taskGroupTitleHasBeenSet;

                    /**
                     * 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskGroupDescription;
                    bool m_taskGroupDescriptionHasBeenSet;

                    /**
                     * 任务分组顺序
                     */
                    int64_t m_taskGroupOrder;
                    bool m_taskGroupOrderHasBeenSet;

                    /**
                     * 对象类型ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * 任务分组创建时间
                     */
                    std::string m_taskGroupCreateTime;
                    bool m_taskGroupCreateTimeHasBeenSet;

                    /**
                     * 任务分组更新时间
                     */
                    std::string m_taskGroupUpdateTime;
                    bool m_taskGroupUpdateTimeHasBeenSet;

                    /**
                     * 动作分组动作列表
                     */
                    std::vector<TaskGroupAction> m_taskGroupActions;
                    bool m_taskGroupActionsHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<std::string> m_taskGroupInstanceList;
                    bool m_taskGroupInstanceListHasBeenSet;

                    /**
                     * 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     */
                    int64_t m_taskGroupMode;
                    bool m_taskGroupModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_
