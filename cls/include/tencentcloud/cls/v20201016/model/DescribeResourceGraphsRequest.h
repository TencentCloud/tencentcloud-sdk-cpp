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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphs请求参数结构体
                */
                class DescribeResourceGraphsRequest : public AbstractModel
                {
                public:
                    DescribeResourceGraphsRequest();
                    ~DescribeResourceGraphsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<ul><li>ResourceGraphId 按【资源图谱 ID】精确匹配。类型：String。必选：否</li><li>Name 按【资源图谱名称】模糊匹配。类型：String。必选：否</li><li>Status 按【状态】模糊匹配。类型：int。必选：否；0：初始化中；1：就绪；2：创建失败；3：删除中；5：删除失败</li><li>tagKey 按照【标签键】进行过滤。类型：String。必选：否</li><li>tag:tagKey 按照【标签键值对】进行过滤。tagKey 使用具体的标签键进行替换，例如 tag:exampleKey。类型：String。必选：否</li></ul>注意：每次请求的 Filters 上限 10，Filter.Values 上限 100。
                     * @return Filters <ul><li>ResourceGraphId 按【资源图谱 ID】精确匹配。类型：String。必选：否</li><li>Name 按【资源图谱名称】模糊匹配。类型：String。必选：否</li><li>Status 按【状态】模糊匹配。类型：int。必选：否；0：初始化中；1：就绪；2：创建失败；3：删除中；5：删除失败</li><li>tagKey 按照【标签键】进行过滤。类型：String。必选：否</li><li>tag:tagKey 按照【标签键值对】进行过滤。tagKey 使用具体的标签键进行替换，例如 tag:exampleKey。类型：String。必选：否</li></ul>注意：每次请求的 Filters 上限 10，Filter.Values 上限 100。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>ResourceGraphId 按【资源图谱 ID】精确匹配。类型：String。必选：否</li><li>Name 按【资源图谱名称】模糊匹配。类型：String。必选：否</li><li>Status 按【状态】模糊匹配。类型：int。必选：否；0：初始化中；1：就绪；2：创建失败；3：删除中；5：删除失败</li><li>tagKey 按照【标签键】进行过滤。类型：String。必选：否</li><li>tag:tagKey 按照【标签键值对】进行过滤。tagKey 使用具体的标签键进行替换，例如 tag:exampleKey。类型：String。必选：否</li></ul>注意：每次请求的 Filters 上限 10，Filter.Values 上限 100。
                     * @param _filters <ul><li>ResourceGraphId 按【资源图谱 ID】精确匹配。类型：String。必选：否</li><li>Name 按【资源图谱名称】模糊匹配。类型：String。必选：否</li><li>Status 按【状态】模糊匹配。类型：int。必选：否；0：初始化中；1：就绪；2：创建失败；3：删除中；5：删除失败</li><li>tagKey 按照【标签键】进行过滤。类型：String。必选：否</li><li>tag:tagKey 按照【标签键值对】进行过滤。tagKey 使用具体的标签键进行替换，例如 tag:exampleKey。类型：String。必选：否</li></ul>注意：每次请求的 Filters 上限 10，Filter.Values 上限 100。
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
                     * 获取<p>分页偏移量</p><p>默认值：0</p>
                     * @return Offset <p>分页偏移量</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量</p><p>默认值：0</p>
                     * @param _offset <p>分页偏移量</p><p>默认值：0</p>
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
                     * 获取<p>分页单页数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @return Limit <p>分页单页数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @param _limit <p>分页单页数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <ul><li>ResourceGraphId 按【资源图谱 ID】精确匹配。类型：String。必选：否</li><li>Name 按【资源图谱名称】模糊匹配。类型：String。必选：否</li><li>Status 按【状态】模糊匹配。类型：int。必选：否；0：初始化中；1：就绪；2：创建失败；3：删除中；5：删除失败</li><li>tagKey 按照【标签键】进行过滤。类型：String。必选：否</li><li>tag:tagKey 按照【标签键值对】进行过滤。tagKey 使用具体的标签键进行替换，例如 tag:exampleKey。类型：String。必选：否</li></ul>注意：每次请求的 Filters 上限 10，Filter.Values 上限 100。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页偏移量</p><p>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHSREQUEST_H_
