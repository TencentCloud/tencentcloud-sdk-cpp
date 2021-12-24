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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_DEVICE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务入参
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务入参id
                     * @return DeviceId 业务入参id
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置业务入参id
                     * @param DeviceId 业务入参id
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取业务入参类型
                     * @return DeviceType 业务入参类型
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置业务入参类型
                     * @param DeviceType 业务入参类型
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 业务入参id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 业务入参类型
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_DEVICE_H_
