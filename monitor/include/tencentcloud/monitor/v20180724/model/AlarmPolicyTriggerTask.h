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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警策略触发任务
                */
                class AlarmPolicyTriggerTask : public AbstractModel
                {
                public:
                    AlarmPolicyTriggerTask();
                    ~AlarmPolicyTriggerTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发任务类型 AS=弹性伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>触发任务类型 AS=弹性伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>触发任务类型 AS=弹性伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>触发任务类型 AS=弹性伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>用 json 表示配置信息 {&quot;Key1&quot;:&quot;Value1&quot;,&quot;Key2&quot;:&quot;Value2&quot;}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskConfig <p>用 json 表示配置信息 {&quot;Key1&quot;:&quot;Value1&quot;,&quot;Key2&quot;:&quot;Value2&quot;}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskConfig() const;

                    /**
                     * 设置<p>用 json 表示配置信息 {&quot;Key1&quot;:&quot;Value1&quot;,&quot;Key2&quot;:&quot;Value2&quot;}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskConfig <p>用 json 表示配置信息 {&quot;Key1&quot;:&quot;Value1&quot;,&quot;Key2&quot;:&quot;Value2&quot;}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskConfig(const std::string& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                private:

                    /**
                     * <p>触发任务类型 AS=弹性伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>用 json 表示配置信息 {&quot;Key1&quot;:&quot;Value1&quot;,&quot;Key2&quot;:&quot;Value2&quot;}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_
