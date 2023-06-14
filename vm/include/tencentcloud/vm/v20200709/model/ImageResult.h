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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULT_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20200709/model/ImageResultResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * Result结果详情
                */
                class ImageResult : public AbstractModel
                {
                public:
                    ImageResult();
                    ~ImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取违规标志
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitFlag 违规标志
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置违规标志
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitFlag 违规标志
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取命中的标签
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 命中的标签
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置命中的标签
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 命中的标签
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
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
                     * 获取审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
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
                     * 获取得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 得分
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
                     * 获取画面截帧图片结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 画面截帧图片结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageResultResult> GetResults() const;

                    /**
                     * 设置画面截帧图片结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _results 画面截帧图片结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResults(const std::vector<ImageResultResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取图片URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 图片URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 图片URL地址
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
                     * 获取附加字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 附加字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置附加字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra 附加字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 违规标志
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 命中的标签
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 画面截帧图片结果集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageResultResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 图片URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 附加字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULT_H_
