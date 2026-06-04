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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeClusterNatCcnFwSwitchList请求参数结构体
                */
                class DescribeClusterNatCcnFwSwitchListRequest : public AbstractModel
                {
                public:
                    DescribeClusterNatCcnFwSwitchListRequest();
                    ~DescribeClusterNatCcnFwSwitchListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NAT防火墙类型筛选，取值：nat-VPC内防护类型，nat_ccn-CCN集群模式类型，不传则同时查询两种类型</p>
                     * @return NatType <p>NAT防火墙类型筛选，取值：nat-VPC内防护类型，nat_ccn-CCN集群模式类型，不传则同时查询两种类型</p>
                     * 
                     */
                    std::string GetNatType() const;

                    /**
                     * 设置<p>NAT防火墙类型筛选，取值：nat-VPC内防护类型，nat_ccn-CCN集群模式类型，不传则同时查询两种类型</p>
                     * @param _natType <p>NAT防火墙类型筛选，取值：nat-VPC内防护类型，nat_ccn-CCN集群模式类型，不传则同时查询两种类型</p>
                     * 
                     */
                    void SetNatType(const std::string& _natType);

                    /**
                     * 判断参数 NatType 是否已赋值
                     * @return NatType 是否已赋值
                     * 
                     */
                    bool NatTypeHasBeenSet() const;

                    /**
                     * 获取<p>每页条数，默认100</p>
                     * @return Limit <p>每页条数，默认100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数，默认100</p>
                     * @param _limit <p>每页条数，默认100</p>
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
                     * 获取<p>偏移量，默认0</p>
                     * @return Offset <p>偏移量，默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0</p>
                     * @param _offset <p>偏移量，默认0</p>
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
                     * 获取<p>过滤条件列表，支持按Common（通用搜索）、InsObj（实例ID）、ObjName（实例名称）等字段过滤</p>
                     * @return Filters <p>过滤条件列表，支持按Common（通用搜索）、InsObj（实例ID）、ObjName（实例名称）等字段过滤</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表，支持按Common（通用搜索）、InsObj（实例ID）、ObjName（实例名称）等字段过滤</p>
                     * @param _filters <p>过滤条件列表，支持按Common（通用搜索）、InsObj（实例ID）、ObjName（实例名称）等字段过滤</p>
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
                     * <p>NAT防火墙类型筛选，取值：nat-VPC内防护类型，nat_ccn-CCN集群模式类型，不传则同时查询两种类型</p>
                     */
                    std::string m_natType;
                    bool m_natTypeHasBeenSet;

                    /**
                     * <p>每页条数，默认100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件列表，支持按Common（通用搜索）、InsObj（实例ID）、ObjName（实例名称）等字段过滤</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTREQUEST_H_
