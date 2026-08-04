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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_SLAINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_SLAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SLA 信息
                */
                class SLAInfo : public AbstractModel
                {
                public:
                    SLAInfo();
                    ~SLAInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SLA 状态</p><p>枚举值：</p><ul><li>InSLA： SLA 内</li><li>Overdue： 已超时</li><li>Completed： 已完成</li></ul>
                     * @return SLAStatus <p>SLA 状态</p><p>枚举值：</p><ul><li>InSLA： SLA 内</li><li>Overdue： 已超时</li><li>Completed： 已完成</li></ul>
                     * 
                     */
                    std::string GetSLAStatus() const;

                    /**
                     * 设置<p>SLA 状态</p><p>枚举值：</p><ul><li>InSLA： SLA 内</li><li>Overdue： 已超时</li><li>Completed： 已完成</li></ul>
                     * @param _sLAStatus <p>SLA 状态</p><p>枚举值：</p><ul><li>InSLA： SLA 内</li><li>Overdue： 已超时</li><li>Completed： 已完成</li></ul>
                     * 
                     */
                    void SetSLAStatus(const std::string& _sLAStatus);

                    /**
                     * 判断参数 SLAStatus 是否已赋值
                     * @return SLAStatus 是否已赋值
                     * 
                     */
                    bool SLAStatusHasBeenSet() const;

                    /**
                     * 获取<p>到期时间</p>
                     * @return DueTime <p>到期时间</p>
                     * 
                     */
                    std::string GetDueTime() const;

                    /**
                     * 设置<p>到期时间</p>
                     * @param _dueTime <p>到期时间</p>
                     * 
                     */
                    void SetDueTime(const std::string& _dueTime);

                    /**
                     * 判断参数 DueTime 是否已赋值
                     * @return DueTime 是否已赋值
                     * 
                     */
                    bool DueTimeHasBeenSet() const;

                    /**
                     * 获取<p>剩余时长</p><p>单位：小时</p>
                     * @return RemainingHours <p>剩余时长</p><p>单位：小时</p>
                     * 
                     */
                    double GetRemainingHours() const;

                    /**
                     * 设置<p>剩余时长</p><p>单位：小时</p>
                     * @param _remainingHours <p>剩余时长</p><p>单位：小时</p>
                     * 
                     */
                    void SetRemainingHours(const double& _remainingHours);

                    /**
                     * 判断参数 RemainingHours 是否已赋值
                     * @return RemainingHours 是否已赋值
                     * 
                     */
                    bool RemainingHoursHasBeenSet() const;

                    /**
                     * 获取<p>超时时长</p><p>单位：小时</p>
                     * @return OverdueHours <p>超时时长</p><p>单位：小时</p>
                     * 
                     */
                    double GetOverdueHours() const;

                    /**
                     * 设置<p>超时时长</p><p>单位：小时</p>
                     * @param _overdueHours <p>超时时长</p><p>单位：小时</p>
                     * 
                     */
                    void SetOverdueHours(const double& _overdueHours);

                    /**
                     * 判断参数 OverdueHours 是否已赋值
                     * @return OverdueHours 是否已赋值
                     * 
                     */
                    bool OverdueHoursHasBeenSet() const;

                    /**
                     * 获取<p>SLA 工作日天数</p><p>单位：天</p>
                     * @return SLADays <p>SLA 工作日天数</p><p>单位：天</p>
                     * 
                     */
                    uint64_t GetSLADays() const;

                    /**
                     * 设置<p>SLA 工作日天数</p><p>单位：天</p>
                     * @param _sLADays <p>SLA 工作日天数</p><p>单位：天</p>
                     * 
                     */
                    void SetSLADays(const uint64_t& _sLADays);

                    /**
                     * 判断参数 SLADays 是否已赋值
                     * @return SLADays 是否已赋值
                     * 
                     */
                    bool SLADaysHasBeenSet() const;

                private:

                    /**
                     * <p>SLA 状态</p><p>枚举值：</p><ul><li>InSLA： SLA 内</li><li>Overdue： 已超时</li><li>Completed： 已完成</li></ul>
                     */
                    std::string m_sLAStatus;
                    bool m_sLAStatusHasBeenSet;

                    /**
                     * <p>到期时间</p>
                     */
                    std::string m_dueTime;
                    bool m_dueTimeHasBeenSet;

                    /**
                     * <p>剩余时长</p><p>单位：小时</p>
                     */
                    double m_remainingHours;
                    bool m_remainingHoursHasBeenSet;

                    /**
                     * <p>超时时长</p><p>单位：小时</p>
                     */
                    double m_overdueHours;
                    bool m_overdueHoursHasBeenSet;

                    /**
                     * <p>SLA 工作日天数</p><p>单位：天</p>
                     */
                    uint64_t m_sLADays;
                    bool m_sLADaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_SLAINFO_H_
