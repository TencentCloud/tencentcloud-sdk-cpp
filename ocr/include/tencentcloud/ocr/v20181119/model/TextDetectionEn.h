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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONEN_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>
#include <tencentcloud/ocr/v20181119/model/WordCoordPoint.h>
#include <tencentcloud/ocr/v20181119/model/CandWord.h>
#include <tencentcloud/ocr/v20181119/model/Words.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 英文识别结果
                */
                class TextDetectionEn : public AbstractModel
                {
                public:
                    TextDetectionEn();
                    ~TextDetectionEn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的文本行内容。
                     * @return DetectedText 识别出的文本行内容。
                     * 
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置识别出的文本行内容。
                     * @param _detectedText 识别出的文本行内容。
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
                     * 获取置信度 0 ~100。
                     * @return Confidence 置信度 0 ~100。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 ~100。
                     * @param _confidence 置信度 0 ~100。
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
                     * 获取文本行在原图中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Polygon 文本行在原图中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置文本行在原图中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polygon 文本行在原图中的四点坐标。
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
                     * 获取此字段为扩展字段。目前EnglishOCR接口返回内容为空。
                     * @return AdvancedInfo 此字段为扩展字段。目前EnglishOCR接口返回内容为空。
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置此字段为扩展字段。目前EnglishOCR接口返回内容为空。
                     * @param _advancedInfo 此字段为扩展字段。目前EnglishOCR接口返回内容为空。
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
                     * 获取英文单词在原图中的四点坐标。
                     * @return WordCoordPoint 英文单词在原图中的四点坐标。
                     * 
                     */
                    std::vector<WordCoordPoint> GetWordCoordPoint() const;

                    /**
                     * 设置英文单词在原图中的四点坐标。
                     * @param _wordCoordPoint 英文单词在原图中的四点坐标。
                     * 
                     */
                    void SetWordCoordPoint(const std::vector<WordCoordPoint>& _wordCoordPoint);

                    /**
                     * 判断参数 WordCoordPoint 是否已赋值
                     * @return WordCoordPoint 是否已赋值
                     * 
                     */
                    bool WordCoordPointHasBeenSet() const;

                    /**
                     * 获取候选字符集(包含候选字Character以及置信度Confidence)。
                     * @return CandWord 候选字符集(包含候选字Character以及置信度Confidence)。
                     * 
                     */
                    std::vector<CandWord> GetCandWord() const;

                    /**
                     * 设置候选字符集(包含候选字Character以及置信度Confidence)。
                     * @param _candWord 候选字符集(包含候选字Character以及置信度Confidence)。
                     * 
                     */
                    void SetCandWord(const std::vector<CandWord>& _candWord);

                    /**
                     * 判断参数 CandWord 是否已赋值
                     * @return CandWord 是否已赋值
                     * 
                     */
                    bool CandWordHasBeenSet() const;

                    /**
                     * 获取识别出来的单词信息（包括单词Character和单词置信度confidence）
                     * @return Words 识别出来的单词信息（包括单词Character和单词置信度confidence）
                     * 
                     */
                    std::vector<Words> GetWords() const;

                    /**
                     * 设置识别出来的单词信息（包括单词Character和单词置信度confidence）
                     * @param _words 识别出来的单词信息（包括单词Character和单词置信度confidence）
                     * 
                     */
                    void SetWords(const std::vector<Words>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容。
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 置信度 0 ~100。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行在原图中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 此字段为扩展字段。目前EnglishOCR接口返回内容为空。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * 英文单词在原图中的四点坐标。
                     */
                    std::vector<WordCoordPoint> m_wordCoordPoint;
                    bool m_wordCoordPointHasBeenSet;

                    /**
                     * 候选字符集(包含候选字Character以及置信度Confidence)。
                     */
                    std::vector<CandWord> m_candWord;
                    bool m_candWordHasBeenSet;

                    /**
                     * 识别出来的单词信息（包括单词Character和单词置信度confidence）
                     */
                    std::vector<Words> m_words;
                    bool m_wordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONEN_H_
