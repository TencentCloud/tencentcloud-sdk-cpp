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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESPLITTERPREPROCESS_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESPLITTERPREPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 文件拆分信息
                */
                class KnowledgeSplitterPreprocess : public AbstractModel
                {
                public:
                    KnowledgeSplitterPreprocess();
                    ~KnowledgeSplitterPreprocess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取在对文件拆分时，配置是否将 Title 追加到切分后的段落后面一并 Embedding。取值如下所示：
false：不追加。
true：将段落 Title 追加到切分后的段落。

                     * @return AppendTitleToChunk 在对文件拆分时，配置是否将 Title 追加到切分后的段落后面一并 Embedding。取值如下所示：
false：不追加。
true：将段落 Title 追加到切分后的段落。

                     * 
                     */
                    bool GetAppendTitleToChunk() const;

                    /**
                     * 设置在对文件拆分时，配置是否将 Title 追加到切分后的段落后面一并 Embedding。取值如下所示：
false：不追加。
true：将段落 Title 追加到切分后的段落。

                     * @param _appendTitleToChunk 在对文件拆分时，配置是否将 Title 追加到切分后的段落后面一并 Embedding。取值如下所示：
false：不追加。
true：将段落 Title 追加到切分后的段落。

                     * 
                     */
                    void SetAppendTitleToChunk(const bool& _appendTitleToChunk);

                    /**
                     * 判断参数 AppendTitleToChunk 是否已赋值
                     * @return AppendTitleToChunk 是否已赋值
                     * 
                     */
                    bool AppendTitleToChunkHasBeenSet() const;

                    /**
                     * 获取在对文件拆分时，配置是否将关键字 keywords 追加到切分后的段落一并 Embedding。取值如下所示：
false：不追加。
true：将全文的 keywords 追加到切分后的段落。

                     * @return AppendKeywordsToChunk 在对文件拆分时，配置是否将关键字 keywords 追加到切分后的段落一并 Embedding。取值如下所示：
false：不追加。
true：将全文的 keywords 追加到切分后的段落。

                     * 
                     */
                    bool GetAppendKeywordsToChunk() const;

                    /**
                     * 设置在对文件拆分时，配置是否将关键字 keywords 追加到切分后的段落一并 Embedding。取值如下所示：
false：不追加。
true：将全文的 keywords 追加到切分后的段落。

                     * @param _appendKeywordsToChunk 在对文件拆分时，配置是否将关键字 keywords 追加到切分后的段落一并 Embedding。取值如下所示：
false：不追加。
true：将全文的 keywords 追加到切分后的段落。

                     * 
                     */
                    void SetAppendKeywordsToChunk(const bool& _appendKeywordsToChunk);

                    /**
                     * 判断参数 AppendKeywordsToChunk 是否已赋值
                     * @return AppendKeywordsToChunk 是否已赋值
                     * 
                     */
                    bool AppendKeywordsToChunkHasBeenSet() const;

                private:

                    /**
                     * 在对文件拆分时，配置是否将 Title 追加到切分后的段落后面一并 Embedding。取值如下所示：
false：不追加。
true：将段落 Title 追加到切分后的段落。

                     */
                    bool m_appendTitleToChunk;
                    bool m_appendTitleToChunkHasBeenSet;

                    /**
                     * 在对文件拆分时，配置是否将关键字 keywords 追加到切分后的段落一并 Embedding。取值如下所示：
false：不追加。
true：将全文的 keywords 追加到切分后的段落。

                     */
                    bool m_appendKeywordsToChunk;
                    bool m_appendKeywordsToChunkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESPLITTERPREPROCESS_H_
