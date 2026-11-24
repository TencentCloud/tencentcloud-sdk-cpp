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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWLABEL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流标签（K-V），标签字典与数据资产标签一致
                */
                class WorkflowLabel : public AbstractModel
                {
                public:
                    WorkflowLabel();
                    ~WorkflowLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签ID，入参时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelId <p>标签ID，入参时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLabelId() const;

                    /**
                     * 设置<p>标签ID，入参时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelId <p>标签ID，入参时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelId(const int64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelName <p>标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置<p>标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelName <p>标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取<p>标签值ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValueId <p>标签值ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLabelValueId() const;

                    /**
                     * 设置<p>标签值ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValueId <p>标签值ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValueId(const int64_t& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                    /**
                     * 获取<p>标签值名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue <p>标签值名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置<p>标签值名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue <p>标签值名称</p>
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

                private:

                    /**
                     * <p>标签ID，入参时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * <p>标签值ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                    /**
                     * <p>标签值名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWLABEL_H_
