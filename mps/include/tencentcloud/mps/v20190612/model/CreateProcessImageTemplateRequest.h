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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_

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
                * CreateProcessImageTemplate请求参数结构体
                */
                class CreateProcessImageTemplateRequest : public AbstractModel
                {
                public:
                    CreateProcessImageTemplateRequest();
                    ~CreateProcessImageTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片处理模板。
                     * @return ProcessImageTemplate 图片处理模板。
                     * 
                     */
                    ImageTaskInput GetProcessImageTemplate() const;

                    /**
                     * 设置图片处理模板。
                     * @param _processImageTemplate 图片处理模板。
                     * 
                     */
                    void SetProcessImageTemplate(const ImageTaskInput& _processImageTemplate);

                    /**
                     * 判断参数 ProcessImageTemplate 是否已赋值
                     * @return ProcessImageTemplate 是否已赋值
                     * 
                     */
                    bool ProcessImageTemplateHasBeenSet() const;

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
                     * 获取图片处理模板描述信息，长度限制：256个字符。
                     * @return Comment 图片处理模板描述信息，长度限制：256个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置图片处理模板描述信息，长度限制：256个字符。
                     * @param _comment 图片处理模板描述信息，长度限制：256个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 图片处理模板。
                     */
                    ImageTaskInput m_processImageTemplate;
                    bool m_processImageTemplateHasBeenSet;

                    /**
                     * 图片处理模板名称，长度限制：64个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片处理模板描述信息，长度限制：256个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_
