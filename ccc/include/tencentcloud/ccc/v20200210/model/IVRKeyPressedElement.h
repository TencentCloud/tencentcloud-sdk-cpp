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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * ivr 按键信息
                */
                class IVRKeyPressedElement : public AbstractModel
                {
                public:
                    IVRKeyPressedElement();
                    ~IVRKeyPressedElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命中的关键字或者按键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 命中的关键字或者按键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置命中的关键字或者按键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 命中的关键字或者按键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取按键关联的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 按键关联的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置按键关联的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 按键关联的标签
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
                     * 获取Unix 毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp Unix 毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Unix 毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp Unix 毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeLabel 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeLabel() const;

                    /**
                     * 设置节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeLabel 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeLabel(const std::string& _nodeLabel);

                    /**
                     * 判断参数 NodeLabel 是否已赋值
                     * @return NodeLabel 是否已赋值
                     * 
                     */
                    bool NodeLabelHasBeenSet() const;

                    /**
                     * 获取用户原始输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalContent 用户原始输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalContent() const;

                    /**
                     * 设置用户原始输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalContent 用户原始输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalContent(const std::string& _originalContent);

                    /**
                     * 判断参数 OriginalContent 是否已赋值
                     * @return OriginalContent 是否已赋值
                     * 
                     */
                    bool OriginalContentHasBeenSet() const;

                    /**
                     * 获取TTS 提示音内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TTSPrompt TTS 提示音内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTTSPrompt() const;

                    /**
                     * 设置TTS 提示音内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tTSPrompt TTS 提示音内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTTSPrompt(const std::string& _tTSPrompt);

                    /**
                     * 判断参数 TTSPrompt 是否已赋值
                     * @return TTSPrompt 是否已赋值
                     * 
                     */
                    bool TTSPromptHasBeenSet() const;

                private:

                    /**
                     * 命中的关键字或者按键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 按键关联的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Unix 毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeLabel;
                    bool m_nodeLabelHasBeenSet;

                    /**
                     * 用户原始输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalContent;
                    bool m_originalContentHasBeenSet;

                    /**
                     * TTS 提示音内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tTSPrompt;
                    bool m_tTSPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_
