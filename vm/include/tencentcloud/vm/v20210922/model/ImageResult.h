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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResultResult.h>
#include <tencentcloud/vm/v20210922/model/RecognitionResult.h>
#include <tencentcloud/vm/v20210922/model/HitSnippetInfo.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
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
                     * 获取<p>违规标志<br>0 未命中<br>1 命中</p>
                     * @return HitFlag <p>违规标志<br>0 未命中<br>1 命中</p>
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置<p>违规标志<br>0 未命中<br>1 命中</p>
                     * @param _hitFlag <p>违规标志<br>0 未命中<br>1 命中</p>
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
                     * 获取<p>命中的标签<br>Porn 色情<br>Sexy 性感<br>Polity 政治<br>Illegal 违法<br>Abuse 谩骂<br>Terror 暴恐<br>Ad 广告</p>
                     * @return Label <p>命中的标签<br>Porn 色情<br>Sexy 性感<br>Polity 政治<br>Illegal 违法<br>Abuse 谩骂<br>Terror 暴恐<br>Ad 广告</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>命中的标签<br>Porn 色情<br>Sexy 性感<br>Polity 政治<br>Illegal 违法<br>Abuse 谩骂<br>Terror 暴恐<br>Ad 广告</p>
                     * @param _label <p>命中的标签<br>Porn 色情<br>Sexy 性感<br>Polity 政治<br>Illegal 违法<br>Abuse 谩骂<br>Terror 暴恐<br>Ad 广告</p>
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
                     * 获取<p>审核建议，可选值：<br>Pass 通过，<br>Review 建议人审，<br>Block 确认违规</p>
                     * @return Suggestion <p>审核建议，可选值：<br>Pass 通过，<br>Review 建议人审，<br>Block 确认违规</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>审核建议，可选值：<br>Pass 通过，<br>Review 建议人审，<br>Block 确认违规</p>
                     * @param _suggestion <p>审核建议，可选值：<br>Pass 通过，<br>Review 建议人审，<br>Block 确认违规</p>
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
                     * 获取<p>得分</p>
                     * @return Score <p>得分</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>得分</p>
                     * @param _score <p>得分</p>
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
                     * 获取<p>画面截帧图片结果集</p>
                     * @return Results <p>画面截帧图片结果集</p>
                     * 
                     */
                    std::vector<ImageResultResult> GetResults() const;

                    /**
                     * 设置<p>画面截帧图片结果集</p>
                     * @param _results <p>画面截帧图片结果集</p>
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
                     * 获取<p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * @return Url <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * @param _url <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
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
                     * 获取<p>附加字段</p>
                     * @return Extra <p>附加字段</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>附加字段</p>
                     * @param _extra <p>附加字段</p>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>二级标签</p>
                     * @return SubLabel <p>二级标签</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置<p>二级标签</p>
                     * @param _subLabel <p>二级标签</p>
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取<p>场景结果</p>
                     * @return RecognitionResults <p>场景结果</p>
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 设置<p>场景结果</p>
                     * @param _recognitionResults <p>场景结果</p>
                     * 
                     */
                    void SetRecognitionResults(const std::vector<RecognitionResult>& _recognitionResults);

                    /**
                     * 判断参数 RecognitionResults 是否已赋值
                     * @return RecognitionResults 是否已赋值
                     * 
                     */
                    bool RecognitionResultsHasBeenSet() const;

                    /**
                     * 获取<p>审核命中类型</p>
                     * @return HitType <p>审核命中类型</p>
                     * 
                     */
                    std::string GetHitType() const;

                    /**
                     * 设置<p>审核命中类型</p>
                     * @param _hitType <p>审核命中类型</p>
                     * 
                     */
                    void SetHitType(const std::string& _hitType);

                    /**
                     * 判断参数 HitType 是否已赋值
                     * @return HitType 是否已赋值
                     * 
                     */
                    bool HitTypeHasBeenSet() const;

                    /**
                     * 获取<p>截帧请求ID</p>
                     * @return RequestId <p>截帧请求ID</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>截帧请求ID</p>
                     * @param _requestId <p>截帧请求ID</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>命中信息</p>
                     * @return HitSnippetInfos <p>命中信息</p>
                     * 
                     */
                    std::vector<HitSnippetInfo> GetHitSnippetInfos() const;

                    /**
                     * 设置<p>命中信息</p>
                     * @param _hitSnippetInfos <p>命中信息</p>
                     * 
                     */
                    void SetHitSnippetInfos(const std::vector<HitSnippetInfo>& _hitSnippetInfos);

                    /**
                     * 判断参数 HitSnippetInfos 是否已赋值
                     * @return HitSnippetInfos 是否已赋值
                     * 
                     */
                    bool HitSnippetInfosHasBeenSet() const;

                private:

                    /**
                     * <p>违规标志<br>0 未命中<br>1 命中</p>
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * <p>命中的标签<br>Porn 色情<br>Sexy 性感<br>Polity 政治<br>Illegal 违法<br>Abuse 谩骂<br>Terror 暴恐<br>Ad 广告</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>审核建议，可选值：<br>Pass 通过，<br>Review 建议人审，<br>Block 确认违规</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>得分</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>画面截帧图片结果集</p>
                     */
                    std::vector<ImageResultResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>附加字段</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>二级标签</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>场景结果</p>
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                    /**
                     * <p>审核命中类型</p>
                     */
                    std::string m_hitType;
                    bool m_hitTypeHasBeenSet;

                    /**
                     * <p>截帧请求ID</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>命中信息</p>
                     */
                    std::vector<HitSnippetInfo> m_hitSnippetInfos;
                    bool m_hitSnippetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_
