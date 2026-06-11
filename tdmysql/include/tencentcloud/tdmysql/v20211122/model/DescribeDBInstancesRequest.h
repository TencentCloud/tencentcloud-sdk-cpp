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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceFilter.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤参数</p>
                     * @return Filters <p>过滤参数</p>
                     * 
                     */
                    std::vector<InstanceFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤参数</p>
                     * @param _filters <p>过滤参数</p>
                     * 
                     */
                    void SetFilters(const std::vector<InstanceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>最大返回个数，默认为20，上限为100</p>
                     * @return Limit <p>最大返回个数，默认为20，上限为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最大返回个数，默认为20，上限为100</p>
                     * @param _limit <p>最大返回个数，默认为20，上限为100</p>
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
                     * 获取<p>偏移量，取Limit整数倍</p>
                     * @return Offset <p>偏移量，取Limit整数倍</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，取Limit整数倍</p>
                     * @param _offset <p>偏移量，取Limit整数倍</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>指定查询引擎类型</p><p>枚举值：</p><ul><li>libra： 列存引擎</li></ul>
                     * @return EngineType <p>指定查询引擎类型</p><p>枚举值：</p><ul><li>libra： 列存引擎</li></ul>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>指定查询引擎类型</p><p>枚举值：</p><ul><li>libra： 列存引擎</li></ul>
                     * @param _engineType <p>指定查询引擎类型</p><p>枚举值：</p><ul><li>libra： 列存引擎</li></ul>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * <p>过滤参数</p>
                     */
                    std::vector<InstanceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>最大返回个数，默认为20，上限为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，取Limit整数倍</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>指定查询引擎类型</p><p>枚举值：</p><ul><li>libra： 列存引擎</li></ul>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
