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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Label.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签详情信息
                */
                class AttrLabel : public AbstractModel
                {
                public:
                    AttrLabel();
                    ~AttrLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 标签来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置标签来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 标签来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrBizId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrBizId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrBizId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrBizId(const std::string& _attrBizId);

                    /**
                     * 判断参数 AttrBizId 是否已赋值
                     * @return AttrBizId 是否已赋值
                     * 
                     */
                    bool AttrBizIdHasBeenSet() const;

                    /**
                     * 获取标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrKey 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrKey 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 标签来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrBizId;
                    bool m_attrBizIdHasBeenSet;

                    /**
                     * 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_
