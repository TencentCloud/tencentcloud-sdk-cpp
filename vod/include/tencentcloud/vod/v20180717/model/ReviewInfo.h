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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_

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
                * 审核信息。
                */
                class ReviewInfo : public AbstractModel
                {
                public:
                    ReviewInfo();
                    ~ReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核模板 ID。
                     * @return Definition 审核模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置审核模板 ID。
                     * @param _definition 审核模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * @return Suggestion 审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * @param _suggestion 审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
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
                     * 获取审核类型，当 Suggestion 为 review 或 block 时有效，格式为：Form.Label。
Form 表示违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
Label 表示违禁的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Moan：娇喘。</li>
                     * @return TypeSet 审核类型，当 Suggestion 为 review 或 block 时有效，格式为：Form.Label。
Form 表示违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
Label 表示违禁的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Moan：娇喘。</li>
                     * 
                     */
                    std::vector<std::string> GetTypeSet() const;

                    /**
                     * 设置审核类型，当 Suggestion 为 review 或 block 时有效，格式为：Form.Label。
Form 表示违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
Label 表示违禁的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Moan：娇喘。</li>
                     * @param _typeSet 审核类型，当 Suggestion 为 review 或 block 时有效，格式为：Form.Label。
Form 表示违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
Label 表示违禁的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Moan：娇喘。</li>
                     * 
                     */
                    void SetTypeSet(const std::vector<std::string>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     * 
                     */
                    bool TypeSetHasBeenSet() const;

                    /**
                     * 获取审核时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ReviewTime 审核时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetReviewTime() const;

                    /**
                     * 设置审核时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _reviewTime 审核时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetReviewTime(const std::string& _reviewTime);

                    /**
                     * 判断参数 ReviewTime 是否已赋值
                     * @return ReviewTime 是否已赋值
                     * 
                     */
                    bool ReviewTimeHasBeenSet() const;

                private:

                    /**
                     * 审核模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 审核类型，当 Suggestion 为 review 或 block 时有效，格式为：Form.Label。
Form 表示违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
Label 表示违禁的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Moan：娇喘。</li>
                     */
                    std::vector<std::string> m_typeSet;
                    bool m_typeSetHasBeenSet;

                    /**
                     * 审核时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_reviewTime;
                    bool m_reviewTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
