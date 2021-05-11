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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_NERTOKEN_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_NERTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 命名实体识别结果  
                */
                class NerToken : public AbstractModel
                {
                public:
                    NerToken();
                    ~NerToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础词
                     * @return Word 基础词
                     */
                    std::string GetWord() const;

                    /**
                     * 设置基础词
                     * @param Word 基础词
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取长度
                     * @return Length 长度
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置长度
                     * @param Length 长度
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取起始位置
                     * @return BeginOffset 起始位置
                     */
                    int64_t GetBeginOffset() const;

                    /**
                     * 设置起始位置
                     * @param BeginOffset 起始位置
                     */
                    void SetBeginOffset(const int64_t& _beginOffset);

                    /**
                     * 判断参数 BeginOffset 是否已赋值
                     * @return BeginOffset 是否已赋值
                     */
                    bool BeginOffsetHasBeenSet() const;

                    /**
                     * 获取命名实体类型
                     * @return Type 命名实体类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置命名实体类型
                     * @param Type 命名实体类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 基础词
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 长度
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 起始位置
                     */
                    int64_t m_beginOffset;
                    bool m_beginOffsetHasBeenSet;

                    /**
                     * 命名实体类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_NERTOKEN_H_
