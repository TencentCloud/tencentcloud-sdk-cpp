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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_

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
                * 设备付费模式信息
                */
                class DevicePayModeInfo : public AbstractModel
                {
                public:
                    DevicePayModeInfo();
                    ~DevicePayModeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取付费模式。
1：预付费流量包
0：按流量后付费
                     * @return PayMode 付费模式。
1：预付费流量包
0：按流量后付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式。
1：预付费流量包
0：按流量后付费
                     * @param _payMode 付费模式。
1：预付费流量包
0：按流量后付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取付费模式描述
                     * @return PayModeDesc 付费模式描述
                     * 
                     */
                    std::string GetPayModeDesc() const;

                    /**
                     * 设置付费模式描述
                     * @param _payModeDesc 付费模式描述
                     * 
                     */
                    void SetPayModeDesc(const std::string& _payModeDesc);

                    /**
                     * 判断参数 PayModeDesc 是否已赋值
                     * @return PayModeDesc 是否已赋值
                     * 
                     */
                    bool PayModeDescHasBeenSet() const;

                    /**
                     * 获取流量包ID，仅当付费模式为流量包类型时才有。
                     * @return ResourceId 流量包ID，仅当付费模式为流量包类型时才有。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置流量包ID，仅当付费模式为流量包类型时才有。
                     * @param _resourceId 流量包ID，仅当付费模式为流量包类型时才有。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 付费模式。
1：预付费流量包
0：按流量后付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费模式描述
                     */
                    std::string m_payModeDesc;
                    bool m_payModeDescHasBeenSet;

                    /**
                     * 流量包ID，仅当付费模式为流量包类型时才有。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_
