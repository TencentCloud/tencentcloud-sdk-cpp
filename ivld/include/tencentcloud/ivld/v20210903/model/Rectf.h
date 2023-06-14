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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_RECTF_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_RECTF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 矩形内容框
                */
                class Rectf : public AbstractModel
                {
                public:
                    Rectf();
                    ~Rectf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取矩形框左上角水平座标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return X 矩形框左上角水平座标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置矩形框左上角水平座标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _x 矩形框左上角水平座标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取矩形框左上角竖直座标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Y 矩形框左上角竖直座标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置矩形框左上角竖直座标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _y 矩形框左上角竖直座标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取矩形框宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 矩形框宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWidth() const;

                    /**
                     * 设置矩形框宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 矩形框宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const double& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取矩形框长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 矩形框长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHeight() const;

                    /**
                     * 设置矩形框长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 矩形框长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const double& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 矩形框左上角水平座标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 矩形框左上角竖直座标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 矩形框宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 矩形框长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_RECTF_H_
