/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CONNECTIONSTATETIMEOUTS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CONNECTIONSTATETIMEOUTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * NAT网关超时时间
                */
                class ConnectionStateTimeouts : public AbstractModel
                {
                public:
                    ConnectionStateTimeouts();
                    ~ConnectionStateTimeouts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UDP映射空闲时间，指多少秒以后UDP流停止向端点发送。取值范围为：3-7200秒，默认为10秒。
                     * @return UDPMappingTimeout UDP映射空闲时间，指多少秒以后UDP流停止向端点发送。取值范围为：3-7200秒，默认为10秒。
                     * 
                     */
                    uint64_t GetUDPMappingTimeout() const;

                    /**
                     * 设置UDP映射空闲时间，指多少秒以后UDP流停止向端点发送。取值范围为：3-7200秒，默认为10秒。
                     * @param _uDPMappingTimeout UDP映射空闲时间，指多少秒以后UDP流停止向端点发送。取值范围为：3-7200秒，默认为10秒。
                     * 
                     */
                    void SetUDPMappingTimeout(const uint64_t& _uDPMappingTimeout);

                    /**
                     * 判断参数 UDPMappingTimeout 是否已赋值
                     * @return UDPMappingTimeout 是否已赋值
                     * 
                     */
                    bool UDPMappingTimeoutHasBeenSet() const;

                    /**
                     * 获取TCP已建立的连接空闲超时，指多少秒以后连接变为空闲状态。取值范围为：40-10800秒，默认为10800秒。
                     * @return TCPEstablishedConnectionTimeout TCP已建立的连接空闲超时，指多少秒以后连接变为空闲状态。取值范围为：40-10800秒，默认为10800秒。
                     * 
                     */
                    uint64_t GetTCPEstablishedConnectionTimeout() const;

                    /**
                     * 设置TCP已建立的连接空闲超时，指多少秒以后连接变为空闲状态。取值范围为：40-10800秒，默认为10800秒。
                     * @param _tCPEstablishedConnectionTimeout TCP已建立的连接空闲超时，指多少秒以后连接变为空闲状态。取值范围为：40-10800秒，默认为10800秒。
                     * 
                     */
                    void SetTCPEstablishedConnectionTimeout(const uint64_t& _tCPEstablishedConnectionTimeout);

                    /**
                     * 判断参数 TCPEstablishedConnectionTimeout 是否已赋值
                     * @return TCPEstablishedConnectionTimeout 是否已赋值
                     * 
                     */
                    bool TCPEstablishedConnectionTimeoutHasBeenSet() const;

                    /**
                     * 获取TCP TIME_WAIT超时，指完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600秒，默认为120秒。
                     * @return TcpTimeWaitTimeout TCP TIME_WAIT超时，指完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600秒，默认为120秒。
                     * 
                     */
                    uint64_t GetTcpTimeWaitTimeout() const;

                    /**
                     * 设置TCP TIME_WAIT超时，指完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600秒，默认为120秒。
                     * @param _tcpTimeWaitTimeout TCP TIME_WAIT超时，指完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600秒，默认为120秒。
                     * 
                     */
                    void SetTcpTimeWaitTimeout(const uint64_t& _tcpTimeWaitTimeout);

                    /**
                     * 判断参数 TcpTimeWaitTimeout 是否已赋值
                     * @return TcpTimeWaitTimeout 是否已赋值
                     * 
                     */
                    bool TcpTimeWaitTimeoutHasBeenSet() const;

                private:

                    /**
                     * UDP映射空闲时间，指多少秒以后UDP流停止向端点发送。取值范围为：3-7200秒，默认为10秒。
                     */
                    uint64_t m_uDPMappingTimeout;
                    bool m_uDPMappingTimeoutHasBeenSet;

                    /**
                     * TCP已建立的连接空闲超时，指多少秒以后连接变为空闲状态。取值范围为：40-10800秒，默认为10800秒。
                     */
                    uint64_t m_tCPEstablishedConnectionTimeout;
                    bool m_tCPEstablishedConnectionTimeoutHasBeenSet;

                    /**
                     * TCP TIME_WAIT超时，指完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600秒，默认为120秒。
                     */
                    uint64_t m_tcpTimeWaitTimeout;
                    bool m_tcpTimeWaitTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CONNECTIONSTATETIMEOUTS_H_
