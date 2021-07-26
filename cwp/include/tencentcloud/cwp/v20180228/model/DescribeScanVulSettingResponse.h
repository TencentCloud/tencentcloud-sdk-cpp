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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanVulSetting返回参数结构体
                */
                class DescribeScanVulSettingResponse : public AbstractModel
                {
                public:
                    DescribeScanVulSettingResponse();
                    ~DescribeScanVulSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取漏洞类型：1: web应用漏洞 2:系统组件漏洞 (多选英文逗号分隔)
                     * @return VulCategories 漏洞类型：1: web应用漏洞 2:系统组件漏洞 (多选英文逗号分隔)
                     */
                    std::string GetVulCategories() const;

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文逗号分隔)
                     * @return VulLevels 危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文逗号分隔)
                     */
                    std::string GetVulLevels() const;

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取定期检测间隔时间（天）
                     * @return TimerInterval 定期检测间隔时间（天）
                     */
                    uint64_t GetTimerInterval() const;

                    /**
                     * 判断参数 TimerInterval 是否已赋值
                     * @return TimerInterval 是否已赋值
                     */
                    bool TimerIntervalHasBeenSet() const;

                    /**
                     * 获取定期检测时间，如：00:00
                     * @return TimerTime 定期检测时间，如：00:00
                     */
                    std::string GetTimerTime() const;

                    /**
                     * 判断参数 TimerTime 是否已赋值
                     * @return TimerTime 是否已赋值
                     */
                    bool TimerTimeHasBeenSet() const;

                    /**
                     * 获取是否紧急漏洞：0-否 1-是
                     * @return VulEmergency 是否紧急漏洞：0-否 1-是
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return EnableScan 是否开启
                     */
                    uint64_t GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取一键扫描超时时长，如：1800秒（s）
                     * @return ClickTimeout 一键扫描超时时长，如：1800秒（s）
                     */
                    uint64_t GetClickTimeout() const;

                    /**
                     * 判断参数 ClickTimeout 是否已赋值
                     * @return ClickTimeout 是否已赋值
                     */
                    bool ClickTimeoutHasBeenSet() const;

                private:

                    /**
                     * 漏洞类型：1: web应用漏洞 2:系统组件漏洞 (多选英文逗号分隔)
                     */
                    std::string m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文逗号分隔)
                     */
                    std::string m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * 定期检测间隔时间（天）
                     */
                    uint64_t m_timerInterval;
                    bool m_timerIntervalHasBeenSet;

                    /**
                     * 定期检测时间，如：00:00
                     */
                    std::string m_timerTime;
                    bool m_timerTimeHasBeenSet;

                    /**
                     * 是否紧急漏洞：0-否 1-是
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 是否开启
                     */
                    uint64_t m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 一键扫描超时时长，如：1800秒（s）
                     */
                    uint64_t m_clickTimeout;
                    bool m_clickTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_
