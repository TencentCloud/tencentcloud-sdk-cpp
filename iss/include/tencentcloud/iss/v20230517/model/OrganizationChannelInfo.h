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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ORGANIZATIONCHANNELINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ORGANIZATIONCHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 组织目录下的通道信息
                */
                class OrganizationChannelInfo : public AbstractModel
                {
                public:
                    OrganizationChannelInfo();
                    ~OrganizationChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备通道所属的设备ID
                     * @return DeviceId 设备通道所属的设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备通道所属的设备ID
                     * @param _deviceId 设备通道所属的设备ID
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
                     * 获取设备通道所属的设备名称
                     * @return DeviceName 设备通道所属的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备通道所属的设备名称
                     * @param _deviceName 设备通道所属的设备名称
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
                     * 获取设备通道ID
                     * @return ChannelId 设备通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置设备通道ID
                     * @param _channelId 设备通道ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取设备通道名称
                     * @return ChannelName 设备通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置设备通道名称
                     * @param _channelName 设备通道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取该通道是否在上云计划中，如果是，则不能在添加到其他上云计划|true：在上云计划中，false：不在上云计划中
                     * @return InPlan 该通道是否在上云计划中，如果是，则不能在添加到其他上云计划|true：在上云计划中，false：不在上云计划中
                     * 
                     */
                    bool GetInPlan() const;

                    /**
                     * 设置该通道是否在上云计划中，如果是，则不能在添加到其他上云计划|true：在上云计划中，false：不在上云计划中
                     * @param _inPlan 该通道是否在上云计划中，如果是，则不能在添加到其他上云计划|true：在上云计划中，false：不在上云计划中
                     * 
                     */
                    void SetInPlan(const bool& _inPlan);

                    /**
                     * 判断参数 InPlan 是否已赋值
                     * @return InPlan 是否已赋值
                     * 
                     */
                    bool InPlanHasBeenSet() const;

                private:

                    /**
                     * 设备通道所属的设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备通道所属的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 设备通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 该通道是否在上云计划中，如果是，则不能在添加到其他上云计划|true：在上云计划中，false：不在上云计划中
                     */
                    bool m_inPlan;
                    bool m_inPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ORGANIZATIONCHANNELINFO_H_
