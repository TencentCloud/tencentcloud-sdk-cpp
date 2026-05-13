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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallInteractionRound.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAICallInteractionRecords返回参数结构体
                */
                class DescribeAICallInteractionRecordsResponse : public AbstractModel
                {
                public:
                    DescribeAICallInteractionRecordsResponse();
                    ~DescribeAICallInteractionRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回的会话交互结果</p>
                     * @return InteractionEventList <p>返回的会话交互结果</p>
                     * 
                     */
                    std::vector<AICallInteractionRound> GetInteractionEventList() const;

                    /**
                     * 判断参数 InteractionEventList 是否已赋值
                     * @return InteractionEventList 是否已赋值
                     * 
                     */
                    bool InteractionEventListHasBeenSet() const;

                private:

                    /**
                     * <p>返回的会话交互结果</p>
                     */
                    std::vector<AICallInteractionRound> m_interactionEventList;
                    bool m_interactionEventListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSRESPONSE_H_
