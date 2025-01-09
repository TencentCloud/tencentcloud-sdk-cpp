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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/WxGatewayRountItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeWxGatewayRoutes返回参数结构体
                */
                class DescribeWxGatewayRoutesResponse : public AbstractModel
                {
                public:
                    DescribeWxGatewayRoutesResponse();
                    ~DescribeWxGatewayRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的服务个数
                     * @return TotalCount 返回的服务个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回的服务列表
                     * @return WxGatewayRouteSet 返回的服务列表
                     * 
                     */
                    std::vector<WxGatewayRountItem> GetWxGatewayRouteSet() const;

                    /**
                     * 判断参数 WxGatewayRouteSet 是否已赋值
                     * @return WxGatewayRouteSet 是否已赋值
                     * 
                     */
                    bool WxGatewayRouteSetHasBeenSet() const;

                private:

                    /**
                     * 返回的服务个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的服务列表
                     */
                    std::vector<WxGatewayRountItem> m_wxGatewayRouteSet;
                    bool m_wxGatewayRouteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESRESPONSE_H_
