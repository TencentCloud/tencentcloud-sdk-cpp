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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERADVANCEDCONFIGURATION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERADVANCEDCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流调度高级配置。
                */
                class WorkflowTriggerAdvancedConfiguration : public AbstractModel
                {
                public:
                    WorkflowTriggerAdvancedConfiguration();
                    ~WorkflowTriggerAdvancedConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>&lt;p&gt;该工作流下的所有任务重试模式，仅当TriggerMode为CONTINUE_RUN时有效。</p><p>枚举值：</p><ul><li>onFailure： 失败时自动重试</li><li>never： 从不重试</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRetryMode <p>&lt;p&gt;该工作流下的所有任务重试模式，仅当TriggerMode为CONTINUE_RUN时有效。</p><p>枚举值：</p><ul><li>onFailure： 失败时自动重试</li><li>never： 从不重试</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskRetryMode() const;

                    /**
                     * 设置<p>&lt;p&gt;该工作流下的所有任务重试模式，仅当TriggerMode为CONTINUE_RUN时有效。</p><p>枚举值：</p><ul><li>onFailure： 失败时自动重试</li><li>never： 从不重试</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRetryMode <p>&lt;p&gt;该工作流下的所有任务重试模式，仅当TriggerMode为CONTINUE_RUN时有效。</p><p>枚举值：</p><ul><li>onFailure： 失败时自动重试</li><li>never： 从不重试</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRetryMode(const std::string& _taskRetryMode);

                    /**
                     * 判断参数 TaskRetryMode 是否已赋值
                     * @return TaskRetryMode 是否已赋值
                     * 
                     */
                    bool TaskRetryModeHasBeenSet() const;

                private:

                    /**
                     * <p>&lt;p&gt;该工作流下的所有任务重试模式，仅当TriggerMode为CONTINUE_RUN时有效。</p><p>枚举值：</p><ul><li>onFailure： 失败时自动重试</li><li>never： 从不重试</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskRetryMode;
                    bool m_taskRetryModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERADVANCEDCONFIGURATION_H_
