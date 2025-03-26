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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEDEVICERISKINPUT_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEDEVICERISKINPUT_H_

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
                class ManageDeviceRiskInput : public AbstractModel
                {
                public:
                    ManageDeviceRiskInput();
                    ~ManageDeviceRiskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备操作平台  1：android
                     * @return OsType 设备操作平台  1：android
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置设备操作平台  1：android
                     * @param _osType 设备操作平台  1：android
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取设备类型  6: oaid_md5(32位小写)
                     * @return DeviceType 设备类型  6: oaid_md5(32位小写)
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型  6: oaid_md5(32位小写)
                     * @param _deviceType 设备类型  6: oaid_md5(32位小写)
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取根据 DeviceType 填写设备标识
                     * @return DeviceId 根据 DeviceType 填写设备标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置根据 DeviceType 填写设备标识
                     * @param _deviceId 根据 DeviceType 填写设备标识
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
                     * 获取用户ip，只支持ipv4
                     * @return ClientIp 用户ip，只支持ipv4
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置用户ip，只支持ipv4
                     * @param _clientIp 用户ip，只支持ipv4
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                private:

                    /**
                     * 设备操作平台  1：android
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 设备类型  6: oaid_md5(32位小写)
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 根据 DeviceType 填写设备标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 用户ip，只支持ipv4
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEDEVICERISKINPUT_H_
