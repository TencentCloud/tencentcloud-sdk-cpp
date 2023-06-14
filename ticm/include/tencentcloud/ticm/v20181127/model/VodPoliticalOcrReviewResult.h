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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALOCRREVIEWRESULT_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALOCRREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ticm/v20181127/model/VodOcrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 内容审核 Ocr 文字鉴政、敏感任务结果类型
                */
                class VodPoliticalOcrReviewResult : public AbstractModel
                {
                public:
                    VodPoliticalOcrReviewResult();
                    ~VodPoliticalOcrReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param _status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码，0：成功，其他值：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 错误码，0：成功，其他值：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置错误码，0：成功，其他值：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 错误码，0：成功，其他值：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msg 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Ocr 文字涉政、敏感评分，分值为0到100。
                     * @return Confidence Ocr 文字涉政、敏感评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Ocr 文字涉政、敏感评分，分值为0到100。
                     * @param _confidence Ocr 文字涉政、敏感评分，分值为0到100。
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
                     * 获取Ocr 文字涉政、敏感结果建议，取值范围：
pass。
review。
block。
                     * @return Suggestion Ocr 文字涉政、敏感结果建议，取值范围：
pass。
review。
block。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Ocr 文字涉政、敏感结果建议，取值范围：
pass。
review。
block。
                     * @param _suggestion Ocr 文字涉政、敏感结果建议，取值范围：
pass。
review。
block。
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
                     * 获取Ocr 文字有涉政、敏感嫌疑的视频片段列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentSet Ocr 文字有涉政、敏感嫌疑的视频片段列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VodOcrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Ocr 文字有涉政、敏感嫌疑的视频片段列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentSet Ocr 文字有涉政、敏感嫌疑的视频片段列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentSet(const std::vector<VodOcrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，0：成功，其他值：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Ocr 文字涉政、敏感评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Ocr 文字涉政、敏感结果建议，取值范围：
pass。
review。
block。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Ocr 文字有涉政、敏感嫌疑的视频片段列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VodOcrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_VODPOLITICALOCRREVIEWRESULT_H_
