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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEREFUNDPRICE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEREFUNDPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由资源包退款价格
                */
                class ModelRouterResourcePackageRefundPrice : public AbstractModel
                {
                public:
                    ModelRouterResourcePackageRefundPrice();
                    ~ModelRouterResourcePackageRefundPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型路由资源包Id</p>
                     * @return ModelRouterPackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    std::string GetModelRouterPackageId() const;

                    /**
                     * 设置<p>模型路由资源包Id</p>
                     * @param _modelRouterPackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    void SetModelRouterPackageId(const std::string& _modelRouterPackageId);

                    /**
                     * 判断参数 ModelRouterPackageId 是否已赋值
                     * @return ModelRouterPackageId 是否已赋值
                     * 
                     */
                    bool ModelRouterPackageIdHasBeenSet() const;

                    /**
                     * 获取<p>可退还金额</p>
                     * @return Price <p>可退还金额</p>
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置<p>可退还金额</p>
                     * @param _price <p>可退还金额</p>
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包Id</p>
                     */
                    std::string m_modelRouterPackageId;
                    bool m_modelRouterPackageIdHasBeenSet;

                    /**
                     * <p>可退还金额</p>
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERRESOURCEPACKAGEREFUNDPRICE_H_
