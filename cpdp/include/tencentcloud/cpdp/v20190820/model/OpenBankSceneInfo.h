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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSCENEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-设备信息
                */
                class OpenBankSceneInfo : public AbstractModel
                {
                public:
                    OpenBankSceneInfo();
                    ~OpenBankSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户端实际 ip，示例值：14.17.22.32
                     * @return PayerClientIp 用户端实际 ip，示例值：14.17.22.32
                     */
                    std::string GetPayerClientIp() const;

                    /**
                     * 设置用户端实际 ip，示例值：14.17.22.32
                     * @param PayerClientIp 用户端实际 ip，示例值：14.17.22.32
                     */
                    void SetPayerClientIp(const std::string& _payerClientIp);

                    /**
                     * 判断参数 PayerClientIp 是否已赋值
                     * @return PayerClientIp 是否已赋值
                     */
                    bool PayerClientIpHasBeenSet() const;

                    /**
                     * 获取浏览器 User-Agent
                     * @return PayerUa 浏览器 User-Agent
                     */
                    std::string GetPayerUa() const;

                    /**
                     * 设置浏览器 User-Agent
                     * @param PayerUa 浏览器 User-Agent
                     */
                    void SetPayerUa(const std::string& _payerUa);

                    /**
                     * 判断参数 PayerUa 是否已赋值
                     * @return PayerUa 是否已赋值
                     */
                    bool PayerUaHasBeenSet() const;

                    /**
                     * 获取用户下单时间，若不上送，服务端默认当前时间
                     * @return OrderTime 用户下单时间，若不上送，服务端默认当前时间
                     */
                    std::string GetOrderTime() const;

                    /**
                     * 设置用户下单时间，若不上送，服务端默认当前时间
                     * @param OrderTime 用户下单时间，若不上送，服务端默认当前时间
                     */
                    void SetOrderTime(const std::string& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取终端设备号（门店号或收银设备 ID），示例值：POS1:1
                     * @return DeviceId 终端设备号（门店号或收银设备 ID），示例值：POS1:1
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置终端设备号（门店号或收银设备 ID），示例值：POS1:1
                     * @param DeviceId 终端设备号（门店号或收银设备 ID），示例值：POS1:1
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * 用户端实际 ip，示例值：14.17.22.32
                     */
                    std::string m_payerClientIp;
                    bool m_payerClientIpHasBeenSet;

                    /**
                     * 浏览器 User-Agent
                     */
                    std::string m_payerUa;
                    bool m_payerUaHasBeenSet;

                    /**
                     * 用户下单时间，若不上送，服务端默认当前时间
                     */
                    std::string m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 终端设备号（门店号或收银设备 ID），示例值：POS1:1
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSCENEINFO_H_
