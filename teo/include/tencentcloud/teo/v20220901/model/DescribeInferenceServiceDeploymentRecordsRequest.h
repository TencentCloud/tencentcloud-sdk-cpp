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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceDeploymentRecords请求参数结构体
                */
                class DescribeInferenceServiceDeploymentRecordsRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServiceDeploymentRecordsRequest();
                    ~DescribeInferenceServiceDeploymentRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务 ID。</p>
                     * @return ServiceId <p>推理服务 ID。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务 ID。</p>
                     * @param _serviceId <p>推理服务 ID。</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，取值有：<li>create-time：部署创建时间。</li>默认值为：create-time。</p>
                     * @return SortBy <p>排序字段，取值有：<li>create-time：部署创建时间。</li>默认值为：create-time。</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段，取值有：<li>create-time：部署创建时间。</li>默认值为：create-time。</p>
                     * @param _sortBy <p>排序字段，取值有：<li>create-time：部署创建时间。</li>默认值为：create-time。</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。</p>
                     * @return SortOrder <p>排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。</p>
                     * @param _sortOrder <p>排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认值：0。</p>
                     * @return Offset <p>分页偏移量，默认值：0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认值：0。</p>
                     * @param _offset <p>分页偏移量，默认值：0。</p>
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
                     * 获取<p>返回记录条数，默认值：20，最大值：100。</p>
                     * @return Limit <p>返回记录条数，默认值：20，最大值：100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回记录条数，默认值：20，最大值：100。</p>
                     * @param _limit <p>返回记录条数，默认值：20，最大值：100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>推理服务 ID。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>排序字段，取值有：<li>create-time：部署创建时间。</li>默认值为：create-time。</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>分页偏移量，默认值：0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回记录条数，默认值：20，最大值：100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTRECORDSREQUEST_H_
