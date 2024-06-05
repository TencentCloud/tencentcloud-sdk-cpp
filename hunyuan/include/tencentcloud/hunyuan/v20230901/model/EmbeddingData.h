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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGDATA_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Embedding 信息。
                */
                class EmbeddingData : public AbstractModel
                {
                public:
                    EmbeddingData();
                    ~EmbeddingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Embedding 信息，目前为 1024 维浮点数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Embedding Embedding 信息，目前为 1024 维浮点数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetEmbedding() const;

                    /**
                     * 设置Embedding 信息，目前为 1024 维浮点数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embedding Embedding 信息，目前为 1024 维浮点数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbedding(const std::vector<double>& _embedding);

                    /**
                     * 判断参数 Embedding 是否已赋值
                     * @return Embedding 是否已赋值
                     * 
                     */
                    bool EmbeddingHasBeenSet() const;

                    /**
                     * 获取下标，目前不支持批量，因此固定为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 下标，目前不支持批量，因此固定为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置下标，目前不支持批量，因此固定为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 下标，目前不支持批量，因此固定为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取目前固定为 "embedding"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Object 目前固定为 "embedding"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置目前固定为 "embedding"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _object 目前固定为 "embedding"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                private:

                    /**
                     * Embedding 信息，目前为 1024 维浮点数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_embedding;
                    bool m_embeddingHasBeenSet;

                    /**
                     * 下标，目前不支持批量，因此固定为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 目前固定为 "embedding"。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGDATA_H_
