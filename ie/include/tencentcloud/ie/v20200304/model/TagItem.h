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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TAGITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 标签项
                */
                class TagItem : public AbstractModel
                {
                public:
                    TagItem();
                    ~TagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签内容
                     * @return Id 标签内容
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置标签内容
                     * @param _id 标签内容
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取结果的置信度（百分制）
                     * @return Confidence 结果的置信度（百分制）
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置结果的置信度（百分制）
                     * @param _confidence 结果的置信度（百分制）
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取分级数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Categorys 分级数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCategorys() const;

                    /**
                     * 设置分级数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categorys 分级数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategorys(const std::vector<std::string>& _categorys);

                    /**
                     * 判断参数 Categorys 是否已赋值
                     * @return Categorys 是否已赋值
                     * 
                     */
                    bool CategorysHasBeenSet() const;

                    /**
                     * 获取标签备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 标签备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置标签备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ext 标签备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                private:

                    /**
                     * 标签内容
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 结果的置信度（百分制）
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 分级数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_categorys;
                    bool m_categorysHasBeenSet;

                    /**
                     * 标签备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TAGITEM_H_
