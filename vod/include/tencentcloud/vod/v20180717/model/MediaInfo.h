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
#include <tencentcloud/vod/v20180717/model/MPSAiMediaInfo.h>
#include <tencentcloud/vod/v20180717/model/ImageUnderstandingInfo.h>
#include <tencentcloud/vod/v20180717/model/KnowledgeBasesInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceRecognitionInfo.h>


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
                     * 获取<p>基础信息。包括视频名称、分类、播放地址、封面图片等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicInfo <p>基础信息。包括视频名称、分类、播放地址、封面图片等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaBasicInfo GetBasicInfo() const;

                    /**
                     * 设置<p>基础信息。包括视频名称、分类、播放地址、封面图片等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicInfo <p>基础信息。包括视频名称、分类、播放地址、封面图片等。</p>
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
                     * 获取<p>元信息。包括大小、时长、视频流信息、音频流信息等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData <p>元信息。包括大小、时长、视频流信息、音频流信息等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>元信息。包括大小、时长、视频流信息、音频流信息等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData <p>元信息。包括大小、时长、视频流信息、音频流信息等。</p>
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
                     * 获取<p>转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeInfo <p>转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaTranscodeInfo GetTranscodeInfo() const;

                    /**
                     * 设置<p>转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeInfo <p>转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。</p>
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
                     * 获取<p>转动图结果信息。对视频转动图（如 gif）后，动图相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicsInfo <p>转动图结果信息。对视频转动图（如 gif）后，动图相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaAnimatedGraphicsInfo GetAnimatedGraphicsInfo() const;

                    /**
                     * 设置<p>转动图结果信息。对视频转动图（如 gif）后，动图相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicsInfo <p>转动图结果信息。对视频转动图（如 gif）后，动图相关信息。</p>
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
                     * 获取<p>采样截图信息。对视频采样截图后，相关截图信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotInfo <p>采样截图信息。对视频采样截图后，相关截图信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSampleSnapshotInfo GetSampleSnapshotInfo() const;

                    /**
                     * 设置<p>采样截图信息。对视频采样截图后，相关截图信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotInfo <p>采样截图信息。对视频采样截图后，相关截图信息。</p>
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
                     * 获取<p>雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteInfo <p>雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaImageSpriteInfo GetImageSpriteInfo() const;

                    /**
                     * 设置<p>雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteInfo <p>雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。</p>
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
                     * 获取<p>指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetInfo <p>指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSnapshotByTimeOffsetInfo GetSnapshotByTimeOffsetInfo() const;

                    /**
                     * 设置<p>指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetInfo <p>指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。</p>
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
                     * 获取<p>视频打点信息。对视频设置的各个打点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyFrameDescInfo <p>视频打点信息。对视频设置的各个打点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaKeyFrameDescInfo GetKeyFrameDescInfo() const;

                    /**
                     * 设置<p>视频打点信息。对视频设置的各个打点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyFrameDescInfo <p>视频打点信息。对视频设置的各个打点信息。</p>
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
                     * 获取<p>转自适应码流信息。包括规格、加密类型、打包格式等相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingInfo <p>转自适应码流信息。包括规格、加密类型、打包格式等相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaAdaptiveDynamicStreamingInfo GetAdaptiveDynamicStreamingInfo() const;

                    /**
                     * 设置<p>转自适应码流信息。包括规格、加密类型、打包格式等相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingInfo <p>转自适应码流信息。包括规格、加密类型、打包格式等相关信息。</p>
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
                     * 获取<p>小程序审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniProgramReviewInfo <p>小程序审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMiniProgramReviewInfo GetMiniProgramReviewInfo() const;

                    /**
                     * 设置<p>小程序审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniProgramReviewInfo <p>小程序审核信息。</p>
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
                     * 获取<p>字幕信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleInfo <p>字幕信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSubtitleInfo GetSubtitleInfo() const;

                    /**
                     * 设置<p>字幕信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleInfo <p>字幕信息。</p>
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
                     * 获取<p>媒体文件唯一标识 ID。</p>
                     * @return FileId <p>媒体文件唯一标识 ID。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件唯一标识 ID。</p>
                     * @param _fileId <p>媒体文件唯一标识 ID。</p>
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
                     * 获取<p>审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewInfo <p>审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileReviewInfo GetReviewInfo() const;

                    /**
                     * 设置<p>审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewInfo <p>审核信息。</p>
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

                    /**
                     * 获取<p>MPS智能媒资信息</p>
                     * @return MPSAiMediaInfo <p>MPS智能媒资信息</p>
                     * 
                     */
                    MPSAiMediaInfo GetMPSAiMediaInfo() const;

                    /**
                     * 设置<p>MPS智能媒资信息</p>
                     * @param _mPSAiMediaInfo <p>MPS智能媒资信息</p>
                     * 
                     */
                    void SetMPSAiMediaInfo(const MPSAiMediaInfo& _mPSAiMediaInfo);

                    /**
                     * 判断参数 MPSAiMediaInfo 是否已赋值
                     * @return MPSAiMediaInfo 是否已赋值
                     * 
                     */
                    bool MPSAiMediaInfoHasBeenSet() const;

                    /**
                     * 获取<p>图片理解信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUnderstandingInfo <p>图片理解信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageUnderstandingInfo GetImageUnderstandingInfo() const;

                    /**
                     * 设置<p>图片理解信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUnderstandingInfo <p>图片理解信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUnderstandingInfo(const ImageUnderstandingInfo& _imageUnderstandingInfo);

                    /**
                     * 判断参数 ImageUnderstandingInfo 是否已赋值
                     * @return ImageUnderstandingInfo 是否已赋值
                     * 
                     */
                    bool ImageUnderstandingInfoHasBeenSet() const;

                    /**
                     * 获取<p>智能知识库信息。</p>
                     * @return KnowledgeBasesInfo <p>智能知识库信息。</p>
                     * 
                     */
                    KnowledgeBasesInfo GetKnowledgeBasesInfo() const;

                    /**
                     * 设置<p>智能知识库信息。</p>
                     * @param _knowledgeBasesInfo <p>智能知识库信息。</p>
                     * 
                     */
                    void SetKnowledgeBasesInfo(const KnowledgeBasesInfo& _knowledgeBasesInfo);

                    /**
                     * 判断参数 KnowledgeBasesInfo 是否已赋值
                     * @return KnowledgeBasesInfo 是否已赋值
                     * 
                     */
                    bool KnowledgeBasesInfoHasBeenSet() const;

                    /**
                     * 获取<p>人脸识别信息。</p>
                     * @return FaceRecognitionInfo <p>人脸识别信息。</p>
                     * 
                     */
                    FaceRecognitionInfo GetFaceRecognitionInfo() const;

                    /**
                     * 设置<p>人脸识别信息。</p>
                     * @param _faceRecognitionInfo <p>人脸识别信息。</p>
                     * 
                     */
                    void SetFaceRecognitionInfo(const FaceRecognitionInfo& _faceRecognitionInfo);

                    /**
                     * 判断参数 FaceRecognitionInfo 是否已赋值
                     * @return FaceRecognitionInfo 是否已赋值
                     * 
                     */
                    bool FaceRecognitionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>基础信息。包括视频名称、分类、播放地址、封面图片等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * <p>元信息。包括大小、时长、视频流信息、音频流信息等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>转码结果信息。包括该视频转码生成的各种码率的视频的地址、规格、码率、分辨率等。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaTranscodeInfo m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * <p>转动图结果信息。对视频转动图（如 gif）后，动图相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaAnimatedGraphicsInfo m_animatedGraphicsInfo;
                    bool m_animatedGraphicsInfoHasBeenSet;

                    /**
                     * <p>采样截图信息。对视频采样截图后，相关截图信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSampleSnapshotInfo m_sampleSnapshotInfo;
                    bool m_sampleSnapshotInfoHasBeenSet;

                    /**
                     * <p>雪碧图信息。对视频截取雪碧图之后，雪碧的相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaImageSpriteInfo m_imageSpriteInfo;
                    bool m_imageSpriteInfoHasBeenSet;

                    /**
                     * <p>指定时间点截图信息。对视频依照指定时间点截图后，各个截图的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSnapshotByTimeOffsetInfo m_snapshotByTimeOffsetInfo;
                    bool m_snapshotByTimeOffsetInfoHasBeenSet;

                    /**
                     * <p>视频打点信息。对视频设置的各个打点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaKeyFrameDescInfo m_keyFrameDescInfo;
                    bool m_keyFrameDescInfoHasBeenSet;

                    /**
                     * <p>转自适应码流信息。包括规格、加密类型、打包格式等相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaAdaptiveDynamicStreamingInfo m_adaptiveDynamicStreamingInfo;
                    bool m_adaptiveDynamicStreamingInfoHasBeenSet;

                    /**
                     * <p>小程序审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMiniProgramReviewInfo m_miniProgramReviewInfo;
                    bool m_miniProgramReviewInfoHasBeenSet;

                    /**
                     * <p>字幕信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSubtitleInfo m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * <p>媒体文件唯一标识 ID。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>审核信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileReviewInfo m_reviewInfo;
                    bool m_reviewInfoHasBeenSet;

                    /**
                     * <p>MPS智能媒资信息</p>
                     */
                    MPSAiMediaInfo m_mPSAiMediaInfo;
                    bool m_mPSAiMediaInfoHasBeenSet;

                    /**
                     * <p>图片理解信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageUnderstandingInfo m_imageUnderstandingInfo;
                    bool m_imageUnderstandingInfoHasBeenSet;

                    /**
                     * <p>智能知识库信息。</p>
                     */
                    KnowledgeBasesInfo m_knowledgeBasesInfo;
                    bool m_knowledgeBasesInfoHasBeenSet;

                    /**
                     * <p>人脸识别信息。</p>
                     */
                    FaceRecognitionInfo m_faceRecognitionInfo;
                    bool m_faceRecognitionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
