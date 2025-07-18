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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetTokenCount请求参数结构体
                */
                class GetTokenCountRequest : public AbstractModel
                {
                public:
                    GetTokenCountRequest();
                    ~GetTokenCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入文本
                     * @return Prompt 输入文本
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置输入文本
                     * @param _prompt 输入文本
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * 输入文本
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTREQUEST_H_
