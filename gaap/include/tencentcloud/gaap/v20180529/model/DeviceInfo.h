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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 终端设备信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备数据卡所属的运营商
1：移动
2：电信
3：联通
4：广电
99：其他
                     * @return Vendor 设备数据卡所属的运营商
1：移动
2：电信
3：联通
4：广电
99：其他
                     */
                    int64_t GetVendor() const;

                    /**
                     * 设置设备数据卡所属的运营商
1：移动
2：电信
3：联通
4：广电
99：其他
                     * @param Vendor 设备数据卡所属的运营商
1：移动
2：电信
3：联通
4：广电
99：其他
                     */
                    void SetVendor(const int64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取设备操作系统
1：Android
2： IOS
99：其他
                     * @return OS 设备操作系统
1：Android
2： IOS
99：其他
                     */
                    int64_t GetOS() const;

                    /**
                     * 设置设备操作系统
1：Android
2： IOS
99：其他
                     * @param OS 设备操作系统
1：Android
2： IOS
99：其他
                     */
                    void SetOS(const int64_t& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取设备唯一标识
IOS 填写 IDFV
Android 填写 IMEI
                     * @return DeviceId 设备唯一标识
IOS 填写 IDFV
Android 填写 IMEI
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
IOS 填写 IDFV
Android 填写 IMEI
                     * @param DeviceId 设备唯一标识
IOS 填写 IDFV
Android 填写 IMEI
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取用户手机号码
                     * @return PhoneNum 用户手机号码
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置用户手机号码
                     * @param PhoneNum 用户手机号码
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取无线信息
1：4G
2：5G
3：WIFI
99：其他
                     * @return Wireless 无线信息
1：4G
2：5G
3：WIFI
99：其他
                     */
                    int64_t GetWireless() const;

                    /**
                     * 设置无线信息
1：4G
2：5G
3：WIFI
99：其他
                     * @param Wireless 无线信息
1：4G
2：5G
3：WIFI
99：其他
                     */
                    void SetWireless(const int64_t& _wireless);

                    /**
                     * 判断参数 Wireless 是否已赋值
                     * @return Wireless 是否已赋值
                     */
                    bool WirelessHasBeenSet() const;

                private:

                    /**
                     * 设备数据卡所属的运营商
1：移动
2：电信
3：联通
4：广电
99：其他
                     */
                    int64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 设备操作系统
1：Android
2： IOS
99：其他
                     */
                    int64_t m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * 设备唯一标识
IOS 填写 IDFV
Android 填写 IMEI
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 用户手机号码
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 无线信息
1：4G
2：5G
3：WIFI
99：其他
                     */
                    int64_t m_wireless;
                    bool m_wirelessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DEVICEINFO_H_
