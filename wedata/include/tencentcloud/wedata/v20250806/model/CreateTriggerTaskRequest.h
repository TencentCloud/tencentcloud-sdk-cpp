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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateTriggerTask请求参数结构体
                */
                class CreateTriggerTaskRequest : public AbstractModel
                {
                public:
                    CreateTriggerTaskRequest();
                    ~CreateTriggerTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务基本属性
                     * @return TriggerTaskBaseAttribute 任务基本属性
                     * 
                     */
                    CreateTriggerTaskBaseAttribute GetTriggerTaskBaseAttribute() const;

                    /**
                     * 设置任务基本属性
                     * @param _triggerTaskBaseAttribute 任务基本属性
                     * 
                     */
                    void SetTriggerTaskBaseAttribute(const CreateTriggerTaskBaseAttribute& _triggerTaskBaseAttribute);

                    /**
                     * 判断参数 TriggerTaskBaseAttribute 是否已赋值
                     * @return TriggerTaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TriggerTaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取任务配置
                     * @return TriggerTaskConfiguration 任务配置
                     * 
                     */
                    CreateTriggerTaskConfiguration GetTriggerTaskConfiguration() const;

                    /**
                     * 设置任务配置
                     * @param _triggerTaskConfiguration 任务配置
                     * 
                     */
                    void SetTriggerTaskConfiguration(const CreateTriggerTaskConfiguration& _triggerTaskConfiguration);

                    /**
                     * 判断参数 TriggerTaskConfiguration 是否已赋值
                     * @return TriggerTaskConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskConfigurationHasBeenSet() const;

                    /**
                     * 获取任务调度配置
                     * @return TriggerTaskSchedulerConfiguration 任务调度配置
                     * 
                     */
                    CreateTriggerTaskSchedulerConfiguration GetTriggerTaskSchedulerConfiguration() const;

                    /**
                     * 设置任务调度配置
                     * @param _triggerTaskSchedulerConfiguration 任务调度配置
                     * 
                     */
                    void SetTriggerTaskSchedulerConfiguration(const CreateTriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration);

                    /**
                     * 判断参数 TriggerTaskSchedulerConfiguration 是否已赋值
                     * @return TriggerTaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务基本属性
                     */
                    CreateTriggerTaskBaseAttribute m_triggerTaskBaseAttribute;
                    bool m_triggerTaskBaseAttributeHasBeenSet;

                    /**
                     * 任务配置
                     */
                    CreateTriggerTaskConfiguration m_triggerTaskConfiguration;
                    bool m_triggerTaskConfigurationHasBeenSet;

                    /**
                     * 任务调度配置
                     */
                    CreateTriggerTaskSchedulerConfiguration m_triggerTaskSchedulerConfiguration;
                    bool m_triggerTaskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_
