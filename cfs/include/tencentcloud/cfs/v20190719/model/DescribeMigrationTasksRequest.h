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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_

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
                * DescribeMigrationTasks请求参数结构体
                */
                class DescribeMigrationTasksRequest : public AbstractModel
                {
                public:
                    DescribeMigrationTasksRequest();
                    ~DescribeMigrationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
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
                     * 获取<br><li> taskId按照【迁移任务id】进行过滤。类型：String必选：否<br></li><br><li>  taskName按照【迁移任务名字】进行模糊搜索过滤。类型：String必选：否每次请求的Filters的上限为10，Filter.Values的上限为100。</li>
                     * @return Filters <br><li> taskId按照【迁移任务id】进行过滤。类型：String必选：否<br></li><br><li>  taskName按照【迁移任务名字】进行模糊搜索过滤。类型：String必选：否每次请求的Filters的上限为10，Filter.Values的上限为100。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<br><li> taskId按照【迁移任务id】进行过滤。类型：String必选：否<br></li><br><li>  taskName按照【迁移任务名字】进行模糊搜索过滤。类型：String必选：否每次请求的Filters的上限为10，Filter.Values的上限为100。</li>
                     * @param _filters <br><li> taskId按照【迁移任务id】进行过滤。类型：String必选：否<br></li><br><li>  taskName按照【迁移任务名字】进行模糊搜索过滤。类型：String必选：否每次请求的Filters的上限为10，Filter.Values的上限为100。</li>
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
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <br><li> taskId按照【迁移任务id】进行过滤。类型：String必选：否<br></li><br><li>  taskName按照【迁移任务名字】进行模糊搜索过滤。类型：String必选：否每次请求的Filters的上限为10，Filter.Values的上限为100。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_
