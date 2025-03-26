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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDEVICEINFO_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/DeviceInfo.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 集群设备组信息。
                */
                class InstanceDeviceInfo : public AbstractModel
                {
                public:
                    InstanceDeviceInfo();
                    ~InstanceDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取读写设备组
                     * @return ReadWriteDevice 读写设备组
                     * 
                     */
                    std::vector<DeviceInfo> GetReadWriteDevice() const;

                    /**
                     * 设置读写设备组
                     * @param _readWriteDevice 读写设备组
                     * 
                     */
                    void SetReadWriteDevice(const std::vector<DeviceInfo>& _readWriteDevice);

                    /**
                     * 判断参数 ReadWriteDevice 是否已赋值
                     * @return ReadWriteDevice 是否已赋值
                     * 
                     */
                    bool ReadWriteDeviceHasBeenSet() const;

                    /**
                     * 获取只读设备组
                     * @return ReadOnlyDevice 只读设备组
                     * 
                     */
                    std::vector<DeviceInfo> GetReadOnlyDevice() const;

                    /**
                     * 设置只读设备组
                     * @param _readOnlyDevice 只读设备组
                     * 
                     */
                    void SetReadOnlyDevice(const std::vector<DeviceInfo>& _readOnlyDevice);

                    /**
                     * 判断参数 ReadOnlyDevice 是否已赋值
                     * @return ReadOnlyDevice 是否已赋值
                     * 
                     */
                    bool ReadOnlyDeviceHasBeenSet() const;

                    /**
                     * 获取空闲设备组
                     * @return FreeDevice 空闲设备组
                     * 
                     */
                    std::vector<DeviceInfo> GetFreeDevice() const;

                    /**
                     * 设置空闲设备组
                     * @param _freeDevice 空闲设备组
                     * 
                     */
                    void SetFreeDevice(const std::vector<DeviceInfo>& _freeDevice);

                    /**
                     * 判断参数 FreeDevice 是否已赋值
                     * @return FreeDevice 是否已赋值
                     * 
                     */
                    bool FreeDeviceHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 读写设备组
                     */
                    std::vector<DeviceInfo> m_readWriteDevice;
                    bool m_readWriteDeviceHasBeenSet;

                    /**
                     * 只读设备组
                     */
                    std::vector<DeviceInfo> m_readOnlyDevice;
                    bool m_readOnlyDeviceHasBeenSet;

                    /**
                     * 空闲设备组
                     */
                    std::vector<DeviceInfo> m_freeDevice;
                    bool m_freeDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDEVICEINFO_H_
