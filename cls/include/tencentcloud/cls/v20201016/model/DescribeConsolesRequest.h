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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSOLESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSOLESREQUEST_H_

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
                * DescribeConsoles请求参数结构体
                */
                class DescribeConsolesRequest : public AbstractModel
                {
                public:
                    DescribeConsolesRequest();
                    ~DescribeConsolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页的偏移量，默认值为0。</p>
                     * @return Offset <p>分页的偏移量，默认值为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页的偏移量，默认值为0。</p>
                     * @param _offset <p>分页的偏移量，默认值为0。</p>
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
                     * 获取<p>分页单页限制数目，默认值为100，最大值100。</p>
                     * @return Limit <p>分页单页限制数目，默认值为100，最大值100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页限制数目，默认值为100，最大值100。</p>
                     * @param _limit <p>分页单页限制数目，默认值为100，最大值100。</p>
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
                     * 获取<li> DomainPrefix按照【域名前缀】进行过滤。类型：String必选：否</li><li> ConsoleId按照【DataSight实例ID】进行过滤。类型：String必选：否</li><li> tagKey按照【标签键】进行过滤。类型：String必选：否</li><li> tag:tagKey按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，例如tag:exampleKey。类型：String必选：否</li>
                     * @return Filters <li> DomainPrefix按照【域名前缀】进行过滤。类型：String必选：否</li><li> ConsoleId按照【DataSight实例ID】进行过滤。类型：String必选：否</li><li> tagKey按照【标签键】进行过滤。类型：String必选：否</li><li> tag:tagKey按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，例如tag:exampleKey。类型：String必选：否</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li> DomainPrefix按照【域名前缀】进行过滤。类型：String必选：否</li><li> ConsoleId按照【DataSight实例ID】进行过滤。类型：String必选：否</li><li> tagKey按照【标签键】进行过滤。类型：String必选：否</li><li> tag:tagKey按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，例如tag:exampleKey。类型：String必选：否</li>
                     * @param _filters <li> DomainPrefix按照【域名前缀】进行过滤。类型：String必选：否</li><li> ConsoleId按照【DataSight实例ID】进行过滤。类型：String必选：否</li><li> tagKey按照【标签键】进行过滤。类型：String必选：否</li><li> tag:tagKey按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，例如tag:exampleKey。类型：String必选：否</li>
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
                     * <p>分页的偏移量，默认值为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页限制数目，默认值为100，最大值100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <li> DomainPrefix按照【域名前缀】进行过滤。类型：String必选：否</li><li> ConsoleId按照【DataSight实例ID】进行过滤。类型：String必选：否</li><li> tagKey按照【标签键】进行过滤。类型：String必选：否</li><li> tag:tagKey按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，例如tag:exampleKey。类型：String必选：否</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSOLESREQUEST_H_
