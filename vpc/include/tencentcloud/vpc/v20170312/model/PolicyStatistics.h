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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_POLICYSTATISTICS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_POLICYSTATISTICS_H_

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
                * 安全组策略统计
                */
                class PolicyStatistics : public AbstractModel
                {
                public:
                    PolicyStatistics();
                    ~PolicyStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取入站IPv4总数
                     * @return IngressIPv4TotalCount 入站IPv4总数
                     * 
                     */
                    uint64_t GetIngressIPv4TotalCount() const;

                    /**
                     * 设置入站IPv4总数
                     * @param _ingressIPv4TotalCount 入站IPv4总数
                     * 
                     */
                    void SetIngressIPv4TotalCount(const uint64_t& _ingressIPv4TotalCount);

                    /**
                     * 判断参数 IngressIPv4TotalCount 是否已赋值
                     * @return IngressIPv4TotalCount 是否已赋值
                     * 
                     */
                    bool IngressIPv4TotalCountHasBeenSet() const;

                    /**
                     * 获取入站IPv6总数
                     * @return IngressIPv6TotalCount 入站IPv6总数
                     * 
                     */
                    uint64_t GetIngressIPv6TotalCount() const;

                    /**
                     * 设置入站IPv6总数
                     * @param _ingressIPv6TotalCount 入站IPv6总数
                     * 
                     */
                    void SetIngressIPv6TotalCount(const uint64_t& _ingressIPv6TotalCount);

                    /**
                     * 判断参数 IngressIPv6TotalCount 是否已赋值
                     * @return IngressIPv6TotalCount 是否已赋值
                     * 
                     */
                    bool IngressIPv6TotalCountHasBeenSet() const;

                    /**
                     * 获取出站IPv4总数
                     * @return EgressIPv4TotalCount 出站IPv4总数
                     * 
                     */
                    uint64_t GetEgressIPv4TotalCount() const;

                    /**
                     * 设置出站IPv4总数
                     * @param _egressIPv4TotalCount 出站IPv4总数
                     * 
                     */
                    void SetEgressIPv4TotalCount(const uint64_t& _egressIPv4TotalCount);

                    /**
                     * 判断参数 EgressIPv4TotalCount 是否已赋值
                     * @return EgressIPv4TotalCount 是否已赋值
                     * 
                     */
                    bool EgressIPv4TotalCountHasBeenSet() const;

                    /**
                     * 获取出站IPv6总数
                     * @return EgressIPv6TotalCount 出站IPv6总数
                     * 
                     */
                    uint64_t GetEgressIPv6TotalCount() const;

                    /**
                     * 设置出站IPv6总数
                     * @param _egressIPv6TotalCount 出站IPv6总数
                     * 
                     */
                    void SetEgressIPv6TotalCount(const uint64_t& _egressIPv6TotalCount);

                    /**
                     * 判断参数 EgressIPv6TotalCount 是否已赋值
                     * @return EgressIPv6TotalCount 是否已赋值
                     * 
                     */
                    bool EgressIPv6TotalCountHasBeenSet() const;

                private:

                    /**
                     * 入站IPv4总数
                     */
                    uint64_t m_ingressIPv4TotalCount;
                    bool m_ingressIPv4TotalCountHasBeenSet;

                    /**
                     * 入站IPv6总数
                     */
                    uint64_t m_ingressIPv6TotalCount;
                    bool m_ingressIPv6TotalCountHasBeenSet;

                    /**
                     * 出站IPv4总数
                     */
                    uint64_t m_egressIPv4TotalCount;
                    bool m_egressIPv4TotalCountHasBeenSet;

                    /**
                     * 出站IPv6总数
                     */
                    uint64_t m_egressIPv6TotalCount;
                    bool m_egressIPv6TotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_POLICYSTATISTICS_H_
