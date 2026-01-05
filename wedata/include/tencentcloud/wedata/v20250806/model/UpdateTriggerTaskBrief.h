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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERTASKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERTASKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTriggerTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskSchedulerConfiguration.h>


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
                class UpdateTriggerTaskBrief : public AbstractModel
                {
                public:
                    UpdateTriggerTaskBrief();
                    ~UpdateTriggerTaskBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务基本属性
                     * @return TriggerTaskBaseAttribute 任务基本属性
                     * 
                     */
                    UpdateTriggerTaskBaseAttribute GetTriggerTaskBaseAttribute() const;

                    /**
                     * 设置任务基本属性
                     * @param _triggerTaskBaseAttribute 任务基本属性
                     * 
                     */
                    void SetTriggerTaskBaseAttribute(const UpdateTriggerTaskBaseAttribute& _triggerTaskBaseAttribute);

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
                    TriggerTaskConfiguration GetTriggerTaskConfiguration() const;

                    /**
                     * 设置任务配置
                     * @param _triggerTaskConfiguration 任务配置
                     * 
                     */
                    void SetTriggerTaskConfiguration(const TriggerTaskConfiguration& _triggerTaskConfiguration);

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
                    TriggerTaskSchedulerConfiguration GetTriggerTaskSchedulerConfiguration() const;

                    /**
                     * 设置任务调度配置
                     * @param _triggerTaskSchedulerConfiguration 任务调度配置
                     * 
                     */
                    void SetTriggerTaskSchedulerConfiguration(const TriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration);

                    /**
                     * 判断参数 TriggerTaskSchedulerConfiguration 是否已赋值
                     * @return TriggerTaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * 任务基本属性
                     */
                    UpdateTriggerTaskBaseAttribute m_triggerTaskBaseAttribute;
                    bool m_triggerTaskBaseAttributeHasBeenSet;

                    /**
                     * 任务配置
                     */
                    TriggerTaskConfiguration m_triggerTaskConfiguration;
                    bool m_triggerTaskConfigurationHasBeenSet;

                    /**
                     * 任务调度配置
                     */
                    TriggerTaskSchedulerConfiguration m_triggerTaskSchedulerConfiguration;
                    bool m_triggerTaskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERTASKBRIEF_H_
