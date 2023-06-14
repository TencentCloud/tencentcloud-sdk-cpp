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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/MediaTranscodeInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaAnimatedGraphicsInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSampleSnapshotInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaImageSpriteInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimeOffsetInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaAdaptiveDynamicStreamingInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleInfo.h>
#include <tencentcloud/vod/v20180717/model/FileReviewInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播文件信息
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础信息。包括视频名称、分类、播放地址、封面图片等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicInfo 基础信息。包括视频名称、分类、播放地址、封面图片等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaBasicInfo GetBasicInfo() const;

                    /**
                     * 设置基础信息。包括视频名称、分类、播放地址、封面图片等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicInfo 基础信息。包括视频名称、分类、播放地址、封面图片等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasicInfo(const MediaBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取元信息。包括大小、时长、视频流信息、音频流信息等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 元信息。包括大小、时长、视频流信息、音频流信息等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置元信息。包括大小、时长、视频流信息、音频流信息等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData 元信息。包括大小、时长、视频流信息、音频流信息等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeInfo 转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaTranscodeInfo GetTranscodeInfo() const;

                    /**
                     * 设置转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeInfo 转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranscodeInfo(const MediaTranscodeInfo& _transcodeInfo);

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     * 
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取转动图结果信息。对视频转动图（如 gif）后，动图相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicsInfo 转动图结果信息。对视频转动图（如 gif）后，动图相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaAnimatedGraphicsInfo GetAnimatedGraphicsInfo() const;

                    /**
                     * 设置转动图结果信息。对视频转动图（如 gif）后，动图相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicsInfo 转动图结果信息。对视频转动图（如 gif）后，动图相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnimatedGraphicsInfo(const MediaAnimatedGraphicsInfo& _animatedGraphicsInfo);

                    /**
                     * 判断参数 AnimatedGraphicsInfo 是否已赋值
                     * @return AnimatedGraphicsInfo 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicsInfoHasBeenSet() const;

                    /**
                     * 获取采样截图信息。对视频采样截图后，相关截图信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotInfo 采样截图信息。对视频采样截图后，相关截图信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSampleSnapshotInfo GetSampleSnapshotInfo() const;

                    /**
                     * 设置采样截图信息。对视频采样截图后，相关截图信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotInfo 采样截图信息。对视频采样截图后，相关截图信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampleSnapshotInfo(const MediaSampleSnapshotInfo& _sampleSnapshotInfo);

                    /**
                     * 判断参数 SampleSnapshotInfo 是否已赋值
                     * @return SampleSnapshotInfo 是否已赋值
                     * 
                     */
                    bool SampleSnapshotInfoHasBeenSet() const;

                    /**
                     * 获取雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteInfo 雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaImageSpriteInfo GetImageSpriteInfo() const;

                    /**
                     * 设置雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteInfo 雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageSpriteInfo(const MediaImageSpriteInfo& _imageSpriteInfo);

                    /**
                     * 判断参数 ImageSpriteInfo 是否已赋值
                     * @return ImageSpriteInfo 是否已赋值
                     * 
                     */
                    bool ImageSpriteInfoHasBeenSet() const;

                    /**
                     * 获取指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetInfo 指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSnapshotByTimeOffsetInfo GetSnapshotByTimeOffsetInfo() const;

                    /**
                     * 设置指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetInfo 指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotByTimeOffsetInfo(const MediaSnapshotByTimeOffsetInfo& _snapshotByTimeOffsetInfo);

                    /**
                     * 判断参数 SnapshotByTimeOffsetInfo 是否已赋值
                     * @return SnapshotByTimeOffsetInfo 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetInfoHasBeenSet() const;

                    /**
                     * 获取视频打点信息。对视频设置的各个打点信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyFrameDescInfo 视频打点信息。对视频设置的各个打点信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaKeyFrameDescInfo GetKeyFrameDescInfo() const;

                    /**
                     * 设置视频打点信息。对视频设置的各个打点信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyFrameDescInfo 视频打点信息。对视频设置的各个打点信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyFrameDescInfo(const MediaKeyFrameDescInfo& _keyFrameDescInfo);

                    /**
                     * 判断参数 KeyFrameDescInfo 是否已赋值
                     * @return KeyFrameDescInfo 是否已赋值
                     * 
                     */
                    bool KeyFrameDescInfoHasBeenSet() const;

                    /**
                     * 获取转自适应码流信息。包括规格、加密类型、打包格式等相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingInfo 转自适应码流信息。包括规格、加密类型、打包格式等相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaAdaptiveDynamicStreamingInfo GetAdaptiveDynamicStreamingInfo() const;

                    /**
                     * 设置转自适应码流信息。包括规格、加密类型、打包格式等相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingInfo 转自适应码流信息。包括规格、加密类型、打包格式等相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingInfo(const MediaAdaptiveDynamicStreamingInfo& _adaptiveDynamicStreamingInfo);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingInfo 是否已赋值
                     * @return AdaptiveDynamicStreamingInfo 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingInfoHasBeenSet() const;

                    /**
                     * 获取小程序审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniProgramReviewInfo 小程序审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMiniProgramReviewInfo GetMiniProgramReviewInfo() const;

                    /**
                     * 设置小程序审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniProgramReviewInfo 小程序审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniProgramReviewInfo(const MediaMiniProgramReviewInfo& _miniProgramReviewInfo);

                    /**
                     * 判断参数 MiniProgramReviewInfo 是否已赋值
                     * @return MiniProgramReviewInfo 是否已赋值
                     * 
                     */
                    bool MiniProgramReviewInfoHasBeenSet() const;

                    /**
                     * 获取字幕信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleInfo 字幕信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSubtitleInfo GetSubtitleInfo() const;

                    /**
                     * 设置字幕信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleInfo 字幕信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleInfo(const MediaSubtitleInfo& _subtitleInfo);

                    /**
                     * 判断参数 SubtitleInfo 是否已赋值
                     * @return SubtitleInfo 是否已赋值
                     * 
                     */
                    bool SubtitleInfoHasBeenSet() const;

                    /**
                     * 获取媒体文件唯一标识 ID。
                     * @return FileId 媒体文件唯一标识 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件唯一标识 ID。
                     * @param _fileId 媒体文件唯一标识 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewInfo 审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileReviewInfo GetReviewInfo() const;

                    /**
                     * 设置审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewInfo 审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewInfo(const FileReviewInfo& _reviewInfo);

                    /**
                     * 判断参数 ReviewInfo 是否已赋值
                     * @return ReviewInfo 是否已赋值
                     * 
                     */
                    bool ReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 基础信息。包括视频名称、分类、播放地址、封面图片等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 元信息。包括大小、时长、视频流信息、音频流信息等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaTranscodeInfo m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * 转动图结果信息。对视频转动图（如 gif）后，动图相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaAnimatedGraphicsInfo m_animatedGraphicsInfo;
                    bool m_animatedGraphicsInfoHasBeenSet;

                    /**
                     * 采样截图信息。对视频采样截图后，相关截图信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSampleSnapshotInfo m_sampleSnapshotInfo;
                    bool m_sampleSnapshotInfoHasBeenSet;

                    /**
                     * 雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaImageSpriteInfo m_imageSpriteInfo;
                    bool m_imageSpriteInfoHasBeenSet;

                    /**
                     * 指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSnapshotByTimeOffsetInfo m_snapshotByTimeOffsetInfo;
                    bool m_snapshotByTimeOffsetInfoHasBeenSet;

                    /**
                     * 视频打点信息。对视频设置的各个打点信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaKeyFrameDescInfo m_keyFrameDescInfo;
                    bool m_keyFrameDescInfoHasBeenSet;

                    /**
                     * 转自适应码流信息。包括规格、加密类型、打包格式等相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaAdaptiveDynamicStreamingInfo m_adaptiveDynamicStreamingInfo;
                    bool m_adaptiveDynamicStreamingInfoHasBeenSet;

                    /**
                     * 小程序审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMiniProgramReviewInfo m_miniProgramReviewInfo;
                    bool m_miniProgramReviewInfoHasBeenSet;

                    /**
                     * 字幕信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSubtitleInfo m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * 媒体文件唯一标识 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileReviewInfo m_reviewInfo;
                    bool m_reviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
