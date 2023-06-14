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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTPAYDEALSREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTPAYDEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * AgentPayDeals请求参数结构体
                */
                class AgentPayDealsRequest : public AbstractModel
                {
                public:
                    AgentPayDealsRequest();
                    ~AgentPayDealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单所有者uin
                     * @return OwnerUin 订单所有者uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置订单所有者uin
                     * @param _ownerUin 订单所有者uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取代付标志，1：代付；0：自付
                     * @return AgentPay 代付标志，1：代付；0：自付
                     * 
                     */
                    uint64_t GetAgentPay() const;

                    /**
                     * 设置代付标志，1：代付；0：自付
                     * @param _agentPay 代付标志，1：代付；0：自付
                     * 
                     */
                    void SetAgentPay(const uint64_t& _agentPay);

                    /**
                     * 判断参数 AgentPay 是否已赋值
                     * @return AgentPay 是否已赋值
                     * 
                     */
                    bool AgentPayHasBeenSet() const;

                    /**
                     * 获取订单号数组
                     * @return DealNames 订单号数组
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置订单号数组
                     * @param _dealNames 订单号数组
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 订单所有者uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 代付标志，1：代付；0：自付
                     */
                    uint64_t m_agentPay;
                    bool m_agentPayHasBeenSet;

                    /**
                     * 订单号数组
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTPAYDEALSREQUEST_H_
