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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 分片高亮内容
                */
                class Highlight : public AbstractModel
                {
                public:
                    Highlight();
                    ~Highlight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高亮起始位置

注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartPos 高亮起始位置

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartPos() const;

                    /**
                     * 设置高亮起始位置

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startPos 高亮起始位置

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartPos(const std::string& _startPos);

                    /**
                     * 判断参数 StartPos 是否已赋值
                     * @return StartPos 是否已赋值
                     * 
                     */
                    bool StartPosHasBeenSet() const;

                    /**
                     * 获取高亮结束位置

注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPos 高亮结束位置

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPos() const;

                    /**
                     * 设置高亮结束位置

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endPos 高亮结束位置

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndPos(const std::string& _endPos);

                    /**
                     * 判断参数 EndPos 是否已赋值
                     * @return EndPos 是否已赋值
                     * 
                     */
                    bool EndPosHasBeenSet() const;

                    /**
                     * 获取高亮子文本

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 高亮子文本

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置高亮子文本

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 高亮子文本

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
                     * 高亮起始位置

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startPos;
                    bool m_startPosHasBeenSet;

                    /**
                     * 高亮结束位置

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPos;
                    bool m_endPosHasBeenSet;

                    /**
                     * 高亮子文本

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_
