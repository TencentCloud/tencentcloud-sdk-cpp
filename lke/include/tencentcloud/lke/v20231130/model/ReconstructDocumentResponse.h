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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/DocumentRecognizeInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ReconstructDocument返回参数结构体
                */
                class ReconstructDocumentResponse : public AbstractModel
                {
                public:
                    ReconstructDocumentResponse();
                    ~ReconstructDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别生成的Markdown文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkdownBase64 识别生成的Markdown文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarkdownBase64() const;

                    /**
                     * 判断参数 MarkdownBase64 是否已赋值
                     * @return MarkdownBase64 是否已赋值
                     * 
                     */
                    bool MarkdownBase64HasBeenSet() const;

                    /**
                     * 获取输入文件中嵌入的图片放在一个文件夹中打包为.zip压缩文件，识别生成的Markdown文件通过路径关联插入本文件夹中的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsetImagePackage 输入文件中嵌入的图片放在一个文件夹中打包为.zip压缩文件，识别生成的Markdown文件通过路径关联插入本文件夹中的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsetImagePackage() const;

                    /**
                     * 判断参数 InsetImagePackage 是否已赋值
                     * @return InsetImagePackage 是否已赋值
                     * 
                     */
                    bool InsetImagePackageHasBeenSet() const;

                    /**
                     * 获取输入文件中嵌入的图片中文字内容的识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocumentRecognizeInfo 输入文件中嵌入的图片中文字内容的识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DocumentRecognizeInfo> GetDocumentRecognizeInfo() const;

                    /**
                     * 判断参数 DocumentRecognizeInfo 是否已赋值
                     * @return DocumentRecognizeInfo 是否已赋值
                     * 
                     */
                    bool DocumentRecognizeInfoHasBeenSet() const;

                private:

                    /**
                     * 识别生成的Markdown文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_markdownBase64;
                    bool m_markdownBase64HasBeenSet;

                    /**
                     * 输入文件中嵌入的图片放在一个文件夹中打包为.zip压缩文件，识别生成的Markdown文件通过路径关联插入本文件夹中的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insetImagePackage;
                    bool m_insetImagePackageHasBeenSet;

                    /**
                     * 输入文件中嵌入的图片中文字内容的识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DocumentRecognizeInfo> m_documentRecognizeInfo;
                    bool m_documentRecognizeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTRESPONSE_H_
