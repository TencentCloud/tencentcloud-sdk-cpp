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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警策略中监控任务的执行时间点
                */
                class MonitorTime : public AbstractModel
                {
                public:
                    MonitorTime();
                    ~MonitorTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行周期， 可选值：<code>Period</code>、<code>Fixed</code>、<code>Cron</code>。</p><ul><li>Period：固定频率</li><li>Fixed：固定时间</li><li>Cron：Cron表达式</li></ul>
                     * @return Type <p>执行周期， 可选值：<code>Period</code>、<code>Fixed</code>、<code>Cron</code>。</p><ul><li>Period：固定频率</li><li>Fixed：固定时间</li><li>Cron：Cron表达式</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>执行周期， 可选值：<code>Period</code>、<code>Fixed</code>、<code>Cron</code>。</p><ul><li>Period：固定频率</li><li>Fixed：固定时间</li><li>Cron：Cron表达式</li></ul>
                     * @param _type <p>执行周期， 可选值：<code>Period</code>、<code>Fixed</code>、<code>Cron</code>。</p><ul><li>Period：固定频率</li><li>Fixed：固定时间</li><li>Cron：Cron表达式</li></ul>
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
                     * 获取<p>执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。<br>当type为<code>Period</code>,<code>Fixed</code>时，time字段生效。</p>
                     * @return Time <p>执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。<br>当type为<code>Period</code>,<code>Fixed</code>时，time字段生效。</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。<br>当type为<code>Period</code>,<code>Fixed</code>时，time字段生效。</p>
                     * @param _time <p>执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。<br>当type为<code>Period</code>,<code>Fixed</code>时，time字段生效。</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>执行的周期cron表达式。示例：<code>0/1 * * * *</code> 从左到右每个field的含义 Minutes field(分钟), Hours field(小时),Day of month field(日期),Month field(月份),Day of week field(星期)， 不支持秒级别。当type为<code>Cron</code>时，CronExpression字段生效。</p>
                     * @return CronExpression <p>执行的周期cron表达式。示例：<code>0/1 * * * *</code> 从左到右每个field的含义 Minutes field(分钟), Hours field(小时),Day of month field(日期),Month field(月份),Day of week field(星期)， 不支持秒级别。当type为<code>Cron</code>时，CronExpression字段生效。</p>
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置<p>执行的周期cron表达式。示例：<code>0/1 * * * *</code> 从左到右每个field的含义 Minutes field(分钟), Hours field(小时),Day of month field(日期),Month field(月份),Day of week field(星期)， 不支持秒级别。当type为<code>Cron</code>时，CronExpression字段生效。</p>
                     * @param _cronExpression <p>执行的周期cron表达式。示例：<code>0/1 * * * *</code> 从左到右每个field的含义 Minutes field(分钟), Hours field(小时),Day of month field(日期),Month field(月份),Day of week field(星期)， 不支持秒级别。当type为<code>Cron</code>时，CronExpression字段生效。</p>
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                private:

                    /**
                     * <p>执行周期， 可选值：<code>Period</code>、<code>Fixed</code>、<code>Cron</code>。</p><ul><li>Period：固定频率</li><li>Fixed：固定时间</li><li>Cron：Cron表达式</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。<br>当type为<code>Period</code>,<code>Fixed</code>时，time字段生效。</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>执行的周期cron表达式。示例：<code>0/1 * * * *</code> 从左到右每个field的含义 Minutes field(分钟), Hours field(小时),Day of month field(日期),Month field(月份),Day of week field(星期)， 不支持秒级别。当type为<code>Cron</code>时，CronExpression字段生效。</p>
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
