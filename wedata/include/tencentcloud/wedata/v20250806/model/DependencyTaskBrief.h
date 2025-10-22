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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyStrategyTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 依赖任务信息

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
                class DependencyTaskBrief : public AbstractModel
                {
                public:
                    DependencyTaskBrief();
                    ~DependencyTaskBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取主依赖配置，取值为：

* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainCyclicConfig 主依赖配置，取值为：

* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置主依赖配置，取值为：

* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainCyclicConfig 主依赖配置，取值为：

* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取次依赖配置，取值为：
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubordinateCyclicConfig 次依赖配置，取值为：
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置次依赖配置，取值为：
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subordinateCyclicConfig 次依赖配置，取值为：
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取区间、列表模式下的偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 区间、列表模式下的偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置区间、列表模式下的偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 区间、列表模式下的偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取依赖执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyStrategy 依赖执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DependencyStrategyTask GetDependencyStrategy() const;

                    /**
                     * 设置依赖执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyStrategy 依赖执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyStrategy(const DependencyStrategyTask& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主依赖配置，取值为：

* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * 次依赖配置，取值为：
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * 区间、列表模式下的偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 依赖执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DependencyStrategyTask m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_
