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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_

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
                * 图片画面审核涉及令人不安全的信息的任务结果类型
                */
                class TerrorismImageResult : public AbstractModel
                {
                public:
                    TerrorismImageResult();
                    ~TerrorismImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴别涉及令人不安全的信息的评分，分值为0到100。
                     * @return Confidence 鉴别涉及令人不安全的信息的评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置鉴别涉及令人不安全的信息的评分，分值为0到100。
                     * @param _confidence 鉴别涉及令人不安全的信息的评分，分值为0到100。
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
                     * 获取鉴别涉及令人不安全的信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @return Suggestion 鉴别涉及令人不安全的信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置鉴别涉及令人不安全的信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @param _suggestion 鉴别涉及令人不安全的信息的结果建议，取值范围：
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
                     * 获取鉴别涉及令人不安全的信息的结果标签，取值范围：
<li>guns：武器枪支；</li>
<li>crowd：人群聚集；</li>
<li>police：警察部队；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li>explosion：爆炸火灾；</li>
<li>scenario：暴恐画面。</li>
                     * @return Label 鉴别涉及令人不安全的信息的结果标签，取值范围：
<li>guns：武器枪支；</li>
<li>crowd：人群聚集；</li>
<li>police：警察部队；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li>explosion：爆炸火灾；</li>
<li>scenario：暴恐画面。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置鉴别涉及令人不安全的信息的结果标签，取值范围：
<li>guns：武器枪支；</li>
<li>crowd：人群聚集；</li>
<li>police：警察部队；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li>explosion：爆炸火灾；</li>
<li>scenario：暴恐画面。</li>
                     * @param _label 鉴别涉及令人不安全的信息的结果标签，取值范围：
<li>guns：武器枪支；</li>
<li>crowd：人群聚集；</li>
<li>police：警察部队；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li>explosion：爆炸火灾；</li>
<li>scenario：暴恐画面。</li>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 鉴别涉及令人不安全的信息的评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 鉴别涉及令人不安全的信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 鉴别涉及令人不安全的信息的结果标签，取值范围：
<li>guns：武器枪支；</li>
<li>crowd：人群聚集；</li>
<li>police：警察部队；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li>explosion：爆炸火灾；</li>
<li>scenario：暴恐画面。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_
