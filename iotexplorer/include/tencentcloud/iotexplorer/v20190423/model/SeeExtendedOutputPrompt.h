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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUTPROMPT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUTPROMPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 扩展输出提示词
                */
                class SeeExtendedOutputPrompt : public AbstractModel
                {
                public:
                    SeeExtendedOutputPrompt();
                    ~SeeExtendedOutputPrompt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>提示词标识符</p><p>枚举值：</p><ul><li>custom： 自定义</li></ul>
                     * @return Key <p>提示词标识符</p><p>枚举值：</p><ul><li>custom： 自定义</li></ul>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>提示词标识符</p><p>枚举值：</p><ul><li>custom： 自定义</li></ul>
                     * @param _key <p>提示词标识符</p><p>枚举值：</p><ul><li>custom： 自定义</li></ul>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>提示词内容</p>
                     * @return Prompt <p>提示词内容</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词内容</p>
                     * @param _prompt <p>提示词内容</p>
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
                     * <p>提示词标识符</p><p>枚举值：</p><ul><li>custom： 自定义</li></ul>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>提示词内容</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUTPROMPT_H_
