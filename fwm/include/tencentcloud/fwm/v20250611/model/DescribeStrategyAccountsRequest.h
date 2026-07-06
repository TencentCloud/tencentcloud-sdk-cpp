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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeStrategyAccounts请求参数结构体
                */
                class DescribeStrategyAccountsRequest : public AbstractModel
                {
                public:
                    DescribeStrategyAccountsRequest();
                    ~DescribeStrategyAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取下发产品 secgroup // 企业安全组
                     * @return Product 下发产品 secgroup // 企业安全组
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置下发产品 secgroup // 企业安全组
                     * @param _product 下发产品 secgroup // 企业安全组
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取筛选器
                     * @return Filters 筛选器
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置筛选器
                     * @param _filters 筛选器
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 下发产品 secgroup // 企业安全组
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 筛选器
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSREQUEST_H_
