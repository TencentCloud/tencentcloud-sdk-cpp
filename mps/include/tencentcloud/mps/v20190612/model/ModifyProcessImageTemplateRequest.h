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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyProcessImageTemplate请求参数结构体
                */
                class ModifyProcessImageTemplateRequest : public AbstractModel
                {
                public:
                    ModifyProcessImageTemplateRequest();
                    ~ModifyProcessImageTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片处理模板唯一标识。
                     * @return Definition 图片处理模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置图片处理模板唯一标识。
                     * @param _definition 图片处理模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取图片处理模板名称，长度限制：64个字符。
                     * @return Name 图片处理模板名称，长度限制：64个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置图片处理模板名称，长度限制：64个字符。
                     * @param _name 图片处理模板名称，长度限制：64个字符。
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
                     * 获取模板描述信息，长度限制256个字符。
                     * @return Comment 模板描述信息，长度限制256个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制256个字符。
                     * @param _comment 模板描述信息，长度限制256个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取图片处理模板参数。
                     * @return ProcessImageTemplate 图片处理模板参数。
                     * 
                     */
                    ImageTaskInput GetProcessImageTemplate() const;

                    /**
                     * 设置图片处理模板参数。
                     * @param _processImageTemplate 图片处理模板参数。
                     * 
                     */
                    void SetProcessImageTemplate(const ImageTaskInput& _processImageTemplate);

                    /**
                     * 判断参数 ProcessImageTemplate 是否已赋值
                     * @return ProcessImageTemplate 是否已赋值
                     * 
                     */
                    bool ProcessImageTemplateHasBeenSet() const;

                private:

                    /**
                     * 图片处理模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 图片处理模板名称，长度限制：64个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制256个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 图片处理模板参数。
                     */
                    ImageTaskInput m_processImageTemplate;
                    bool m_processImageTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_
