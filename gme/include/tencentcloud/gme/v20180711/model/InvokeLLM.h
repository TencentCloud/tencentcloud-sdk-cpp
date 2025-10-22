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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_INVOKELLM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_INVOKELLM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 调用服务端主动发起请求到LLM
                */
                class InvokeLLM : public AbstractModel
                {
                public:
                    InvokeLLM();
                    ~InvokeLLM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求LLM的内容
                     * @return Content 请求LLM的内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置请求LLM的内容
                     * @param _content 请求LLM的内容
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
                     * 获取是否允许该文本打断机器人说话
                     * @return Interrupt 是否允许该文本打断机器人说话
                     * 
                     */
                    bool GetInterrupt() const;

                    /**
                     * 设置是否允许该文本打断机器人说话
                     * @param _interrupt 是否允许该文本打断机器人说话
                     * 
                     */
                    void SetInterrupt(const bool& _interrupt);

                    /**
                     * 判断参数 Interrupt 是否已赋值
                     * @return Interrupt 是否已赋值
                     * 
                     */
                    bool InterruptHasBeenSet() const;

                private:

                    /**
                     * 请求LLM的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否允许该文本打断机器人说话
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_INVOKELLM_H_
