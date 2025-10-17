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
                     * 获取对比前后差异类型，具体如下：
<ul><li> **add**：新增</li>
<li> **change**：变更</li>
<li> **delete**：删除</li>
</ul>
                     * @return ComparisonType 对比前后差异类型，具体如下：
<ul><li> **add**：新增</li>
<li> **change**：变更</li>
<li> **delete**：删除</li>
</ul>
                     * 
                     */
                    std::string GetComparisonType() const;

                    /**
                     * 设置对比前后差异类型，具体如下：
<ul><li> **add**：新增</li>
<li> **change**：变更</li>
<li> **delete**：删除</li>
</ul>
                     * @param _comparisonType 对比前后差异类型，具体如下：
<ul><li> **add**：新增</li>
<li> **change**：变更</li>
<li> **delete**：删除</li>
</ul>
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
                     * 获取对比内容类型，具体如下：
<ul><li> **text**：文本</li>
<li> **table**：表格</li>
<li> **picture**：图片</li>
</ul>
                     * @return ContentType 对比内容类型，具体如下：
<ul><li> **text**：文本</li>
<li> **table**：表格</li>
<li> **picture**：图片</li>
</ul>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置对比内容类型，具体如下：
<ul><li> **text**：文本</li>
<li> **table**：表格</li>
<li> **picture**：图片</li>
</ul>
                     * @param _contentType 对比内容类型，具体如下：
<ul><li> **text**：文本</li>
<li> **table**：表格</li>
<li> **picture**：图片</li>
</ul>
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
                     * 获取原文文本。
                     * @return OriginText 原文文本。
                     * 
                     */
                    std::string GetOriginText() const;

                    /**
                     * 设置原文文本。
                     * @param _originText 原文文本。
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
                     * 获取对比文本。
                     * @return DiffText 对比文本。
                     * 
                     */
                    std::string GetDiffText() const;

                    /**
                     * 设置对比文本。
                     * @param _diffText 对比文本。
                     * 
                     */
                    void SetDiffText(const std::string& _diffText);

                    /**
                     * 判断参数 DiffText 是否已赋值
                     * @return DiffText 是否已赋值
                     * 
                     */
                    bool DiffTextHasBeenSet() const;

                private:

                    /**
                     * 对比前后差异类型，具体如下：
<ul><li> **add**：新增</li>
<li> **change**：变更</li>
<li> **delete**：删除</li>
</ul>
                     */
                    std::string m_comparisonType;
                    bool m_comparisonTypeHasBeenSet;

                    /**
                     * 对比内容类型，具体如下：
<ul><li> **text**：文本</li>
<li> **table**：表格</li>
<li> **picture**：图片</li>
</ul>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 原文文本。
                     */
                    std::string m_originText;
                    bool m_originTextHasBeenSet;

                    /**
                     * 对比文本。
                     */
                    std::string m_diffText;
                    bool m_diffTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_COMPARISONDETAIL_H_
