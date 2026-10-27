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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONOUTPUT_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 任务执行的标准输出。
                */
                class InvocationOutput : public AbstractModel
                {
                public:
                    InvocationOutput();
                    ~InvocationOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务的标准输出。</p>
                     * @return Lines <p>任务的标准输出。</p>
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 设置<p>任务的标准输出。</p>
                     * @param _lines <p>任务的标准输出。</p>
                     * 
                     */
                    void SetLines(const std::vector<std::string>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取<p>本次返回的输出第一行对应的索引编号。</p>
                     * @return LinesOffset <p>本次返回的输出第一行对应的索引编号。</p>
                     * 
                     */
                    uint64_t GetLinesOffset() const;

                    /**
                     * 设置<p>本次返回的输出第一行对应的索引编号。</p>
                     * @param _linesOffset <p>本次返回的输出第一行对应的索引编号。</p>
                     * 
                     */
                    void SetLinesOffset(const uint64_t& _linesOffset);

                    /**
                     * 判断参数 LinesOffset 是否已赋值
                     * @return LinesOffset 是否已赋值
                     * 
                     */
                    bool LinesOffsetHasBeenSet() const;

                    /**
                     * 获取<p>本次返回的输出的行数。</p>
                     * @return LinesNum <p>本次返回的输出的行数。</p>
                     * 
                     */
                    uint64_t GetLinesNum() const;

                    /**
                     * 设置<p>本次返回的输出的行数。</p>
                     * @param _linesNum <p>本次返回的输出的行数。</p>
                     * 
                     */
                    void SetLinesNum(const uint64_t& _linesNum);

                    /**
                     * 判断参数 LinesNum 是否已赋值
                     * @return LinesNum 是否已赋值
                     * 
                     */
                    bool LinesNumHasBeenSet() const;

                    /**
                     * 获取<p>输出的编码方式：<br>&lt;li&gt;PlainText 未经过Base64编码。</p>
                     * @return Encoding <p>输出的编码方式：<br>&lt;li&gt;PlainText 未经过Base64编码。</p>
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置<p>输出的编码方式：<br>&lt;li&gt;PlainText 未经过Base64编码。</p>
                     * @param _encoding <p>输出的编码方式：<br>&lt;li&gt;PlainText 未经过Base64编码。</p>
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取<p>当前有效的输出起始编号，从0开始。输出过多，会冲掉旧的输出。</p>
                     * @return AllLinesOffset <p>当前有效的输出起始编号，从0开始。输出过多，会冲掉旧的输出。</p>
                     * 
                     */
                    uint64_t GetAllLinesOffset() const;

                    /**
                     * 设置<p>当前有效的输出起始编号，从0开始。输出过多，会冲掉旧的输出。</p>
                     * @param _allLinesOffset <p>当前有效的输出起始编号，从0开始。输出过多，会冲掉旧的输出。</p>
                     * 
                     */
                    void SetAllLinesOffset(const uint64_t& _allLinesOffset);

                    /**
                     * 判断参数 AllLinesOffset 是否已赋值
                     * @return AllLinesOffset 是否已赋值
                     * 
                     */
                    bool AllLinesOffsetHasBeenSet() const;

                    /**
                     * 获取<p>当前有效的标准输出总行数。</p>
                     * @return AllLinesNum <p>当前有效的标准输出总行数。</p>
                     * 
                     */
                    uint64_t GetAllLinesNum() const;

                    /**
                     * 设置<p>当前有效的标准输出总行数。</p>
                     * @param _allLinesNum <p>当前有效的标准输出总行数。</p>
                     * 
                     */
                    void SetAllLinesNum(const uint64_t& _allLinesNum);

                    /**
                     * 判断参数 AllLinesNum 是否已赋值
                     * @return AllLinesNum 是否已赋值
                     * 
                     */
                    bool AllLinesNumHasBeenSet() const;

                private:

                    /**
                     * <p>任务的标准输出。</p>
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * <p>本次返回的输出第一行对应的索引编号。</p>
                     */
                    uint64_t m_linesOffset;
                    bool m_linesOffsetHasBeenSet;

                    /**
                     * <p>本次返回的输出的行数。</p>
                     */
                    uint64_t m_linesNum;
                    bool m_linesNumHasBeenSet;

                    /**
                     * <p>输出的编码方式：<br>&lt;li&gt;PlainText 未经过Base64编码。</p>
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * <p>当前有效的输出起始编号，从0开始。输出过多，会冲掉旧的输出。</p>
                     */
                    uint64_t m_allLinesOffset;
                    bool m_allLinesOffsetHasBeenSet;

                    /**
                     * <p>当前有效的标准输出总行数。</p>
                     */
                    uint64_t m_allLinesNum;
                    bool m_allLinesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONOUTPUT_H_
