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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片Ocr 文字鉴别信息的任务结果类型
                */
                class ContentReviewOcrResult : public AbstractModel
                {
                public:
                    ContentReviewOcrResult();
                    ~ContentReviewOcrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Ocr 文字鉴别结果的评分，分值为0到100。</p>
                     * @return Confidence <p>Ocr 文字鉴别结果的评分，分值为0到100。</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Ocr 文字鉴别结果的评分，分值为0到100。</p>
                     * @param _confidence <p>Ocr 文字鉴别结果的评分，分值为0到100。</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Ocr 文字鉴别的结果建议，取值范围：</p><li>pass；</li><li>review；</li><li>block。</li>
                     * @return Suggestion <p>Ocr 文字鉴别的结果建议，取值范围：</p><li>pass；</li><li>review；</li><li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>Ocr 文字鉴别的结果建议，取值范围：</p><li>pass；</li><li>review；</li><li>block。</li>
                     * @param _suggestion <p>Ocr 文字鉴别的结果建议，取值范围：</p><li>pass；</li><li>review；</li><li>block。</li>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>Ocr 文字鉴别的嫌疑关键词列表。</p>
                     * @return KeywordSet <p>Ocr 文字鉴别的嫌疑关键词列表。</p>
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置<p>Ocr 文字鉴别的嫌疑关键词列表。</p>
                     * @param _keywordSet <p>Ocr 文字鉴别的嫌疑关键词列表。</p>
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                    /**
                     * 获取<p>Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。</p>
                     * @return AreaCoordSet <p>Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。</p>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置<p>Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。</p>
                     * @param _areaCoordSet <p>Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。</p>
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * <p>Ocr 文字鉴别结果的评分，分值为0到100。</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Ocr 文字鉴别的结果建议，取值范围：</p><li>pass；</li><li>review；</li><li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>Ocr 文字鉴别的嫌疑关键词列表。</p>
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * <p>Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。</p>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
