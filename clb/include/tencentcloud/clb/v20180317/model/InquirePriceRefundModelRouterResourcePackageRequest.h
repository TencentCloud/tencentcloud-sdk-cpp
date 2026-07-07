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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * InquirePriceRefundModelRouterResourcePackage请求参数结构体
                */
                class InquirePriceRefundModelRouterResourcePackageRequest : public AbstractModel
                {
                public:
                    InquirePriceRefundModelRouterResourcePackageRequest();
                    ~InquirePriceRefundModelRouterResourcePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待退款的模型路由资源包Id</p><p>非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。</p>
                     * @return ModelRouterResourcePackageIds <p>待退款的模型路由资源包Id</p><p>非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。</p>
                     * 
                     */
                    std::vector<std::string> GetModelRouterResourcePackageIds() const;

                    /**
                     * 设置<p>待退款的模型路由资源包Id</p><p>非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。</p>
                     * @param _modelRouterResourcePackageIds <p>待退款的模型路由资源包Id</p><p>非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。</p>
                     * 
                     */
                    void SetModelRouterResourcePackageIds(const std::vector<std::string>& _modelRouterResourcePackageIds);

                    /**
                     * 判断参数 ModelRouterResourcePackageIds 是否已赋值
                     * @return ModelRouterResourcePackageIds 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageIdsHasBeenSet() const;

                private:

                    /**
                     * <p>待退款的模型路由资源包Id</p><p>非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。</p>
                     */
                    std::vector<std::string> m_modelRouterResourcePackageIds;
                    bool m_modelRouterResourcePackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICEREFUNDMODELROUTERRESOURCEPACKAGEREQUEST_H_
