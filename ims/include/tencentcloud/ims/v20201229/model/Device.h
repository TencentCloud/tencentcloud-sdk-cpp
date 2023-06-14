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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_

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
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 用于表示业务用户对应的设备信息
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段表示业务用户对应设备的IP地址，同时**支持IPv4和IPv6**地址的记录；需要与IpType参数配合使用。
                     * @return Ip 该字段表示业务用户对应设备的IP地址，同时**支持IPv4和IPv6**地址的记录；需要与IpType参数配合使用。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置该字段表示业务用户对应设备的IP地址，同时**支持IPv4和IPv6**地址的记录；需要与IpType参数配合使用。
                     * @param _ip 该字段表示业务用户对应设备的IP地址，同时**支持IPv4和IPv6**地址的记录；需要与IpType参数配合使用。
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
                     * 获取该字段表示业务用户对应的MAC地址，以方便设备识别与管理；其格式与取值与标准MAC地址一致。
                     * @return Mac 该字段表示业务用户对应的MAC地址，以方便设备识别与管理；其格式与取值与标准MAC地址一致。
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置该字段表示业务用户对应的MAC地址，以方便设备识别与管理；其格式与取值与标准MAC地址一致。
                     * @param _mac 该字段表示业务用户对应的MAC地址，以方便设备识别与管理；其格式与取值与标准MAC地址一致。
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
                     * 获取*内测中，敬请期待。*
                     * @return TokenId *内测中，敬请期待。*
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置*内测中，敬请期待。*
                     * @param _tokenId *内测中，敬请期待。*
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
                     * 获取*内测中，敬请期待。*
                     * @return DeviceId *内测中，敬请期待。*
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置*内测中，敬请期待。*
                     * @param _deviceId *内测中，敬请期待。*
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
                     * 获取该字段表示业务用户对应设备的**IMEI码**（国际移动设备识别码），该识别码可用于识别每一部独立的手机等移动通信设备，方便设备识别与管理。<br>备注：格式为**15-17位纯数字**。
                     * @return IMEI 该字段表示业务用户对应设备的**IMEI码**（国际移动设备识别码），该识别码可用于识别每一部独立的手机等移动通信设备，方便设备识别与管理。<br>备注：格式为**15-17位纯数字**。
                     * 
                     */
                    std::string GetIMEI() const;

                    /**
                     * 设置该字段表示业务用户对应设备的**IMEI码**（国际移动设备识别码），该识别码可用于识别每一部独立的手机等移动通信设备，方便设备识别与管理。<br>备注：格式为**15-17位纯数字**。
                     * @param _iMEI 该字段表示业务用户对应设备的**IMEI码**（国际移动设备识别码），该识别码可用于识别每一部独立的手机等移动通信设备，方便设备识别与管理。<br>备注：格式为**15-17位纯数字**。
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
                     * 获取**iOS设备专用**，该字段表示业务用户对应的**IDFA**(广告标识符),这是由苹果公司提供的用于标识用户的广告标识符，由一串16进制的32位数字和字母组成。<br>
备注：苹果公司自2021年iOS14更新后允许用户手动关闭或者开启IDFA，故此字符串标记有效性可能有所降低。
                     * @return IDFA **iOS设备专用**，该字段表示业务用户对应的**IDFA**(广告标识符),这是由苹果公司提供的用于标识用户的广告标识符，由一串16进制的32位数字和字母组成。<br>
备注：苹果公司自2021年iOS14更新后允许用户手动关闭或者开启IDFA，故此字符串标记有效性可能有所降低。
                     * 
                     */
                    std::string GetIDFA() const;

                    /**
                     * 设置**iOS设备专用**，该字段表示业务用户对应的**IDFA**(广告标识符),这是由苹果公司提供的用于标识用户的广告标识符，由一串16进制的32位数字和字母组成。<br>
备注：苹果公司自2021年iOS14更新后允许用户手动关闭或者开启IDFA，故此字符串标记有效性可能有所降低。
                     * @param _iDFA **iOS设备专用**，该字段表示业务用户对应的**IDFA**(广告标识符),这是由苹果公司提供的用于标识用户的广告标识符，由一串16进制的32位数字和字母组成。<br>
备注：苹果公司自2021年iOS14更新后允许用户手动关闭或者开启IDFA，故此字符串标记有效性可能有所降低。
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
                     * 获取**iOS设备专用**，该字段表示业务用户对应的**IDFV**(应用开发商标识符),这是由苹果公司提供的用于标注应用开发商的标识符，由一串16进制的32位数字和字母组成，可被用于唯一标识设备。
                     * @return IDFV **iOS设备专用**，该字段表示业务用户对应的**IDFV**(应用开发商标识符),这是由苹果公司提供的用于标注应用开发商的标识符，由一串16进制的32位数字和字母组成，可被用于唯一标识设备。
                     * 
                     */
                    std::string GetIDFV() const;

                    /**
                     * 设置**iOS设备专用**，该字段表示业务用户对应的**IDFV**(应用开发商标识符),这是由苹果公司提供的用于标注应用开发商的标识符，由一串16进制的32位数字和字母组成，可被用于唯一标识设备。
                     * @param _iDFV **iOS设备专用**，该字段表示业务用户对应的**IDFV**(应用开发商标识符),这是由苹果公司提供的用于标注应用开发商的标识符，由一串16进制的32位数字和字母组成，可被用于唯一标识设备。
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
                     * 获取该字段表示记录的IP地址的类型，取值：**0**（代表IPv4地址）、**1**（代表IPv6地址）；需要与IpType参数配合使用。
                     * @return IpType 该字段表示记录的IP地址的类型，取值：**0**（代表IPv4地址）、**1**（代表IPv6地址）；需要与IpType参数配合使用。
                     * 
                     */
                    uint64_t GetIpType() const;

                    /**
                     * 设置该字段表示记录的IP地址的类型，取值：**0**（代表IPv4地址）、**1**（代表IPv6地址）；需要与IpType参数配合使用。
                     * @param _ipType 该字段表示记录的IP地址的类型，取值：**0**（代表IPv4地址）、**1**（代表IPv6地址）；需要与IpType参数配合使用。
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
                     * 该字段表示业务用户对应设备的IP地址，同时**支持IPv4和IPv6**地址的记录；需要与IpType参数配合使用。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 该字段表示业务用户对应的MAC地址，以方便设备识别与管理；其格式与取值与标准MAC地址一致。
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * *内测中，敬请期待。*
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * *内测中，敬请期待。*
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 该字段表示业务用户对应设备的**IMEI码**（国际移动设备识别码），该识别码可用于识别每一部独立的手机等移动通信设备，方便设备识别与管理。<br>备注：格式为**15-17位纯数字**。
                     */
                    std::string m_iMEI;
                    bool m_iMEIHasBeenSet;

                    /**
                     * **iOS设备专用**，该字段表示业务用户对应的**IDFA**(广告标识符),这是由苹果公司提供的用于标识用户的广告标识符，由一串16进制的32位数字和字母组成。<br>
备注：苹果公司自2021年iOS14更新后允许用户手动关闭或者开启IDFA，故此字符串标记有效性可能有所降低。
                     */
                    std::string m_iDFA;
                    bool m_iDFAHasBeenSet;

                    /**
                     * **iOS设备专用**，该字段表示业务用户对应的**IDFV**(应用开发商标识符),这是由苹果公司提供的用于标注应用开发商的标识符，由一串16进制的32位数字和字母组成，可被用于唯一标识设备。
                     */
                    std::string m_iDFV;
                    bool m_iDFVHasBeenSet;

                    /**
                     * 该字段表示记录的IP地址的类型，取值：**0**（代表IPv4地址）、**1**（代表IPv6地址）；需要与IpType参数配合使用。
                     */
                    uint64_t m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_
