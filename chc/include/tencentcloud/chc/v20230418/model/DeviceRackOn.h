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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DEVICERACKON_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DEVICERACKON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 设备上架信息
                */
                class DeviceRackOn : public AbstractModel
                {
                public:
                    DeviceRackOn();
                    ~DeviceRackOn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备sn
                     * @return DeviceSn 设备sn
                     * 
                     */
                    std::string GetDeviceSn() const;

                    /**
                     * 设置设备sn
                     * @param _deviceSn 设备sn
                     * 
                     */
                    void SetDeviceSn(const std::string& _deviceSn);

                    /**
                     * 判断参数 DeviceSn 是否已赋值
                     * @return DeviceSn 是否已赋值
                     * 
                     */
                    bool DeviceSnHasBeenSet() const;

                    /**
                     * 获取目标机架
                     * @return DstRackName 目标机架
                     * 
                     */
                    std::string GetDstRackName() const;

                    /**
                     * 设置目标机架
                     * @param _dstRackName 目标机架
                     * 
                     */
                    void SetDstRackName(const std::string& _dstRackName);

                    /**
                     * 判断参数 DstRackName 是否已赋值
                     * @return DstRackName 是否已赋值
                     * 
                     */
                    bool DstRackNameHasBeenSet() const;

                    /**
                     * 获取目标机位,服务器必传,网络设备不用传
                     * @return DstPositionCode 目标机位,服务器必传,网络设备不用传
                     * 
                     */
                    std::string GetDstPositionCode() const;

                    /**
                     * 设置目标机位,服务器必传,网络设备不用传
                     * @param _dstPositionCode 目标机位,服务器必传,网络设备不用传
                     * 
                     */
                    void SetDstPositionCode(const std::string& _dstPositionCode);

                    /**
                     * 判断参数 DstPositionCode 是否已赋值
                     * @return DstPositionCode 是否已赋值
                     * 
                     */
                    bool DstPositionCodeHasBeenSet() const;

                    /**
                     * 获取设备ip
                     * @return DstIp 设备ip
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置设备ip
                     * @param _dstIp 设备ip
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                private:

                    /**
                     * 设备sn
                     */
                    std::string m_deviceSn;
                    bool m_deviceSnHasBeenSet;

                    /**
                     * 目标机架
                     */
                    std::string m_dstRackName;
                    bool m_dstRackNameHasBeenSet;

                    /**
                     * 目标机位,服务器必传,网络设备不用传
                     */
                    std::string m_dstPositionCode;
                    bool m_dstPositionCodeHasBeenSet;

                    /**
                     * 设备ip
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DEVICERACKON_H_
