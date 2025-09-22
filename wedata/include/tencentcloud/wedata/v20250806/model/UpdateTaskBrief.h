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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/TaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/TaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 更新任务对象入参
                */
                class UpdateTaskBrief : public AbstractModel
                {
                public:
                    UpdateTaskBrief();
                    ~UpdateTaskBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务基本属性
                     * @return TaskBaseAttribute 任务基本属性
                     * 
                     */
                    UpdateTaskBaseAttribute GetTaskBaseAttribute() const;

                    /**
                     * 设置任务基本属性
                     * @param _taskBaseAttribute 任务基本属性
                     * 
                     */
                    void SetTaskBaseAttribute(const UpdateTaskBaseAttribute& _taskBaseAttribute);

                    /**
                     * 判断参数 TaskBaseAttribute 是否已赋值
                     * @return TaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取任务配置
                     * @return TaskConfiguration 任务配置
                     * 
                     */
                    TaskConfiguration GetTaskConfiguration() const;

                    /**
                     * 设置任务配置
                     * @param _taskConfiguration 任务配置
                     * 
                     */
                    void SetTaskConfiguration(const TaskConfiguration& _taskConfiguration);

                    /**
                     * 判断参数 TaskConfiguration 是否已赋值
                     * @return TaskConfiguration 是否已赋值
                     * 
                     */
                    bool TaskConfigurationHasBeenSet() const;

                    /**
                     * 获取任务调度配置
                     * @return TaskSchedulerConfiguration 任务调度配置
                     * 
                     */
                    TaskSchedulerConfiguration GetTaskSchedulerConfiguration() const;

                    /**
                     * 设置任务调度配置
                     * @param _taskSchedulerConfiguration 任务调度配置
                     * 
                     */
                    void SetTaskSchedulerConfiguration(const TaskSchedulerConfiguration& _taskSchedulerConfiguration);

                    /**
                     * 判断参数 TaskSchedulerConfiguration 是否已赋值
                     * @return TaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * 任务基本属性
                     */
                    UpdateTaskBaseAttribute m_taskBaseAttribute;
                    bool m_taskBaseAttributeHasBeenSet;

                    /**
                     * 任务配置
                     */
                    TaskConfiguration m_taskConfiguration;
                    bool m_taskConfigurationHasBeenSet;

                    /**
                     * 任务调度配置
                     */
                    TaskSchedulerConfiguration m_taskSchedulerConfiguration;
                    bool m_taskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBRIEF_H_
