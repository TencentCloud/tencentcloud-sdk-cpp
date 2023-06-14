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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_

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
                * 直播 AI 内容审核图片鉴黄结果
                */
                class LiveStreamAiReviewImagePornResult : public AbstractModel
                {
                public:
                    LiveStreamAiReviewImagePornResult();
                    ~LiveStreamAiReviewImagePornResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取嫌疑片段起始的 PTS 时间，单位：秒。
                     * @return StartPtsTime 嫌疑片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置嫌疑片段起始的 PTS 时间，单位：秒。
                     * @param _startPtsTime 嫌疑片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取嫌疑片段结束的 PTS 时间，单位：秒。
                     * @return EndPtsTime 嫌疑片段结束的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置嫌疑片段结束的 PTS 时间，单位：秒。
                     * @param _endPtsTime 嫌疑片段结束的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取嫌疑片段涉黄分数。
                     * @return Confidence 嫌疑片段涉黄分数。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置嫌疑片段涉黄分数。
                     * @param _confidence 嫌疑片段涉黄分数。
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
                     * 获取嫌疑片段鉴黄结果建议，取值范围：
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion 嫌疑片段鉴黄结果建议，取值范围：
<li>pass</li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置嫌疑片段鉴黄结果建议，取值范围：
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param _suggestion 嫌疑片段鉴黄结果建议，取值范围：
<li>pass</li>
<li>review</li>
<li>block</li>
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
                     * 获取视频鉴黄结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * @return Label 视频鉴黄结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置视频鉴黄结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * @param _label 视频鉴黄结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
                     * @return Url 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
                     * @param _url 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取嫌疑图片 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return PicUrlExpireTime 嫌疑图片 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置嫌疑图片 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _picUrlExpireTime 嫌疑图片 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetPicUrlExpireTime(const std::string& _picUrlExpireTime);

                    /**
                     * 判断参数 PicUrlExpireTime 是否已赋值
                     * @return PicUrlExpireTime 是否已赋值
                     * 
                     */
                    bool PicUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 嫌疑片段起始的 PTS 时间，单位：秒。
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * 嫌疑片段结束的 PTS 时间，单位：秒。
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * 嫌疑片段涉黄分数。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 嫌疑片段鉴黄结果建议，取值范围：
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 视频鉴黄结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 嫌疑图片 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_
