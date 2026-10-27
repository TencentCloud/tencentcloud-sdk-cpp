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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Filter.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeSnapshots请求参数结构体
                */
                class DescribeSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotsRequest();
                    ~DescribeSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>快照所在的地域</p>
                     * @return SnapshotRegion <p>快照所在的地域</p>
                     * 
                     */
                    std::string GetSnapshotRegion() const;

                    /**
                     * 设置<p>快照所在的地域</p>
                     * @param _snapshotRegion <p>快照所在的地域</p>
                     * 
                     */
                    void SetSnapshotRegion(const std::string& _snapshotRegion);

                    /**
                     * 判断参数 SnapshotRegion 是否已赋值
                     * @return SnapshotRegion 是否已赋值
                     * 
                     */
                    bool SnapshotRegionHasBeenSet() const;

                    /**
                     * 获取<p>页号</p>
                     * @return PageNumber <p>页号</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页号</p>
                     * @param _pageNumber <p>页号</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页大小，最大100，默认20</p>
                     * @return PageSize <p>每页大小，最大100，默认20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，最大100，默认20</p>
                     * @param _pageSize <p>每页大小，最大100，默认20</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>检索条件，Filter的name取值：<br>InstanceId：实例ID，返回当前实例挂载的云硬盘关联的快照信息<br>DiskId：云硬盘ID，返回当前云硬盘关联的快照信息</p>
                     * @return Filters <p>检索条件，Filter的name取值：<br>InstanceId：实例ID，返回当前实例挂载的云硬盘关联的快照信息<br>DiskId：云硬盘ID，返回当前云硬盘关联的快照信息</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>检索条件，Filter的name取值：<br>InstanceId：实例ID，返回当前实例挂载的云硬盘关联的快照信息<br>DiskId：云硬盘ID，返回当前云硬盘关联的快照信息</p>
                     * @param _filters <p>检索条件，Filter的name取值：<br>InstanceId：实例ID，返回当前实例挂载的云硬盘关联的快照信息<br>DiskId：云硬盘ID，返回当前云硬盘关联的快照信息</p>
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
                     * <p>快照所在的地域</p>
                     */
                    std::string m_snapshotRegion;
                    bool m_snapshotRegionHasBeenSet;

                    /**
                     * <p>页号</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，最大100，默认20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>检索条件，Filter的name取值：<br>InstanceId：实例ID，返回当前实例挂载的云硬盘关联的快照信息<br>DiskId：云硬盘ID，返回当前云硬盘关联的快照信息</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
