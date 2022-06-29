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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/CertFilter.h>
#include <tencentcloud/teo/v20220106/model/CertSort.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeHostsCertificate请求参数结构体
                */
                class DescribeHostsCertificateRequest : public AbstractModel
                {
                public:
                    DescribeHostsCertificateRequest();
                    ~DescribeHostsCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID
                     * @return ZoneId Zone ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param ZoneId Zone ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0
                     * @return Offset 分页查询偏移量，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0
                     * @param Offset 分页查询偏移量，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为 100，最大可设置为 1000
                     * @return Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 100，最大可设置为 1000
                     * @param Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询条件过滤器
                     * @return Filters 查询条件过滤器
                     */
                    std::vector<CertFilter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器
                     * @param Filters 查询条件过滤器
                     */
                    void SetFilters(const std::vector<CertFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Sort 排序方式
                     */
                    CertSort GetSort() const;

                    /**
                     * 设置排序方式
                     * @param Sort 排序方式
                     */
                    void SetSort(const CertSort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * Zone ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询条件过滤器
                     */
                    std::vector<CertFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式
                     */
                    CertSort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSCERTIFICATEREQUEST_H_
