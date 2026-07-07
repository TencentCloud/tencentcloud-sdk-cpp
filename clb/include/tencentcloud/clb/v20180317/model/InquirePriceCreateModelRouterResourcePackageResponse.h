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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGERESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * InquirePriceCreateModelRouterResourcePackage返回参数结构体
                */
                class InquirePriceCreateModelRouterResourcePackageResponse : public AbstractModel
                {
                public:
                    InquirePriceCreateModelRouterResourcePackageResponse();
                    ~InquirePriceCreateModelRouterResourcePackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由资源包价格</p>
                     * @return ModelRouterResourcePackagePrice <p>模型路由资源包价格</p>
                     * 
                     */
                    ItemPrice GetModelRouterResourcePackagePrice() const;

                    /**
                     * 判断参数 ModelRouterResourcePackagePrice 是否已赋值
                     * @return ModelRouterResourcePackagePrice 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackagePriceHasBeenSet() const;

                    /**
                     * 获取<p>本次购买资源包是否可享受首购优惠</p><p>1:可享受首购优惠，0:不可享受首购优惠</p>
                     * @return FirstBuy <p>本次购买资源包是否可享受首购优惠</p><p>1:可享受首购优惠，0:不可享受首购优惠</p>
                     * 
                     */
                    uint64_t GetFirstBuy() const;

                    /**
                     * 判断参数 FirstBuy 是否已赋值
                     * @return FirstBuy 是否已赋值
                     * 
                     */
                    bool FirstBuyHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包价格</p>
                     */
                    ItemPrice m_modelRouterResourcePackagePrice;
                    bool m_modelRouterResourcePackagePriceHasBeenSet;

                    /**
                     * <p>本次购买资源包是否可享受首购优惠</p><p>1:可享受首购优惠，0:不可享受首购优惠</p>
                     */
                    uint64_t m_firstBuy;
                    bool m_firstBuyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGERESPONSE_H_
