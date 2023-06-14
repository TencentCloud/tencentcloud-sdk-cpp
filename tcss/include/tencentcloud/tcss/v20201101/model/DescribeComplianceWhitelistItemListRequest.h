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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceWhitelistItemList请求参数结构体
                */
                class DescribeComplianceWhitelistItemListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceWhitelistItemListRequest();
                    ~DescribeComplianceWhitelistItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始偏移量，默认为0。
                     * @return Offset 起始偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量，默认为0。
                     * @param _offset 起始偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取要获取的数量，默认为10，最大为100。
                     * @return Limit 要获取的数量，默认为10，最大为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要获取的数量，默认为10，最大为100。
                     * @param _limit 要获取的数量，默认为10，最大为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资产类型列表。
                     * @return AssetTypeSet 资产类型列表。
                     * 
                     */
                    std::vector<std::string> GetAssetTypeSet() const;

                    /**
                     * 设置资产类型列表。
                     * @param _assetTypeSet 资产类型列表。
                     * 
                     */
                    void SetAssetTypeSet(const std::vector<std::string>& _assetTypeSet);

                    /**
                     * 判断参数 AssetTypeSet 是否已赋值
                     * @return AssetTypeSet 是否已赋值
                     * 
                     */
                    bool AssetTypeSetHasBeenSet() const;

                    /**
                     * 获取查询过滤器
                     * @return Filters 查询过滤器
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置查询过滤器
                     * @param _filters 查询过滤器
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式 desc asc
                     * @return Order 排序方式 desc asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 desc asc
                     * @param _order 排序方式 desc asc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 起始偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 要获取的数量，默认为10，最大为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资产类型列表。
                     */
                    std::vector<std::string> m_assetTypeSet;
                    bool m_assetTypeSetHasBeenSet;

                    /**
                     * 查询过滤器
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式 desc asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_
