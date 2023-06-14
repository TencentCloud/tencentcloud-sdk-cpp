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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_IPADDRESS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_IPADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * IP 地址
                */
                class IPAddress : public AbstractModel
                {
                public:
                    IPAddress();
                    ~IPAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ip 地址的类型。可为 advertise, public 等
                     * @return Type Ip 地址的类型。可为 advertise, public 等
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Ip 地址的类型。可为 advertise, public 等
                     * @param _type Ip 地址的类型。可为 advertise, public 等
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Ip 地址
                     * @return Ip Ip 地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip 地址
                     * @param _ip Ip 地址
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
                     * 获取网络端口
                     * @return Port 网络端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置网络端口
                     * @param _port 网络端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Ip 地址的类型。可为 advertise, public 等
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Ip 地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 网络端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_IPADDRESS_H_
