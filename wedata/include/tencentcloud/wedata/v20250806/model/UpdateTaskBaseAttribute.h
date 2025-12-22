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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 更新任务基本属性信息
                */
                class UpdateTaskBaseAttribute : public AbstractModel
                {
                public:
                    UpdateTaskBaseAttribute();
                    ~UpdateTaskBaseAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务负责人ID
                     * @return OwnerUin 任务负责人ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置任务负责人ID
                     * @param _ownerUin 任务负责人ID
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
                     * 获取任务描述
                     * @return TaskDescription 任务描述
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置任务描述
                     * @param _taskDescription 任务描述
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取注意：
- 路径上不要填写任务节点类型；例如，在 一个名为 wf01 的工作流，“通用” 分类下，现在想要在这个分类下的 tf_01 文件夹下，新建一个 shell 任务；则 填写 /tf_01 即可；
- 如果 tf_01 文件夹不存在，则需要先创建这个文件夹（使用 CreateTaskFolder 接口）才能操作成功；
                     * @return TaskFolderPath 注意：
- 路径上不要填写任务节点类型；例如，在 一个名为 wf01 的工作流，“通用” 分类下，现在想要在这个分类下的 tf_01 文件夹下，新建一个 shell 任务；则 填写 /tf_01 即可；
- 如果 tf_01 文件夹不存在，则需要先创建这个文件夹（使用 CreateTaskFolder 接口）才能操作成功；
                     * 
                     */
                    std::string GetTaskFolderPath() const;

                    /**
                     * 设置注意：
- 路径上不要填写任务节点类型；例如，在 一个名为 wf01 的工作流，“通用” 分类下，现在想要在这个分类下的 tf_01 文件夹下，新建一个 shell 任务；则 填写 /tf_01 即可；
- 如果 tf_01 文件夹不存在，则需要先创建这个文件夹（使用 CreateTaskFolder 接口）才能操作成功；
                     * @param _taskFolderPath 注意：
- 路径上不要填写任务节点类型；例如，在 一个名为 wf01 的工作流，“通用” 分类下，现在想要在这个分类下的 tf_01 文件夹下，新建一个 shell 任务；则 填写 /tf_01 即可；
- 如果 tf_01 文件夹不存在，则需要先创建这个文件夹（使用 CreateTaskFolder 接口）才能操作成功；
                     * 
                     */
                    void SetTaskFolderPath(const std::string& _taskFolderPath);

                    /**
                     * 判断参数 TaskFolderPath 是否已赋值
                     * @return TaskFolderPath 是否已赋值
                     * 
                     */
                    bool TaskFolderPathHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务负责人ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 注意：
- 路径上不要填写任务节点类型；例如，在 一个名为 wf01 的工作流，“通用” 分类下，现在想要在这个分类下的 tf_01 文件夹下，新建一个 shell 任务；则 填写 /tf_01 即可；
- 如果 tf_01 文件夹不存在，则需要先创建这个文件夹（使用 CreateTaskFolder 接口）才能操作成功；
                     */
                    std::string m_taskFolderPath;
                    bool m_taskFolderPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_
