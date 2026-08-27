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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKARESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/KafkaConnectivity.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeKafka返回参数结构体
                */
                class DescribeKafkaResponse : public AbstractModel
                {
                public:
                    DescribeKafkaResponse();
                    ~DescribeKafkaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连通性列表
                     * @return KafkaConnectivityList 连通性列表
                     * 
                     */
                    std::vector<KafkaConnectivity> GetKafkaConnectivityList() const;

                    /**
                     * 判断参数 KafkaConnectivityList 是否已赋值
                     * @return KafkaConnectivityList 是否已赋值
                     * 
                     */
                    bool KafkaConnectivityListHasBeenSet() const;

                private:

                    /**
                     * 连通性列表
                     */
                    std::vector<KafkaConnectivity> m_kafkaConnectivityList;
                    bool m_kafkaConnectivityListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKARESPONSE_H_
