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
                     * 获取<p>矩形框左上角水平座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return X <p>矩形框左上角水平座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置<p>矩形框左上角水平座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _x <p>矩形框左上角水平座标</p>
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
                     * 获取<p>矩形框左上角竖直座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Y <p>矩形框左上角竖直座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置<p>矩形框左上角竖直座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _y <p>矩形框左上角竖直座标</p>
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
                     * 获取<p>矩形框宽度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width <p>矩形框宽度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWidth() const;

                    /**
                     * 设置<p>矩形框宽度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width <p>矩形框宽度</p><p>单位：像素（px）</p>
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
                     * 获取<p>矩形框长度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height <p>矩形框长度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHeight() const;

                    /**
                     * 设置<p>矩形框长度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height <p>矩形框长度</p><p>单位：像素（px）</p>
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
                     * <p>矩形框左上角水平座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * <p>矩形框左上角竖直座标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * <p>矩形框宽度</p><p>单位：像素（px）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>矩形框长度</p><p>单位：像素（px）</p>
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
