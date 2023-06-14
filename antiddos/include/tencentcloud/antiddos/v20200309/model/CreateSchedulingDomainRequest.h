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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATESCHEDULINGDOMAINREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATESCHEDULINGDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateSchedulingDomain请求参数结构体
                */
                class CreateSchedulingDomainRequest : public AbstractModel
                {
                public:
                    CreateSchedulingDomainRequest();
                    ~CreateSchedulingDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代表是否混合云本地化的产品。
hybrid: 宙斯盾本地化
不填写：其他
                     * @return Product 代表是否混合云本地化的产品。
hybrid: 宙斯盾本地化
不填写：其他
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置代表是否混合云本地化的产品。
hybrid: 宙斯盾本地化
不填写：其他
                     * @param _product 代表是否混合云本地化的产品。
hybrid: 宙斯盾本地化
不填写：其他
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 代表是否混合云本地化的产品。
hybrid: 宙斯盾本地化
不填写：其他
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATESCHEDULINGDOMAINREQUEST_H_
