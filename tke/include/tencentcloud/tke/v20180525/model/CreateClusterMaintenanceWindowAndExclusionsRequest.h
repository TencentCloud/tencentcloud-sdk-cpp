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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_

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
                * CreateClusterMaintenanceWindowAndExclusions请求参数结构体
                */
                class CreateClusterMaintenanceWindowAndExclusionsRequest : public AbstractModel
                {
                public:
                    CreateClusterMaintenanceWindowAndExclusionsRequest();
                    ~CreateClusterMaintenanceWindowAndExclusionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * @return ClusterID 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * @param _clusterID 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
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
                     * 获取维护周期（一周中的哪几天），支持的参数值如下：

- MO：周一
- TU：周二
- WE：周三
- TH：周四
- FR：周五
- SA：周六
- SU：周日
                     * @return DayOfWeek 维护周期（一周中的哪几天），支持的参数值如下：

- MO：周一
- TU：周二
- WE：周三
- TH：周四
- FR：周五
- SA：周六
- SU：周日
                     * 
                     */
                    std::vector<std::string> GetDayOfWeek() const;

                    /**
                     * 设置维护周期（一周中的哪几天），支持的参数值如下：

- MO：周一
- TU：周二
- WE：周三
- TH：周四
- FR：周五
- SA：周六
- SU：周日
                     * @param _dayOfWeek 维护周期（一周中的哪几天），支持的参数值如下：

- MO：周一
- TU：周二
- WE：周三
- TH：周四
- FR：周五
- SA：周六
- SU：周日
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
                     * 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

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
                     * 维护周期（一周中的哪几天），支持的参数值如下：

- MO：周一
- TU：周二
- WE：周三
- TH：周四
- FR：周五
- SA：周六
- SU：周日
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

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
