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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_

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
                * OpenKafkaConsumer请求参数结构体
                */
                class OpenKafkaConsumerRequest : public AbstractModel
                {
                public:
                    OpenKafkaConsumerRequest();
                    ~OpenKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLS控制台创建的TopicId
                     * @return FromTopicId CLS控制台创建的TopicId
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置CLS控制台创建的TopicId
                     * @param FromTopicId CLS控制台创建的TopicId
                     */
                    void SetFromTopicId(const std::string& _fromTopicId);

                    /**
                     * 判断参数 FromTopicId 是否已赋值
                     * @return FromTopicId 是否已赋值
                     */
                    bool FromTopicIdHasBeenSet() const;

                private:

                    /**
                     * CLS控制台创建的TopicId
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
