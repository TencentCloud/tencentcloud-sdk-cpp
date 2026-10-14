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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ReplyMessage.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流运行实例输出信息
                */
                class WorkflowRunOutput : public AbstractModel
                {
                public:
                    WorkflowRunOutput();
                    ~WorkflowRunOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流输出
                     * @return Output 工作流输出
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置工作流输出
                     * @param _output 工作流输出
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取当前的回复消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestMessage 当前的回复消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReplyMessage GetLatestMessage() const;

                    /**
                     * 设置当前的回复消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestMessage 当前的回复消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestMessage(const ReplyMessage& _latestMessage);

                    /**
                     * 判断参数 LatestMessage 是否已赋值
                     * @return LatestMessage 是否已赋值
                     * 
                     */
                    bool LatestMessageHasBeenSet() const;

                private:

                    /**
                     * 工作流输出
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 当前的回复消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReplyMessage m_latestMessage;
                    bool m_latestMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_
