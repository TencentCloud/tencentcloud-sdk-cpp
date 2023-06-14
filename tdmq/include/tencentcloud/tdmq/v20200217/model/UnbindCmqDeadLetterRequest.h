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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_UNBINDCMQDEADLETTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_UNBINDCMQDEADLETTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * UnbindCmqDeadLetter请求参数结构体
                */
                class UnbindCmqDeadLetterRequest : public AbstractModel
                {
                public:
                    UnbindCmqDeadLetterRequest();
                    ~UnbindCmqDeadLetterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取死信策略源队列名称，调用本接口会清空该队列的死信队列策略。
                     * @return SourceQueueName 死信策略源队列名称，调用本接口会清空该队列的死信队列策略。
                     * 
                     */
                    std::string GetSourceQueueName() const;

                    /**
                     * 设置死信策略源队列名称，调用本接口会清空该队列的死信队列策略。
                     * @param _sourceQueueName 死信策略源队列名称，调用本接口会清空该队列的死信队列策略。
                     * 
                     */
                    void SetSourceQueueName(const std::string& _sourceQueueName);

                    /**
                     * 判断参数 SourceQueueName 是否已赋值
                     * @return SourceQueueName 是否已赋值
                     * 
                     */
                    bool SourceQueueNameHasBeenSet() const;

                private:

                    /**
                     * 死信策略源队列名称，调用本接口会清空该队列的死信队列策略。
                     */
                    std::string m_sourceQueueName;
                    bool m_sourceQueueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_UNBINDCMQDEADLETTERREQUEST_H_
