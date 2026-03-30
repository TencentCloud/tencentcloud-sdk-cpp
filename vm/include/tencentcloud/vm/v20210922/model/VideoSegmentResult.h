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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENTRESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/VideoLLMDetail.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 单个视频切片审核详情
                */
                class VideoSegmentResult : public AbstractModel
                {
                public:
                    VideoSegmentResult();
                    ~VideoSegmentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>违规标志 0 未命中 1 命中</p>
                     * @return HitFlag <p>违规标志 0 未命中 1 命中</p>
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置<p>违规标志 0 未命中 1 命中</p>
                     * @param _hitFlag <p>违规标志 0 未命中 1 命中</p>
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
                     * 获取<p>审核建议，可选值： Pass 通过， Review 建议人审， Block 确认违规</p>
                     * @return Suggestion <p>审核建议，可选值： Pass 通过， Review 建议人审， Block 确认违规</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>审核建议，可选值： Pass 通过， Review 建议人审， Block 确认违规</p>
                     * @param _suggestion <p>审核建议，可选值： Pass 通过， Review 建议人审， Block 确认违规</p>
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
                     * 获取<p>Asr文本内容</p>
                     * @return Text <p>Asr文本内容</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Asr文本内容</p>
                     * @param _text <p>Asr文本内容</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>审核结果</p>
                     * @return Detail <p>审核结果</p>
                     * 
                     */
                    std::vector<VideoLLMDetail> GetDetail() const;

                    /**
                     * 设置<p>审核结果</p>
                     * @param _detail <p>审核结果</p>
                     * 
                     */
                    void SetDetail(const std::vector<VideoLLMDetail>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>视频切片存储URL</p>
                     * @return VideoUrl <p>视频切片存储URL</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>视频切片存储URL</p>
                     * @param _videoUrl <p>视频切片存储URL</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>音频切片存储URL</p>
                     * @return AudioUrl <p>音频切片存储URL</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>音频切片存储URL</p>
                     * @param _audioUrl <p>音频切片存储URL</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>切片时长</p>
                     * @return Duration <p>切片时长</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>切片时长</p>
                     * @param _duration <p>切片时长</p>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>切片请求ID</p>
                     * @return RequestId <p>切片请求ID</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>切片请求ID</p>
                     * @param _requestId <p>切片请求ID</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * <p>违规标志 0 未命中 1 命中</p>
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * <p>审核建议，可选值： Pass 通过， Review 建议人审， Block 确认违规</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>Asr文本内容</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>审核结果</p>
                     */
                    std::vector<VideoLLMDetail> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>视频切片存储URL</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>音频切片存储URL</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>切片时长</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>切片请求ID</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENTRESULT_H_
