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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTGENERALHANDWRITING_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTGENERALHANDWRITING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 文字识别结果
                */
                class TextGeneralHandwriting : public AbstractModel
                {
                public:
                    TextGeneralHandwriting();
                    ~TextGeneralHandwriting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的文本行内容
                     * @return DetectedText 识别出的文本行内容
                     * 
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置识别出的文本行内容
                     * @param _detectedText 识别出的文本行内容
                     * 
                     */
                    void SetDetectedText(const std::string& _detectedText);

                    /**
                     * 判断参数 DetectedText 是否已赋值
                     * @return DetectedText 是否已赋值
                     * 
                     */
                    bool DetectedTextHasBeenSet() const;

                    /**
                     * 获取置信度 0 - 100
                     * @return Confidence 置信度 0 - 100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 - 100
                     * @param _confidence 置信度 0 - 100
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文本行坐标，以四个顶点坐标表示
                     * @return Polygon 文本行坐标，以四个顶点坐标表示
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置文本行坐标，以四个顶点坐标表示
                     * @param _polygon 文本行坐标，以四个顶点坐标表示
                     * 
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取此字段为扩展字段。
能返回文本行的段落信息，例如：{\"Parag\":{\"ParagNo\":2}}，
其中ParagNo为段落行，从1开始。
                     * @return AdvancedInfo 此字段为扩展字段。
能返回文本行的段落信息，例如：{\"Parag\":{\"ParagNo\":2}}，
其中ParagNo为段落行，从1开始。
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置此字段为扩展字段。
能返回文本行的段落信息，例如：{\"Parag\":{\"ParagNo\":2}}，
其中ParagNo为段落行，从1开始。
                     * @param _advancedInfo 此字段为扩展字段。
能返回文本行的段落信息，例如：{\"Parag\":{\"ParagNo\":2}}，
其中ParagNo为段落行，从1开始。
                     * 
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取字的坐标数组，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordPolygon 字的坐标数组，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Polygon> GetWordPolygon() const;

                    /**
                     * 设置字的坐标数组，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordPolygon 字的坐标数组，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordPolygon(const std::vector<Polygon>& _wordPolygon);

                    /**
                     * 判断参数 WordPolygon 是否已赋值
                     * @return WordPolygon 是否已赋值
                     * 
                     */
                    bool WordPolygonHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 置信度 0 - 100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行坐标，以四个顶点坐标表示
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 此字段为扩展字段。
能返回文本行的段落信息，例如：{\"Parag\":{\"ParagNo\":2}}，
其中ParagNo为段落行，从1开始。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * 字的坐标数组，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Polygon> m_wordPolygon;
                    bool m_wordPolygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTGENERALHANDWRITING_H_
