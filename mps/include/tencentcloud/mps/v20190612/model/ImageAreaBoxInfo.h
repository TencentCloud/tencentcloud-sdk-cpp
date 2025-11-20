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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片框选区域信息
                */
                class ImageAreaBoxInfo : public AbstractModel
                {
                public:
                    ImageAreaBoxInfo();
                    ~ImageAreaBoxInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
默认值：logo。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
默认值：logo。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
默认值：logo。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
默认值：logo。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取图片框选区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。注意：该字段最大值为4096。
示例值：[101, 85, 111, 95]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCoordSet 图片框选区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。注意：该字段最大值为4096。
示例值：[101, 85, 111, 95]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置图片框选区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。注意：该字段最大值为4096。
示例值：[101, 85, 111, 95]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCoordSet 图片框选区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。注意：该字段最大值为4096。
示例值：[101, 85, 111, 95]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取图片框选区域坐标，[x1, y1, x2, y2]，即左上角坐标、右下角坐标， 当AreaCoordSet未指定时生效。当表示像素时，该字段最大值为4096。
- [0.1, 0.1, 0.3, 0.3] :  表示比例 （数值小于1）
- [50, 50, 350, 280] : 表示像素 （数值大于等于1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoundingBox 图片框选区域坐标，[x1, y1, x2, y2]，即左上角坐标、右下角坐标， 当AreaCoordSet未指定时生效。当表示像素时，该字段最大值为4096。
- [0.1, 0.1, 0.3, 0.3] :  表示比例 （数值小于1）
- [50, 50, 350, 280] : 表示像素 （数值大于等于1）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置图片框选区域坐标，[x1, y1, x2, y2]，即左上角坐标、右下角坐标， 当AreaCoordSet未指定时生效。当表示像素时，该字段最大值为4096。
- [0.1, 0.1, 0.3, 0.3] :  表示比例 （数值小于1）
- [50, 50, 350, 280] : 表示像素 （数值大于等于1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boundingBox 图片框选区域坐标，[x1, y1, x2, y2]，即左上角坐标、右下角坐标， 当AreaCoordSet未指定时生效。当表示像素时，该字段最大值为4096。
- [0.1, 0.1, 0.3, 0.3] :  表示比例 （数值小于1）
- [50, 50, 350, 280] : 表示像素 （数值大于等于1）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取BoundingBox字段单位。设置为0时，按照该字段规则自动选择单位；设置为1时，单位为比例；设置为2时，单位为像素。
                     * @return BoundingBoxUnitType BoundingBox字段单位。设置为0时，按照该字段规则自动选择单位；设置为1时，单位为比例；设置为2时，单位为像素。
                     * 
                     */
                    uint64_t GetBoundingBoxUnitType() const;

                    /**
                     * 设置BoundingBox字段单位。设置为0时，按照该字段规则自动选择单位；设置为1时，单位为比例；设置为2时，单位为像素。
                     * @param _boundingBoxUnitType BoundingBox字段单位。设置为0时，按照该字段规则自动选择单位；设置为1时，单位为比例；设置为2时，单位为像素。
                     * 
                     */
                    void SetBoundingBoxUnitType(const uint64_t& _boundingBoxUnitType);

                    /**
                     * 判断参数 BoundingBoxUnitType 是否已赋值
                     * @return BoundingBoxUnitType 是否已赋值
                     * 
                     */
                    bool BoundingBoxUnitTypeHasBeenSet() const;

                private:

                    /**
                     * 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
默认值：logo。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片框选区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。注意：该字段最大值为4096。
示例值：[101, 85, 111, 95]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * 图片框选区域坐标，[x1, y1, x2, y2]，即左上角坐标、右下角坐标， 当AreaCoordSet未指定时生效。当表示像素时，该字段最大值为4096。
- [0.1, 0.1, 0.3, 0.3] :  表示比例 （数值小于1）
- [50, 50, 350, 280] : 表示像素 （数值大于等于1）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * BoundingBox字段单位。设置为0时，按照该字段规则自动选择单位；设置为1时，单位为比例；设置为2时，单位为像素。
                     */
                    uint64_t m_boundingBoxUnitType;
                    bool m_boundingBoxUnitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_
