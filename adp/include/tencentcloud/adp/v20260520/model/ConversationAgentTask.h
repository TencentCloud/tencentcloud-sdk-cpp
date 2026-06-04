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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AgentTask 智能体任务信息
                */
                class ConversationAgentTask : public AbstractModel
                {
                public:
                    ConversationAgentTask();
                    ~ConversationAgentTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务内容</p>
                     * @return Content <p>任务内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>任务内容</p>
                     * @param _content <p>任务内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>任务序号</p>
                     * @return Index <p>任务序号</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>任务序号</p>
                     * @param _index <p>任务序号</p>
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * @return Status <p>任务状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * @param _status <p>任务状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>任务内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>任务序号</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>任务状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_
