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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/GatewayVersionItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeGatewayVersions返回参数结构体
                */
                class DescribeGatewayVersionsResponse : public AbstractModel
                {
                public:
                    DescribeGatewayVersionsResponse();
                    ~DescribeGatewayVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关id
                     * @return GatewayId 网关id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取版本总数
                     * @return TotalCount 版本总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取版本信息详情
                     * @return GatewayVersionItems 版本信息详情
                     * 
                     */
                    std::vector<GatewayVersionItem> GetGatewayVersionItems() const;

                    /**
                     * 判断参数 GatewayVersionItems 是否已赋值
                     * @return GatewayVersionItems 是否已赋值
                     * 
                     */
                    bool GatewayVersionItemsHasBeenSet() const;

                private:

                    /**
                     * 网关id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 版本总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 版本信息详情
                     */
                    std::vector<GatewayVersionItem> m_gatewayVersionItems;
                    bool m_gatewayVersionItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYVERSIONSRESPONSE_H_
