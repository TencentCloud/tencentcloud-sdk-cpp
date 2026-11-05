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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DownloadActiveDeviceCount请求参数结构体
                */
                class DownloadActiveDeviceCountRequest : public AbstractModel
                {
                public:
                    DownloadActiveDeviceCountRequest();
                    ~DownloadActiveDeviceCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询粒度。0:day, 1:week, 2:month, 不传默认为day</p>
                     * @return Period <p>查询粒度。0:day, 1:week, 2:month, 不传默认为day</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>查询粒度。0:day, 1:week, 2:month, 不传默认为day</p>
                     * @param _period <p>查询粒度。0:day, 1:week, 2:month, 不传默认为day</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>开始时间。单位秒</p>
                     * @return StartTime <p>开始时间。单位秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间。单位秒</p>
                     * @param _startTime <p>开始时间。单位秒</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间。单位秒</p>
                     * @return EndTime <p>结束时间。单位秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间。单位秒</p>
                     * @param _endTime <p>结束时间。单位秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>设备组, 不传查询全部</p>
                     * @return DevGroup <p>设备组, 不传查询全部</p>
                     * 
                     */
                    std::string GetDevGroup() const;

                    /**
                     * 设置<p>设备组, 不传查询全部</p>
                     * @param _devGroup <p>设备组, 不传查询全部</p>
                     * 
                     */
                    void SetDevGroup(const std::string& _devGroup);

                    /**
                     * 判断参数 DevGroup 是否已赋值
                     * @return DevGroup 是否已赋值
                     * 
                     */
                    bool DevGroupHasBeenSet() const;

                    /**
                     * 获取<p>应用ID，指控制台上设备管理中的动态设备应用ID，不传查询全部。</p>
                     * @return ApplicationId <p>应用ID，指控制台上设备管理中的动态设备应用ID，不传查询全部。</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用ID，指控制台上设备管理中的动态设备应用ID，不传查询全部。</p>
                     * @param _applicationId <p>应用ID，指控制台上设备管理中的动态设备应用ID，不传查询全部。</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权</p>
                     * @return LicenseType <p>license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权</p>
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置<p>license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权</p>
                     * @param _licenseType <p>license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权</p>
                     * 
                     */
                    void SetLicenseType(const int64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * <p>查询粒度。0:day, 1:week, 2:month, 不传默认为day</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>开始时间。单位秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。单位秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>设备组, 不传查询全部</p>
                     */
                    std::string m_devGroup;
                    bool m_devGroupHasBeenSet;

                    /**
                     * <p>应用ID，指控制台上设备管理中的动态设备应用ID，不传查询全部。</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权</p>
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTREQUEST_H_
