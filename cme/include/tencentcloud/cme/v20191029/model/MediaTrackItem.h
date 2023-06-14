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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACKITEM_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoTrackItem.h>
#include <tencentcloud/cme/v20191029/model/AudioTrackItem.h>
#include <tencentcloud/cme/v20191029/model/EmptyTrackItem.h>
#include <tencentcloud/cme/v20191029/model/MediaTransitionItem.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体轨道的片段信息
                */
                class MediaTrackItem : public AbstractModel
                {
                public:
                    MediaTrackItem();
                    ~MediaTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片段类型。取值有：
<li>Video：视频片段；</li>
<li>Audio：音频片段；</li>
<li>Empty：空白片段；</li>
<li>Transition：转场。</li>
                     * @return Type 片段类型。取值有：
<li>Video：视频片段；</li>
<li>Audio：音频片段；</li>
<li>Empty：空白片段；</li>
<li>Transition：转场。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置片段类型。取值有：
<li>Video：视频片段；</li>
<li>Audio：音频片段；</li>
<li>Empty：空白片段；</li>
<li>Transition：转场。</li>
                     * @param _type 片段类型。取值有：
<li>Video：视频片段；</li>
<li>Audio：音频片段；</li>
<li>Empty：空白片段；</li>
<li>Transition：转场。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取视频片段，当 Type = Video 时有效。
                     * @return VideoItem 视频片段，当 Type = Video 时有效。
                     * 
                     */
                    VideoTrackItem GetVideoItem() const;

                    /**
                     * 设置视频片段，当 Type = Video 时有效。
                     * @param _videoItem 视频片段，当 Type = Video 时有效。
                     * 
                     */
                    void SetVideoItem(const VideoTrackItem& _videoItem);

                    /**
                     * 判断参数 VideoItem 是否已赋值
                     * @return VideoItem 是否已赋值
                     * 
                     */
                    bool VideoItemHasBeenSet() const;

                    /**
                     * 获取音频片段，当 Type = Audio 时有效。
                     * @return AudioItem 音频片段，当 Type = Audio 时有效。
                     * 
                     */
                    AudioTrackItem GetAudioItem() const;

                    /**
                     * 设置音频片段，当 Type = Audio 时有效。
                     * @param _audioItem 音频片段，当 Type = Audio 时有效。
                     * 
                     */
                    void SetAudioItem(const AudioTrackItem& _audioItem);

                    /**
                     * 判断参数 AudioItem 是否已赋值
                     * @return AudioItem 是否已赋值
                     * 
                     */
                    bool AudioItemHasBeenSet() const;

                    /**
                     * 获取空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
                     * @return EmptyItem 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
                     * 
                     */
                    EmptyTrackItem GetEmptyItem() const;

                    /**
                     * 设置空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
                     * @param _emptyItem 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
                     * 
                     */
                    void SetEmptyItem(const EmptyTrackItem& _emptyItem);

                    /**
                     * 判断参数 EmptyItem 是否已赋值
                     * @return EmptyItem 是否已赋值
                     * 
                     */
                    bool EmptyItemHasBeenSet() const;

                    /**
                     * 获取转场，当 Type = Transition 时有效。
                     * @return TransitionItem 转场，当 Type = Transition 时有效。
                     * 
                     */
                    MediaTransitionItem GetTransitionItem() const;

                    /**
                     * 设置转场，当 Type = Transition 时有效。
                     * @param _transitionItem 转场，当 Type = Transition 时有效。
                     * 
                     */
                    void SetTransitionItem(const MediaTransitionItem& _transitionItem);

                    /**
                     * 判断参数 TransitionItem 是否已赋值
                     * @return TransitionItem 是否已赋值
                     * 
                     */
                    bool TransitionItemHasBeenSet() const;

                private:

                    /**
                     * 片段类型。取值有：
<li>Video：视频片段；</li>
<li>Audio：音频片段；</li>
<li>Empty：空白片段；</li>
<li>Transition：转场。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频片段，当 Type = Video 时有效。
                     */
                    VideoTrackItem m_videoItem;
                    bool m_videoItemHasBeenSet;

                    /**
                     * 音频片段，当 Type = Audio 时有效。
                     */
                    AudioTrackItem m_audioItem;
                    bool m_audioItemHasBeenSet;

                    /**
                     * 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
                     */
                    EmptyTrackItem m_emptyItem;
                    bool m_emptyItemHasBeenSet;

                    /**
                     * 转场，当 Type = Transition 时有效。
                     */
                    MediaTransitionItem m_transitionItem;
                    bool m_transitionItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACKITEM_H_
