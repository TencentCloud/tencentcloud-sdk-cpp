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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSEPOETRYREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSEPOETRYREQUEST_H_

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
                * ComposePoetry请求参数结构体
                */
                class ComposePoetryRequest : public AbstractModel
                {
                public:
                    ComposePoetryRequest();
                    ~ComposePoetryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成诗词的关键词。
                     * @return Text 生成诗词的关键词。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置生成诗词的关键词。
                     * @param _text 生成诗词的关键词。
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
                     * 获取生成诗词的类型。0：藏头或藏身；1：藏头；2：藏身。默认为0。
                     * @return PoetryType 生成诗词的类型。0：藏头或藏身；1：藏头；2：藏身。默认为0。
                     * 
                     */
                    int64_t GetPoetryType() const;

                    /**
                     * 设置生成诗词的类型。0：藏头或藏身；1：藏头；2：藏身。默认为0。
                     * @param _poetryType 生成诗词的类型。0：藏头或藏身；1：藏头；2：藏身。默认为0。
                     * 
                     */
                    void SetPoetryType(const int64_t& _poetryType);

                    /**
                     * 判断参数 PoetryType 是否已赋值
                     * @return PoetryType 是否已赋值
                     * 
                     */
                    bool PoetryTypeHasBeenSet() const;

                    /**
                     * 获取诗的体裁。0：五言律诗或七言律诗；5：五言律诗；7：七言律诗。默认为0。
                     * @return Genre 诗的体裁。0：五言律诗或七言律诗；5：五言律诗；7：七言律诗。默认为0。
                     * 
                     */
                    int64_t GetGenre() const;

                    /**
                     * 设置诗的体裁。0：五言律诗或七言律诗；5：五言律诗；7：七言律诗。默认为0。
                     * @param _genre 诗的体裁。0：五言律诗或七言律诗；5：五言律诗；7：七言律诗。默认为0。
                     * 
                     */
                    void SetGenre(const int64_t& _genre);

                    /**
                     * 判断参数 Genre 是否已赋值
                     * @return Genre 是否已赋值
                     * 
                     */
                    bool GenreHasBeenSet() const;

                private:

                    /**
                     * 生成诗词的关键词。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 生成诗词的类型。0：藏头或藏身；1：藏头；2：藏身。默认为0。
                     */
                    int64_t m_poetryType;
                    bool m_poetryTypeHasBeenSet;

                    /**
                     * 诗的体裁。0：五言律诗或七言律诗；5：五言律诗；7：七言律诗。默认为0。
                     */
                    int64_t m_genre;
                    bool m_genreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSEPOETRYREQUEST_H_
