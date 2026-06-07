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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeNetAttackSetting请求参数结构体
                */
                class DescribeNetAttackSettingRequest : public AbstractModel
                {
                public:
                    DescribeNetAttackSettingRequest();
                    ~DescribeNetAttackSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品类型 0-主机安全 1-安全中心</p>
                     * @return ProductType <p>产品类型 0-主机安全 1-安全中心</p>
                     * 
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 设置<p>产品类型 0-主机安全 1-安全中心</p>
                     * @param _productType <p>产品类型 0-主机安全 1-安全中心</p>
                     * 
                     */
                    void SetProductType(const uint64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>产品类型 0-主机安全 1-安全中心</p>
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGREQUEST_H_
