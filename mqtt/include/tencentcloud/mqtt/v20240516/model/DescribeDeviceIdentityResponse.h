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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYRESPONSE_H_

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
                * DescribeDeviceIdentity返回参数结构体
                */
                class DescribeDeviceIdentityResponse : public AbstractModel
                {
                public:
                    DescribeDeviceIdentityResponse();
                    ~DescribeDeviceIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

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
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取1:ENABLED-可用
 2:DISABLE-不可用
                     * @return Status 1:ENABLED-可用
 2:DISABLE-不可用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主要签名key
                     * @return PrimaryKey 主要签名key
                     * 
                     */
                    std::string GetPrimaryKey() const;

                    /**
                     * 判断参数 PrimaryKey 是否已赋值
                     * @return PrimaryKey 是否已赋值
                     * 
                     */
                    bool PrimaryKeyHasBeenSet() const;

                    /**
                     * 获取次要签名key
                     * @return SecondaryKey 次要签名key
                     * 
                     */
                    std::string GetSecondaryKey() const;

                    /**
                     * 判断参数 SecondaryKey 是否已赋值
                     * @return SecondaryKey 是否已赋值
                     * 
                     */
                    bool SecondaryKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取该设备id的传播属性
                     * @return PropagatingProperties 该设备id的传播属性
                     * 
                     */
                    std::vector<PropagatingProperty> GetPropagatingProperties() const;

                    /**
                     * 判断参数 PropagatingProperties 是否已赋值
                     * @return PropagatingProperties 是否已赋值
                     * 
                     */
                    bool PropagatingPropertiesHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 1:ENABLED-可用
 2:DISABLE-不可用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主要签名key
                     */
                    std::string m_primaryKey;
                    bool m_primaryKeyHasBeenSet;

                    /**
                     * 次要签名key
                     */
                    std::string m_secondaryKey;
                    bool m_secondaryKeyHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 该设备id的传播属性
                     */
                    std::vector<PropagatingProperty> m_propagatingProperties;
                    bool m_propagatingPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYRESPONSE_H_
