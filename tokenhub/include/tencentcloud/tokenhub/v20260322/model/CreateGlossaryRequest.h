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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateGlossary请求参数结构体
                */
                class CreateGlossaryRequest : public AbstractModel
                {
                public:
                    CreateGlossaryRequest();
                    ~CreateGlossaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取术语库名称。最大 50 字符。
                     * @return Name 术语库名称。最大 50 字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置术语库名称。最大 50 字符。
                     * @param _name 术语库名称。最大 50 字符。
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
                     * 获取源语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * @return Source 源语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * @param _source 源语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * @return Target 目标语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * @param _target 目标语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取术语库描述。最大 255 字符。
                     * @return Description 术语库描述。最大 255 字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置术语库描述。最大 255 字符。
                     * @param _description 术语库描述。最大 255 字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 术语库名称。最大 50 字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言代码。最大 16 字符。例如：zh（中文）、en（英文）。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 术语库描述。最大 255 字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_
