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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_AUDIOTRACKITEM_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_AUDIOTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 音频轨道上的音频片段信息。
                */
                class AudioTrackItem : public AbstractModel
                {
                public:
                    AudioTrackItem();
                    ~AudioTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频素材来源类型。取值有：
<ul>
<li>VOD ：素材来源 VOD 。</li>
<li>CME ：视频来源 CME 。</li>
</ul>
                     * @return SourceType 音频素材来源类型。取值有：
<ul>
<li>VOD ：素材来源 VOD 。</li>
<li>CME ：视频来源 CME 。</li>
</ul>
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置音频素材来源类型。取值有：
<ul>
<li>VOD ：素材来源 VOD 。</li>
<li>CME ：视频来源 CME 。</li>
</ul>
                     * @param SourceType 音频素材来源类型。取值有：
<ul>
<li>VOD ：素材来源 VOD 。</li>
<li>CME ：视频来源 CME 。</li>
</ul>
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取音频片段的媒体素材来源，可以是：
<li>VOD 的媒体文件 ID 。</li>
<li>CME 的素材 ID 。</li>
                     * @return SourceMedia 音频片段的媒体素材来源，可以是：
<li>VOD 的媒体文件 ID 。</li>
<li>CME 的素材 ID 。</li>
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置音频片段的媒体素材来源，可以是：
<li>VOD 的媒体文件 ID 。</li>
<li>CME 的素材 ID 。</li>
                     * @param SourceMedia 音频片段的媒体素材来源，可以是：
<li>VOD 的媒体文件 ID 。</li>
<li>CME 的素材 ID 。</li>
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     * @return SourceMediaStartTime 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     * @param SourceMediaStartTime 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    void SetSourceMediaStartTime(const double& _sourceMediaStartTime);

                    /**
                     * 判断参数 SourceMediaStartTime 是否已赋值
                     * @return SourceMediaStartTime 是否已赋值
                     */
                    bool SourceMediaStartTimeHasBeenSet() const;

                    /**
                     * 获取音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     * @return Duration 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    double GetDuration() const;

                    /**
                     * 设置音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     * @param Duration 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 音频素材来源类型。取值有：
<ul>
<li>VOD ：素材来源 VOD 。</li>
<li>CME ：视频来源 CME 。</li>
</ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 音频片段的媒体素材来源，可以是：
<li>VOD 的媒体文件 ID 。</li>
<li>CME 的素材 ID 。</li>
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_AUDIOTRACKITEM_H_
