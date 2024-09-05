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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXT_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 训练文本
                */
                class TrainingText : public AbstractModel
                {
                public:
                    TrainingText();
                    ~TrainingText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本ID
当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextId 文本ID
当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTextId() const;

                    /**
                     * 设置文本ID
当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textId 文本ID
当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextId(const std::string& _textId);

                    /**
                     * 判断参数 TextId 是否已赋值
                     * @return TextId 是否已赋值
                     * 
                     */
                    bool TextIdHasBeenSet() const;

                    /**
                     * 获取文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 文本ID
当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_textId;
                    bool m_textIdHasBeenSet;

                    /**
                     * 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXT_H_
