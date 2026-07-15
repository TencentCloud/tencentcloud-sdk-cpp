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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHVIEWSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHVIEWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeLogstashViews请求参数结构体
                */
                class DescribeLogstashViewsRequest : public AbstractModel
                {
                public:
                    DescribeLogstashViewsRequest();
                    ~DescribeLogstashViewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取longstash集群ID
                     * @return LogstashInstanceId longstash集群ID
                     * 
                     */
                    std::string GetLogstashInstanceId() const;

                    /**
                     * 设置longstash集群ID
                     * @param _logstashInstanceId longstash集群ID
                     * 
                     */
                    void SetLogstashInstanceId(const std::string& _logstashInstanceId);

                    /**
                     * 判断参数 LogstashInstanceId 是否已赋值
                     * @return LogstashInstanceId 是否已赋值
                     * 
                     */
                    bool LogstashInstanceIdHasBeenSet() const;

                private:

                    /**
                     * longstash集群ID
                     */
                    std::string m_logstashInstanceId;
                    bool m_logstashInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHVIEWSREQUEST_H_
