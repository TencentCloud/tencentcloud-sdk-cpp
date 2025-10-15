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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALEMBEDDINGDATA_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALEMBEDDINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/EmbeddingData.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 多模态特征向量
                */
                class MultiModalEmbeddingData : public AbstractModel
                {
                public:
                    MultiModalEmbeddingData();
                    ~MultiModalEmbeddingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextEmbeddings 文本特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EmbeddingData> GetTextEmbeddings() const;

                    /**
                     * 设置文本特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textEmbeddings 文本特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextEmbeddings(const std::vector<EmbeddingData>& _textEmbeddings);

                    /**
                     * 判断参数 TextEmbeddings 是否已赋值
                     * @return TextEmbeddings 是否已赋值
                     * 
                     */
                    bool TextEmbeddingsHasBeenSet() const;

                    /**
                     * 获取图片特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageEmbeddings 图片特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EmbeddingData> GetImageEmbeddings() const;

                    /**
                     * 设置图片特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageEmbeddings 图片特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageEmbeddings(const std::vector<EmbeddingData>& _imageEmbeddings);

                    /**
                     * 判断参数 ImageEmbeddings 是否已赋值
                     * @return ImageEmbeddings 是否已赋值
                     * 
                     */
                    bool ImageEmbeddingsHasBeenSet() const;

                private:

                    /**
                     * 文本特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EmbeddingData> m_textEmbeddings;
                    bool m_textEmbeddingsHasBeenSet;

                    /**
                     * 图片特征向量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EmbeddingData> m_imageEmbeddings;
                    bool m_imageEmbeddingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALEMBEDDINGDATA_H_
