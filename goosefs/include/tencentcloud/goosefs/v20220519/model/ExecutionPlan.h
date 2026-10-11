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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTIONPLAN_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTIONPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/ExecutePeriodAttribute.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 执行时间
                */
                class ExecutionPlan : public AbstractModel
                {
                public:
                    ExecutionPlan();
                    ~ExecutionPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行类型</p><p>枚举值：</p><ul><li>scheduled： 指定时间执行</li><li>periodic： 周期执行</li></ul>
                     * @return ExecuteMode <p>执行类型</p><p>枚举值：</p><ul><li>scheduled： 指定时间执行</li><li>periodic： 周期执行</li></ul>
                     * 
                     */
                    std::string GetExecuteMode() const;

                    /**
                     * 设置<p>执行类型</p><p>枚举值：</p><ul><li>scheduled： 指定时间执行</li><li>periodic： 周期执行</li></ul>
                     * @param _executeMode <p>执行类型</p><p>枚举值：</p><ul><li>scheduled： 指定时间执行</li><li>periodic： 周期执行</li></ul>
                     * 
                     */
                    void SetExecuteMode(const std::string& _executeMode);

                    /**
                     * 判断参数 ExecuteMode 是否已赋值
                     * @return ExecuteMode 是否已赋值
                     * 
                     */
                    bool ExecuteModeHasBeenSet() const;

                    /**
                     * 获取<p>任务执行时间</p><p>参数格式：2026-07-23 08:30</p><p>入参限制：只有立即执行或者指定时间执行时设置，周期执行不需要设置</p><p>默认值：当前时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteAt <p>任务执行时间</p><p>参数格式：2026-07-23 08:30</p><p>入参限制：只有立即执行或者指定时间执行时设置，周期执行不需要设置</p><p>默认值：当前时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteAt() const;

                    /**
                     * 设置<p>任务执行时间</p><p>参数格式：2026-07-23 08:30</p><p>入参限制：只有立即执行或者指定时间执行时设置，周期执行不需要设置</p><p>默认值：当前时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeAt <p>任务执行时间</p><p>参数格式：2026-07-23 08:30</p><p>入参限制：只有立即执行或者指定时间执行时设置，周期执行不需要设置</p><p>默认值：当前时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteAt(const std::string& _executeAt);

                    /**
                     * 判断参数 ExecuteAt 是否已赋值
                     * @return ExecuteAt 是否已赋值
                     * 
                     */
                    bool ExecuteAtHasBeenSet() const;

                    /**
                     * 获取<p>周期执行的时间设置</p><p>入参限制：选择周期执行时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutePeriod <p>周期执行的时间设置</p><p>入参限制：选择周期执行时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExecutePeriodAttribute GetExecutePeriod() const;

                    /**
                     * 设置<p>周期执行的时间设置</p><p>入参限制：选择周期执行时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executePeriod <p>周期执行的时间设置</p><p>入参限制：选择周期执行时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutePeriod(const ExecutePeriodAttribute& _executePeriod);

                    /**
                     * 判断参数 ExecutePeriod 是否已赋值
                     * @return ExecutePeriod 是否已赋值
                     * 
                     */
                    bool ExecutePeriodHasBeenSet() const;

                    /**
                     * 获取<p>任务等待时间</p><p>取值范围：[1, 500]</p><p>单位：H</p><p>默认值：12</p><p>任务执行的等待时间，超过时间任务未启动，自动取消</p>
                     * @return WaitTime <p>任务等待时间</p><p>取值范围：[1, 500]</p><p>单位：H</p><p>默认值：12</p><p>任务执行的等待时间，超过时间任务未启动，自动取消</p>
                     * 
                     */
                    int64_t GetWaitTime() const;

                    /**
                     * 设置<p>任务等待时间</p><p>取值范围：[1, 500]</p><p>单位：H</p><p>默认值：12</p><p>任务执行的等待时间，超过时间任务未启动，自动取消</p>
                     * @param _waitTime <p>任务等待时间</p><p>取值范围：[1, 500]</p><p>单位：H</p><p>默认值：12</p><p>任务执行的等待时间，超过时间任务未启动，自动取消</p>
                     * 
                     */
                    void SetWaitTime(const int64_t& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                private:

                    /**
                     * <p>执行类型</p><p>枚举值：</p><ul><li>scheduled： 指定时间执行</li><li>periodic： 周期执行</li></ul>
                     */
                    std::string m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * <p>任务执行时间</p><p>参数格式：2026-07-23 08:30</p><p>入参限制：只有立即执行或者指定时间执行时设置，周期执行不需要设置</p><p>默认值：当前时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeAt;
                    bool m_executeAtHasBeenSet;

                    /**
                     * <p>周期执行的时间设置</p><p>入参限制：选择周期执行时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExecutePeriodAttribute m_executePeriod;
                    bool m_executePeriodHasBeenSet;

                    /**
                     * <p>任务等待时间</p><p>取值范围：[1, 500]</p><p>单位：H</p><p>默认值：12</p><p>任务执行的等待时间，超过时间任务未启动，自动取消</p>
                     */
                    int64_t m_waitTime;
                    bool m_waitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTIONPLAN_H_
