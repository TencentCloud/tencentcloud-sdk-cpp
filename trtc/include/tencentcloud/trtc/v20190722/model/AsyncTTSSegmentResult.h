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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTTSSEGMENTRESULT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTTSSEGMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AsyncTTSTextSegment对应的结果
                */
                class AsyncTTSSegmentResult : public AbstractModel
                {
                public:
                    AsyncTTSSegmentResult();
                    ~AsyncTTSSegmentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分段文本</p>
                     * @return Text <p>分段文本</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>分段文本</p>
                     * @param _text <p>分段文本</p>
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
                     * 获取<p>音频下载url</p>
                     * @return AudioDownloadUrl <p>音频下载url</p>
                     * 
                     */
                    std::string GetAudioDownloadUrl() const;

                    /**
                     * 设置<p>音频下载url</p>
                     * @param _audioDownloadUrl <p>音频下载url</p>
                     * 
                     */
                    void SetAudioDownloadUrl(const std::string& _audioDownloadUrl);

                    /**
                     * 判断参数 AudioDownloadUrl 是否已赋值
                     * @return AudioDownloadUrl 是否已赋值
                     * 
                     */
                    bool AudioDownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>音频时长</p><p>单位：ms</p>
                     * @return DurationMs <p>音频时长</p><p>单位：ms</p>
                     * 
                     */
                    uint64_t GetDurationMs() const;

                    /**
                     * 设置<p>音频时长</p><p>单位：ms</p>
                     * @param _durationMs <p>音频时长</p><p>单位：ms</p>
                     * 
                     */
                    void SetDurationMs(const uint64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                private:

                    /**
                     * <p>分段文本</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音频下载url</p>
                     */
                    std::string m_audioDownloadUrl;
                    bool m_audioDownloadUrlHasBeenSet;

                    /**
                     * <p>音频时长</p><p>单位：ms</p>
                     */
                    uint64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTTSSEGMENTRESULT_H_
