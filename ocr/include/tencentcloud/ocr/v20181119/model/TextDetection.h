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
                     * 获取<p>识别出的文本行内容。</p>
                     * @return DetectedText <p>识别出的文本行内容。</p>
                     * 
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置<p>识别出的文本行内容。</p>
                     * @param _detectedText <p>识别出的文本行内容。</p>
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
                     * 获取<p>置信度 0 ~100。</p>
                     * @return Confidence <p>置信度 0 ~100。</p>
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置<p>置信度 0 ~100。</p>
                     * @param _confidence <p>置信度 0 ~100。</p>
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
                     * 获取<p>文本行坐标，以四个顶点坐标表示。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Polygon <p>文本行坐标，以四个顶点坐标表示。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置<p>文本行坐标，以四个顶点坐标表示。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polygon <p>文本行坐标，以四个顶点坐标表示。</p>
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
                     * 获取<p>此字段为扩展字段。GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。</p>
                     * @return AdvancedInfo <p>此字段为扩展字段。GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。</p>
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置<p>此字段为扩展字段。GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。</p>
                     * @param _advancedInfo <p>此字段为扩展字段。GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。</p>
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
                     * 获取<p>文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）。</p>
                     * @return ItemPolygon <p>文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）。</p>
                     * 
                     */
                    ItemCoord GetItemPolygon() const;

                    /**
                     * 设置<p>文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）。</p>
                     * @param _itemPolygon <p>文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）。</p>
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
                     * 获取<p>识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * @return Words <p>识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * 
                     */
                    std::vector<DetectedWords> GetWords() const;

                    /**
                     * 设置<p>识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * @param _words <p>识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
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
                     * 获取<p>单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * @return WordCoordPoint <p>单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * 
                     */
                    std::vector<DetectedWordCoordPoint> GetWordCoordPoint() const;

                    /**
                     * 设置<p>单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * @param _wordCoordPoint <p>单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     * 
                     */
                    void SetWordCoordPoint(const std::vector<DetectedWordCoordPoint>& _wordCoordPoint);

                    /**
                     * 判断参数 WordCoordPoint 是否已赋值
                     * @return WordCoordPoint 是否已赋值
                     * 
                     */
                    bool WordCoordPointHasBeenSet() const;

                    /**
                     * 获取<p>语种信息。注：仅ConfigID配置为MulOCR时支持。zh:中文; en:英文; tha:泰语; may:印尼语; jap:日语; kor:韩语; spa:西班牙语; fre:法语; ger:德语; por:葡萄牙语; vie:越南语; may:马来语; rus:俄语; ita:意大利语; hol:荷兰语; swe:瑞典语; fin:芬兰语; nor:挪威语; hun:匈牙利语; ara:阿拉伯语; hi:印地语。</p>
                     * @return Language <p>语种信息。注：仅ConfigID配置为MulOCR时支持。zh:中文; en:英文; tha:泰语; may:印尼语; jap:日语; kor:韩语; spa:西班牙语; fre:法语; ger:德语; por:葡萄牙语; vie:越南语; may:马来语; rus:俄语; ita:意大利语; hol:荷兰语; swe:瑞典语; fin:芬兰语; nor:挪威语; hun:匈牙利语; ara:阿拉伯语; hi:印地语。</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>语种信息。注：仅ConfigID配置为MulOCR时支持。zh:中文; en:英文; tha:泰语; may:印尼语; jap:日语; kor:韩语; spa:西班牙语; fre:法语; ger:德语; por:葡萄牙语; vie:越南语; may:马来语; rus:俄语; ita:意大利语; hol:荷兰语; swe:瑞典语; fin:芬兰语; nor:挪威语; hun:匈牙利语; ara:阿拉伯语; hi:印地语。</p>
                     * @param _language <p>语种信息。注：仅ConfigID配置为MulOCR时支持。zh:中文; en:英文; tha:泰语; may:印尼语; jap:日语; kor:韩语; spa:西班牙语; fre:法语; ger:德语; por:葡萄牙语; vie:越南语; may:马来语; rus:俄语; ita:意大利语; hol:荷兰语; swe:瑞典语; fin:芬兰语; nor:挪威语; hun:匈牙利语; ara:阿拉伯语; hi:印地语。</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                private:

                    /**
                     * <p>识别出的文本行内容。</p>
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * <p>置信度 0 ~100。</p>
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>文本行坐标，以四个顶点坐标表示。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * <p>此字段为扩展字段。GeneralBasicOcr接口返回段落信息Parag，包含ParagNo。</p>
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * <p>文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）。</p>
                     */
                    ItemCoord m_itemPolygon;
                    bool m_itemPolygonHasBeenSet;

                    /**
                     * <p>识别出来的单字信息包括单字（包括单字Character和单字置信度confidence）， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     */
                    std::vector<DetectedWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * <p>单字在原图中的四点坐标， 支持识别的接口：GeneralBasicOCR、GeneralAccurateOCR。</p>
                     */
                    std::vector<DetectedWordCoordPoint> m_wordCoordPoint;
                    bool m_wordCoordPointHasBeenSet;

                    /**
                     * <p>语种信息。注：仅ConfigID配置为MulOCR时支持。zh:中文; en:英文; tha:泰语; may:印尼语; jap:日语; kor:韩语; spa:西班牙语; fre:法语; ger:德语; por:葡萄牙语; vie:越南语; may:马来语; rus:俄语; ita:意大利语; hol:荷兰语; swe:瑞典语; fin:芬兰语; nor:挪威语; hun:匈牙利语; ara:阿拉伯语; hi:印地语。</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_
