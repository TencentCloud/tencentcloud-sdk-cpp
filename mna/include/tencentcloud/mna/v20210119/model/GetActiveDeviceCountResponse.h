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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/ActiveDeviceList.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetActiveDeviceCount返回参数结构体
                */
                class GetActiveDeviceCountResponse : public AbstractModel
                {
                public:
                    GetActiveDeviceCountResponse();
                    ~GetActiveDeviceCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取激活设备统计
                     * @return ActiveDeviceList 激活设备统计
                     * 
                     */
                    std::vector<ActiveDeviceList> GetActiveDeviceList() const;

                    /**
                     * 判断参数 ActiveDeviceList 是否已赋值
                     * @return ActiveDeviceList 是否已赋值
                     * 
                     */
                    bool ActiveDeviceListHasBeenSet() const;

                    /**
                     * 获取查询粒度，0:day, 1:week, 2:month, 不传默认为day
                     * @return Period 查询粒度，0:day, 1:week, 2:month, 不传默认为day
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取设备组
                     * @return DevGroup 设备组
                     * 
                     */
                    std::string GetDevGroup() const;

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
                    std::string GetLicenseType() const;

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppId 租户ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 激活设备统计
                     */
                    std::vector<ActiveDeviceList> m_activeDeviceList;
                    bool m_activeDeviceListHasBeenSet;

                    /**
                     * 查询粒度，0:day, 1:week, 2:month, 不传默认为day
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 设备组
                     */
                    std::string m_devGroup;
                    bool m_devGroupHasBeenSet;

                    /**
                     * license类型, 不传查询全部, 1: 租户月付，2：厂商月付，3：永久授权
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTRESPONSE_H_
