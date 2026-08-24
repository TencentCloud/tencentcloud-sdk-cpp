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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/FilterModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverySitePairs请求参数结构体
                */
                class DescribeDisasterRecoverySitePairsRequest : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverySitePairsRequest();
                    ~DescribeDisasterRecoverySitePairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的容灾策略产品类型。取值范围：DISK / INSTANCE / CFS。
                     * @return SitePairType 要查询的容灾策略产品类型。取值范围：DISK / INSTANCE / CFS。
                     * 
                     */
                    std::string GetSitePairType() const;

                    /**
                     * 设置要查询的容灾策略产品类型。取值范围：DISK / INSTANCE / CFS。
                     * @param _sitePairType 要查询的容灾策略产品类型。取值范围：DISK / INSTANCE / CFS。
                     * 
                     */
                    void SetSitePairType(const std::string& _sitePairType);

                    /**
                     * 判断参数 SitePairType 是否已赋值
                     * @return SitePairType 是否已赋值
                     * 
                     */
                    bool SitePairTypeHasBeenSet() const;

                    /**
                     * 获取要查询的容灾策略ID列表。
                     * @return SitePairIds 要查询的容灾策略ID列表。
                     * 
                     */
                    std::vector<std::string> GetSitePairIds() const;

                    /**
                     * 设置要查询的容灾策略ID列表。
                     * @param _sitePairIds 要查询的容灾策略ID列表。
                     * 
                     */
                    void SetSitePairIds(const std::vector<std::string>& _sitePairIds);

                    /**
                     * 判断参数 SitePairIds 是否已赋值
                     * @return SitePairIds 是否已赋值
                     * 
                     */
                    bool SitePairIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，详见定期快照过滤条件表。
                     * @return Filters 过滤条件，详见定期快照过滤条件表。
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置过滤条件，详见定期快照过滤条件表。
                     * @param _filters 过滤条件，详见定期快照过滤条件表。
                     * 
                     */
                    void SetFilters(const std::vector<FilterModel>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取输出结果按升序还是降序，DESC表示降序，ASC表示升序
                     * @return Order 输出结果按升序还是降序，DESC表示降序，ASC表示升序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出结果按升序还是降序，DESC表示降序，ASC表示升序
                     * @param _order 输出结果按升序还是降序，DESC表示降序，ASC表示升序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取输出结果的排序字段
                     * @return OrderField 输出结果的排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置输出结果的排序字段
                     * @param _orderField 输出结果的排序字段
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 要查询的容灾策略产品类型。取值范围：DISK / INSTANCE / CFS。
                     */
                    std::string m_sitePairType;
                    bool m_sitePairTypeHasBeenSet;

                    /**
                     * 要查询的容灾策略ID列表。
                     */
                    std::vector<std::string> m_sitePairIds;
                    bool m_sitePairIdsHasBeenSet;

                    /**
                     * 过滤条件，详见定期快照过滤条件表。
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出结果按升序还是降序，DESC表示降序，ASC表示升序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 输出结果的排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSREQUEST_H_
