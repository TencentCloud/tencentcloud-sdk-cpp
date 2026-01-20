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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKDELIVERSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKDELIVERSREQUEST_H_

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
                * DescribeSplunkDelivers请求参数结构体
                */
                class DescribeSplunkDeliversRequest : public AbstractModel
                {
                public:
                    DescribeSplunkDeliversRequest();
                    ~DescribeSplunkDeliversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题Id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @return TopicId <p>日志主题Id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题Id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @param _topicId <p>日志主题Id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
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
                     * 获取<ul><li>taskId 按照【任务id】进行过滤。 类型：String 必选：否  </li><li>name 按照【任务名称】进行过滤。 类型：String 必选：否  </li><li>statusFlag 按照【状态】进行过滤。 类型：String 必选：否<br /> 每次请求的Filters的上限为10，Filter.Values的上限为10。</li></ul>
                     * @return Filters <ul><li>taskId 按照【任务id】进行过滤。 类型：String 必选：否  </li><li>name 按照【任务名称】进行过滤。 类型：String 必选：否  </li><li>statusFlag 按照【状态】进行过滤。 类型：String 必选：否<br /> 每次请求的Filters的上限为10，Filter.Values的上限为10。</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>taskId 按照【任务id】进行过滤。 类型：String 必选：否  </li><li>name 按照【任务名称】进行过滤。 类型：String 必选：否  </li><li>statusFlag 按照【状态】进行过滤。 类型：String 必选：否<br /> 每次请求的Filters的上限为10，Filter.Values的上限为10。</li></ul>
                     * @param _filters <ul><li>taskId 按照【任务id】进行过滤。 类型：String 必选：否  </li><li>name 按照【任务名称】进行过滤。 类型：String 必选：否  </li><li>statusFlag 按照【状态】进行过滤。 类型：String 必选：否<br /> 每次请求的Filters的上限为10，Filter.Values的上限为10。</li></ul>
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
                     * <p>日志主题Id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <ul><li>taskId 按照【任务id】进行过滤。 类型：String 必选：否  </li><li>name 按照【任务名称】进行过滤。 类型：String 必选：否  </li><li>statusFlag 按照【状态】进行过滤。 类型：String 必选：否<br /> 每次请求的Filters的上限为10，Filter.Values的上限为10。</li></ul>
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKDELIVERSREQUEST_H_
