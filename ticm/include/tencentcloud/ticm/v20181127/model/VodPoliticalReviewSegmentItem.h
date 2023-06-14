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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALREVIEWSEGMENTITEM_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALREVIEWSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 内容审核鉴政任务结果类型
                */
                class VodPoliticalReviewSegmentItem : public AbstractModel
                {
                public:
                    VodPoliticalReviewSegmentItem();
                    ~VodPoliticalReviewSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段涉政分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 嫌疑片段涉政分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置嫌疑片段涉政分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence 嫌疑片段涉政分数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取嫌疑片段鉴政结果建议，取值范围：
pass。
review。
block。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 嫌疑片段鉴政结果建议，取值范围：
pass。
review。
block。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置嫌疑片段鉴政结果建议，取值范围：
pass。
review。
block。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 嫌疑片段鉴政结果建议，取值范围：
pass。
review。
block。

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取涉政人物、违规图标名字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 涉政人物、违规图标名字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置涉政人物、违规图标名字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 涉政人物、违规图标名字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取嫌疑片段鉴政结果标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 嫌疑片段鉴政结果标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置嫌疑片段鉴政结果标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 嫌疑片段鉴政结果标签。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取嫌疑图片 URL 失效时间，使用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PicUrlExpireTimeStamp 嫌疑图片 URL 失效时间，使用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPicUrlExpireTimeStamp() const;

                    /**
                     * 设置嫌疑图片 URL 失效时间，使用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _picUrlExpireTimeStamp 嫌疑图片 URL 失效时间，使用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPicUrlExpireTimeStamp(const int64_t& _picUrlExpireTimeStamp);

                    /**
                     * 判断参数 PicUrlExpireTimeStamp 是否已赋值
                     * @return PicUrlExpireTimeStamp 是否已赋值
                     * 
                     */
                    bool PicUrlExpireTimeStampHasBeenSet() const;

                    /**
                     * 获取涉政人物、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCoordSet 涉政人物、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置涉政人物、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCoordSet 涉政人物、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段涉政分数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 嫌疑片段鉴政结果建议，取值范围：
pass。
review。
block。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 涉政人物、违规图标名字。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 嫌疑片段鉴政结果标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 嫌疑图片 URL （图片不会永久存储，到达
PicUrlExpireTime 时间点后图片将被删除）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 嫌疑图片 URL 失效时间，使用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_picUrlExpireTimeStamp;
                    bool m_picUrlExpireTimeStampHasBeenSet;

                    /**
                     * 涉政人物、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALREVIEWSEGMENTITEM_H_
