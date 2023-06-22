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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测任务的输出。
                */
                class QualityInspectTaskOutput : public AbstractModel
                {
                public:
                    QualityInspectTaskOutput();
                    ~QualityInspectTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件是否无音频轨，取值范围：
<li>0：否，即有音频轨；</li>
<li>1：是，即无音频轨。</li>
                     * @return NoAudio 媒体文件是否无音频轨，取值范围：
<li>0：否，即有音频轨；</li>
<li>1：是，即无音频轨。</li>
                     * 
                     */
                    int64_t GetNoAudio() const;

                    /**
                     * 设置媒体文件是否无音频轨，取值范围：
<li>0：否，即有音频轨；</li>
<li>1：是，即无音频轨。</li>
                     * @param _noAudio 媒体文件是否无音频轨，取值范围：
<li>0：否，即有音频轨；</li>
<li>1：是，即无音频轨。</li>
                     * 
                     */
                    void SetNoAudio(const int64_t& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取媒体文件是否无视频轨，取值范围：
<li>0：否，即有视频轨；</li>
<li>1：是，即无视频轨。</li>
                     * @return NoVideo 媒体文件是否无视频轨，取值范围：
<li>0：否，即有视频轨；</li>
<li>1：是，即无视频轨。</li>
                     * 
                     */
                    int64_t GetNoVideo() const;

                    /**
                     * 设置媒体文件是否无视频轨，取值范围：
<li>0：否，即有视频轨；</li>
<li>1：是，即无视频轨。</li>
                     * @param _noVideo 媒体文件是否无视频轨，取值范围：
<li>0：否，即有视频轨；</li>
<li>1：是，即无视频轨。</li>
                     * 
                     */
                    void SetNoVideo(const int64_t& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取视频画面质量评分，取值范围：[0, 100]。
                     * @return QualityEvaluationScore 视频画面质量评分，取值范围：[0, 100]。
                     * 
                     */
                    uint64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置视频画面质量评分，取值范围：[0, 100]。
                     * @param _qualityEvaluationScore 视频画面质量评分，取值范围：[0, 100]。
                     * 
                     */
                    void SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取音画质检测出的异常项列表。
                     * @return QualityInspectResultSet 音画质检测出的异常项列表。
                     * 
                     */
                    std::vector<QualityInspectResultItem> GetQualityInspectResultSet() const;

                    /**
                     * 设置音画质检测出的异常项列表。
                     * @param _qualityInspectResultSet 音画质检测出的异常项列表。
                     * 
                     */
                    void SetQualityInspectResultSet(const std::vector<QualityInspectResultItem>& _qualityInspectResultSet);

                    /**
                     * 判断参数 QualityInspectResultSet 是否已赋值
                     * @return QualityInspectResultSet 是否已赋值
                     * 
                     */
                    bool QualityInspectResultSetHasBeenSet() const;

                private:

                    /**
                     * 媒体文件是否无音频轨，取值范围：
<li>0：否，即有音频轨；</li>
<li>1：是，即无音频轨。</li>
                     */
                    int64_t m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * 媒体文件是否无视频轨，取值范围：
<li>0：否，即有视频轨；</li>
<li>1：是，即无视频轨。</li>
                     */
                    int64_t m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * 视频画面质量评分，取值范围：[0, 100]。
                     */
                    uint64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * 音画质检测出的异常项列表。
                     */
                    std::vector<QualityInspectResultItem> m_qualityInspectResultSet;
                    bool m_qualityInspectResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
