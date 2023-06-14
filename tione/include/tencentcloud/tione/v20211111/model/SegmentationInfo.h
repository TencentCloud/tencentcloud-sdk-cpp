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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SEGMENTATIONINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SEGMENTATIONINFO_H_

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
                * 图片分割参数信息
                */
                class SegmentationInfo : public AbstractModel
                {
                public:
                    SegmentationInfo();
                    ~SegmentationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点坐标数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Points 点坐标数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PointInfo> GetPoints() const;

                    /**
                     * 设置点坐标数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _points 点坐标数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoints(const std::vector<PointInfo>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                    /**
                     * 获取分割标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 分割标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置分割标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 分割标签
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
                     * 获取灰度值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gray 灰度值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGray() const;

                    /**
                     * 设置灰度值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gray 灰度值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGray(const uint64_t& _gray);

                    /**
                     * 判断参数 Gray 是否已赋值
                     * @return Gray 是否已赋值
                     * 
                     */
                    bool GrayHasBeenSet() const;

                    /**
                     * 获取颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color 颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _color 颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * 点坐标数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PointInfo> m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * 分割标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 灰度值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gray;
                    bool m_grayHasBeenSet;

                    /**
                     * 颜色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SEGMENTATIONINFO_H_
