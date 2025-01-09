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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/GatewayItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeWxGateways返回参数结构体
                */
                class DescribeWxGatewaysResponse : public AbstractModel
                {
                public:
                    DescribeWxGatewaysResponse();
                    ~DescribeWxGatewaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的服务列表
                     * @return Gateways 返回的服务列表
                     * 
                     */
                    std::vector<GatewayItem> GetGateways() const;

                    /**
                     * 判断参数 Gateways 是否已赋值
                     * @return Gateways 是否已赋值
                     * 
                     */
                    bool GatewaysHasBeenSet() const;

                    /**
                     * 获取网关总数
                     * @return TotalCount 网关总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 返回的服务列表
                     */
                    std::vector<GatewayItem> m_gateways;
                    bool m_gatewaysHasBeenSet;

                    /**
                     * 网关总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYSRESPONSE_H_
