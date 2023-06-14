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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATUS_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATUS_H_

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
                * 设备状态
                */
                class DeviceStatus : public AbstractModel
                {
                public:
                    DeviceStatus();
                    ~DeviceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取设备状态（inactive, online, offline）
                     * @return Status 设备状态（inactive, online, offline）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设备状态（inactive, online, offline）
                     * @param _status 设备状态（inactive, online, offline）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOnline 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstOnline() const;

                    /**
                     * 设置首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstOnline 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstOnline(const std::string& _firstOnline);

                    /**
                     * 判断参数 FirstOnline 是否已赋值
                     * @return FirstOnline 是否已赋值
                     * 
                     */
                    bool FirstOnlineHasBeenSet() const;

                    /**
                     * 获取最后上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOnline 最后上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOnline() const;

                    /**
                     * 设置最后上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOnline 最后上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOnline(const std::string& _lastOnline);

                    /**
                     * 判断参数 LastOnline 是否已赋值
                     * @return LastOnline 是否已赋值
                     * 
                     */
                    bool LastOnlineHasBeenSet() const;

                    /**
                     * 获取上线次数
                     * @return OnlineTimes 上线次数
                     * 
                     */
                    uint64_t GetOnlineTimes() const;

                    /**
                     * 设置上线次数
                     * @param _onlineTimes 上线次数
                     * 
                     */
                    void SetOnlineTimes(const uint64_t& _onlineTimes);

                    /**
                     * 判断参数 OnlineTimes 是否已赋值
                     * @return OnlineTimes 是否已赋值
                     * 
                     */
                    bool OnlineTimesHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备状态（inactive, online, offline）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstOnline;
                    bool m_firstOnlineHasBeenSet;

                    /**
                     * 最后上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOnline;
                    bool m_lastOnlineHasBeenSet;

                    /**
                     * 上线次数
                     */
                    uint64_t m_onlineTimes;
                    bool m_onlineTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESTATUS_H_
