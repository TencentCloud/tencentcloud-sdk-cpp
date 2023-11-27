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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/SentimentDetail.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 情感分析结果
                */
                class SentimentAnalysis : public AbstractModel
                {
                public:
                    SentimentAnalysis();
                    ~SentimentAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取情感标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 情感标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置情感标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 情感标签
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
                     * 获取标签分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 标签分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置标签分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 标签分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取情感分析明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 情感分析明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SentimentDetail GetDetail() const;

                    /**
                     * 设置情感分析明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 情感分析明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const SentimentDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取响应码，成功为"OK"，失败为"InternalError"
                     * @return Code 响应码，成功为"OK"，失败为"InternalError"
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置响应码，成功为"OK"，失败为"InternalError"
                     * @param _code 响应码，成功为"OK"，失败为"InternalError"
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 情感标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 标签分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 情感分析明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SentimentDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 响应码，成功为"OK"，失败为"InternalError"
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_
