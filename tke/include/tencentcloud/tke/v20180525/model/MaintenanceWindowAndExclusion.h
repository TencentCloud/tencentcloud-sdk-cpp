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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEWINDOWANDEXCLUSION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEWINDOWANDEXCLUSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 维护时间窗口和排除项
                */
                class MaintenanceWindowAndExclusion : public AbstractModel
                {
                public:
                    MaintenanceWindowAndExclusion();
                    ~MaintenanceWindowAndExclusion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取排除项
                     * @return Exclusions 排除项
                     * 
                     */
                    std::vector<MaintenanceExclusion> GetExclusions() const;

                    /**
                     * 设置排除项
                     * @param _exclusions 排除项
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
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 维护周期（一周中的哪几天）
                     */
                    std::vector<std::string> m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 排除项
                     */
                    std::vector<MaintenanceExclusion> m_exclusions;
                    bool m_exclusionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEWINDOWANDEXCLUSION_H_
