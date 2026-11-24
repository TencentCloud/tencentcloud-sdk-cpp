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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATELABEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATELABEL_H_

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
                * 提示词模板标签
                */
                class PromptTemplateLabel : public AbstractModel
                {
                public:
                    PromptTemplateLabel();
                    ~PromptTemplateLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签内容
                     * @return Content 标签内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置标签内容
                     * @param _content 标签内容
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
                     * 获取标签ID
                     * @return PromptTemplateLabelId 标签ID
                     * 
                     */
                    std::string GetPromptTemplateLabelId() const;

                    /**
                     * 设置标签ID
                     * @param _promptTemplateLabelId 标签ID
                     * 
                     */
                    void SetPromptTemplateLabelId(const std::string& _promptTemplateLabelId);

                    /**
                     * 判断参数 PromptTemplateLabelId 是否已赋值
                     * @return PromptTemplateLabelId 是否已赋值
                     * 
                     */
                    bool PromptTemplateLabelIdHasBeenSet() const;

                    /**
                     * 获取标签类型。1-系统标签, 2-自定义标签
                     * @return PromptTemplateLabelType 标签类型。1-系统标签, 2-自定义标签
                     * 
                     */
                    int64_t GetPromptTemplateLabelType() const;

                    /**
                     * 设置标签类型。1-系统标签, 2-自定义标签
                     * @param _promptTemplateLabelType 标签类型。1-系统标签, 2-自定义标签
                     * 
                     */
                    void SetPromptTemplateLabelType(const int64_t& _promptTemplateLabelType);

                    /**
                     * 判断参数 PromptTemplateLabelType 是否已赋值
                     * @return PromptTemplateLabelType 是否已赋值
                     * 
                     */
                    bool PromptTemplateLabelTypeHasBeenSet() const;

                private:

                    /**
                     * 标签内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 标签ID
                     */
                    std::string m_promptTemplateLabelId;
                    bool m_promptTemplateLabelIdHasBeenSet;

                    /**
                     * 标签类型。1-系统标签, 2-自定义标签
                     */
                    int64_t m_promptTemplateLabelType;
                    bool m_promptTemplateLabelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATELABEL_H_
