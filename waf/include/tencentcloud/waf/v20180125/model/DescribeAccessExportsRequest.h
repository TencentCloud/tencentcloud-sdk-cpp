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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAccessExports请求参数结构体
                */
                class DescribeAccessExportsRequest : public AbstractModel
                {
                public:
                    DescribeAccessExportsRequest();
                    ~DescribeAccessExportsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @return TopicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @param _topicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
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
                     * 获取分页的偏移量，默认值为0
                     * @return Offset 分页的偏移量，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0
                     * @param _offset 分页的偏移量，默认值为0
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
                     * 获取分页单页限制数目，默认值为20，最大值100
                     * @return Limit 分页单页限制数目，默认值为20，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100
                     * @param _limit 分页单页限制数目，默认值为20，最大值100
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
                     * 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSREQUEST_H_
