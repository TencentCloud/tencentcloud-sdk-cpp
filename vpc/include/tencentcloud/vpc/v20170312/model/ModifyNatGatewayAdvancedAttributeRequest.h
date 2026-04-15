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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYADVANCEDATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYADVANCEDATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyNatGatewayAdvancedAttribute请求参数结构体
                */
                class ModifyNatGatewayAdvancedAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNatGatewayAdvancedAttributeRequest();
                    ~ModifyNatGatewayAdvancedAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关的ID，形如：`nat-df45454`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-df45454`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取UDP映射空闲时间，单位：秒。含义为UDP流空闲多少秒以后从NAT映射中释放。取值范围为：3-7200，默认为180。
                     * @return UDPMappingTimeout UDP映射空闲时间，单位：秒。含义为UDP流空闲多少秒以后从NAT映射中释放。取值范围为：3-7200，默认为180。
                     * 
                     */
                    uint64_t GetUDPMappingTimeout() const;

                    /**
                     * 设置UDP映射空闲时间，单位：秒。含义为UDP流空闲多少秒以后从NAT映射中释放。取值范围为：3-7200，默认为180。
                     * @param _uDPMappingTimeout UDP映射空闲时间，单位：秒。含义为UDP流空闲多少秒以后从NAT映射中释放。取值范围为：3-7200，默认为180。
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
                     * 获取TCP已建立的连接空闲超时时间，单位：秒。含义为TCP已建立的连接空闲多少秒以后从NAT映射中释放。取值范围为：40-10800，默认为10800。
                     * @return TCPEstablishedConnectionTimeout TCP已建立的连接空闲超时时间，单位：秒。含义为TCP已建立的连接空闲多少秒以后从NAT映射中释放。取值范围为：40-10800，默认为10800。
                     * 
                     */
                    uint64_t GetTCPEstablishedConnectionTimeout() const;

                    /**
                     * 设置TCP已建立的连接空闲超时时间，单位：秒。含义为TCP已建立的连接空闲多少秒以后从NAT映射中释放。取值范围为：40-10800，默认为10800。
                     * @param _tCPEstablishedConnectionTimeout TCP已建立的连接空闲超时时间，单位：秒。含义为TCP已建立的连接空闲多少秒以后从NAT映射中释放。取值范围为：40-10800，默认为10800。
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
                     * 获取TCP TIME_WAIT超时时间，单位：秒。含义为完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600，默认为120。
                     * @return TCPTimeWaitTimeout TCP TIME_WAIT超时时间，单位：秒。含义为完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600，默认为120。
                     * 
                     */
                    uint64_t GetTCPTimeWaitTimeout() const;

                    /**
                     * 设置TCP TIME_WAIT超时时间，单位：秒。含义为完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600，默认为120。
                     * @param _tCPTimeWaitTimeout TCP TIME_WAIT超时时间，单位：秒。含义为完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600，默认为120。
                     * 
                     */
                    void SetTCPTimeWaitTimeout(const uint64_t& _tCPTimeWaitTimeout);

                    /**
                     * 判断参数 TCPTimeWaitTimeout 是否已赋值
                     * @return TCPTimeWaitTimeout 是否已赋值
                     * 
                     */
                    bool TCPTimeWaitTimeoutHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID，形如：`nat-df45454`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * UDP映射空闲时间，单位：秒。含义为UDP流空闲多少秒以后从NAT映射中释放。取值范围为：3-7200，默认为180。
                     */
                    uint64_t m_uDPMappingTimeout;
                    bool m_uDPMappingTimeoutHasBeenSet;

                    /**
                     * TCP已建立的连接空闲超时时间，单位：秒。含义为TCP已建立的连接空闲多少秒以后从NAT映射中释放。取值范围为：40-10800，默认为10800。
                     */
                    uint64_t m_tCPEstablishedConnectionTimeout;
                    bool m_tCPEstablishedConnectionTimeoutHasBeenSet;

                    /**
                     * TCP TIME_WAIT超时时间，单位：秒。含义为完全关闭的TCP连接在到期后保留在NAT映射中的秒数。取值范围为：10-600，默认为120。
                     */
                    uint64_t m_tCPTimeWaitTimeout;
                    bool m_tCPTimeWaitTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYADVANCEDATTRIBUTEREQUEST_H_
