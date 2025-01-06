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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORDMETADATA_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORDMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 检索结果的元数据
                */
                class RetrievalRecordMetadata : public AbstractModel
                {
                public:
                    RetrievalRecordMetadata();
                    ~RetrievalRecordMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果的类型。
- `DOC`：文档
- `QA`：问答对
                     * @return Type 结果的类型。
- `DOC`：文档
- `QA`：问答对
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置结果的类型。
- `DOC`：文档
- `QA`：问答对
                     * @param _type 结果的类型。
- `DOC`：文档
- `QA`：问答对
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
                     * 获取检索结果的来源。
- `SEMANTIC`：从语义检索中得到的结果
- `FULL_TEXT`：从全文检索中得到的结果
                     * @return ResultSource 检索结果的来源。
- `SEMANTIC`：从语义检索中得到的结果
- `FULL_TEXT`：从全文检索中得到的结果
                     * 
                     */
                    std::string GetResultSource() const;

                    /**
                     * 设置检索结果的来源。
- `SEMANTIC`：从语义检索中得到的结果
- `FULL_TEXT`：从全文检索中得到的结果
                     * @param _resultSource 检索结果的来源。
- `SEMANTIC`：从语义检索中得到的结果
- `FULL_TEXT`：从全文检索中得到的结果
                     * 
                     */
                    void SetResultSource(const std::string& _resultSource);

                    /**
                     * 判断参数 ResultSource 是否已赋值
                     * @return ResultSource 是否已赋值
                     * 
                     */
                    bool ResultSourceHasBeenSet() const;

                    /**
                     * 获取切片在文档中的页码，仅部分文档支持
                     * @return ChunkPageNumbers 切片在文档中的页码，仅部分文档支持
                     * 
                     */
                    std::vector<int64_t> GetChunkPageNumbers() const;

                    /**
                     * 设置切片在文档中的页码，仅部分文档支持
                     * @param _chunkPageNumbers 切片在文档中的页码，仅部分文档支持
                     * 
                     */
                    void SetChunkPageNumbers(const std::vector<int64_t>& _chunkPageNumbers);

                    /**
                     * 判断参数 ChunkPageNumbers 是否已赋值
                     * @return ChunkPageNumbers 是否已赋值
                     * 
                     */
                    bool ChunkPageNumbersHasBeenSet() const;

                private:

                    /**
                     * 结果的类型。
- `DOC`：文档
- `QA`：问答对
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检索结果的来源。
- `SEMANTIC`：从语义检索中得到的结果
- `FULL_TEXT`：从全文检索中得到的结果
                     */
                    std::string m_resultSource;
                    bool m_resultSourceHasBeenSet;

                    /**
                     * 切片在文档中的页码，仅部分文档支持
                     */
                    std::vector<int64_t> m_chunkPageNumbers;
                    bool m_chunkPageNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORDMETADATA_H_
