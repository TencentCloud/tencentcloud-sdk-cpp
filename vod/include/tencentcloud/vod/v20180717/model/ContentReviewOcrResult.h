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
                     * 获取Ocr 文字鉴别结果的评分，分值为0到100。
                     * @return Confidence Ocr 文字鉴别结果的评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Ocr 文字鉴别结果的评分，分值为0到100。
                     * @param _confidence Ocr 文字鉴别结果的评分，分值为0到100。
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
                     * 获取Ocr 文字鉴别的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @return Suggestion Ocr 文字鉴别的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Ocr 文字鉴别的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @param _suggestion Ocr 文字鉴别的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
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
                     * 获取Ocr 文字鉴别的嫌疑关键词列表。
                     * @return KeywordSet Ocr 文字鉴别的嫌疑关键词列表。
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置Ocr 文字鉴别的嫌疑关键词列表。
                     * @param _keywordSet Ocr 文字鉴别的嫌疑关键词列表。
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
                     * 获取Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @return AreaCoordSet Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @param _areaCoordSet Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
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
                     * Ocr 文字鉴别结果的评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Ocr 文字鉴别的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Ocr 文字鉴别的嫌疑关键词列表。
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * Ocr 文字鉴别的嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
