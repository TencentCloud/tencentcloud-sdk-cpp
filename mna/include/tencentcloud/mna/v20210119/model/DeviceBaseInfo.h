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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设备的基本信息
                */
                class DeviceBaseInfo : public AbstractModel
                {
                public:
                    DeviceBaseInfo();
                    ~DeviceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备唯一ID
                     * @return DeviceId 设备唯一ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一ID
                     * @param _deviceId 设备唯一ID
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
                     * 获取设备创建的时间，单位：ms
                     * @return CreateTime 设备创建的时间，单位：ms
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置设备创建的时间，单位：ms
                     * @param _createTime 设备创建的时间，单位：ms
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备最后在线时间，单位：ms
                     * @return LastTime 设备最后在线时间，单位：ms
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置设备最后在线时间，单位：ms
                     * @param _lastTime 设备最后在线时间，单位：ms
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取设备的备注
                     * @return Remark 设备的备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置设备的备注
                     * @param _remark 设备的备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 设备唯一ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备创建的时间，单位：ms
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备最后在线时间，单位：ms
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 设备的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
