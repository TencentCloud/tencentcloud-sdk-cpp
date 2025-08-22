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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEDEVICEIDENTITYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEDEVICEIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PropagatingProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateDeviceIdentity请求参数结构体
                */
                class CreateDeviceIdentityRequest : public AbstractModel
                {
                public:
                    CreateDeviceIdentityRequest();
                    ~CreateDeviceIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取设备id
                     * @return DeviceId 设备id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
                     * @param _deviceId 设备id
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
                     * 获取1:ENABLED-可用（默认）
2:DISABLE-不可用
                     * @return Status 1:ENABLED-可用（默认）
2:DISABLE-不可用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置1:ENABLED-可用（默认）
2:DISABLE-不可用
                     * @param _status 1:ENABLED-可用（默认）
2:DISABLE-不可用
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
                     * 获取主要签名key，不传则由系统自动生成，需要base64编码。
                     * @return PrimaryKey 主要签名key，不传则由系统自动生成，需要base64编码。
                     * 
                     */
                    std::string GetPrimaryKey() const;

                    /**
                     * 设置主要签名key，不传则由系统自动生成，需要base64编码。
                     * @param _primaryKey 主要签名key，不传则由系统自动生成，需要base64编码。
                     * 
                     */
                    void SetPrimaryKey(const std::string& _primaryKey);

                    /**
                     * 判断参数 PrimaryKey 是否已赋值
                     * @return PrimaryKey 是否已赋值
                     * 
                     */
                    bool PrimaryKeyHasBeenSet() const;

                    /**
                     * 获取次要签名key，不传则油系统自动生成，需要base64编码。
                     * @return SecondaryKey 次要签名key，不传则油系统自动生成，需要base64编码。
                     * 
                     */
                    std::string GetSecondaryKey() const;

                    /**
                     * 设置次要签名key，不传则油系统自动生成，需要base64编码。
                     * @param _secondaryKey 次要签名key，不传则油系统自动生成，需要base64编码。
                     * 
                     */
                    void SetSecondaryKey(const std::string& _secondaryKey);

                    /**
                     * 判断参数 SecondaryKey 是否已赋值
                     * @return SecondaryKey 是否已赋值
                     * 
                     */
                    bool SecondaryKeyHasBeenSet() const;

                    /**
                     * 获取该设备id的传播属性设置
                     * @return PropagatingProperties 该设备id的传播属性设置
                     * 
                     */
                    std::vector<PropagatingProperty> GetPropagatingProperties() const;

                    /**
                     * 设置该设备id的传播属性设置
                     * @param _propagatingProperties 该设备id的传播属性设置
                     * 
                     */
                    void SetPropagatingProperties(const std::vector<PropagatingProperty>& _propagatingProperties);

                    /**
                     * 判断参数 PropagatingProperties 是否已赋值
                     * @return PropagatingProperties 是否已赋值
                     * 
                     */
                    bool PropagatingPropertiesHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 1:ENABLED-可用（默认）
2:DISABLE-不可用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主要签名key，不传则由系统自动生成，需要base64编码。
                     */
                    std::string m_primaryKey;
                    bool m_primaryKeyHasBeenSet;

                    /**
                     * 次要签名key，不传则油系统自动生成，需要base64编码。
                     */
                    std::string m_secondaryKey;
                    bool m_secondaryKeyHasBeenSet;

                    /**
                     * 该设备id的传播属性设置
                     */
                    std::vector<PropagatingProperty> m_propagatingProperties;
                    bool m_propagatingPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEDEVICEIDENTITYREQUEST_H_
