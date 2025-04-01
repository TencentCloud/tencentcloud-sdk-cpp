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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXDEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/WXIoTDeviceInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 微信硬件设备信息
                */
                class WXDeviceInfo : public AbstractModel
                {
                public:
                    WXDeviceInfo();
                    ~WXDeviceInfo() = default;
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
                     * 获取设备信息
                     * @return WXIoTDeviceInfo 设备信息
                     * 
                     */
                    WXIoTDeviceInfo GetWXIoTDeviceInfo() const;

                    /**
                     * 设置设备信息
                     * @param _wXIoTDeviceInfo 设备信息
                     * 
                     */
                    void SetWXIoTDeviceInfo(const WXIoTDeviceInfo& _wXIoTDeviceInfo);

                    /**
                     * 判断参数 WXIoTDeviceInfo 是否已赋值
                     * @return WXIoTDeviceInfo 是否已赋值
                     * 
                     */
                    bool WXIoTDeviceInfoHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备信息
                     */
                    WXIoTDeviceInfo m_wXIoTDeviceInfo;
                    bool m_wXIoTDeviceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXDEVICEINFO_H_
