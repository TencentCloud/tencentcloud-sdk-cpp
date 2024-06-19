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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DOCUMENTRECOGNIZEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DOCUMENTRECOGNIZEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/DocumentElement.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 单页文档识别的内容
                */
                class DocumentRecognizeInfo : public AbstractModel
                {
                public:
                    DocumentRecognizeInfo();
                    ~DocumentRecognizeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入PDF文件的页码，从1开始。输入图片的话值始终为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 输入PDF文件的页码，从1开始。输入图片的话值始终为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置输入PDF文件的页码，从1开始。输入图片的话值始终为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 输入PDF文件的页码，从1开始。输入图片的话值始终为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Angle 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAngle() const;

                    /**
                     * 设置旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _angle 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAngle(const int64_t& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取AI算法识别处理后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height AI算法识别处理后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置AI算法识别处理后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height AI算法识别处理后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取AI算法识别处理后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width AI算法识别处理后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置AI算法识别处理后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width AI算法识别处理后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取图片的原始高度，输入PDF文件则表示单页PDF转图片之后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginHeight 图片的原始高度，输入PDF文件则表示单页PDF转图片之后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOriginHeight() const;

                    /**
                     * 设置图片的原始高度，输入PDF文件则表示单页PDF转图片之后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originHeight 图片的原始高度，输入PDF文件则表示单页PDF转图片之后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginHeight(const int64_t& _originHeight);

                    /**
                     * 判断参数 OriginHeight 是否已赋值
                     * @return OriginHeight 是否已赋值
                     * 
                     */
                    bool OriginHeightHasBeenSet() const;

                    /**
                     * 获取图片的原始宽度，输入PDF文件则表示单页PDF转图片之后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginWidth 图片的原始宽度，输入PDF文件则表示单页PDF转图片之后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOriginWidth() const;

                    /**
                     * 设置图片的原始宽度，输入PDF文件则表示单页PDF转图片之后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originWidth 图片的原始宽度，输入PDF文件则表示单页PDF转图片之后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginWidth(const int64_t& _originWidth);

                    /**
                     * 判断参数 OriginWidth 是否已赋值
                     * @return OriginWidth 是否已赋值
                     * 
                     */
                    bool OriginWidthHasBeenSet() const;

                    /**
                     * 获取文档元素信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elements 文档元素信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DocumentElement> GetElements() const;

                    /**
                     * 设置文档元素信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elements 文档元素信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElements(const std::vector<DocumentElement>& _elements);

                    /**
                     * 判断参数 Elements 是否已赋值
                     * @return Elements 是否已赋值
                     * 
                     */
                    bool ElementsHasBeenSet() const;

                    /**
                     * 获取旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotatedAngle 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRotatedAngle() const;

                    /**
                     * 设置旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotatedAngle 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotatedAngle(const double& _rotatedAngle);

                    /**
                     * 判断参数 RotatedAngle 是否已赋值
                     * @return RotatedAngle 是否已赋值
                     * 
                     */
                    bool RotatedAngleHasBeenSet() const;

                private:

                    /**
                     * 输入PDF文件的页码，从1开始。输入图片的话值始终为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * AI算法识别处理后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * AI算法识别处理后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片的原始高度，输入PDF文件则表示单页PDF转图片之后的图片高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_originHeight;
                    bool m_originHeightHasBeenSet;

                    /**
                     * 图片的原始宽度，输入PDF文件则表示单页PDF转图片之后的图片宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_originWidth;
                    bool m_originWidthHasBeenSet;

                    /**
                     * 文档元素信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DocumentElement> m_elements;
                    bool m_elementsHasBeenSet;

                    /**
                     * 旋转角度

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rotatedAngle;
                    bool m_rotatedAngleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DOCUMENTRECOGNIZEINFO_H_
