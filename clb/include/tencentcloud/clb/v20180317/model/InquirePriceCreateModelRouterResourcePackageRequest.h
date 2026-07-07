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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_

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
                * InquirePriceCreateModelRouterResourcePackage请求参数结构体
                */
                class InquirePriceCreateModelRouterResourcePackageRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateModelRouterResourcePackageRequest();
                    ~InquirePriceCreateModelRouterResourcePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * @return ModelRouterResourcePackageAmount <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * 
                     */
                    uint64_t GetModelRouterResourcePackageAmount() const;

                    /**
                     * 设置<p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * @param _modelRouterResourcePackageAmount <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * 
                     */
                    void SetModelRouterResourcePackageAmount(const uint64_t& _modelRouterResourcePackageAmount);

                    /**
                     * 判断参数 ModelRouterResourcePackageAmount 是否已赋值
                     * @return ModelRouterResourcePackageAmount 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageAmountHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     */
                    uint64_t m_modelRouterResourcePackageAmount;
                    bool m_modelRouterResourcePackageAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIREPRICECREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_
