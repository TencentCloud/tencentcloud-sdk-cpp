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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETNATGATEWAYCONNECTIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETNATGATEWAYCONNECTIONREQUEST_H_

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
                * ResetNatGatewayConnection请求参数结构体
                */
                class ResetNatGatewayConnectionRequest : public AbstractModel
                {
                public:
                    ResetNatGatewayConnectionRequest();
                    ~ResetNatGatewayConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关ID。
                     * @return NatGatewayId NAT网关ID。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关ID。
                     * @param _natGatewayId NAT网关ID。
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
                     * 获取NAT网关并发连接上限，形如：1000000、3000000、10000000。
                     * @return MaxConcurrentConnection NAT网关并发连接上限，形如：1000000、3000000、10000000。
                     * 
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置NAT网关并发连接上限，形如：1000000、3000000、10000000。
                     * @param _maxConcurrentConnection NAT网关并发连接上限，形如：1000000、3000000、10000000。
                     * 
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     * 
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                private:

                    /**
                     * NAT网关ID。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT网关并发连接上限，形如：1000000、3000000、10000000。
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETNATGATEWAYCONNECTIONREQUEST_H_
