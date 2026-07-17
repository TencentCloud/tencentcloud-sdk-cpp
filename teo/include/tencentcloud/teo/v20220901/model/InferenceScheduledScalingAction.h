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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘推理定时伸缩动作配置，用于描述一条具体的定时伸缩动作。
                */
                class InferenceScheduledScalingAction : public AbstractModel
                {
                public:
                    InferenceScheduledScalingAction();
                    ~InferenceScheduledScalingAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron 表达式，用于描述定时伸缩动作的触发时间。采用 5 字段标准 Cron 格式：分钟 小时 日期 月份 星期。不支持秒字段和年份字段。
                     * @return CronExpression Cron 表达式，用于描述定时伸缩动作的触发时间。采用 5 字段标准 Cron 格式：分钟 小时 日期 月份 星期。不支持秒字段和年份字段。
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置Cron 表达式，用于描述定时伸缩动作的触发时间。采用 5 字段标准 Cron 格式：分钟 小时 日期 月份 星期。不支持秒字段和年份字段。
                     * @param _cronExpression Cron 表达式，用于描述定时伸缩动作的触发时间。采用 5 字段标准 Cron 格式：分钟 小时 日期 月份 星期。不支持秒字段和年份字段。
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                    /**
                     * 获取命中该定时伸缩动作后，推理服务需要调整到的最小实例数。若同一评估窗口内多个定时伸缩动作同时命中，则使用其中最大的 MinInstanceCount。
                     * @return MinInstanceCount 命中该定时伸缩动作后，推理服务需要调整到的最小实例数。若同一评估窗口内多个定时伸缩动作同时命中，则使用其中最大的 MinInstanceCount。
                     * 
                     */
                    int64_t GetMinInstanceCount() const;

                    /**
                     * 设置命中该定时伸缩动作后，推理服务需要调整到的最小实例数。若同一评估窗口内多个定时伸缩动作同时命中，则使用其中最大的 MinInstanceCount。
                     * @param _minInstanceCount 命中该定时伸缩动作后，推理服务需要调整到的最小实例数。若同一评估窗口内多个定时伸缩动作同时命中，则使用其中最大的 MinInstanceCount。
                     * 
                     */
                    void SetMinInstanceCount(const int64_t& _minInstanceCount);

                    /**
                     * 判断参数 MinInstanceCount 是否已赋值
                     * @return MinInstanceCount 是否已赋值
                     * 
                     */
                    bool MinInstanceCountHasBeenSet() const;

                private:

                    /**
                     * Cron 表达式，用于描述定时伸缩动作的触发时间。采用 5 字段标准 Cron 格式：分钟 小时 日期 月份 星期。不支持秒字段和年份字段。
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * 命中该定时伸缩动作后，推理服务需要调整到的最小实例数。若同一评估窗口内多个定时伸缩动作同时命中，则使用其中最大的 MinInstanceCount。
                     */
                    int64_t m_minInstanceCount;
                    bool m_minInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_
