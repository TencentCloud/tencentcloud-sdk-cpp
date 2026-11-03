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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGIESREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGIESREQUEST_H_

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
                * DescribeStrategies请求参数结构体
                */
                class DescribeStrategiesRequest : public AbstractModel
                {
                public:
                    DescribeStrategiesRequest();
                    ~DescribeStrategiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品类型</p>
                     * @return Product <p>产品类型</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品类型</p>
                     * @param _product <p>产品类型</p>
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
                     * 获取<p>执行区域：pre是前区，post 是后区</p>
                     * @return ExecArea <p>执行区域：pre是前区，post 是后区</p>
                     * 
                     */
                    std::string GetExecArea() const;

                    /**
                     * 设置<p>执行区域：pre是前区，post 是后区</p>
                     * @param _execArea <p>执行区域：pre是前区，post 是后区</p>
                     * 
                     */
                    void SetExecArea(const std::string& _execArea);

                    /**
                     * 判断参数 ExecArea 是否已赋值
                     * @return ExecArea 是否已赋值
                     * 
                     */
                    bool ExecAreaHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件</p>
                     * @return Filters <p>筛选条件</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>筛选条件</p>
                     * @param _filters <p>筛选条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>条数限制</p>
                     * @return Limit <p>条数限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>条数限制</p>
                     * @param _limit <p>条数限制</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>产品类型</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>执行区域：pre是前区，post 是后区</p>
                     */
                    std::string m_execArea;
                    bool m_execAreaHasBeenSet;

                    /**
                     * <p>筛选条件</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>条数限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGIESREQUEST_H_
