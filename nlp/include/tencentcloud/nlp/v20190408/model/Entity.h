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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_ENTITY_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_ENTITY_H_

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
                * 实体识别结果。
                */
                class Entity : public AbstractModel
                {
                public:
                    Entity();
                    ~Entity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础词。
                     * @return Word 基础词。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置基础词。
                     * @param _word 基础词。
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取基础词在NormalText中的起始位置。
                     * @return BeginOffset 基础词在NormalText中的起始位置。
                     * 
                     */
                    int64_t GetBeginOffset() const;

                    /**
                     * 设置基础词在NormalText中的起始位置。
                     * @param _beginOffset 基础词在NormalText中的起始位置。
                     * 
                     */
                    void SetBeginOffset(const int64_t& _beginOffset);

                    /**
                     * 判断参数 BeginOffset 是否已赋值
                     * @return BeginOffset 是否已赋值
                     * 
                     */
                    bool BeginOffsetHasBeenSet() const;

                    /**
                     * 获取基础词的长度。
                     * @return Length 基础词的长度。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置基础词的长度。
                     * @param _length 基础词的长度。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取实体类型的标准名字。
                     * @return Type 实体类型的标准名字。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实体类型的标准名字。
                     * @param _type 实体类型的标准名字。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取类型名字的自然语言表达。（中文或英文）
                     * @return Name 类型名字的自然语言表达。（中文或英文）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置类型名字的自然语言表达。（中文或英文）
                     * @param _name 类型名字的自然语言表达。（中文或英文）
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 基础词。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 基础词在NormalText中的起始位置。
                     */
                    int64_t m_beginOffset;
                    bool m_beginOffsetHasBeenSet;

                    /**
                     * 基础词的长度。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 实体类型的标准名字。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 类型名字的自然语言表达。（中文或英文）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_ENTITY_H_
