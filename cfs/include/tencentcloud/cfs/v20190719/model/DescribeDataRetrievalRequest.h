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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDataRetrieval请求参数结构体
                */
                class DescribeDataRetrievalRequest : public AbstractModel
                {
                public:
                    DescribeDataRetrievalRequest();
                    ~DescribeDataRetrievalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量，默认值为 0。</p>
                     * @return Offset <p>分页偏移量，默认值为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认值为 0。</p>
                     * @param _offset <p>分页偏移量，默认值为 0。</p>
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
                     * 获取<p>分页单页限制数目，默认值为 20，最大值为 100。</p>
                     * @return Limit <p>分页单页限制数目，默认值为 20，最大值为 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页限制数目，默认值为 20，最大值为 100。</p>
                     * @param _limit <p>分页单页限制数目，默认值为 20，最大值为 100。</p>
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
                     * 获取<p>过滤条件列表。支持的过滤字段：FileSystemId（文件系统 ID）、DataRetrievalId（数据检索 ID）、Name（数据检索名称，支持模糊搜索）。最多支持 10 个。</p>
                     * @return Filters <p>过滤条件列表。支持的过滤字段：FileSystemId（文件系统 ID）、DataRetrievalId（数据检索 ID）、Name（数据检索名称，支持模糊搜索）。最多支持 10 个。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表。支持的过滤字段：FileSystemId（文件系统 ID）、DataRetrievalId（数据检索 ID）、Name（数据检索名称，支持模糊搜索）。最多支持 10 个。</p>
                     * @param _filters <p>过滤条件列表。支持的过滤字段：FileSystemId（文件系统 ID）、DataRetrievalId（数据检索 ID）、Name（数据检索名称，支持模糊搜索）。最多支持 10 个。</p>
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
                     * <p>分页偏移量，默认值为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页限制数目，默认值为 20，最大值为 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件列表。支持的过滤字段：FileSystemId（文件系统 ID）、DataRetrievalId（数据检索 ID）、Name（数据检索名称，支持模糊搜索）。最多支持 10 个。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALREQUEST_H_
