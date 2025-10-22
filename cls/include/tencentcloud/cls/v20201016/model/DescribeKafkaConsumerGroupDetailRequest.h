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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeKafkaConsumerGroupDetail请求参数结构体
                */
                class DescribeKafkaConsumerGroupDetailRequest : public AbstractModel
                {
                public:
                    DescribeKafkaConsumerGroupDetailRequest();
                    ~DescribeKafkaConsumerGroupDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return TopicId 日志主题id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _topicId 日志主题id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
                     * 获取消费组名称
                     * @return Group 消费组名称
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置消费组名称
                     * @param _group 消费组名称
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                private:

                    /**
                     * 日志主题id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILREQUEST_H_
