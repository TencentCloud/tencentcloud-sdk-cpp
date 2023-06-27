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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETREQUEST_H_

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
                * ComposeCouplet请求参数结构体
                */
                class ComposeCoupletRequest : public AbstractModel
                {
                public:
                    ComposeCoupletRequest();
                    ~ComposeCoupletRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成对联的关键词。长度需>=2，当长度>2时，自动截取前两个字作为关键字。内容需为常用汉字（不含有数字、英文、韩语、日语、符号等等其他）。
                     * @return Text 生成对联的关键词。长度需>=2，当长度>2时，自动截取前两个字作为关键字。内容需为常用汉字（不含有数字、英文、韩语、日语、符号等等其他）。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置生成对联的关键词。长度需>=2，当长度>2时，自动截取前两个字作为关键字。内容需为常用汉字（不含有数字、英文、韩语、日语、符号等等其他）。
                     * @param _text 生成对联的关键词。长度需>=2，当长度>2时，自动截取前两个字作为关键字。内容需为常用汉字（不含有数字、英文、韩语、日语、符号等等其他）。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取返回的文本结果为繁体还是简体。0：简体；1：繁体。默认为0。
                     * @return TargetType 返回的文本结果为繁体还是简体。0：简体；1：繁体。默认为0。
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置返回的文本结果为繁体还是简体。0：简体；1：繁体。默认为0。
                     * @param _targetType 返回的文本结果为繁体还是简体。0：简体；1：繁体。默认为0。
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * 生成对联的关键词。长度需>=2，当长度>2时，自动截取前两个字作为关键字。内容需为常用汉字（不含有数字、英文、韩语、日语、符号等等其他）。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 返回的文本结果为繁体还是简体。0：简体；1：繁体。默认为0。
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETREQUEST_H_
