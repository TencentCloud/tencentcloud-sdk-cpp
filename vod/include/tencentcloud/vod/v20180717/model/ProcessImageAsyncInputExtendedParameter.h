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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUTEXTENDEDPARAMETER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUTEXTENDEDPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片异步处理扩展参数。
                */
                class ProcessImageAsyncInputExtendedParameter : public AbstractModel
                {
                public:
                    ProcessImageAsyncInputExtendedParameter();
                    ~ProcessImageAsyncInputExtendedParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入模型的提示词。
                     * @return Prompts 输入模型的提示词。
                     * 
                     */
                    std::vector<std::string> GetPrompts() const;

                    /**
                     * 设置输入模型的提示词。
                     * @param _prompts 输入模型的提示词。
                     * 
                     */
                    void SetPrompts(const std::vector<std::string>& _prompts);

                    /**
                     * 判断参数 Prompts 是否已赋值
                     * @return Prompts 是否已赋值
                     * 
                     */
                    bool PromptsHasBeenSet() const;

                private:

                    /**
                     * 输入模型的提示词。
                     */
                    std::vector<std::string> m_prompts;
                    bool m_promptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUTEXTENDEDPARAMETER_H_
