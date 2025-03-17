/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHARACTER_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHARACTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 人物描述
                */
                class Character : public AbstractModel
                {
                public:
                    Character();
                    ~Character() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物名称
                     * @return Name 人物名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人物名称
                     * @param _name 人物名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人物对应SystemPrompt
                     * @return SystemPrompt 人物对应SystemPrompt
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置人物对应SystemPrompt
                     * @param _systemPrompt 人物对应SystemPrompt
                     * 
                     */
                    void SetSystemPrompt(const std::string& _systemPrompt);

                    /**
                     * 判断参数 SystemPrompt 是否已赋值
                     * @return SystemPrompt 是否已赋值
                     * 
                     */
                    bool SystemPromptHasBeenSet() const;

                private:

                    /**
                     * 人物名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人物对应SystemPrompt
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHARACTER_H_
