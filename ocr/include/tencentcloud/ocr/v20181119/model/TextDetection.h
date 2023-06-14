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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>
#include <tencentcloud/ocr/v20181119/model/ItemCoord.h>
#include <tencentcloud/ocr/v20181119/model/DetectedWords.h>
#include <tencentcloud/ocr/v20181119/model/DetectedWordCoordPoint.h>


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
                class TextDetection : public AbstractModel
                {
                public:
                    TextDetection();
                    ~TextDetection() = default;
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
                     * 获取置信度 0 ~100
                     * @return Confidence 置信度 0 ~100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 ~100
                     * @param _confidence 置信度 0 ~100
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Polygon 文本行坐标，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置文本行坐标，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polygon 文本行坐标，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
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
GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。
                     * @return AdvancedInfo 此字段为扩展字段。
GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置此字段为扩展字段。
GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。
                     * @param _advancedInfo 此字段为扩展字段。
GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。
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
                     * 获取文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @return ItemPolygon 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    ItemCoord GetItemPolygon() const;

                    /**
                     * 设置文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @param _itemPolygon 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    void SetItemPolygon(const ItemCoord& _itemPolygon);

                    /**
                     * 判断参数 ItemPolygon 是否已赋值
                     * @return ItemPolygon 是否已赋值
                     * 
                     */
                    bool ItemPolygonHasBeenSet() const;

                    /**
                     * 获取识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * @return Words 识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * 
                     */
                    std::vector<DetectedWords> GetWords() const;

                    /**
                     * 设置识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * @param _words 识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * 
                     */
                    void SetWords(const std::vector<DetectedWords>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * @return WordCoordPoint 单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * 
                     */
                    std::vector<DetectedWordCoordPoint> GetWordCoordPoint() const;

                    /**
                     * 设置单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * @param _wordCoordPoint 单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     * 
                     */
                    void SetWordCoordPoint(const std::vector<DetectedWordCoordPoint>& _wordCoordPoint);

                    /**
                     * 判断参数 WordCoordPoint 是否已赋值
                     * @return WordCoordPoint 是否已赋值
                     * 
                     */
                    bool WordCoordPointHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 置信度 0 ~100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行坐标，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 此字段为扩展字段。
GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     */
                    ItemCoord m_itemPolygon;
                    bool m_itemPolygonHasBeenSet;

                    /**
                     * 识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     */
                    std::vector<DetectedWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR
                     */
                    std::vector<DetectedWordCoordPoint> m_wordCoordPoint;
                    bool m_wordCoordPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_
