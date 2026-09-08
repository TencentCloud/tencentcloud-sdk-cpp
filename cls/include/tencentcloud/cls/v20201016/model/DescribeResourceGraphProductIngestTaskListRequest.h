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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKLISTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKLISTREQUEST_H_

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
                * DescribeResourceGraphProductIngestTaskList请求参数结构体
                */
                class DescribeResourceGraphProductIngestTaskListRequest : public AbstractModel
                {
                public:
                    DescribeResourceGraphProductIngestTaskListRequest();
                    ~DescribeResourceGraphProductIngestTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p><ul><li>taskId 按照【接入任务id】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>product 按照【接入产品】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>name 按照【接入任务名称】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>status 按照【接入任务状态】进行过滤。类型：int。必选：否 ；0：初始化中；1：已接入；2：接入失败；3：删除中；5：删除失败<br>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。</li></ul>
                     * @return Filters <p>过滤条件</p><ul><li>taskId 按照【接入任务id】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>product 按照【接入产品】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>name 按照【接入任务名称】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>status 按照【接入任务状态】进行过滤。类型：int。必选：否 ；0：初始化中；1：已接入；2：接入失败；3：删除中；5：删除失败<br>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p><ul><li>taskId 按照【接入任务id】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>product 按照【接入产品】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>name 按照【接入任务名称】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>status 按照【接入任务状态】进行过滤。类型：int。必选：否 ；0：初始化中；1：已接入；2：接入失败；3：删除中；5：删除失败<br>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。</li></ul>
                     * @param _filters <p>过滤条件</p><ul><li>taskId 按照【接入任务id】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>product 按照【接入产品】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>name 按照【接入任务名称】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>status 按照【接入任务状态】进行过滤。类型：int。必选：否 ；0：初始化中；1：已接入；2：接入失败；3：删除中；5：删除失败<br>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。</li></ul>
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
                     * 获取<p>分页偏移量，默认 0</p>
                     * @return Offset <p>分页偏移量，默认 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认 0</p>
                     * @param _offset <p>分页偏移量，默认 0</p>
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
                     * 获取<p>分页单页数量，默认 20，最大 100</p>
                     * @return Limit <p>分页单页数量，默认 20，最大 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页数量，默认 20，最大 100</p>
                     * @param _limit <p>分页单页数量，默认 20，最大 100</p>
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
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>过滤条件</p><ul><li>taskId 按照【接入任务id】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>product 按照【接入产品】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>name 按照【接入任务名称】进行过滤，默认为模糊匹配。类型：String。必选：否 </li><li>status 按照【接入任务状态】进行过滤。类型：int。必选：否 ；0：初始化中；1：已接入；2：接入失败；3：删除中；5：删除失败<br>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页偏移量，默认 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页数量，默认 20，最大 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKLISTREQUEST_H_
