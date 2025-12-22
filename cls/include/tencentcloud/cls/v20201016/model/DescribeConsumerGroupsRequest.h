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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_

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
                * DescribeConsumerGroups请求参数结构体
                */
                class DescribeConsumerGroupsRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupsRequest();
                    ~DescribeConsumerGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集Id（日志主题所属的日志集）
                     * @return LogsetId 日志集Id（日志主题所属的日志集）
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集Id（日志主题所属的日志集）
                     * @param _logsetId 日志集Id（日志主题所属的日志集）
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取topic列表
                     * @return Topics topic列表
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置topic列表
                     * @param _topics topic列表
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * 日志集Id（日志主题所属的日志集）
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * topic列表
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_
