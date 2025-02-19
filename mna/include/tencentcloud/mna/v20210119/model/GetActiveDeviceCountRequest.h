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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_

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
                * GetActiveDeviceCount请求参数结构体
                */
                class GetActiveDeviceCountRequest : public AbstractModel
                {
                public:
                    GetActiveDeviceCountRequest();
                    ~GetActiveDeviceCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询粒度。0:day, 1:week, 2:month, 不传默认为day
                     * @return Period 查询粒度。0:day, 1:week, 2:month, 不传默认为day
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置查询粒度。0:day, 1:week, 2:month, 不传默认为day
                     * @param _period 查询粒度。0:day, 1:week, 2:month, 不传默认为day
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
                     * 获取开始时间。单位秒
                     * @return StartTime 开始时间。单位秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间。单位秒
                     * @param _startTime 开始时间。单位秒
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
                     * 获取结束时间。单位秒
                     * @return EndTime 结束时间。单位秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间。单位秒
                     * @param _endTime 结束时间。单位秒
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
                     * 获取设备组, 不传查询全部
                     * @return DevGroup 设备组, 不传查询全部
                     * 
                     */
                    std::string GetDevGroup() const;

                    /**
                     * 设置设备组, 不传查询全部
                     * @param _devGroup 设备组, 不传查询全部
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
                     * 获取license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
                     * @return LicenseType license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
                     * @param _licenseType license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
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
                     * 查询粒度。0:day, 1:week, 2:month, 不传默认为day
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 开始时间。单位秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。单位秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 设备组, 不传查询全部
                     */
                    std::string m_devGroup;
                    bool m_devGroupHasBeenSet;

                    /**
                     * license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_
