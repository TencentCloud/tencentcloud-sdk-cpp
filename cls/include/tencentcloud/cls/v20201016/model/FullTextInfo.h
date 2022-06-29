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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_FULLTEXTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_FULLTEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 全文索引配置
                */
                class FullTextInfo : public AbstractModel
                {
                public:
                    FullTextInfo();
                    ~FullTextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否大小写敏感
                     * @return CaseSensitive 是否大小写敏感
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置是否大小写敏感
                     * @param CaseSensitive 是否大小写敏感
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取全文索引的分词符，其中的每个字符代表一个分词符；
仅支持英文符号及\n\t\r；
推荐使用 @&?|#()='",;:<>[]{}/ \n\t\r\ 作为分词符；
                     * @return Tokenizer 全文索引的分词符，其中的每个字符代表一个分词符；
仅支持英文符号及\n\t\r；
推荐使用 @&?|#()='",;:<>[]{}/ \n\t\r\ 作为分词符；
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置全文索引的分词符，其中的每个字符代表一个分词符；
仅支持英文符号及\n\t\r；
推荐使用 @&?|#()='",;:<>[]{}/ \n\t\r\ 作为分词符；
                     * @param Tokenizer 全文索引的分词符，其中的每个字符代表一个分词符；
仅支持英文符号及\n\t\r；
推荐使用 @&?|#()='",;:<>[]{}/ \n\t\r\ 作为分词符；
                     */
                    void SetTokenizer(const std::string& _tokenizer);

                    /**
                     * 判断参数 Tokenizer 是否已赋值
                     * @return Tokenizer 是否已赋值
                     */
                    bool TokenizerHasBeenSet() const;

                    /**
                     * 获取是否包含中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainZH 是否包含中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置是否包含中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainZH 是否包含中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainZH(const bool& _containZH);

                    /**
                     * 判断参数 ContainZH 是否已赋值
                     * @return ContainZH 是否已赋值
                     */
                    bool ContainZHHasBeenSet() const;

                private:

                    /**
                     * 是否大小写敏感
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * 全文索引的分词符，其中的每个字符代表一个分词符；
仅支持英文符号及\n\t\r；
推荐使用 @&?|#()='",;:<>[]{}/ \n\t\r\ 作为分词符；
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * 是否包含中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_FULLTEXTINFO_H_
