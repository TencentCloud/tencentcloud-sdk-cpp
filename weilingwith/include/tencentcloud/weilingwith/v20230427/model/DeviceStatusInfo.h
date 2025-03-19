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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备状态信息
                */
                class DeviceStatusInfo : public AbstractModel
                {
                public:
                    DeviceStatusInfo();
                    ~DeviceStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return WID 设备ID
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备ID
                     * @param _wID 设备ID
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取设备状态（online=normal+fault、offline）
                     * @return DeviceStatus 设备状态（online=normal+fault、offline）
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 设置设备状态（online=normal+fault、offline）
                     * @param _deviceStatus 设备状态（online=normal+fault、offline）
                     * 
                     */
                    void SetDeviceStatus(const std::string& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取设备状态更新时间
                     * @return DeviceStatusUpdateTime 设备状态更新时间
                     * 
                     */
                    std::string GetDeviceStatusUpdateTime() const;

                    /**
                     * 设置设备状态更新时间
                     * @param _deviceStatusUpdateTime 设备状态更新时间
                     * 
                     */
                    void SetDeviceStatusUpdateTime(const std::string& _deviceStatusUpdateTime);

                    /**
                     * 判断参数 DeviceStatusUpdateTime 是否已赋值
                     * @return DeviceStatusUpdateTime 是否已赋值
                     * 
                     */
                    bool DeviceStatusUpdateTimeHasBeenSet() const;

                    /**
                     * 获取设备业务状态（normal、fault、offline）
                     * @return Status 设备业务状态（normal、fault、offline）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设备业务状态（normal、fault、offline）
                     * @param _status 设备业务状态（normal、fault、offline）
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
                     * 获取推流状态。推流中-true，未推流-false
                     * @return IsAlive 推流状态。推流中-true，未推流-false
                     * 
                     */
                    bool GetIsAlive() const;

                    /**
                     * 设置推流状态。推流中-true，未推流-false
                     * @param _isAlive 推流状态。推流中-true，未推流-false
                     * 
                     */
                    void SetIsAlive(const bool& _isAlive);

                    /**
                     * 判断参数 IsAlive 是否已赋值
                     * @return IsAlive 是否已赋值
                     * 
                     */
                    bool IsAliveHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 设备状态（online=normal+fault、offline）
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备状态更新时间
                     */
                    std::string m_deviceStatusUpdateTime;
                    bool m_deviceStatusUpdateTimeHasBeenSet;

                    /**
                     * 设备业务状态（normal、fault、offline）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 推流状态。推流中-true，未推流-false
                     */
                    bool m_isAlive;
                    bool m_isAliveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSINFO_H_
