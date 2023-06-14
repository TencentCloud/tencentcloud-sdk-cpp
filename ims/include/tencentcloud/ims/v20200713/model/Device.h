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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_DEVICE_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * Device结果
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发表消息设备IP
                     * @return Ip 发表消息设备IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置发表消息设备IP
                     * @param _ip 发表消息设备IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Mac地址
                     * @return Mac Mac地址
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置Mac地址
                     * @param _mac Mac地址
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取设备指纹Token
                     * @return TokenId 设备指纹Token
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置设备指纹Token
                     * @param _tokenId 设备指纹Token
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取设备指纹ID
                     * @return DeviceId 设备指纹ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备指纹ID
                     * @param _deviceId 设备指纹ID
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
                     * 获取设备序列号
                     * @return IMEI 设备序列号
                     * 
                     */
                    std::string GetIMEI() const;

                    /**
                     * 设置设备序列号
                     * @param _iMEI 设备序列号
                     * 
                     */
                    void SetIMEI(const std::string& _iMEI);

                    /**
                     * 判断参数 IMEI 是否已赋值
                     * @return IMEI 是否已赋值
                     * 
                     */
                    bool IMEIHasBeenSet() const;

                    /**
                     * 获取IOS设备，Identifier For Advertising（广告标识符）
                     * @return IDFA IOS设备，Identifier For Advertising（广告标识符）
                     * 
                     */
                    std::string GetIDFA() const;

                    /**
                     * 设置IOS设备，Identifier For Advertising（广告标识符）
                     * @param _iDFA IOS设备，Identifier For Advertising（广告标识符）
                     * 
                     */
                    void SetIDFA(const std::string& _iDFA);

                    /**
                     * 判断参数 IDFA 是否已赋值
                     * @return IDFA 是否已赋值
                     * 
                     */
                    bool IDFAHasBeenSet() const;

                    /**
                     * 获取IOS设备，IDFV - Identifier For Vendor（应用开发商标识符）
                     * @return IDFV IOS设备，IDFV - Identifier For Vendor（应用开发商标识符）
                     * 
                     */
                    std::string GetIDFV() const;

                    /**
                     * 设置IOS设备，IDFV - Identifier For Vendor（应用开发商标识符）
                     * @param _iDFV IOS设备，IDFV - Identifier For Vendor（应用开发商标识符）
                     * 
                     */
                    void SetIDFV(const std::string& _iDFV);

                    /**
                     * 判断参数 IDFV 是否已赋值
                     * @return IDFV 是否已赋值
                     * 
                     */
                    bool IDFVHasBeenSet() const;

                    /**
                     * 获取IP地址类型 0 代表ipv4 1 代表ipv6
                     * @return IpType IP地址类型 0 代表ipv4 1 代表ipv6
                     * 
                     */
                    uint64_t GetIpType() const;

                    /**
                     * 设置IP地址类型 0 代表ipv4 1 代表ipv6
                     * @param _ipType IP地址类型 0 代表ipv4 1 代表ipv6
                     * 
                     */
                    void SetIpType(const uint64_t& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                private:

                    /**
                     * 发表消息设备IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Mac地址
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * 设备指纹Token
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * 设备指纹ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备序列号
                     */
                    std::string m_iMEI;
                    bool m_iMEIHasBeenSet;

                    /**
                     * IOS设备，Identifier For Advertising（广告标识符）
                     */
                    std::string m_iDFA;
                    bool m_iDFAHasBeenSet;

                    /**
                     * IOS设备，IDFV - Identifier For Vendor（应用开发商标识符）
                     */
                    std::string m_iDFV;
                    bool m_iDFVHasBeenSet;

                    /**
                     * IP地址类型 0 代表ipv4 1 代表ipv6
                     */
                    uint64_t m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_DEVICE_H_
