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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeVideoItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeAudioItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeImageItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeTransitionItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeSubtitleItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeEmptyItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 轨道元素信息。
                */
                class ComposeMediaItem : public AbstractModel
                {
                public:
                    ComposeMediaItem();
                    ~ComposeMediaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元素类型。取值有：
<li>Video：视频元素。</li>
<li>Audio：音频元素。</li>
<li>Image：图片元素。</li>
<li>Transition：转场元素。</li>
<li>Subtitle：字幕元素。</li>
<li>Empty：空白元素。</li>
                     * @return Type 元素类型。取值有：
<li>Video：视频元素。</li>
<li>Audio：音频元素。</li>
<li>Image：图片元素。</li>
<li>Transition：转场元素。</li>
<li>Subtitle：字幕元素。</li>
<li>Empty：空白元素。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置元素类型。取值有：
<li>Video：视频元素。</li>
<li>Audio：音频元素。</li>
<li>Image：图片元素。</li>
<li>Transition：转场元素。</li>
<li>Subtitle：字幕元素。</li>
<li>Empty：空白元素。</li>
                     * @param _type 元素类型。取值有：
<li>Video：视频元素。</li>
<li>Audio：音频元素。</li>
<li>Image：图片元素。</li>
<li>Transition：转场元素。</li>
<li>Subtitle：字幕元素。</li>
<li>Empty：空白元素。</li>
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
                     * 获取视频元素，当 Type = Video 时有效。
                     * @return Video 视频元素，当 Type = Video 时有效。
                     * 
                     */
                    ComposeVideoItem GetVideo() const;

                    /**
                     * 设置视频元素，当 Type = Video 时有效。
                     * @param _video 视频元素，当 Type = Video 时有效。
                     * 
                     */
                    void SetVideo(const ComposeVideoItem& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取音频元素，当 Type = Audio 时有效。
                     * @return Audio 音频元素，当 Type = Audio 时有效。
                     * 
                     */
                    ComposeAudioItem GetAudio() const;

                    /**
                     * 设置音频元素，当 Type = Audio 时有效。
                     * @param _audio 音频元素，当 Type = Audio 时有效。
                     * 
                     */
                    void SetAudio(const ComposeAudioItem& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取图片元素，当 Type = Image 时有效。
                     * @return Image 图片元素，当 Type = Image 时有效。
                     * 
                     */
                    ComposeImageItem GetImage() const;

                    /**
                     * 设置图片元素，当 Type = Image 时有效。
                     * @param _image 图片元素，当 Type = Image 时有效。
                     * 
                     */
                    void SetImage(const ComposeImageItem& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取转场元素，当 Type = Transition 时有效。
                     * @return Transition 转场元素，当 Type = Transition 时有效。
                     * 
                     */
                    ComposeTransitionItem GetTransition() const;

                    /**
                     * 设置转场元素，当 Type = Transition 时有效。
                     * @param _transition 转场元素，当 Type = Transition 时有效。
                     * 
                     */
                    void SetTransition(const ComposeTransitionItem& _transition);

                    /**
                     * 判断参数 Transition 是否已赋值
                     * @return Transition 是否已赋值
                     * 
                     */
                    bool TransitionHasBeenSet() const;

                    /**
                     * 获取字幕元素，当 Type = Subtitle 是有效。
                     * @return Subtitle 字幕元素，当 Type = Subtitle 是有效。
                     * 
                     */
                    ComposeSubtitleItem GetSubtitle() const;

                    /**
                     * 设置字幕元素，当 Type = Subtitle 是有效。
                     * @param _subtitle 字幕元素，当 Type = Subtitle 是有效。
                     * 
                     */
                    void SetSubtitle(const ComposeSubtitleItem& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取空白元素，当 Type = Empty 时有效。用于时间轴的占位。
                     * @return Empty 空白元素，当 Type = Empty 时有效。用于时间轴的占位。
                     * 
                     */
                    ComposeEmptyItem GetEmpty() const;

                    /**
                     * 设置空白元素，当 Type = Empty 时有效。用于时间轴的占位。
                     * @param _empty 空白元素，当 Type = Empty 时有效。用于时间轴的占位。
                     * 
                     */
                    void SetEmpty(const ComposeEmptyItem& _empty);

                    /**
                     * 判断参数 Empty 是否已赋值
                     * @return Empty 是否已赋值
                     * 
                     */
                    bool EmptyHasBeenSet() const;

                private:

                    /**
                     * 元素类型。取值有：
<li>Video：视频元素。</li>
<li>Audio：音频元素。</li>
<li>Image：图片元素。</li>
<li>Transition：转场元素。</li>
<li>Subtitle：字幕元素。</li>
<li>Empty：空白元素。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频元素，当 Type = Video 时有效。
                     */
                    ComposeVideoItem m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 音频元素，当 Type = Audio 时有效。
                     */
                    ComposeAudioItem m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 图片元素，当 Type = Image 时有效。
                     */
                    ComposeImageItem m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 转场元素，当 Type = Transition 时有效。
                     */
                    ComposeTransitionItem m_transition;
                    bool m_transitionHasBeenSet;

                    /**
                     * 字幕元素，当 Type = Subtitle 是有效。
                     */
                    ComposeSubtitleItem m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * 空白元素，当 Type = Empty 时有效。用于时间轴的占位。
                     */
                    ComposeEmptyItem m_empty;
                    bool m_emptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_
