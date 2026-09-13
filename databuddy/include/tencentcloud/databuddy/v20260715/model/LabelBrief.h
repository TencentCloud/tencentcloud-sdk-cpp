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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 标签信息
                */
                class LabelBrief : public AbstractModel
                {
                public:
                    LabelBrief();
                    ~LabelBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelKey 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelKey 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取标签名称ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelKeyId 标签名称ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelKeyId() const;

                    /**
                     * 设置标签名称ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelKeyId 标签名称ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelKeyId(const std::string& _labelKeyId);

                    /**
                     * 判断参数 LabelKeyId 是否已赋值
                     * @return LabelKeyId 是否已赋值
                     * 
                     */
                    bool LabelKeyIdHasBeenSet() const;

                    /**
                     * 获取标签值ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValueId 标签值ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置标签值ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValueId 标签值ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValueId(const std::string& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                private:

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 标签名称ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelKeyId;
                    bool m_labelKeyIdHasBeenSet;

                    /**
                     * 标签值ID，可通过标签相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_
