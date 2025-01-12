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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 查询用户设备的授权绑定情况
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取已经绑定license数量
                     * @return LicenseCount 已经绑定license数量
                     * 
                     */
                    int64_t GetLicenseCount() const;

                    /**
                     * 设置已经绑定license数量
                     * @param _licenseCount 已经绑定license数量
                     * 
                     */
                    void SetLicenseCount(const int64_t& _licenseCount);

                    /**
                     * 判断参数 LicenseCount 是否已赋值
                     * @return LicenseCount 是否已赋值
                     * 
                     */
                    bool LicenseCountHasBeenSet() const;

                    /**
                     * 获取剩余天数：天
                     * @return RemainDay 剩余天数：天
                     * 
                     */
                    int64_t GetRemainDay() const;

                    /**
                     * 设置剩余天数：天
                     * @param _remainDay 剩余天数：天
                     * 
                     */
                    void SetRemainDay(const int64_t& _remainDay);

                    /**
                     * 判断参数 RemainDay 是否已赋值
                     * @return RemainDay 是否已赋值
                     * 
                     */
                    bool RemainDayHasBeenSet() const;

                    /**
                     * 获取过期时间：s
                     * @return ExpireTime 过期时间：s
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间：s
                     * @param _expireTime 过期时间：s
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取服务时长：s
                     * @return Duration 服务时长：s
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置服务时长：s
                     * @param _duration 服务时长：s
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取已经绑定licenseId列表
                     * @return LicenseIds 已经绑定licenseId列表
                     * 
                     */
                    std::vector<std::string> GetLicenseIds() const;

                    /**
                     * 设置已经绑定licenseId列表
                     * @param _licenseIds 已经绑定licenseId列表
                     * 
                     */
                    void SetLicenseIds(const std::vector<std::string>& _licenseIds);

                    /**
                     * 判断参数 LicenseIds 是否已赋值
                     * @return LicenseIds 是否已赋值
                     * 
                     */
                    bool LicenseIdsHasBeenSet() const;

                    /**
                     * 获取每月license的限定时长
                     * @return MonthlyRemainTime 每月license的限定时长
                     * 
                     */
                    int64_t GetMonthlyRemainTime() const;

                    /**
                     * 设置每月license的限定时长
                     * @param _monthlyRemainTime 每月license的限定时长
                     * 
                     */
                    void SetMonthlyRemainTime(const int64_t& _monthlyRemainTime);

                    /**
                     * 判断参数 MonthlyRemainTime 是否已赋值
                     * @return MonthlyRemainTime 是否已赋值
                     * 
                     */
                    bool MonthlyRemainTimeHasBeenSet() const;

                    /**
                     * 获取月封顶时长（分钟)
                     * @return LimitedTime 月封顶时长（分钟)
                     * 
                     */
                    int64_t GetLimitedTime() const;

                    /**
                     * 设置月封顶时长（分钟)
                     * @param _limitedTime 月封顶时长（分钟)
                     * 
                     */
                    void SetLimitedTime(const int64_t& _limitedTime);

                    /**
                     * 判断参数 LimitedTime 是否已赋值
                     * @return LimitedTime 是否已赋值
                     * 
                     */
                    bool LimitedTimeHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 已经绑定license数量
                     */
                    int64_t m_licenseCount;
                    bool m_licenseCountHasBeenSet;

                    /**
                     * 剩余天数：天
                     */
                    int64_t m_remainDay;
                    bool m_remainDayHasBeenSet;

                    /**
                     * 过期时间：s
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 服务时长：s
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 已经绑定licenseId列表
                     */
                    std::vector<std::string> m_licenseIds;
                    bool m_licenseIdsHasBeenSet;

                    /**
                     * 每月license的限定时长
                     */
                    int64_t m_monthlyRemainTime;
                    bool m_monthlyRemainTimeHasBeenSet;

                    /**
                     * 月封顶时长（分钟)
                     */
                    int64_t m_limitedTime;
                    bool m_limitedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_
