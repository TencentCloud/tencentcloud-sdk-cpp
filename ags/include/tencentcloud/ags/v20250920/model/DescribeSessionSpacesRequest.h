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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACESREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACESREQUEST_H_

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
                * DescribeSessionSpaces请求参数结构体
                */
                class DescribeSessionSpacesRequest : public AbstractModel
                {
                public:
                    DescribeSessionSpacesRequest();
                    ~DescribeSessionSpacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页查询的起始偏移量。</p>
                     * @return Offset <p>分页查询的起始偏移量。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询的起始偏移量。</p>
                     * @param _offset <p>分页查询的起始偏移量。</p>
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
                     * 获取<p>单次分页查询返回的会话空间数量。</p>
                     * @return Limit <p>单次分页查询返回的会话空间数量。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次分页查询返回的会话空间数量。</p>
                     * @param _limit <p>单次分页查询返回的会话空间数量。</p>
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
                     * 获取<p>会话空间筛选条件列表，支持按空间 ID 精确匹配、名称精确或模糊匹配、描述模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：Filter.Name 支持 space-id、name、name-like、description-like，不可重复。name 与 name-like 不可同时提供。Values 不可为空数组，筛选值不可为空或纯空白。匹配区分大小写，包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 name-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询名称包含“客服”或“测试”的会话空间。</p>
                     * @return Filters <p>会话空间筛选条件列表，支持按空间 ID 精确匹配、名称精确或模糊匹配、描述模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：Filter.Name 支持 space-id、name、name-like、description-like，不可重复。name 与 name-like 不可同时提供。Values 不可为空数组，筛选值不可为空或纯空白。匹配区分大小写，包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 name-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询名称包含“客服”或“测试”的会话空间。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>会话空间筛选条件列表，支持按空间 ID 精确匹配、名称精确或模糊匹配、描述模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：Filter.Name 支持 space-id、name、name-like、description-like，不可重复。name 与 name-like 不可同时提供。Values 不可为空数组，筛选值不可为空或纯空白。匹配区分大小写，包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 name-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询名称包含“客服”或“测试”的会话空间。</p>
                     * @param _filters <p>会话空间筛选条件列表，支持按空间 ID 精确匹配、名称精确或模糊匹配、描述模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：Filter.Name 支持 space-id、name、name-like、description-like，不可重复。name 与 name-like 不可同时提供。Values 不可为空数组，筛选值不可为空或纯空白。匹配区分大小写，包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 name-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询名称包含“客服”或“测试”的会话空间。</p>
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
                     * <p>分页查询的起始偏移量。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次分页查询返回的会话空间数量。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>会话空间筛选条件列表，支持按空间 ID 精确匹配、名称精确或模糊匹配、描述模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：Filter.Name 支持 space-id、name、name-like、description-like，不可重复。name 与 name-like 不可同时提供。Values 不可为空数组，筛选值不可为空或纯空白。匹配区分大小写，包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 name-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询名称包含“客服”或“测试”的会话空间。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACESREQUEST_H_
