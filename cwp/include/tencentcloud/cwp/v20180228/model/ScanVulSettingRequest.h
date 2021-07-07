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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_

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
                * ScanVulSetting请求参数结构体
                */
                class ScanVulSettingRequest : public AbstractModel
                {
                public:
                    ScanVulSettingRequest();
                    ~ScanVulSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定期检测间隔时间（天）
                     * @return TimerInterval 定期检测间隔时间（天）
                     */
                    uint64_t GetTimerInterval() const;

                    /**
                     * 设置定期检测间隔时间（天）
                     * @param TimerInterval 定期检测间隔时间（天）
                     */
                    void SetTimerInterval(const uint64_t& _timerInterval);

                    /**
                     * 判断参数 TimerInterval 是否已赋值
                     * @return TimerInterval 是否已赋值
                     */
                    bool TimerIntervalHasBeenSet() const;

                    /**
                     * 获取漏洞类型：1: web应用漏洞 2:系统组件漏洞, 以数组方式传参[1,2]
                     * @return VulCategories 漏洞类型：1: web应用漏洞 2:系统组件漏洞, 以数组方式传参[1,2]
                     */
                    std::vector<uint64_t> GetVulCategories() const;

                    /**
                     * 设置漏洞类型：1: web应用漏洞 2:系统组件漏洞, 以数组方式传参[1,2]
                     * @param VulCategories 漏洞类型：1: web应用漏洞 2:系统组件漏洞, 以数组方式传参[1,2]
                     */
                    void SetVulCategories(const std::vector<uint64_t>& _vulCategories);

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重,以数组方式传参[1,2,3]
                     * @return VulLevels 危害等级：1-低危；2-中危；3-高危；4-严重,以数组方式传参[1,2,3]
                     */
                    std::vector<uint64_t> GetVulLevels() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重,以数组方式传参[1,2,3]
                     * @param VulLevels 危害等级：1-低危；2-中危；3-高危；4-严重,以数组方式传参[1,2,3]
                     */
                    void SetVulLevels(const std::vector<uint64_t>& _vulLevels);

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取定期检测时间
                     * @return TimerTime 定期检测时间
                     */
                    std::string GetTimerTime() const;

                    /**
                     * 设置定期检测时间
                     * @param TimerTime 定期检测时间
                     */
                    void SetTimerTime(const std::string& _timerTime);

                    /**
                     * 判断参数 TimerTime 是否已赋值
                     * @return TimerTime 是否已赋值
                     */
                    bool TimerTimeHasBeenSet() const;

                    /**
                     * 获取是否是应急漏洞 0 否 1 是
                     * @return VulEmergency 是否是应急漏洞 0 否 1 是
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 设置是否是应急漏洞 0 否 1 是
                     * @param VulEmergency 是否是应急漏洞 0 否 1 是
                     */
                    void SetVulEmergency(const uint64_t& _vulEmergency);

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return StartTime 扫描开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置扫描开始时间
                     * @param StartTime 扫描开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
                     * @return EndTime 扫描结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置扫描结束时间
                     * @param EndTime 扫描结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取是否开启扫描 1开启 0不开启
                     * @return EnableScan 是否开启扫描 1开启 0不开启
                     */
                    uint64_t GetEnableScan() const;

                    /**
                     * 设置是否开启扫描 1开启 0不开启
                     * @param EnableScan 是否开启扫描 1开启 0不开启
                     */
                    void SetEnableScan(const uint64_t& _enableScan);

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     */
                    bool EnableScanHasBeenSet() const;

                private:

                    /**
                     * 定期检测间隔时间（天）
                     */
                    uint64_t m_timerInterval;
                    bool m_timerIntervalHasBeenSet;

                    /**
                     * 漏洞类型：1: web应用漏洞 2:系统组件漏洞, 以数组方式传参[1,2]
                     */
                    std::vector<uint64_t> m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重,以数组方式传参[1,2,3]
                     */
                    std::vector<uint64_t> m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * 定期检测时间
                     */
                    std::string m_timerTime;
                    bool m_timerTimeHasBeenSet;

                    /**
                     * 是否是应急漏洞 0 否 1 是
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否开启扫描 1开启 0不开启
                     */
                    uint64_t m_enableScan;
                    bool m_enableScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_
