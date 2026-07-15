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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBES3RECHARGESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBES3RECHARGESREQUEST_H_

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
                * DescribeS3Recharges请求参数结构体
                */
                class DescribeS3RechargesRequest : public AbstractModel
                {
                public:
                    DescribeS3RechargesRequest();
                    ~DescribeS3RechargesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<ul><li>name 按照【主题名称】进行过滤，默认为模糊匹配，可使用 PreciseSearch 参数设置为精确匹配。类型：String。必选：否</li><li>bucket 按照【S3 存储桶名称】进行过滤。类型：String。必选：否</li><li>status 按照【任务状态】进行过滤，支持0:已创建, 1:运行中, 2:已停止, 3:已完成, 4:运行失败。 类型：String。必选：否</li><li>enable 按照【启用状态】进行过滤，支持0:暂停，1:启用。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为10。</p>
                     * @return Filters <ul><li>name 按照【主题名称】进行过滤，默认为模糊匹配，可使用 PreciseSearch 参数设置为精确匹配。类型：String。必选：否</li><li>bucket 按照【S3 存储桶名称】进行过滤。类型：String。必选：否</li><li>status 按照【任务状态】进行过滤，支持0:已创建, 1:运行中, 2:已停止, 3:已完成, 4:运行失败。 类型：String。必选：否</li><li>enable 按照【启用状态】进行过滤，支持0:暂停，1:启用。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为10。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>name 按照【主题名称】进行过滤，默认为模糊匹配，可使用 PreciseSearch 参数设置为精确匹配。类型：String。必选：否</li><li>bucket 按照【S3 存储桶名称】进行过滤。类型：String。必选：否</li><li>status 按照【任务状态】进行过滤，支持0:已创建, 1:运行中, 2:已停止, 3:已完成, 4:运行失败。 类型：String。必选：否</li><li>enable 按照【启用状态】进行过滤，支持0:暂停，1:启用。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为10。</p>
                     * @param _filters <ul><li>name 按照【主题名称】进行过滤，默认为模糊匹配，可使用 PreciseSearch 参数设置为精确匹配。类型：String。必选：否</li><li>bucket 按照【S3 存储桶名称】进行过滤。类型：String。必选：否</li><li>status 按照【任务状态】进行过滤，支持0:已创建, 1:运行中, 2:已停止, 3:已完成, 4:运行失败。 类型：String。必选：否</li><li>enable 按照【启用状态】进行过滤，支持0:暂停，1:启用。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为10。</p>
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
                     * 获取<p>分页的偏移量，默认值为0。</p>
                     * @return Offset <p>分页的偏移量，默认值为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页的偏移量，默认值为0。</p>
                     * @param _offset <p>分页的偏移量，默认值为0。</p>
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
                     * 获取<p>分页单页限制数目，默认值为20，最大值100。</p>
                     * @return Limit <p>分页单页限制数目，默认值为20，最大值100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页限制数目，默认值为20，最大值100。</p>
                     * @param _limit <p>分页单页限制数目，默认值为20，最大值100。</p>
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
                     * <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <ul><li>name 按照【主题名称】进行过滤，默认为模糊匹配，可使用 PreciseSearch 参数设置为精确匹配。类型：String。必选：否</li><li>bucket 按照【S3 存储桶名称】进行过滤。类型：String。必选：否</li><li>status 按照【任务状态】进行过滤，支持0:已创建, 1:运行中, 2:已停止, 3:已完成, 4:运行失败。 类型：String。必选：否</li><li>enable 按照【启用状态】进行过滤，支持0:暂停，1:启用。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为10。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页的偏移量，默认值为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页限制数目，默认值为20，最大值100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBES3RECHARGESREQUEST_H_
