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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQQUEUERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQQUEUERESPONSE_H_

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
                * CreateCmqQueue返回参数结构体
                */
                class CreateCmqQueueResponse : public AbstractModel
                {
                public:
                    CreateCmqQueueResponse();
                    ~CreateCmqQueueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建成功的queueId
                     * @return QueueId 创建成功的queueId
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的queueId
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQQUEUERESPONSE_H_
