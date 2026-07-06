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
                     * 获取产品类型
                     * @return Product 产品类型
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型
                     * @param _product 产品类型
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
                     * 获取执行区域：pre是前区，post 是后区
                     * @return ExecArea 执行区域：pre是前区，post 是后区
                     * 
                     */
                    std::string GetExecArea() const;

                    /**
                     * 设置执行区域：pre是前区，post 是后区
                     * @param _execArea 执行区域：pre是前区，post 是后区
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
                     * 获取筛选条件
                     * @return Filters 筛选条件
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置筛选条件
                     * @param _filters 筛选条件
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
                     * 获取条数限制
                     * @return Limit 条数限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数限制
                     * @param _limit 条数限制
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 产品类型
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 执行区域：pre是前区，post 是后区
                     */
                    std::string m_execArea;
                    bool m_execAreaHasBeenSet;

                    /**
                     * 筛选条件
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 条数限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGIESREQUEST_H_
