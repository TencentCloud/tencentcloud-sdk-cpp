/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERCLIENTRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERCLIENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerClient.h>
#include <tencentcloud/trocket/v20230308/model/TopicConsumeStats.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerClient返回参数结构体
                */
                class DescribeConsumerClientResponse : public AbstractModel
                {
                public:
                    DescribeConsumerClientResponse();
                    ~DescribeConsumerClientResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Client 客户端详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerClient GetClient() const;

                    /**
                     * 判断参数 Client 是否已赋值
                     * @return Client 是否已赋值
                     * 
                     */
                    bool ClientHasBeenSet() const;

                    /**
                     * 获取主题消费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicList 主题消费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TopicConsumeStats> GetTopicList() const;

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * 客户端详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerClient m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * 主题消费信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopicConsumeStats> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERCLIENTRESPONSE_H_
