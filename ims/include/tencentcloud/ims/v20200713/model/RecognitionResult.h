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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_RECOGNITIONRESULT_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_RECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/RecognitionTag.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 识别类型标签结果信息
                */
                class RecognitionResult : public AbstractModel
                {
                public:
                    RecognitionResult();
                    ~RecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前可能的取值：Scene（图片场景模型）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 当前可能的取值：Scene（图片场景模型）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置当前可能的取值：Scene（图片场景模型）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 当前可能的取值：Scene（图片场景模型）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Label对应模型下的识别标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags Label对应模型下的识别标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecognitionTag> GetTags() const;

                    /**
                     * 设置Label对应模型下的识别标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags Label对应模型下的识别标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<RecognitionTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 当前可能的取值：Scene（图片场景模型）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Label对应模型下的识别标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecognitionTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_RECOGNITIONRESULT_H_
