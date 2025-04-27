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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 周期执行器设置。
                */
                class ScheduleSettings : public AbstractModel
                {
                public:
                    ScheduleSettings();
                    ~ScheduleSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行策略：

- ONCE：单次执行
- RECURRENCE：周期执行
                     * @return Policy 执行策略：

- ONCE：单次执行
- RECURRENCE：周期执行
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置执行策略：

- ONCE：单次执行
- RECURRENCE：周期执行
                     * @param _policy 执行策略：

- ONCE：单次执行
- RECURRENCE：周期执行
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取触发 Crontab 表达式。Policy 为 RECURRENCE 时，需要指定此字段。Crontab 按北京时间解析。
                     * @return Recurrence 触发 Crontab 表达式。Policy 为 RECURRENCE 时，需要指定此字段。Crontab 按北京时间解析。
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置触发 Crontab 表达式。Policy 为 RECURRENCE 时，需要指定此字段。Crontab 按北京时间解析。
                     * @param _recurrence 触发 Crontab 表达式。Policy 为 RECURRENCE 时，需要指定此字段。Crontab 按北京时间解析。
                     * 
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     * 
                     */
                    bool RecurrenceHasBeenSet() const;

                    /**
                     * 获取执行器下次执行时间。Policy 为 ONCE 时，需要指定此字段。

时间格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return InvokeTime 执行器下次执行时间。Policy 为 ONCE 时，需要指定此字段。

时间格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetInvokeTime() const;

                    /**
                     * 设置执行器下次执行时间。Policy 为 ONCE 时，需要指定此字段。

时间格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _invokeTime 执行器下次执行时间。Policy 为 ONCE 时，需要指定此字段。

时间格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetInvokeTime(const std::string& _invokeTime);

                    /**
                     * 判断参数 InvokeTime 是否已赋值
                     * @return InvokeTime 是否已赋值
                     * 
                     */
                    bool InvokeTimeHasBeenSet() const;

                private:

                    /**
                     * 执行策略：

- ONCE：单次执行
- RECURRENCE：周期执行
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 触发 Crontab 表达式。Policy 为 RECURRENCE 时，需要指定此字段。Crontab 按北京时间解析。
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                    /**
                     * 执行器下次执行时间。Policy 为 ONCE 时，需要指定此字段。

时间格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_invokeTime;
                    bool m_invokeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_
