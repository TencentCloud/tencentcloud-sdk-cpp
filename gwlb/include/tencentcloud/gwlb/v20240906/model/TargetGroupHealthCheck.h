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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * 目标组健康检查详情
                */
                class TargetGroupHealthCheck : public AbstractModel
                {
                public:
                    TargetGroupHealthCheck();
                    ~TargetGroupHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查。
                     * @return HealthSwitch 是否开启健康检查。
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查。
                     * @param _healthSwitch 是否开启健康检查。
                     * 
                     */
                    void SetHealthSwitch(const bool& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查使用的协议。支持PING和TCP两种方式，默认为PING。

- icmp: 使用PING的方式进行健康检查
- tcp: 使用TCP连接的方式进行健康检查
                     * @return Protocol 健康检查使用的协议。支持PING和TCP两种方式，默认为PING。

- icmp: 使用PING的方式进行健康检查
- tcp: 使用TCP连接的方式进行健康检查
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置健康检查使用的协议。支持PING和TCP两种方式，默认为PING。

- icmp: 使用PING的方式进行健康检查
- tcp: 使用TCP连接的方式进行健康检查
                     * @param _protocol 健康检查使用的协议。支持PING和TCP两种方式，默认为PING。

- icmp: 使用PING的方式进行健康检查
- tcp: 使用TCP连接的方式进行健康检查
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取健康检查端口，探测协议为tcp时，该参数必填。

                     * @return Port 健康检查端口，探测协议为tcp时，该参数必填。

                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置健康检查端口，探测协议为tcp时，该参数必填。

                     * @param _port 健康检查端口，探测协议为tcp时，该参数必填。

                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * @return Timeout 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * @param _timeout 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * @return IntervalTime 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * @param _intervalTime 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取检测健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * @return HealthNum 检测健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置检测健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * @param _healthNum 检测健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取检测不健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * @return UnHealthNum 检测不健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * 
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置检测不健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * @param _unHealthNum 检测不健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     * 
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     * 
                     */
                    bool UnHealthNumHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查。
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查使用的协议。支持PING和TCP两种方式，默认为PING。

- icmp: 使用PING的方式进行健康检查
- tcp: 使用TCP连接的方式进行健康检查
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 健康检查端口，探测协议为tcp时，该参数必填。

                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 检测健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 检测不健康阈值。 默认为3次。 可配置范围：2 - 10次。
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_
