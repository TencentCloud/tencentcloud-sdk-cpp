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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATEDEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATEDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeviceActivationDetail.h>
#include <tencentcloud/iotexplorer/v20190423/model/RegisteredDeviceTypeInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/RegisteredDeviceNetTypeInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 设备激活详情信息
                */
                class ActivateDeviceInfo : public AbstractModel
                {
                public:
                    ActivateDeviceInfo();
                    ~ActivateDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取设备激活信息
                     * @return DeviceActivationDetails 设备激活信息
                     * 
                     */
                    DeviceActivationDetail GetDeviceActivationDetails() const;

                    /**
                     * 设置设备激活信息
                     * @param _deviceActivationDetails 设备激活信息
                     * 
                     */
                    void SetDeviceActivationDetails(const DeviceActivationDetail& _deviceActivationDetails);

                    /**
                     * 判断参数 DeviceActivationDetails 是否已赋值
                     * @return DeviceActivationDetails 是否已赋值
                     * 
                     */
                    bool DeviceActivationDetailsHasBeenSet() const;

                    /**
                     * 获取已注册设备类型信息
                     * @return RegisteredDeviceType 已注册设备类型信息
                     * 
                     */
                    RegisteredDeviceTypeInfo GetRegisteredDeviceType() const;

                    /**
                     * 设置已注册设备类型信息
                     * @param _registeredDeviceType 已注册设备类型信息
                     * 
                     */
                    void SetRegisteredDeviceType(const RegisteredDeviceTypeInfo& _registeredDeviceType);

                    /**
                     * 判断参数 RegisteredDeviceType 是否已赋值
                     * @return RegisteredDeviceType 是否已赋值
                     * 
                     */
                    bool RegisteredDeviceTypeHasBeenSet() const;

                    /**
                     * 获取已注册设备通信类型信息
                     * @return RegisteredDeviceNetType 已注册设备通信类型信息
                     * 
                     */
                    RegisteredDeviceNetTypeInfo GetRegisteredDeviceNetType() const;

                    /**
                     * 设置已注册设备通信类型信息
                     * @param _registeredDeviceNetType 已注册设备通信类型信息
                     * 
                     */
                    void SetRegisteredDeviceNetType(const RegisteredDeviceNetTypeInfo& _registeredDeviceNetType);

                    /**
                     * 判断参数 RegisteredDeviceNetType 是否已赋值
                     * @return RegisteredDeviceNetType 是否已赋值
                     * 
                     */
                    bool RegisteredDeviceNetTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例类型
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 设备激活信息
                     */
                    DeviceActivationDetail m_deviceActivationDetails;
                    bool m_deviceActivationDetailsHasBeenSet;

                    /**
                     * 已注册设备类型信息
                     */
                    RegisteredDeviceTypeInfo m_registeredDeviceType;
                    bool m_registeredDeviceTypeHasBeenSet;

                    /**
                     * 已注册设备通信类型信息
                     */
                    RegisteredDeviceNetTypeInfo m_registeredDeviceNetType;
                    bool m_registeredDeviceNetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATEDEVICEINFO_H_
