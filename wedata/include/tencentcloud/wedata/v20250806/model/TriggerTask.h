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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskBaseAttribute.h>
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
                * 任务对象
                */
                class TriggerTask : public AbstractModel
                {
                public:
                    TriggerTask();
                    ~TriggerTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务基本属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTaskBaseAttribute 任务基本属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TriggerTaskBaseAttribute GetTriggerTaskBaseAttribute() const;

                    /**
                     * 设置任务基本属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTaskBaseAttribute 任务基本属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerTaskBaseAttribute(const TriggerTaskBaseAttribute& _triggerTaskBaseAttribute);

                    /**
                     * 判断参数 TriggerTaskBaseAttribute 是否已赋值
                     * @return TriggerTaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TriggerTaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTaskConfiguration 任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TriggerTaskConfiguration GetTriggerTaskConfiguration() const;

                    /**
                     * 设置任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTaskConfiguration 任务配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTaskSchedulerConfiguration 任务调度配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TriggerTaskSchedulerConfiguration GetTriggerTaskSchedulerConfiguration() const;

                    /**
                     * 设置任务调度配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTaskSchedulerConfiguration 任务调度配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TriggerTaskBaseAttribute m_triggerTaskBaseAttribute;
                    bool m_triggerTaskBaseAttributeHasBeenSet;

                    /**
                     * 任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TriggerTaskConfiguration m_triggerTaskConfiguration;
                    bool m_triggerTaskConfigurationHasBeenSet;

                    /**
                     * 任务调度配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TriggerTaskSchedulerConfiguration m_triggerTaskSchedulerConfiguration;
                    bool m_triggerTaskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_
