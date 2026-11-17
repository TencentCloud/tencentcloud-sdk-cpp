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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeGPUResourceGroups请求参数结构体
                */
                class DescribeGPUResourceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeGPUResourceGroupsRequest();
                    ~DescribeGPUResourceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，最多 10 项，Name 不可重复，每项 Values 为 1–10 个值。不同 Name 为 AND、同一 Values 为 OR。支持 resource-group-id（精确 ID）、resource-group-name（精确名称）、resource-group-name-like（普通文本子串，% 和 _ 不作为通配符）、gpu-type、gpu-num、cpu、memory。ID/GPUType 最多 64 字节，名称最多 128 字节；gpu-num 为正整数字符串，cpu/memory 为正数字符串，单位核/GiB。
                     * @return Filters 过滤条件，最多 10 项，Name 不可重复，每项 Values 为 1–10 个值。不同 Name 为 AND、同一 Values 为 OR。支持 resource-group-id（精确 ID）、resource-group-name（精确名称）、resource-group-name-like（普通文本子串，% 和 _ 不作为通配符）、gpu-type、gpu-num、cpu、memory。ID/GPUType 最多 64 字节，名称最多 128 字节；gpu-num 为正整数字符串，cpu/memory 为正数字符串，单位核/GiB。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，最多 10 项，Name 不可重复，每项 Values 为 1–10 个值。不同 Name 为 AND、同一 Values 为 OR。支持 resource-group-id（精确 ID）、resource-group-name（精确名称）、resource-group-name-like（普通文本子串，% 和 _ 不作为通配符）、gpu-type、gpu-num、cpu、memory。ID/GPUType 最多 64 字节，名称最多 128 字节；gpu-num 为正整数字符串，cpu/memory 为正数字符串，单位核/GiB。
                     * @param _filters 过滤条件，最多 10 项，Name 不可重复，每项 Values 为 1–10 个值。不同 Name 为 AND、同一 Values 为 OR。支持 resource-group-id（精确 ID）、resource-group-name（精确名称）、resource-group-name-like（普通文本子串，% 和 _ 不作为通配符）、gpu-type、gpu-num、cpu、memory。ID/GPUType 最多 64 字节，名称最多 128 字节；gpu-num 为正整数字符串，cpu/memory 为正数字符串，单位核/GiB。
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
                     * 获取分页偏移量，默认为 0，必须大于等于 0。
                     * @return Offset 分页偏移量，默认为 0，必须大于等于 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认为 0，必须大于等于 0。
                     * @param _offset 分页偏移量，默认为 0，必须大于等于 0。
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
                     * 获取每页条数，省略或传 0 时取 100；非零取值范围 1–500。
                     * @return Limit 每页条数，省略或传 0 时取 100；非零取值范围 1–500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数，省略或传 0 时取 100；非零取值范围 1–500。
                     * @param _limit 每页条数，省略或传 0 时取 100；非零取值范围 1–500。
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
                     * 过滤条件，最多 10 项，Name 不可重复，每项 Values 为 1–10 个值。不同 Name 为 AND、同一 Values 为 OR。支持 resource-group-id（精确 ID）、resource-group-name（精确名称）、resource-group-name-like（普通文本子串，% 和 _ 不作为通配符）、gpu-type、gpu-num、cpu、memory。ID/GPUType 最多 64 字节，名称最多 128 字节；gpu-num 为正整数字符串，cpu/memory 为正数字符串，单位核/GiB。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页偏移量，默认为 0，必须大于等于 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数，省略或传 0 时取 100；非零取值范围 1–500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSREQUEST_H_
