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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGERESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelRouterResourcePackageRefundPrice.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * InquirePriceRefundModelRouterResourcePackage返回参数结构体
                */
                class InquirePriceRefundModelRouterResourcePackageResponse : public AbstractModel
                {
                public:
                    InquirePriceRefundModelRouterResourcePackageResponse();
                    ~InquirePriceRefundModelRouterResourcePackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待退款的模型路由资源包可退价格</p>
                     * @return ModelRouterResourcePackageRefundPrice <p>待退款的模型路由资源包可退价格</p>
                     * 
                     */
                    std::vector<ModelRouterResourcePackageRefundPrice> GetModelRouterResourcePackageRefundPrice() const;

                    /**
                     * 判断参数 ModelRouterResourcePackageRefundPrice 是否已赋值
                     * @return ModelRouterResourcePackageRefundPrice 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageRefundPriceHasBeenSet() const;

                private:

                    /**
                     * <p>待退款的模型路由资源包可退价格</p>
                     */
                    std::vector<ModelRouterResourcePackageRefundPrice> m_modelRouterResourcePackageRefundPrice;
                    bool m_modelRouterResourcePackageRefundPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGERESPONSE_H_
