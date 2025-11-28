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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/MaintenanceExclusion.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyGlobalMaintenanceWindowAndExclusions请求参数结构体
                */
                class ModifyGlobalMaintenanceWindowAndExclusionsRequest : public AbstractModel
                {
                public:
                    ModifyGlobalMaintenanceWindowAndExclusionsRequest();
                    ~ModifyGlobalMaintenanceWindowAndExclusionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取维护窗口ID
                     * @return ID 维护窗口ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置维护窗口ID
                     * @param _iD 维护窗口ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return TargetRegions 地域
                     * 
                     */
                    std::vector<std::string> GetTargetRegions() const;

                    /**
                     * 设置地域
                     * @param _targetRegions 地域
                     * 
                     */
                    void SetTargetRegions(const std::vector<std::string>& _targetRegions);

                    /**
                     * 判断参数 TargetRegions 是否已赋值
                     * @return TargetRegions 是否已赋值
                     * 
                     */
                    bool TargetRegionsHasBeenSet() const;

                    /**
                     * 获取维护开始时间
                     * @return MaintenanceTime 维护开始时间
                     * 
                     */
                    std::string GetMaintenanceTime() const;

                    /**
                     * 设置维护开始时间
                     * @param _maintenanceTime 维护开始时间
                     * 
                     */
                    void SetMaintenanceTime(const std::string& _maintenanceTime);

                    /**
                     * 判断参数 MaintenanceTime 是否已赋值
                     * @return MaintenanceTime 是否已赋值
                     * 
                     */
                    bool MaintenanceTimeHasBeenSet() const;

                    /**
                     * 获取维护时长（小时）
                     * @return Duration 维护时长（小时）
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置维护时长（小时）
                     * @param _duration 维护时长（小时）
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取维护周期（一周中的哪几天）
                     * @return DayOfWeek 维护周期（一周中的哪几天）
                     * 
                     */
                    std::vector<std::string> GetDayOfWeek() const;

                    /**
                     * 设置维护周期（一周中的哪几天）
                     * @param _dayOfWeek 维护周期（一周中的哪几天）
                     * 
                     */
                    void SetDayOfWeek(const std::vector<std::string>& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取维护排除项
                     * @return Exclusions 维护排除项
                     * 
                     */
                    std::vector<MaintenanceExclusion> GetExclusions() const;

                    /**
                     * 设置维护排除项
                     * @param _exclusions 维护排除项
                     * 
                     */
                    void SetExclusions(const std::vector<MaintenanceExclusion>& _exclusions);

                    /**
                     * 判断参数 Exclusions 是否已赋值
                     * @return Exclusions 是否已赋值
                     * 
                     */
                    bool ExclusionsHasBeenSet() const;

                private:

                    /**
                     * 维护窗口ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 地域
                     */
                    std::vector<std::string> m_targetRegions;
                    bool m_targetRegionsHasBeenSet;

                    /**
                     * 维护开始时间
                     */
                    std::string m_maintenanceTime;
                    bool m_maintenanceTimeHasBeenSet;

                    /**
                     * 维护时长（小时）
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 维护周期（一周中的哪几天）
                     */
                    std::vector<std::string> m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 维护排除项
                     */
                    std::vector<MaintenanceExclusion> m_exclusions;
                    bool m_exclusionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
