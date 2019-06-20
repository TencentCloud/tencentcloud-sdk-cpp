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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_ECCREQUEST_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_ECCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * ECC请求参数结构体
                */
                class ECCRequest : public AbstractModel
                {
                public:
                    ECCRequest();
                    ~ECCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作文文本，必填
                     * @return Content 作文文本，必填
                     */
                    std::string GetContent() const;

                    /**
                     * 设置作文文本，必填
                     * @param Content 作文文本，必填
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取作文题目，可选参数
                     * @return Title 作文题目，可选参数
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置作文题目，可选参数
                     * @param Title 作文题目，可选参数
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取年级标准， 默认以cet4为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及cet4和cet6 分别表示 英语4级和6级。
                     * @return Grade 年级标准， 默认以cet4为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及cet4和cet6 分别表示 英语4级和6级。
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置年级标准， 默认以cet4为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及cet4和cet6 分别表示 英语4级和6级。
                     * @param Grade 年级标准， 默认以cet4为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及cet4和cet6 分别表示 英语4级和6级。
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取作文提纲，可选参数，作文的写作要求。
                     * @return Outline 作文提纲，可选参数，作文的写作要求。
                     */
                    std::string GetOutline() const;

                    /**
                     * 设置作文提纲，可选参数，作文的写作要求。
                     * @param Outline 作文提纲，可选参数，作文的写作要求。
                     */
                    void SetOutline(const std::string& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * @return ModelSubject 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     */
                    std::string GetModelSubject() const;

                    /**
                     * 设置范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * @param ModelSubject 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     */
                    void SetModelSubject(const std::string& _modelSubject);

                    /**
                     * 判断参数 ModelSubject 是否已赋值
                     * @return ModelSubject 是否已赋值
                     */
                    bool ModelSubjectHasBeenSet() const;

                    /**
                     * 获取范文内容，可选参数，同上，范文的正文部分。
                     * @return ModelContent 范文内容，可选参数，同上，范文的正文部分。
                     */
                    std::string GetModelContent() const;

                    /**
                     * 设置范文内容，可选参数，同上，范文的正文部分。
                     * @param ModelContent 范文内容，可选参数，同上，范文的正文部分。
                     */
                    void SetModelContent(const std::string& _modelContent);

                    /**
                     * 判断参数 ModelContent 是否已赋值
                     * @return ModelContent 是否已赋值
                     */
                    bool ModelContentHasBeenSet() const;

                private:

                    /**
                     * 作文文本，必填
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 作文题目，可选参数
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 年级标准， 默认以cet4为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及cet4和cet6 分别表示 英语4级和6级。
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 作文提纲，可选参数，作文的写作要求。
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     */
                    std::string m_modelSubject;
                    bool m_modelSubjectHasBeenSet;

                    /**
                     * 范文内容，可选参数，同上，范文的正文部分。
                     */
                    std::string m_modelContent;
                    bool m_modelContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_ECCREQUEST_H_
