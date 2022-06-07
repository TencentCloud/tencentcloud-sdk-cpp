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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_OCRLABELINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_OCRLABELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/PointInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * OCR场景标签列表
                */
                class OcrLabelInfo : public AbstractModel
                {
                public:
                    OcrLabelInfo();
                    ~OcrLabelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取坐标点围起来的框
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Points 坐标点围起来的框
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PointInfo> GetPoints() const;

                    /**
                     * 设置坐标点围起来的框
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Points 坐标点围起来的框
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPoints(const std::vector<PointInfo>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     */
                    bool PointsHasBeenSet() const;

                    /**
                     * 获取框的形状：
FRAME_TYPE_RECTANGLE
FRAME_TYPE_POLYGON
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameType 框的形状：
FRAME_TYPE_RECTANGLE
FRAME_TYPE_POLYGON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFrameType() const;

                    /**
                     * 设置框的形状：
FRAME_TYPE_RECTANGLE
FRAME_TYPE_POLYGON
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FrameType 框的形状：
FRAME_TYPE_RECTANGLE
FRAME_TYPE_POLYGON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrameType(const std::string& _frameType);

                    /**
                     * 判断参数 FrameType 是否已赋值
                     * @return FrameType 是否已赋值
                     */
                    bool FrameTypeHasBeenSet() const;

                    /**
                     * 获取智能结构化：key区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 智能结构化：key区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKey() const;

                    /**
                     * 设置智能结构化：key区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Key 智能结构化：key区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取智能结构化：上述key的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyId 智能结构化：上述key的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置智能结构化：上述key的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeyId 智能结构化：上述key的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取识别：框区域的内容
智能结构化：value区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 识别：框区域的内容
智能结构化：value区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别：框区域的内容
智能结构化：value区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 识别：框区域的内容
智能结构化：value区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取智能结构化：value区域所关联的key 区域的keyID的集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyIdsForValue 智能结构化：value区域所关联的key 区域的keyID的集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetKeyIdsForValue() const;

                    /**
                     * 设置智能结构化：value区域所关联的key 区域的keyID的集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeyIdsForValue 智能结构化：value区域所关联的key 区域的keyID的集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeyIdsForValue(const std::vector<std::string>& _keyIdsForValue);

                    /**
                     * 判断参数 KeyIdsForValue 是否已赋值
                     * @return KeyIdsForValue 是否已赋值
                     */
                    bool KeyIdsForValueHasBeenSet() const;

                    /**
                     * 获取key或者value区域内容的方向：
DIRECTION_VERTICAL
DIRECTION_HORIZONTAL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction key或者value区域内容的方向：
DIRECTION_VERTICAL
DIRECTION_HORIZONTAL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置key或者value区域内容的方向：
DIRECTION_VERTICAL
DIRECTION_HORIZONTAL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Direction key或者value区域内容的方向：
DIRECTION_VERTICAL
DIRECTION_HORIZONTAL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 坐标点围起来的框
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PointInfo> m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * 框的形状：
FRAME_TYPE_RECTANGLE
FRAME_TYPE_POLYGON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameType;
                    bool m_frameTypeHasBeenSet;

                    /**
                     * 智能结构化：key区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 智能结构化：上述key的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 识别：框区域的内容
智能结构化：value区域对应的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 智能结构化：value区域所关联的key 区域的keyID的集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyIdsForValue;
                    bool m_keyIdsForValueHasBeenSet;

                    /**
                     * key或者value区域内容的方向：
DIRECTION_VERTICAL
DIRECTION_HORIZONTAL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_OCRLABELINFO_H_
