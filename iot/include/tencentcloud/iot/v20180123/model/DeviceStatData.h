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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATDATA_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 设备统计数据
                */
                class DeviceStatData : public AbstractModel
                {
                public:
                    DeviceStatData();
                    ~DeviceStatData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间点
                     * @return Datetime 时间点
                     * 
                     */
                    std::string GetDatetime() const;

                    /**
                     * 设置时间点
                     * @param _datetime 时间点
                     * 
                     */
                    void SetDatetime(const std::string& _datetime);

                    /**
                     * 判断参数 Datetime 是否已赋值
                     * @return Datetime 是否已赋值
                     * 
                     */
                    bool DatetimeHasBeenSet() const;

                    /**
                     * 获取在线设备数
                     * @return DeviceOnline 在线设备数
                     * 
                     */
                    uint64_t GetDeviceOnline() const;

                    /**
                     * 设置在线设备数
                     * @param _deviceOnline 在线设备数
                     * 
                     */
                    void SetDeviceOnline(const uint64_t& _deviceOnline);

                    /**
                     * 判断参数 DeviceOnline 是否已赋值
                     * @return DeviceOnline 是否已赋值
                     * 
                     */
                    bool DeviceOnlineHasBeenSet() const;

                    /**
                     * 获取激活设备数
                     * @return DeviceActive 激活设备数
                     * 
                     */
                    uint64_t GetDeviceActive() const;

                    /**
                     * 设置激活设备数
                     * @param _deviceActive 激活设备数
                     * 
                     */
                    void SetDeviceActive(const uint64_t& _deviceActive);

                    /**
                     * 判断参数 DeviceActive 是否已赋值
                     * @return DeviceActive 是否已赋值
                     * 
                     */
                    bool DeviceActiveHasBeenSet() const;

                    /**
                     * 获取设备总数
                     * @return DeviceTotal 设备总数
                     * 
                     */
                    uint64_t GetDeviceTotal() const;

                    /**
                     * 设置设备总数
                     * @param _deviceTotal 设备总数
                     * 
                     */
                    void SetDeviceTotal(const uint64_t& _deviceTotal);

                    /**
                     * 判断参数 DeviceTotal 是否已赋值
                     * @return DeviceTotal 是否已赋值
                     * 
                     */
                    bool DeviceTotalHasBeenSet() const;

                private:

                    /**
                     * 时间点
                     */
                    std::string m_datetime;
                    bool m_datetimeHasBeenSet;

                    /**
                     * 在线设备数
                     */
                    uint64_t m_deviceOnline;
                    bool m_deviceOnlineHasBeenSet;

                    /**
                     * 激活设备数
                     */
                    uint64_t m_deviceActive;
                    bool m_deviceActiveHasBeenSet;

                    /**
                     * 设备总数
                     */
                    uint64_t m_deviceTotal;
                    bool m_deviceTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATDATA_H_
