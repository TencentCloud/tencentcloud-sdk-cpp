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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DETECTIONLABELINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DETECTIONLABELINFO_H_

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
                * 图像检测参数信息
                */
                class DetectionLabelInfo : public AbstractModel
                {
                public:
                    DetectionLabelInfo();
                    ~DetectionLabelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点坐标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Points 点坐标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PointInfo> GetPoints() const;

                    /**
                     * 设置点坐标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _points 点坐标列表
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
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameType 类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameType() const;

                    /**
                     * 设置类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameType 类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameType(const std::string& _frameType);

                    /**
                     * 判断参数 FrameType 是否已赋值
                     * @return FrameType 是否已赋值
                     * 
                     */
                    bool FrameTypeHasBeenSet() const;

                private:

                    /**
                     * 点坐标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PointInfo> m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameType;
                    bool m_frameTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DETECTIONLABELINFO_H_
