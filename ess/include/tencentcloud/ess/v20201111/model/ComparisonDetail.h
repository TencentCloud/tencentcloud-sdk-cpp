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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_COMPARISONDETAIL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_COMPARISONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同对比差异结果详情。
                */
                class ComparisonDetail : public AbstractModel
                {
                public:
                    ComparisonDetail();
                    ~ComparisonDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同对比差异点唯一ID。</p>
                     * @return ComparisonPointId <p>合同对比差异点唯一ID。</p>
                     * 
                     */
                    std::string GetComparisonPointId() const;

                    /**
                     * 设置<p>合同对比差异点唯一ID。</p>
                     * @param _comparisonPointId <p>合同对比差异点唯一ID。</p>
                     * 
                     */
                    void SetComparisonPointId(const std::string& _comparisonPointId);

                    /**
                     * 判断参数 ComparisonPointId 是否已赋值
                     * @return ComparisonPointId 是否已赋值
                     * 
                     */
                    bool ComparisonPointIdHasBeenSet() const;

                    /**
                     * 获取<p>对比前后差异类型，具体如下：</p><ul><li> **add**：新增</li><li> **change**：变更</li><li> **delete**：删除</li></ul>
                     * @return ComparisonType <p>对比前后差异类型，具体如下：</p><ul><li> **add**：新增</li><li> **change**：变更</li><li> **delete**：删除</li></ul>
                     * 
                     */
                    std::string GetComparisonType() const;

                    /**
                     * 设置<p>对比前后差异类型，具体如下：</p><ul><li> **add**：新增</li><li> **change**：变更</li><li> **delete**：删除</li></ul>
                     * @param _comparisonType <p>对比前后差异类型，具体如下：</p><ul><li> **add**：新增</li><li> **change**：变更</li><li> **delete**：删除</li></ul>
                     * 
                     */
                    void SetComparisonType(const std::string& _comparisonType);

                    /**
                     * 判断参数 ComparisonType 是否已赋值
                     * @return ComparisonType 是否已赋值
                     * 
                     */
                    bool ComparisonTypeHasBeenSet() const;

                    /**
                     * 获取<p>对比内容类型，具体如下：</p><ul><li> **text**：文本</li><li> **table**：表格</li><li> **picture**：图片</li></ul>
                     * @return ContentType <p>对比内容类型，具体如下：</p><ul><li> **text**：文本</li><li> **table**：表格</li><li> **picture**：图片</li></ul>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>对比内容类型，具体如下：</p><ul><li> **text**：文本</li><li> **table**：表格</li><li> **picture**：图片</li></ul>
                     * @param _contentType <p>对比内容类型，具体如下：</p><ul><li> **text**：文本</li><li> **table**：表格</li><li> **picture**：图片</li></ul>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>原文文本。</p>
                     * @return OriginText <p>原文文本。</p>
                     * 
                     */
                    std::string GetOriginText() const;

                    /**
                     * 设置<p>原文文本。</p>
                     * @param _originText <p>原文文本。</p>
                     * 
                     */
                    void SetOriginText(const std::string& _originText);

                    /**
                     * 判断参数 OriginText 是否已赋值
                     * @return OriginText 是否已赋值
                     * 
                     */
                    bool OriginTextHasBeenSet() const;

                    /**
                     * 获取<p>对比文本。</p>
                     * @return DiffText <p>对比文本。</p>
                     * 
                     */
                    std::string GetDiffText() const;

                    /**
                     * 设置<p>对比文本。</p>
                     * @param _diffText <p>对比文本。</p>
                     * 
                     */
                    void SetDiffText(const std::string& _diffText);

                    /**
                     * 判断参数 DiffText 是否已赋值
                     * @return DiffText 是否已赋值
                     * 
                     */
                    bool DiffTextHasBeenSet() const;

                    /**
                     * 获取<p>合同文本的格式类型。<br>类型如下：</p><ul><li> **0**：段落（正文）</li><li> **1**：标点符号</li><li> **2**：页眉页脚</li><li> **3**：目录</li><li> **4**：印章</li><li> **5**：序号</li><li> **6**：水印</li><li> **7**：下划线内容（填写区）</li></ul>
                     * @return FormatType <p>合同文本的格式类型。<br>类型如下：</p><ul><li> **0**：段落（正文）</li><li> **1**：标点符号</li><li> **2**：页眉页脚</li><li> **3**：目录</li><li> **4**：印章</li><li> **5**：序号</li><li> **6**：水印</li><li> **7**：下划线内容（填写区）</li></ul>
                     * 
                     */
                    int64_t GetFormatType() const;

                    /**
                     * 设置<p>合同文本的格式类型。<br>类型如下：</p><ul><li> **0**：段落（正文）</li><li> **1**：标点符号</li><li> **2**：页眉页脚</li><li> **3**：目录</li><li> **4**：印章</li><li> **5**：序号</li><li> **6**：水印</li><li> **7**：下划线内容（填写区）</li></ul>
                     * @param _formatType <p>合同文本的格式类型。<br>类型如下：</p><ul><li> **0**：段落（正文）</li><li> **1**：标点符号</li><li> **2**：页眉页脚</li><li> **3**：目录</li><li> **4**：印章</li><li> **5**：序号</li><li> **6**：水印</li><li> **7**：下划线内容（填写区）</li></ul>
                     * 
                     */
                    void SetFormatType(const int64_t& _formatType);

                    /**
                     * 判断参数 FormatType 是否已赋值
                     * @return FormatType 是否已赋值
                     * 
                     */
                    bool FormatTypeHasBeenSet() const;

                    /**
                     * 获取<p>页码：对比点所在页码。</p>
                     * @return PageNumber <p>页码：对比点所在页码。</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码：对比点所在页码。</p>
                     * @param _pageNumber <p>页码：对比点所在页码。</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * <p>合同对比差异点唯一ID。</p>
                     */
                    std::string m_comparisonPointId;
                    bool m_comparisonPointIdHasBeenSet;

                    /**
                     * <p>对比前后差异类型，具体如下：</p><ul><li> **add**：新增</li><li> **change**：变更</li><li> **delete**：删除</li></ul>
                     */
                    std::string m_comparisonType;
                    bool m_comparisonTypeHasBeenSet;

                    /**
                     * <p>对比内容类型，具体如下：</p><ul><li> **text**：文本</li><li> **table**：表格</li><li> **picture**：图片</li></ul>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>原文文本。</p>
                     */
                    std::string m_originText;
                    bool m_originTextHasBeenSet;

                    /**
                     * <p>对比文本。</p>
                     */
                    std::string m_diffText;
                    bool m_diffTextHasBeenSet;

                    /**
                     * <p>合同文本的格式类型。<br>类型如下：</p><ul><li> **0**：段落（正文）</li><li> **1**：标点符号</li><li> **2**：页眉页脚</li><li> **3**：目录</li><li> **4**：印章</li><li> **5**：序号</li><li> **6**：水印</li><li> **7**：下划线内容（填写区）</li></ul>
                     */
                    int64_t m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * <p>页码：对比点所在页码。</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_COMPARISONDETAIL_H_
