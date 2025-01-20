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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GetCcnRegionBandwidthLimits请求参数结构体
                */
                class GetCcnRegionBandwidthLimitsRequest : public AbstractModel
                {
                public:
                    GetCcnRegionBandwidthLimitsRequest();
                    ~GetCcnRegionBandwidthLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN实例ID。形如：ccn-f49l6u0z。
                     * @return CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID。形如：ccn-f49l6u0z。
                     * @param _ccnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>sregion - String - （过滤条件）源地域，形如：ap-guangzhou。</li>
<li>dregion - String - （过滤条件）目的地域，形如：ap-shanghai-bm</li>
                     * @return Filters 过滤条件。
<li>sregion - String - （过滤条件）源地域，形如：ap-guangzhou。</li>
<li>dregion - String - （过滤条件）目的地域，形如：ap-shanghai-bm</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>sregion - String - （过滤条件）源地域，形如：ap-guangzhou。</li>
<li>dregion - String - （过滤条件）目的地域，形如：ap-shanghai-bm</li>
                     * @param _filters 过滤条件。
<li>sregion - String - （过滤条件）源地域，形如：ap-guangzhou。</li>
<li>dregion - String - （过滤条件）目的地域，形如：ap-shanghai-bm</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序条件，目前支持带宽（`BandwidthLimit`）和过期时间（`ExpireTime`），默认按 `ExpireTime` 排序。
                     * @return SortedBy 排序条件，目前支持带宽（`BandwidthLimit`）和过期时间（`ExpireTime`），默认按 `ExpireTime` 排序。
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置排序条件，目前支持带宽（`BandwidthLimit`）和过期时间（`ExpireTime`），默认按 `ExpireTime` 排序。
                     * @param _sortedBy 排序条件，目前支持带宽（`BandwidthLimit`）和过期时间（`ExpireTime`），默认按 `ExpireTime` 排序。
                     * 
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     * 
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取返回数量。
                     * @return Limit 返回数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量。
                     * @param _limit 返回数量。
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
                     * 获取排序方式，'ASC':升序,'DESC':降序。默认按'ASC'排序。
                     * @return OrderBy 排序方式，'ASC':升序,'DESC':降序。默认按'ASC'排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序方式，'ASC':升序,'DESC':降序。默认按'ASC'排序。
                     * @param _orderBy 排序方式，'ASC':升序,'DESC':降序。默认按'ASC'排序。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 过滤条件。
<li>sregion - String - （过滤条件）源地域，形如：ap-guangzhou。</li>
<li>dregion - String - （过滤条件）目的地域，形如：ap-shanghai-bm</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序条件，目前支持带宽（`BandwidthLimit`）和过期时间（`ExpireTime`），默认按 `ExpireTime` 排序。
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式，'ASC':升序,'DESC':降序。默认按'ASC'排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
