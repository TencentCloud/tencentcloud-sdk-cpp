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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCREQLIMITPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCREQLIMITPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeCCReqLimitPolicyList请求参数结构体
                */
                class DescribeCCReqLimitPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeCCReqLimitPolicyListRequest();
                    ~DescribeCCReqLimitPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS防护子产品代号（bgp-multip表示高防包，bgpip表示高防IP）
                     * @return Business DDoS防护子产品代号（bgp-multip表示高防包，bgpip表示高防IP）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgp-multip表示高防包，bgpip表示高防IP）
                     * @param _business DDoS防护子产品代号（bgp-multip表示高防包，bgpip表示高防IP）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取一页条数
                     * @return Limit 一页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数
                     * @param _limit 一页条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取指定实例Id
                     * @return InstanceId 指定实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例Id
                     * @param _instanceId 指定实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP地址，普通高防IP要传该字段
                     * @return Ip IP地址，普通高防IP要传该字段
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址，普通高防IP要传该字段
                     * @param _ip IP地址，普通高防IP要传该字段
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
                     * 获取域名，普通高防IP要传该字段
                     * @return Domain 域名，普通高防IP要传该字段
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，普通高防IP要传该字段
                     * @param _domain 域名，普通高防IP要传该字段
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取协议，普通高防IP要传该字段
                     * @return Protocol 协议，普通高防IP要传该字段
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，普通高防IP要传该字段
                     * @param _protocol 协议，普通高防IP要传该字段
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * DDoS防护子产品代号（bgp-multip表示高防包，bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP地址，普通高防IP要传该字段
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 域名，普通高防IP要传该字段
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议，普通高防IP要传该字段
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCREQLIMITPOLICYLISTREQUEST_H_
