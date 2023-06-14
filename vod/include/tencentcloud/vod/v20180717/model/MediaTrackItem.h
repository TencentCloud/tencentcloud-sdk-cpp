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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTrackItem.h>
#include <tencentcloud/vod/v20180717/model/AudioTrackItem.h>
#include <tencentcloud/vod/v20180717/model/StickerTrackItem.h>
#include <tencentcloud/vod/v20180717/model/MediaTransitionItem.h>
#include <tencentcloud/vod/v20180717/model/EmptyTrackItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
<li>Video：视频片段。</li>
<li>Audio：音频片段。</li>
<li>Sticker：贴图片段。</li>
<li>Transition：转场。</li>
<li>Empty：空白片段。</li>
                     * @return Type 片段类型。取值有：
<li>Video：视频片段。</li>
<li>Audio：音频片段。</li>
<li>Sticker：贴图片段。</li>
<li>Transition：转场。</li>
<li>Empty：空白片段。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置片段类型。取值有：
<li>Video：视频片段。</li>
<li>Audio：音频片段。</li>
<li>Sticker：贴图片段。</li>
<li>Transition：转场。</li>
<li>Empty：空白片段。</li>
                     * @param _type 片段类型。取值有：
<li>Video：视频片段。</li>
<li>Audio：音频片段。</li>
<li>Sticker：贴图片段。</li>
<li>Transition：转场。</li>
<li>Empty：空白片段。</li>
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoItem 视频片段，当 Type = Video 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoTrackItem GetVideoItem() const;

                    /**
                     * 设置视频片段，当 Type = Video 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoItem 视频片段，当 Type = Video 时有效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioItem 音频片段，当 Type = Audio 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioTrackItem GetAudioItem() const;

                    /**
                     * 设置音频片段，当 Type = Audio 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioItem 音频片段，当 Type = Audio 时有效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取贴图片段，当 Type = Sticker 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StickerItem 贴图片段，当 Type = Sticker 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StickerTrackItem GetStickerItem() const;

                    /**
                     * 设置贴图片段，当 Type = Sticker 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stickerItem 贴图片段，当 Type = Sticker 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStickerItem(const StickerTrackItem& _stickerItem);

                    /**
                     * 判断参数 StickerItem 是否已赋值
                     * @return StickerItem 是否已赋值
                     * 
                     */
                    bool StickerItemHasBeenSet() const;

                    /**
                     * 获取转场，当 Type = Transition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransitionItem 转场，当 Type = Transition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaTransitionItem GetTransitionItem() const;

                    /**
                     * 设置转场，当 Type = Transition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transitionItem 转场，当 Type = Transition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransitionItem(const MediaTransitionItem& _transitionItem);

                    /**
                     * 判断参数 TransitionItem 是否已赋值
                     * @return TransitionItem 是否已赋值
                     * 
                     */
                    bool TransitionItemHasBeenSet() const;

                    /**
                     * 获取空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmptyItem 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmptyTrackItem GetEmptyItem() const;

                    /**
                     * 设置空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emptyItem 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmptyItem(const EmptyTrackItem& _emptyItem);

                    /**
                     * 判断参数 EmptyItem 是否已赋值
                     * @return EmptyItem 是否已赋值
                     * 
                     */
                    bool EmptyItemHasBeenSet() const;

                private:

                    /**
                     * 片段类型。取值有：
<li>Video：视频片段。</li>
<li>Audio：音频片段。</li>
<li>Sticker：贴图片段。</li>
<li>Transition：转场。</li>
<li>Empty：空白片段。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频片段，当 Type = Video 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoTrackItem m_videoItem;
                    bool m_videoItemHasBeenSet;

                    /**
                     * 音频片段，当 Type = Audio 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioTrackItem m_audioItem;
                    bool m_audioItemHasBeenSet;

                    /**
                     * 贴图片段，当 Type = Sticker 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StickerTrackItem m_stickerItem;
                    bool m_stickerItemHasBeenSet;

                    /**
                     * 转场，当 Type = Transition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaTransitionItem m_transitionItem;
                    bool m_transitionItemHasBeenSet;

                    /**
                     * 空白片段，当 Type = Empty 时有效。空片段用于时间轴的占位。<li>如需要两个音频片段之间有一段时间的静音，可以用 EmptyTrackItem 来进行占位。</li>
<li>使用 EmptyTrackItem 进行占位，来定位某个Item。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmptyTrackItem m_emptyItem;
                    bool m_emptyItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_
