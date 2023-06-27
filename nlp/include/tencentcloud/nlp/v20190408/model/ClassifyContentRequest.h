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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ClassifyContent请求参数结构体
                */
                class ClassifyContentRequest : public AbstractModel
                {
                public:
                    ClassifyContentRequest();
                    ~ClassifyContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待分类的文章的标题（仅支持UTF-8格式，不超过100字符）。
                     * @return Title 待分类的文章的标题（仅支持UTF-8格式，不超过100字符）。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置待分类的文章的标题（仅支持UTF-8格式，不超过100字符）。
                     * @param _title 待分类的文章的标题（仅支持UTF-8格式，不超过100字符）。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取待分类文章的内容, 每个元素对应一个段落。（仅支持UTF-8格式，文章内容长度总和不超过2000字符）
                     * @return Content 待分类文章的内容, 每个元素对应一个段落。（仅支持UTF-8格式，文章内容长度总和不超过2000字符）
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置待分类文章的内容, 每个元素对应一个段落。（仅支持UTF-8格式，文章内容长度总和不超过2000字符）
                     * @param _content 待分类文章的内容, 每个元素对应一个段落。（仅支持UTF-8格式，文章内容长度总和不超过2000字符）
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 待分类的文章的标题（仅支持UTF-8格式，不超过100字符）。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 待分类文章的内容, 每个元素对应一个段落。（仅支持UTF-8格式，文章内容长度总和不超过2000字符）
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTREQUEST_H_
