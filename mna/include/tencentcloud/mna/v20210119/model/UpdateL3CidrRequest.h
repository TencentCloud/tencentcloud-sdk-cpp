/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3CIDRREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3CIDRREQUEST_H_

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
                * UpdateL3Cidr请求参数结构体
                */
                class UpdateL3CidrRequest : public AbstractModel
                {
                public:
                    UpdateL3CidrRequest();
                    ~UpdateL3CidrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>互通规则ID</p>
                     * @return L3ConnId <p>互通规则ID</p>
                     * 
                     */
                    std::string GetL3ConnId() const;

                    /**
                     * 设置<p>互通规则ID</p>
                     * @param _l3ConnId <p>互通规则ID</p>
                     * 
                     */
                    void SetL3ConnId(const std::string& _l3ConnId);

                    /**
                     * 判断参数 L3ConnId 是否已赋值
                     * @return L3ConnId 是否已赋值
                     * 
                     */
                    bool L3ConnIdHasBeenSet() const;

                    /**
                     * 获取<p>互通规则CIDR</p>
                     * @return Cidr1 <p>互通规则CIDR</p>
                     * 
                     */
                    std::string GetCidr1() const;

                    /**
                     * 设置<p>互通规则CIDR</p>
                     * @param _cidr1 <p>互通规则CIDR</p>
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
                     * 获取<p>互通设备ID</p>
                     * @return DeviceId1 <p>互通设备ID</p>
                     * 
                     */
                    std::string GetDeviceId1() const;

                    /**
                     * 设置<p>互通设备ID</p>
                     * @param _deviceId1 <p>互通设备ID</p>
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
                     * 获取<p>互通设备ID</p>
                     * @return DeviceId2 <p>互通设备ID</p>
                     * 
                     */
                    std::string GetDeviceId2() const;

                    /**
                     * 设置<p>互通设备ID</p>
                     * @param _deviceId2 <p>互通设备ID</p>
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
                     * 获取<p>互通规则CIDR</p>
                     * @return Cidr2 <p>互通规则CIDR</p>
                     * 
                     */
                    std::string GetCidr2() const;

                    /**
                     * 设置<p>互通规则CIDR</p>
                     * @param _cidr2 <p>互通规则CIDR</p>
                     * 
                     */
                    void SetCidr2(const std::string& _cidr2);

                    /**
                     * 判断参数 Cidr2 是否已赋值
                     * @return Cidr2 是否已赋值
                     * 
                     */
                    bool Cidr2HasBeenSet() const;

                private:

                    /**
                     * <p>互通规则ID</p>
                     */
                    std::string m_l3ConnId;
                    bool m_l3ConnIdHasBeenSet;

                    /**
                     * <p>互通规则CIDR</p>
                     */
                    std::string m_cidr1;
                    bool m_cidr1HasBeenSet;

                    /**
                     * <p>互通设备ID</p>
                     */
                    std::string m_deviceId1;
                    bool m_deviceId1HasBeenSet;

                    /**
                     * <p>互通设备ID</p>
                     */
                    std::string m_deviceId2;
                    bool m_deviceId2HasBeenSet;

                    /**
                     * <p>互通规则CIDR</p>
                     */
                    std::string m_cidr2;
                    bool m_cidr2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3CIDRREQUEST_H_
