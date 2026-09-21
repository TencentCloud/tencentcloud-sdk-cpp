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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTSCHEDULERULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTSCHEDULERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 峰谷计费配置
                */
                class CoefficientScheduleRule : public AbstractModel
                {
                public:
                    CoefficientScheduleRule();
                    ~CoefficientScheduleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>1～7，表示周一至周日</p>
                     * @return Weekdays <p>1～7，表示周一至周日</p>
                     * 
                     */
                    std::vector<uint64_t> GetWeekdays() const;

                    /**
                     * 设置<p>1～7，表示周一至周日</p>
                     * @param _weekdays <p>1～7，表示周一至周日</p>
                     * 
                     */
                    void SetWeekdays(const std::vector<uint64_t>& _weekdays);

                    /**
                     * 判断参数 Weekdays 是否已赋值
                     * @return Weekdays 是否已赋值
                     * 
                     */
                    bool WeekdaysHasBeenSet() const;

                    /**
                     * 获取<p>00:00～23:59，固定 UTC+8，窗口左闭</p><p>参数格式：HH:mm</p>
                     * @return StartTime <p>00:00～23:59，固定 UTC+8，窗口左闭</p><p>参数格式：HH:mm</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>00:00～23:59，固定 UTC+8，窗口左闭</p><p>参数格式：HH:mm</p>
                     * @param _startTime <p>00:00～23:59，固定 UTC+8，窗口左闭</p><p>参数格式：HH:mm</p>
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
                     * 获取<p>大于 StartTime，最大 24:00，窗口右开；跨午夜拆分并调整星期</p><p>参数格式：HH:mm</p>
                     * @return EndTime <p>大于 StartTime，最大 24:00，窗口右开；跨午夜拆分并调整星期</p><p>参数格式：HH:mm</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>大于 StartTime，最大 24:00，窗口右开；跨午夜拆分并调整星期</p><p>参数格式：HH:mm</p>
                     * @param _endTime <p>大于 StartTime，最大 24:00，窗口右开；跨午夜拆分并调整星期</p><p>参数格式：HH:mm</p>
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
                     * 获取<p>有限非负数，建议最多 6 位小数；0 免费、0.5 半价、1 原价，可大于 1；倍率计算后的价格须在服务支持的数值范围内</p>
                     * @return Multiplier <p>有限非负数，建议最多 6 位小数；0 免费、0.5 半价、1 原价，可大于 1；倍率计算后的价格须在服务支持的数值范围内</p>
                     * 
                     */
                    double GetMultiplier() const;

                    /**
                     * 设置<p>有限非负数，建议最多 6 位小数；0 免费、0.5 半价、1 原价，可大于 1；倍率计算后的价格须在服务支持的数值范围内</p>
                     * @param _multiplier <p>有限非负数，建议最多 6 位小数；0 免费、0.5 半价、1 原价，可大于 1；倍率计算后的价格须在服务支持的数值范围内</p>
                     * 
                     */
                    void SetMultiplier(const double& _multiplier);

                    /**
                     * 判断参数 Multiplier 是否已赋值
                     * @return Multiplier 是否已赋值
                     * 
                     */
                    bool MultiplierHasBeenSet() const;

                private:

                    /**
                     * <p>1～7，表示周一至周日</p>
                     */
                    std::vector<uint64_t> m_weekdays;
                    bool m_weekdaysHasBeenSet;

                    /**
                     * <p>00:00～23:59，固定 UTC+8，窗口左闭</p><p>参数格式：HH:mm</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>大于 StartTime，最大 24:00，窗口右开；跨午夜拆分并调整星期</p><p>参数格式：HH:mm</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>有限非负数，建议最多 6 位小数；0 免费、0.5 半价、1 原价，可大于 1；倍率计算后的价格须在服务支持的数值范围内</p>
                     */
                    double m_multiplier;
                    bool m_multiplierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTSCHEDULERULE_H_
