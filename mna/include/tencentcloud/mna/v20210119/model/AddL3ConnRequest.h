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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_

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
                * AddL3Conn请求参数结构体
                */
                class AddL3ConnRequest : public AbstractModel
                {
                public:
                    AddL3ConnRequest();
                    ~AddL3ConnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置互通网段CIDR1，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * @return Cidr1 设置互通网段CIDR1，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * 
                     */
                    std::string GetCidr1() const;

                    /**
                     * 设置设置互通网段CIDR1，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * @param _cidr1 设置互通网段CIDR1，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * 
                     */
                    void SetCidr1(const std::string& _cidr1);

                    /**
                     * 判断参数 Cidr1 是否已赋值
                     * @return Cidr1 是否已赋值
                     * 
                     */
                    bool Cidr1HasBeenSet() const;

                    /**
                     * 获取设置互通网段CIDR2，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * @return Cidr2 设置互通网段CIDR2，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * 
                     */
                    std::string GetCidr2() const;

                    /**
                     * 设置设置互通网段CIDR2，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * @param _cidr2 设置互通网段CIDR2，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     * 
                     */
                    void SetCidr2(const std::string& _cidr2);

                    /**
                     * 判断参数 Cidr2 是否已赋值
                     * @return Cidr2 是否已赋值
                     * 
                     */
                    bool Cidr2HasBeenSet() const;

                    /**
                     * 获取CIDR1对应的设备ID
                     * @return DeviceId1 CIDR1对应的设备ID
                     * 
                     */
                    std::string GetDeviceId1() const;

                    /**
                     * 设置CIDR1对应的设备ID
                     * @param _deviceId1 CIDR1对应的设备ID
                     * 
                     */
                    void SetDeviceId1(const std::string& _deviceId1);

                    /**
                     * 判断参数 DeviceId1 是否已赋值
                     * @return DeviceId1 是否已赋值
                     * 
                     */
                    bool DeviceId1HasBeenSet() const;

                    /**
                     * 获取CIDR2对应的设备ID
                     * @return DeviceId2 CIDR2对应的设备ID
                     * 
                     */
                    std::string GetDeviceId2() const;

                    /**
                     * 设置CIDR2对应的设备ID
                     * @param _deviceId2 CIDR2对应的设备ID
                     * 
                     */
                    void SetDeviceId2(const std::string& _deviceId2);

                    /**
                     * 判断参数 DeviceId2 是否已赋值
                     * @return DeviceId2 是否已赋值
                     * 
                     */
                    bool DeviceId2HasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 设置互通网段CIDR1，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     */
                    std::string m_cidr1;
                    bool m_cidr1HasBeenSet;

                    /**
                     * 设置互通网段CIDR2，支持： 10.0.0.0 - 10.255.255.255，172.16.0.0 - 172.31.255.255，192.168.0.0 - 192.168.255.255
                     */
                    std::string m_cidr2;
                    bool m_cidr2HasBeenSet;

                    /**
                     * CIDR1对应的设备ID
                     */
                    std::string m_deviceId1;
                    bool m_deviceId1HasBeenSet;

                    /**
                     * CIDR2对应的设备ID
                     */
                    std::string m_deviceId2;
                    bool m_deviceId2HasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_
