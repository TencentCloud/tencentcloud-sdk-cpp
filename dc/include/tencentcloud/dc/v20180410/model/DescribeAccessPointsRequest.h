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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Filter.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeAccessPoints请求参数结构体
                */
                class DescribeAccessPointsRequest : public AbstractModel
                {
                public:
                    DescribeAccessPointsRequest();
                    ~DescribeAccessPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入点所在的地域。你可以通过调用[DescribeRegions](https://cloud.tencent.com/document/product/1596/77930)接口获取地域ID。
                     * @return RegionId 接入点所在的地域。你可以通过调用[DescribeRegions](https://cloud.tencent.com/document/product/1596/77930)接口获取地域ID。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置接入点所在的地域。你可以通过调用[DescribeRegions](https://cloud.tencent.com/document/product/1596/77930)接口获取地域ID。
                     * @param _regionId 接入点所在的地域。你可以通过调用[DescribeRegions](https://cloud.tencent.com/document/product/1596/77930)接口获取地域ID。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取过滤参数，支持：access-point-id、isp
                     * @return Filters 过滤参数，支持：access-point-id、isp
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数，支持：access-point-id、isp
                     * @param _filters 过滤参数，支持：access-point-id、isp
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 接入点所在的地域。你可以通过调用[DescribeRegions](https://cloud.tencent.com/document/product/1596/77930)接口获取地域ID。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数，支持：access-point-id、isp
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_
