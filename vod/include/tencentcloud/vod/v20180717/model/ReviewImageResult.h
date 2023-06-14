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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片审核结果。
                */
                class ReviewImageResult : public AbstractModel
                {
                public:
                    ReviewImageResult();
                    ~ReviewImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * @return Suggestion 图片审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置图片审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     * @param _suggestion 图片审核的结果建议，取值范围：
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
                     * 获取当 Suggestion 为 review 或 block 时有效，表示最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * @return Label 当 Suggestion 为 review 或 block 时有效，表示最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置当 Suggestion 为 review 或 block 时有效，表示最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * @param _label 当 Suggestion 为 review 或 block 时有效，表示最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
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
                     * 获取当 Suggestion 为 review 或 block 时有效，表示最可能的违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * @return Form 当 Suggestion 为 review 或 block 时有效，表示最可能的违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置当 Suggestion 为 review 或 block 时有效，表示最可能的违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * @param _form 当 Suggestion 为 review 或 block 时有效，表示最可能的违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * 
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     * 
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取有违规信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 10个 元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @return SegmentSet 有违规信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 10个 元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<ReviewImageSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置有违规信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 10个 元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @param _segmentSet 有违规信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 10个 元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetSegmentSet(const std::vector<ReviewImageSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取涉及违规信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return SegmentSetFileUrl 涉及违规信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置涉及违规信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _segmentSetFileUrl 涉及违规信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取涉及违规信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return SegmentSetFileUrlExpireTime 涉及违规信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置涉及违规信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _segmentSetFileUrlExpireTime 涉及违规信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 图片审核的结果建议，取值范围：
<li>pass：建议通过；</li>
<li>review：建议复审；</li>
<li>block：建议封禁。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 当 Suggestion 为 review 或 block 时有效，表示最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 当 Suggestion 为 review 或 block 时有效，表示最可能的违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * 有违规信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 10个 元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     */
                    std::vector<ReviewImageSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 涉及违规信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * 涉及违规信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_
