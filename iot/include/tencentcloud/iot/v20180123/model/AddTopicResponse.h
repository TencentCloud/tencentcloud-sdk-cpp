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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_ADDTOPICRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_ADDTOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/Topic.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AddTopic返回参数结构体
                */
                class AddTopicResponse : public AbstractModel
                {
                public:
                    AddTopicResponse();
                    ~AddTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic信息
                     * @return Topic Topic信息
                     * 
                     */
                    Topic GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * Topic信息
                     */
                    Topic m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_ADDTOPICRESPONSE_H_
