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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGMETRIC_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CustomTrainingPoint.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 自定义指标
                */
                class CustomTrainingMetric : public AbstractModel
                {
                public:
                    CustomTrainingMetric();
                    ~CustomTrainingMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X轴数据类型: TIMESTAMP; EPOCH; STEP
                     * @return XType X轴数据类型: TIMESTAMP; EPOCH; STEP
                     * 
                     */
                    std::string GetXType() const;

                    /**
                     * 设置X轴数据类型: TIMESTAMP; EPOCH; STEP
                     * @param _xType X轴数据类型: TIMESTAMP; EPOCH; STEP
                     * 
                     */
                    void SetXType(const std::string& _xType);

                    /**
                     * 判断参数 XType 是否已赋值
                     * @return XType 是否已赋值
                     * 
                     */
                    bool XTypeHasBeenSet() const;

                    /**
                     * 获取数据点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Points 数据点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomTrainingPoint> GetPoints() const;

                    /**
                     * 设置数据点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _points 数据点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoints(const std::vector<CustomTrainingPoint>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * X轴数据类型: TIMESTAMP; EPOCH; STEP
                     */
                    std::string m_xType;
                    bool m_xTypeHasBeenSet;

                    /**
                     * 数据点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomTrainingPoint> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGMETRIC_H_
