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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 运维大屏任务展示
                */
                class ScreenTaskInfo : public AbstractModel
                {
                public:
                    ScreenTaskInfo();
                    ~ScreenTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计标示 0：全部、1：当前天、2：昨天
                     * @return CountTag 统计标示 0：全部、1：当前天、2：昨天
                     * 
                     */
                    uint64_t GetCountTag() const;

                    /**
                     * 设置统计标示 0：全部、1：当前天、2：昨天
                     * @param _countTag 统计标示 0：全部、1：当前天、2：昨天
                     * 
                     */
                    void SetCountTag(const uint64_t& _countTag);

                    /**
                     * 判断参数 CountTag 是否已赋值
                     * @return CountTag 是否已赋值
                     * 
                     */
                    bool CountTagHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNum 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalNum 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningNum 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningNum() const;

                    /**
                     * 设置运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningNum 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningNum(const uint64_t& _runningNum);

                    /**
                     * 判断参数 RunningNum 是否已赋值
                     * @return RunningNum 是否已赋值
                     * 
                     */
                    bool RunningNumHasBeenSet() const;

                    /**
                     * 获取停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppingNum 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStoppingNum() const;

                    /**
                     * 设置停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stoppingNum 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoppingNum(const uint64_t& _stoppingNum);

                    /**
                     * 判断参数 StoppingNum 是否已赋值
                     * @return StoppingNum 是否已赋值
                     * 
                     */
                    bool StoppingNumHasBeenSet() const;

                    /**
                     * 获取已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppedNum 已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStoppedNum() const;

                    /**
                     * 设置已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stoppedNum 已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoppedNum(const uint64_t& _stoppedNum);

                    /**
                     * 判断参数 StoppedNum 是否已赋值
                     * @return StoppedNum 是否已赋值
                     * 
                     */
                    bool StoppedNumHasBeenSet() const;

                    /**
                     * 获取暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenNum 暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenNum() const;

                    /**
                     * 设置暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenNum 暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenNum(const uint64_t& _frozenNum);

                    /**
                     * 判断参数 FrozenNum 是否已赋值
                     * @return FrozenNum 是否已赋值
                     * 
                     */
                    bool FrozenNumHasBeenSet() const;

                    /**
                     * 获取无效任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidNum 无效任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInvalidNum() const;

                    /**
                     * 设置无效任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalidNum 无效任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalidNum(const uint64_t& _invalidNum);

                    /**
                     * 判断参数 InvalidNum 是否已赋值
                     * @return InvalidNum 是否已赋值
                     * 
                     */
                    bool InvalidNumHasBeenSet() const;

                    /**
                     * 获取年任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YearNum 年任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetYearNum() const;

                    /**
                     * 设置年任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yearNum 年任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYearNum(const uint64_t& _yearNum);

                    /**
                     * 判断参数 YearNum 是否已赋值
                     * @return YearNum 是否已赋值
                     * 
                     */
                    bool YearNumHasBeenSet() const;

                    /**
                     * 获取月任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthNum 月任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonthNum() const;

                    /**
                     * 设置月任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monthNum 月任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonthNum(const uint64_t& _monthNum);

                    /**
                     * 判断参数 MonthNum 是否已赋值
                     * @return MonthNum 是否已赋值
                     * 
                     */
                    bool MonthNumHasBeenSet() const;

                    /**
                     * 获取周任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekNum 周任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeekNum() const;

                    /**
                     * 设置周任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekNum 周任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekNum(const uint64_t& _weekNum);

                    /**
                     * 判断参数 WeekNum 是否已赋值
                     * @return WeekNum 是否已赋值
                     * 
                     */
                    bool WeekNumHasBeenSet() const;

                    /**
                     * 获取天任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayNum 天任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDayNum() const;

                    /**
                     * 设置天任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayNum 天任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayNum(const uint64_t& _dayNum);

                    /**
                     * 判断参数 DayNum 是否已赋值
                     * @return DayNum 是否已赋值
                     * 
                     */
                    bool DayNumHasBeenSet() const;

                    /**
                     * 获取小时任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HourNum 小时任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHourNum() const;

                    /**
                     * 设置小时任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hourNum 小时任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHourNum(const uint64_t& _hourNum);

                    /**
                     * 判断参数 HourNum 是否已赋值
                     * @return HourNum 是否已赋值
                     * 
                     */
                    bool HourNumHasBeenSet() const;

                    /**
                     * 获取分钟任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinuteNum 分钟任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinuteNum() const;

                    /**
                     * 设置分钟任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minuteNum 分钟任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinuteNum(const uint64_t& _minuteNum);

                    /**
                     * 判断参数 MinuteNum 是否已赋值
                     * @return MinuteNum 是否已赋值
                     * 
                     */
                    bool MinuteNumHasBeenSet() const;

                private:

                    /**
                     * 统计标示 0：全部、1：当前天、2：昨天
                     */
                    uint64_t m_countTag;
                    bool m_countTagHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningNum;
                    bool m_runningNumHasBeenSet;

                    /**
                     * 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_stoppingNum;
                    bool m_stoppingNumHasBeenSet;

                    /**
                     * 已停止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_stoppedNum;
                    bool m_stoppedNumHasBeenSet;

                    /**
                     * 暂停
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenNum;
                    bool m_frozenNumHasBeenSet;

                    /**
                     * 无效任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_invalidNum;
                    bool m_invalidNumHasBeenSet;

                    /**
                     * 年任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_yearNum;
                    bool m_yearNumHasBeenSet;

                    /**
                     * 月任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monthNum;
                    bool m_monthNumHasBeenSet;

                    /**
                     * 周任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weekNum;
                    bool m_weekNumHasBeenSet;

                    /**
                     * 天任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dayNum;
                    bool m_dayNumHasBeenSet;

                    /**
                     * 小时任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hourNum;
                    bool m_hourNumHasBeenSet;

                    /**
                     * 分钟任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minuteNum;
                    bool m_minuteNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_
