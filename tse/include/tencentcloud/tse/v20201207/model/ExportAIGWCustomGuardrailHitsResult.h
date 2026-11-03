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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_EXPORTAIGWCUSTOMGUARDRAILHITSRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_EXPORTAIGWCUSTOMGUARDRAILHITSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 导出自定义安全护栏命中记录结果
                */
                class ExportAIGWCustomGuardrailHitsResult : public AbstractModel
                {
                public:
                    ExportAIGWCustomGuardrailHitsResult();
                    ~ExportAIGWCustomGuardrailHitsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实际导出格式</p>
                     * @return Format <p>实际导出格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>实际导出格式</p>
                     * @param _format <p>实际导出格式</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>实际编码进导出内容的审核记录数，最多 1000。</p>
                     * @return RowCount <p>实际编码进导出内容的审核记录数，最多 1000。</p>
                     * 
                     */
                    int64_t GetRowCount() const;

                    /**
                     * 设置<p>实际编码进导出内容的审核记录数，最多 1000。</p>
                     * @param _rowCount <p>实际编码进导出内容的审核记录数，最多 1000。</p>
                     * 
                     */
                    void SetRowCount(const int64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取<p>是否达到单次最多 1000 条的导出截断条件；true 时可能还有更多记录，可缩小时间范围后分别导出。</p>
                     * @return Truncated <p>是否达到单次最多 1000 条的导出截断条件；true 时可能还有更多记录，可缩小时间范围后分别导出。</p>
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置<p>是否达到单次最多 1000 条的导出截断条件；true 时可能还有更多记录，可缩小时间范围后分别导出。</p>
                     * @param _truncated <p>是否达到单次最多 1000 条的导出截断条件；true 时可能还有更多记录，可缩小时间范围后分别导出。</p>
                     * 
                     */
                    void SetTruncated(const bool& _truncated);

                    /**
                     * 判断参数 Truncated 是否已赋值
                     * @return Truncated 是否已赋值
                     * 
                     */
                    bool TruncatedHasBeenSet() const;

                    /**
                     * 获取<p>CSV/JSON 文件内容的 Base64 编码字符串，需 Base64 解码后保存，不是下载 URL。</p>
                     * @return Content <p>CSV/JSON 文件内容的 Base64 编码字符串，需 Base64 解码后保存，不是下载 URL。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>CSV/JSON 文件内容的 Base64 编码字符串，需 Base64 解码后保存，不是下载 URL。</p>
                     * @param _content <p>CSV/JSON 文件内容的 Base64 编码字符串，需 Base64 解码后保存，不是下载 URL。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>实际导出格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>实际编码进导出内容的审核记录数，最多 1000。</p>
                     */
                    int64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * <p>是否达到单次最多 1000 条的导出截断条件；true 时可能还有更多记录，可缩小时间范围后分别导出。</p>
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                    /**
                     * <p>CSV/JSON 文件内容的 Base64 编码字符串，需 Base64 解码后保存，不是下载 URL。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_EXPORTAIGWCUSTOMGUARDRAILHITSRESULT_H_
