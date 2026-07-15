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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AGENTTOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AGENTTOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * agent 应用主题信息
                */
                class AgentTopicInfo : public AbstractModel
                {
                public:
                    AgentTopicInfo();
                    ~AgentTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志主题id</p>
                     * @return TopicId <p>日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p>
                     * @param _topicId <p>日志主题id</p>
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
                     * 获取<p>主题对应的标识</p><p>Langfuse类型对应一个trace标识的日志主题</p>
                     * @return Flag <p>主题对应的标识</p><p>Langfuse类型对应一个trace标识的日志主题</p>
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置<p>主题对应的标识</p><p>Langfuse类型对应一个trace标识的日志主题</p>
                     * @param _flag <p>主题对应的标识</p><p>Langfuse类型对应一个trace标识的日志主题</p>
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>主题对应的标识</p><p>Langfuse类型对应一个trace标识的日志主题</p>
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AGENTTOPICINFO_H_
