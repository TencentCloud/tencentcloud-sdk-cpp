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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流统一调度参数入参
依赖任务信息

取值说明表：

| 当前任务周期类型 | 上游任务周期类型 | 配置方式 | MainCyclicConfig取值 | 时间维度/实例范围           | SubordinateCyclicConfig取值       | offset取值             |
| ---------------- | ---------------- | -------- | -------------------- | --------------------------- | --------------------------------- | ---------------------- |
| HOUR_CYCLE       | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| MINUTE_CYCLE     | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| DAY_CYCLE        | WEEK_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| DAY_CYCLE        | WEEK_CYCLE       | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| HOUR_CYCLE       | HOUR_CYCLE       | 推荐策略 | HOUR                 | 按小时/最近实例             | CURRENT_HOUR                      | 无                     |
| HOUR_CYCLE       | HOUR_CYCLE       | 推荐策略 | HOUR                 | 按小时/前一周期             | PREVIOUS_HOUR_CYCLE               | 无                     |
| HOUR_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | WEEK                 | 按周/上周                   | PREVIOUS_WEEK                     | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | WEEK                 | 按周/上周五                 | PREVIOUS_FRIDAY                   | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | WEEK                 | 按周/上周日                 | PREVIOUS_WEEKEND                  | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天         、          | CURRENT_DAY                       | 无                     |
| WEEK_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/前一天                 | PREVIOUS_DAY                      | 无                     |
| WEEK_CYCLE       | ONEOFF_CYCLE     | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| HOUR_CYCLE       | MINUTE_CYCLE     | 推荐策略 | HOUR                 | 按小时/前一个小时(-60,0]    | PREVIOUS_HOUR_LATER_OFFSET_MINUTE | 无                     |
| HOUR_CYCLE       | MINUTE_CYCLE     | 推荐策略 | HOUR                 | 按小时/前一个小时           | PREVIOUS_HOUR                     | 无                     |
| HOUR_CYCLE       | MINUTE_CYCLE     | 推荐策略 | HOUR                 | 按小时/当前小时             | CURRENT_HOUR                      | 无                     |
| YEAR_CYCLE       | WEEK_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| WEEK_CYCLE       | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| MINUTE_CYCLE     | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| WEEK_CYCLE       | HOUR_CYCLE       | 推荐策略 | WEEK                 | 按周/上周                   | PREVIOUS_WEEK                     | 无                     |
| WEEK_CYCLE       | HOUR_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| MINUTE_CYCLE     | HOUR_CYCLE       | 推荐策略 | HOUR                 | 按小时/当前小时             | CURRENT_HOUR                      | 无                     |
| HOUR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | HOUR_CYCLE       | 推荐策略 | MONTH                | 按月/上月                   | PREVIOUS_MONTH                    | 无                     |
| MONTH_CYCLE      | HOUR_CYCLE       | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | ONEOFF_CYCLE     | 推荐策略 | MONTH                | 按月/当月                   | CURRENT_MONTH                     | 无                     |
| DAY_CYCLE        | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| DAY_CYCLE        | MONTH_CYCLE      | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| MONTH_CYCLE      | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| ONEOFF_CYCLE     | WEEK_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| MINUTE_CYCLE     | MINUTE_CYCLE     | 推荐策略 | MINUTE               | 按分钟/当前分钟             | CURRENT_MINUTE                    | 无                     |
| MINUTE_CYCLE     | MINUTE_CYCLE     | 推荐策略 | MINUTE               | 按分钟/前一周期             | PREVIOUS_MINUTE_CYCLE             | 无                     |
| YEAR_CYCLE       | MINUTE_CYCLE     | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| ONEOFF_CYCLE     | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| DAY_CYCLE        | MINUTE_CYCLE     | 推荐策略 | DAY                  | 按天/前一天(-24 * 60,0]     | PREVIOUS_DAY_LATER_OFFSET_MINUTE  | 无                     |
| DAY_CYCLE        | MINUTE_CYCLE     | 推荐策略 | DAY                  | 按天/前一天                 | PREVIOUS_DAY                      | 无                     |
| DAY_CYCLE        | MINUTE_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| MINUTE_CYCLE     | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| WEEK_CYCLE       | WEEK_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| WEEK_CYCLE       | WEEK_CYCLE       | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| YEAR_CYCLE       | YEAR_CYCLE       | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| YEAR_CYCLE       | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| YEAR_CYCLE       | HOUR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| MINUTE_CYCLE     | WEEK_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| ONEOFF_CYCLE     | MINUTE_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| HOUR_CYCLE       | ONEOFF_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| WEEK_CYCLE       | MINUTE_CYCLE     | 推荐策略 | WEEK                 | 按周/上周                   | PREVIOUS_WEEK                     | 无                     |
| WEEK_CYCLE       | MINUTE_CYCLE     | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| DAY_CYCLE        | HOUR_CYCLE       | 推荐策略 | DAY                  | 按天/前一天(-24,0]          | PREVIOUS_DAY_LATER_OFFSET_HOUR    | 无                     |
| DAY_CYCLE        | HOUR_CYCLE       | 推荐策略 | DAY                  | 按天/前一天[-24,0)          | PREVIOUS_DAY                      | 无                     |
| DAY_CYCLE        | HOUR_CYCLE       | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本年所有月             | ALL_MONTH_OF_YEAR                 | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/上月                   | PREVIOUS_MONTH                    | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/上月末                 | PREVIOUS_END_OF_MONTH             | 无                     |
| YEAR_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/上月初                 | PREVIOUS_BEGIN_OF_MONTH           | 无                     |
| ONEOFF_CYCLE     | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| DAY_CYCLE        | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| ONEOFF_CYCLE     | HOUR_CYCLE       | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| DAY_CYCLE        | ONEOFF_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| MINUTE_CYCLE     | ONEOFF_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| WEEK_CYCLE       | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| WEEK_CYCLE       | MONTH_CYCLE      | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| YEAR_CYCLE       | ONEOFF_CYCLE     | 推荐策略 | YEAR                 | 按年/当年                   | CURRENT_YEAR                      | 无                     |
| MONTH_CYCLE      | DAY_CYCLE        | 推荐策略 | MONTH                | 按月/上月                   | PREVIOUS_MONTH                    | 无                     |
| MONTH_CYCLE      | DAY_CYCLE        | 推荐策略 | MONTH                | 按月/上月末                 | PREVIOUS_END_OF_MONTH             | 无                     |
| MONTH_CYCLE      | DAY_CYCLE        | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| MONTH_CYCLE      | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/前一天                 | PREVIOUS_DAY                      | 无                     |
| YEAR_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/本年所有天             | ALL_DAY_OF_YEAR                   | 无                     |
| YEAR_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| YEAR_CYCLE       | DAY_CYCLE        | 推荐策略 | DAY                  | 按天/前一天                 | PREVIOUS_DAY                      | 无                     |
| HOUR_CYCLE       | WEEK_CYCLE       | 推荐策略 | WEEK                 | 按周/本周                   | CURRENT_WEEK                      | 无                     |
| MONTH_CYCLE      | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/当月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | MONTH_CYCLE      | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| MONTH_CYCLE      | MINUTE_CYCLE     | 推荐策略 | MONTH                | 按月/上月                   | PREVIOUS_MONTH                    | 无                     |
| MONTH_CYCLE      | MINUTE_CYCLE     | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | WEEK_CYCLE       | 推荐策略 | MONTH                | 按月/上月                   | PREVIOUS_MONTH                    | 无                     |
| MONTH_CYCLE      | WEEK_CYCLE       | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| MONTH_CYCLE      | WEEK_CYCLE       | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| DAY_CYCLE        | YEAR_CYCLE       | 推荐策略 | YEAR                 | 按年/本年                   | CURRENT_YEAR                      | 无                     |
| DAY_CYCLE        | YEAR_CYCLE       | 推荐策略 | DAY                  | 按天/最近一次数据时间的实例 | RECENT_DATE                       | 无                     |
| ONEOFF_CYCLE     | ONEOFF_CYCLE     | 推荐策略 | DAY                  | 按天/当天                   | CURRENT_DAY                       | 无                     |
| ONEOFF_CYCLE     | MONTH_CYCLE      | 推荐策略 | MONTH                | 按月/本月                   | CURRENT_MONTH                     | 无                     |
| CRONTAB_CYCLE    | CRONTAB_CYCLE    | 推荐策略 | CRONTAB              | 无                          | CURRENT                           | 无                     |
| HOUR_CYCLE       | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| HOUR_CYCLE       | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| HOUR_CYCLE       | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | HOUR_CYCLE       | 自定义   | RANGE_HOUR           | 区间(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | DAY_CYCLE        | 自定义   | RANGE_DAY            | 区间(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | MINUTE_CYCLE     | 自定义   | RANGE_MINUTE         | 区间(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| HOUR_CYCLE       | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| HOUR_CYCLE       | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| HOUR_CYCLE       | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| MINUTE_CYCLE     | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| WEEK_CYCLE       | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | HOUR_CYCLE       | 自定义   | LIST_HOUR            | 列表(小时)                  | 无                                | 逗号分隔的整数，如-1,0 |
| DAY_CYCLE        | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| YEAR_CYCLE       | DAY_CYCLE        | 自定义   | LIST_DAY             | 列表(天)                    | 无                                | 逗号分隔的整数，如-1,0 |
| MONTH_CYCLE      | MINUTE_CYCLE     | 自定义   | LIST_MINUTE          | 列表(分钟)                  | 无                                | 逗号分隔的整数，如-1,0 |
                */
                class WorkflowSchedulerConfigurationInfo : public AbstractModel
                {
                public:
                    WorkflowSchedulerConfigurationInfo();
                    ~WorkflowSchedulerConfigurationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时区</p>
                     * @return ScheduleTimeZone <p>时区</p>
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _scheduleTimeZone <p>时区</p>
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
                     * @return CycleType <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
                     * @param _cycleType <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
                     * @return SelfDepend <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
                     * @param _selfDepend <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取<p>生效开始时间</p>
                     * @return StartTime <p>生效开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>生效开始时间</p>
                     * @param _startTime <p>生效开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>生效结束时间</p>
                     * @return EndTime <p>生效结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>生效结束时间</p>
                     * @param _endTime <p>生效结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>cron表达式</p>
                     * @return CrontabExpression <p>cron表达式</p>
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>cron表达式</p>
                     * @param _crontabExpression <p>cron表达式</p>
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取<p>工作流依赖，yes or no</p>
                     * @return DependencyWorkflow <p>工作流依赖，yes or no</p>
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>工作流依赖，yes or no</p>
                     * @param _dependencyWorkflow <p>工作流依赖，yes or no</p>
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>0：不修改 1：将任务的上游依赖配置改为默认值</p>
                     * @return ModifyCycleValue <p>0：不修改 1：将任务的上游依赖配置改为默认值</p>
                     * 
                     */
                    std::string GetModifyCycleValue() const;

                    /**
                     * 设置<p>0：不修改 1：将任务的上游依赖配置改为默认值</p>
                     * @param _modifyCycleValue <p>0：不修改 1：将任务的上游依赖配置改为默认值</p>
                     * 
                     */
                    void SetModifyCycleValue(const std::string& _modifyCycleValue);

                    /**
                     * 判断参数 ModifyCycleValue 是否已赋值
                     * @return ModifyCycleValue 是否已赋值
                     * 
                     */
                    bool ModifyCycleValueHasBeenSet() const;

                    /**
                     * 获取<p>工作流存在跨工作流依赖且使用cron表达式调度。如果保存统一调度，会断开不支持的依赖关系</p>
                     * @return ClearLink <p>工作流存在跨工作流依赖且使用cron表达式调度。如果保存统一调度，会断开不支持的依赖关系</p>
                     * 
                     */
                    bool GetClearLink() const;

                    /**
                     * 设置<p>工作流存在跨工作流依赖且使用cron表达式调度。如果保存统一调度，会断开不支持的依赖关系</p>
                     * @param _clearLink <p>工作流存在跨工作流依赖且使用cron表达式调度。如果保存统一调度，会断开不支持的依赖关系</p>
                     * 
                     */
                    void SetClearLink(const bool& _clearLink);

                    /**
                     * 判断参数 ClearLink 是否已赋值
                     * @return ClearLink 是否已赋值
                     * 
                     */
                    bool ClearLinkHasBeenSet() const;

                    /**
                     * 获取<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度，取值为：</p><ul><li>CRONTAB</li><li>DAY</li><li>HOUR</li><li>LIST_DAY</li><li>LIST_HOUR</li><li>LIST_MINUTE</li><li>MINUTE</li><li>MONTH</li><li>RANGE_DAY</li><li>RANGE_HOUR</li><li>RANGE_MINUTE</li><li>WEEK</li><li>YEAR</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * @return MainCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度，取值为：</p><ul><li>CRONTAB</li><li>DAY</li><li>HOUR</li><li>LIST_DAY</li><li>LIST_HOUR</li><li>LIST_MINUTE</li><li>MINUTE</li><li>MONTH</li><li>RANGE_DAY</li><li>RANGE_HOUR</li><li>RANGE_MINUTE</li><li>WEEK</li><li>YEAR</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度，取值为：</p><ul><li>CRONTAB</li><li>DAY</li><li>HOUR</li><li>LIST_DAY</li><li>LIST_HOUR</li><li>LIST_MINUTE</li><li>MINUTE</li><li>MONTH</li><li>RANGE_DAY</li><li>RANGE_HOUR</li><li>RANGE_MINUTE</li><li>WEEK</li><li>YEAR</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * @param _mainCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度，取值为：</p><ul><li>CRONTAB</li><li>DAY</li><li>HOUR</li><li>LIST_DAY</li><li>LIST_HOUR</li><li>LIST_MINUTE</li><li>MINUTE</li><li>MONTH</li><li>RANGE_DAY</li><li>RANGE_HOUR</li><li>RANGE_MINUTE</li><li>WEEK</li><li>YEAR</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围<br>取值为：</p><ul><li>ALL_DAY_OF_YEAR</li><li>ALL_MONTH_OF_YEAR</li><li>CURRENT</li><li>CURRENT_DAY</li><li>CURRENT_HOUR</li><li>CURRENT_MINUTE</li><li>CURRENT_MONTH</li><li>CURRENT_WEEK</li><li>CURRENT_YEAR</li><li>PREVIOUS_BEGIN_OF_MONTH</li><li>PREVIOUS_DAY</li><li>PREVIOUS_DAY_LATER_OFFSET_HOUR</li><li>PREVIOUS_DAY_LATER_OFFSET_MINUTE</li><li>PREVIOUS_END_OF_MONTH</li><li>PREVIOUS_FRIDAY</li><li>PREVIOUS_HOUR</li><li>PREVIOUS_HOUR_CYCLE</li><li>PREVIOUS_HOUR_LATER_OFFSET_MINUTE</li><li>PREVIOUS_MINUTE_CYCLE</li><li>PREVIOUS_MONTH</li><li>PREVIOUS_WEEK</li><li>PREVIOUS_WEEKEND</li><li>RECENT_DATE</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * @return SubordinateCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围<br>取值为：</p><ul><li>ALL_DAY_OF_YEAR</li><li>ALL_MONTH_OF_YEAR</li><li>CURRENT</li><li>CURRENT_DAY</li><li>CURRENT_HOUR</li><li>CURRENT_MINUTE</li><li>CURRENT_MONTH</li><li>CURRENT_WEEK</li><li>CURRENT_YEAR</li><li>PREVIOUS_BEGIN_OF_MONTH</li><li>PREVIOUS_DAY</li><li>PREVIOUS_DAY_LATER_OFFSET_HOUR</li><li>PREVIOUS_DAY_LATER_OFFSET_MINUTE</li><li>PREVIOUS_END_OF_MONTH</li><li>PREVIOUS_FRIDAY</li><li>PREVIOUS_HOUR</li><li>PREVIOUS_HOUR_CYCLE</li><li>PREVIOUS_HOUR_LATER_OFFSET_MINUTE</li><li>PREVIOUS_MINUTE_CYCLE</li><li>PREVIOUS_MONTH</li><li>PREVIOUS_WEEK</li><li>PREVIOUS_WEEKEND</li><li>RECENT_DATE</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围<br>取值为：</p><ul><li>ALL_DAY_OF_YEAR</li><li>ALL_MONTH_OF_YEAR</li><li>CURRENT</li><li>CURRENT_DAY</li><li>CURRENT_HOUR</li><li>CURRENT_MINUTE</li><li>CURRENT_MONTH</li><li>CURRENT_WEEK</li><li>CURRENT_YEAR</li><li>PREVIOUS_BEGIN_OF_MONTH</li><li>PREVIOUS_DAY</li><li>PREVIOUS_DAY_LATER_OFFSET_HOUR</li><li>PREVIOUS_DAY_LATER_OFFSET_MINUTE</li><li>PREVIOUS_END_OF_MONTH</li><li>PREVIOUS_FRIDAY</li><li>PREVIOUS_HOUR</li><li>PREVIOUS_HOUR_CYCLE</li><li>PREVIOUS_HOUR_LATER_OFFSET_MINUTE</li><li>PREVIOUS_MINUTE_CYCLE</li><li>PREVIOUS_MONTH</li><li>PREVIOUS_WEEK</li><li>PREVIOUS_WEEKEND</li><li>RECENT_DATE</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * @param _subordinateCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围<br>取值为：</p><ul><li>ALL_DAY_OF_YEAR</li><li>ALL_MONTH_OF_YEAR</li><li>CURRENT</li><li>CURRENT_DAY</li><li>CURRENT_HOUR</li><li>CURRENT_MINUTE</li><li>CURRENT_MONTH</li><li>CURRENT_WEEK</li><li>CURRENT_YEAR</li><li>PREVIOUS_BEGIN_OF_MONTH</li><li>PREVIOUS_DAY</li><li>PREVIOUS_DAY_LATER_OFFSET_HOUR</li><li>PREVIOUS_DAY_LATER_OFFSET_MINUTE</li><li>PREVIOUS_END_OF_MONTH</li><li>PREVIOUS_FRIDAY</li><li>PREVIOUS_HOUR</li><li>PREVIOUS_HOUR_CYCLE</li><li>PREVIOUS_HOUR_LATER_OFFSET_MINUTE</li><li>PREVIOUS_MINUTE_CYCLE</li><li>PREVIOUS_MONTH</li><li>PREVIOUS_WEEK</li><li>PREVIOUS_WEEKEND</li><li>RECENT_DATE</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取<p>执行时间左闭区间，示例：00:00，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * @return ExecutionStartTime <p>执行时间左闭区间，示例：00:00，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间左闭区间，示例：00:00，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * @param _executionStartTime <p>执行时间左闭区间，示例：00:00，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行时间右闭区间，示例：23:59，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * @return ExecutionEndTime <p>执行时间右闭区间，示例：23:59，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间右闭区间，示例：23:59，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * @param _executionEndTime <p>执行时间右闭区间，示例：23:59，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启日历调度 1 开启 0关闭</p>
                     * @return CalendarOpen <p>是否开启日历调度 1 开启 0关闭</p>
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置<p>是否开启日历调度 1 开启 0关闭</p>
                     * @param _calendarOpen <p>是否开启日历调度 1 开启 0关闭</p>
                     * 
                     */
                    void SetCalendarOpen(const std::string& _calendarOpen);

                    /**
                     * 判断参数 CalendarOpen 是否已赋值
                     * @return CalendarOpen 是否已赋值
                     * 
                     */
                    bool CalendarOpenHasBeenSet() const;

                    /**
                     * 获取<p>日历id</p>
                     * @return CalendarId <p>日历id</p>
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置<p>日历id</p>
                     * @param _calendarId <p>日历id</p>
                     * 
                     */
                    void SetCalendarId(const std::string& _calendarId);

                    /**
                     * 判断参数 CalendarId 是否已赋值
                     * @return CalendarId 是否已赋值
                     * 
                     */
                    bool CalendarIdHasBeenSet() const;

                    /**
                     * 获取<p>分钟任务相位偏移</p>
                     * @return MinuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    uint64_t GetMinuteOffset() const;

                    /**
                     * 设置<p>分钟任务相位偏移</p>
                     * @param _minuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    void SetMinuteOffset(const uint64_t& _minuteOffset);

                    /**
                     * 判断参数 MinuteOffset 是否已赋值
                     * @return MinuteOffset 是否已赋值
                     * 
                     */
                    bool MinuteOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>时区</p>
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>生效开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>生效结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>cron表达式</p>
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>工作流依赖，yes or no</p>
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>0：不修改 1：将任务的上游依赖配置改为默认值</p>
                     */
                    std::string m_modifyCycleValue;
                    bool m_modifyCycleValueHasBeenSet;

                    /**
                     * <p>工作流存在跨工作流依赖且使用cron表达式调度。如果保存统一调度，会断开不支持的依赖关系</p>
                     */
                    bool m_clearLink;
                    bool m_clearLinkHasBeenSet;

                    /**
                     * <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度，取值为：</p><ul><li>CRONTAB</li><li>DAY</li><li>HOUR</li><li>LIST_DAY</li><li>LIST_HOUR</li><li>LIST_MINUTE</li><li>MINUTE</li><li>MONTH</li><li>RANGE_DAY</li><li>RANGE_HOUR</li><li>RANGE_MINUTE</li><li>WEEK</li><li>YEAR</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围<br>取值为：</p><ul><li>ALL_DAY_OF_YEAR</li><li>ALL_MONTH_OF_YEAR</li><li>CURRENT</li><li>CURRENT_DAY</li><li>CURRENT_HOUR</li><li>CURRENT_MINUTE</li><li>CURRENT_MONTH</li><li>CURRENT_WEEK</li><li>CURRENT_YEAR</li><li>PREVIOUS_BEGIN_OF_MONTH</li><li>PREVIOUS_DAY</li><li>PREVIOUS_DAY_LATER_OFFSET_HOUR</li><li>PREVIOUS_DAY_LATER_OFFSET_MINUTE</li><li>PREVIOUS_END_OF_MONTH</li><li>PREVIOUS_FRIDAY</li><li>PREVIOUS_HOUR</li><li>PREVIOUS_HOUR_CYCLE</li><li>PREVIOUS_HOUR_LATER_OFFSET_MINUTE</li><li>PREVIOUS_MINUTE_CYCLE</li><li>PREVIOUS_MONTH</li><li>PREVIOUS_WEEK</li><li>PREVIOUS_WEEKEND</li><li>RECENT_DATE</li></ul><p>https://capi.woa.com/object/detail?product=wedata&amp;env=api_dev&amp;version=2025-08-06&amp;name=WorkflowSchedulerConfigurationInfo</p>
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * <p>执行时间左闭区间，示例：00:00，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间右闭区间，示例：23:59，只有周期类型为MINUTE_CYCLE才需要填入</p>
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>是否开启日历调度 1 开启 0关闭</p>
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * <p>日历id</p>
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * <p>分钟任务相位偏移</p>
                     */
                    uint64_t m_minuteOffset;
                    bool m_minuteOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_
