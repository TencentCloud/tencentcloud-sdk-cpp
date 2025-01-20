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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_

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
                * InquirePriceCreateDirectConnectGateway返回参数结构体
                */
                class InquirePriceCreateDirectConnectGatewayResponse : public AbstractModel
                {
                public:
                    InquirePriceCreateDirectConnectGatewayResponse();
                    ~InquirePriceCreateDirectConnectGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关标准接入费用
                     * @return TotalCost 专线网关标准接入费用
                     * 
                     */
                    int64_t GetTotalCost() const;

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取专线网关真实接入费用
                     * @return RealTotalCost 专线网关真实接入费用
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * 专线网关标准接入费用
                     */
                    int64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 专线网关真实接入费用
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_
