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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTDATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelTag.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 文本文件标签识别结果
                */
                class TextData : public AbstractModel
                {
                public:
                    TextData();
                    ~TextData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 文本内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 文本内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取文本概要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 文本概要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置文本概要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summary 文本概要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取文本标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextTagSet 文本标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiLevelTag GetTextTagSet() const;

                    /**
                     * 设置文本标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textTagSet 文本标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextTagSet(const MultiLevelTag& _textTagSet);

                    /**
                     * 判断参数 TextTagSet 是否已赋值
                     * @return TextTagSet 是否已赋值
                     * 
                     */
                    bool TextTagSetHasBeenSet() const;

                    /**
                     * 获取文档下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebMediaURL 文档下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebMediaURL() const;

                    /**
                     * 设置文档下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webMediaURL 文档下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebMediaURL(const std::string& _webMediaURL);

                    /**
                     * 判断参数 WebMediaURL 是否已赋值
                     * @return WebMediaURL 是否已赋值
                     * 
                     */
                    bool WebMediaURLHasBeenSet() const;

                private:

                    /**
                     * 文本内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 文本概要信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 文本标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiLevelTag m_textTagSet;
                    bool m_textTagSetHasBeenSet;

                    /**
                     * 文档下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webMediaURL;
                    bool m_webMediaURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTDATA_H_
