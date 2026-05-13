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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLINTERACTIONROUND_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLINTERACTIONROUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AIRoundMessage.h>
#include <tencentcloud/ccc/v20200210/model/AIRoundPath.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 表示一轮完整的对话交互
                */
                class AICallInteractionRound : public AbstractModel
                {
                public:
                    AICallInteractionRound();
                    ~AICallInteractionRound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本轮对话的唯一标识 Id</p>
                     * @return RoundId <p>本轮对话的唯一标识 Id</p>
                     * 
                     */
                    std::string GetRoundId() const;

                    /**
                     * 设置<p>本轮对话的唯一标识 Id</p>
                     * @param _roundId <p>本轮对话的唯一标识 Id</p>
                     * 
                     */
                    void SetRoundId(const std::string& _roundId);

                    /**
                     * 判断参数 RoundId 是否已赋值
                     * @return RoundId 是否已赋值
                     * 
                     */
                    bool RoundIdHasBeenSet() const;

                    /**
                     * 获取<p>轮次</p>
                     * @return RoundIndex <p>轮次</p>
                     * 
                     */
                    int64_t GetRoundIndex() const;

                    /**
                     * 设置<p>轮次</p>
                     * @param _roundIndex <p>轮次</p>
                     * 
                     */
                    void SetRoundIndex(const int64_t& _roundIndex);

                    /**
                     * 判断参数 RoundIndex 是否已赋值
                     * @return RoundIndex 是否已赋值
                     * 
                     */
                    bool RoundIndexHasBeenSet() const;

                    /**
                     * 获取<p>用户回复分类的标签， json序列化后的表示</p>
                     * @return Tags <p>用户回复分类的标签， json序列化后的表示</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>用户回复分类的标签， json序列化后的表示</p>
                     * @param _tags <p>用户回复分类的标签， json序列化后的表示</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>本轮涉及到的消息内容</p>
                     * @return Messages <p>本轮涉及到的消息内容</p>
                     * 
                     */
                    std::vector<AIRoundMessage> GetMessages() const;

                    /**
                     * 设置<p>本轮涉及到的消息内容</p>
                     * @param _messages <p>本轮涉及到的消息内容</p>
                     * 
                     */
                    void SetMessages(const std::vector<AIRoundMessage>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>本轮对话在画布中经过的节点路径</p>
                     * @return Paths <p>本轮对话在画布中经过的节点路径</p>
                     * 
                     */
                    std::vector<AIRoundPath> GetPaths() const;

                    /**
                     * 设置<p>本轮对话在画布中经过的节点路径</p>
                     * @param _paths <p>本轮对话在画布中经过的节点路径</p>
                     * 
                     */
                    void SetPaths(const std::vector<AIRoundPath>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * <p>本轮对话的唯一标识 Id</p>
                     */
                    std::string m_roundId;
                    bool m_roundIdHasBeenSet;

                    /**
                     * <p>轮次</p>
                     */
                    int64_t m_roundIndex;
                    bool m_roundIndexHasBeenSet;

                    /**
                     * <p>用户回复分类的标签， json序列化后的表示</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>本轮涉及到的消息内容</p>
                     */
                    std::vector<AIRoundMessage> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>本轮对话在画布中经过的节点路径</p>
                     */
                    std::vector<AIRoundPath> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLINTERACTIONROUND_H_
