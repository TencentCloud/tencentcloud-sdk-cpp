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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * UnbindProducts请求参数结构体
                */
                class UnbindProductsRequest : public AbstractModel
                {
                public:
                    UnbindProductsRequest();
                    ~UnbindProductsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关产品ID
                     * @return GatewayProductId 网关产品ID
                     * 
                     */
                    std::string GetGatewayProductId() const;

                    /**
                     * 设置网关产品ID
                     * @param _gatewayProductId 网关产品ID
                     * 
                     */
                    void SetGatewayProductId(const std::string& _gatewayProductId);

                    /**
                     * 判断参数 GatewayProductId 是否已赋值
                     * @return GatewayProductId 是否已赋值
                     * 
                     */
                    bool GatewayProductIdHasBeenSet() const;

                    /**
                     * 获取待解绑的子产品ID数组
                     * @return ProductIds 待解绑的子产品ID数组
                     * 
                     */
                    std::vector<std::string> GetProductIds() const;

                    /**
                     * 设置待解绑的子产品ID数组
                     * @param _productIds 待解绑的子产品ID数组
                     * 
                     */
                    void SetProductIds(const std::vector<std::string>& _productIds);

                    /**
                     * 判断参数 ProductIds 是否已赋值
                     * @return ProductIds 是否已赋值
                     * 
                     */
                    bool ProductIdsHasBeenSet() const;

                private:

                    /**
                     * 网关产品ID
                     */
                    std::string m_gatewayProductId;
                    bool m_gatewayProductIdHasBeenSet;

                    /**
                     * 待解绑的子产品ID数组
                     */
                    std::vector<std::string> m_productIds;
                    bool m_productIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSREQUEST_H_
