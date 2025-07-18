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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RepairInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoFrameInterpolationInfo.h>
#include <tencentcloud/vod/v20180717/model/SuperResolutionInfo.h>
#include <tencentcloud/vod/v20180717/model/HDRInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/ColorEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/SharpEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/LowLightEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ScratchRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/ArtifactRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质重生任务的输入。
                */
                class RebuildMediaTaskInput : public AbstractModel
                {
                public:
                    RebuildMediaTaskInput();
                    ~RebuildMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件 ID。
                     * @return FileId 媒体文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。
                     * @param _fileId 媒体文件 ID。
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
                     * 获取起始偏移时间，单位：秒，不填表示从视频开始截取。
                     * @return StartTimeOffset 起始偏移时间，单位：秒，不填表示从视频开始截取。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置起始偏移时间，单位：秒，不填表示从视频开始截取。
                     * @param _startTimeOffset 起始偏移时间，单位：秒，不填表示从视频开始截取。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取结束偏移时间，单位：秒，不填表示截取到视频末尾。
                     * @return EndTimeOffset 结束偏移时间，单位：秒，不填表示截取到视频末尾。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置结束偏移时间，单位：秒，不填表示截取到视频末尾。
                     * @param _endTimeOffset 结束偏移时间，单位：秒，不填表示截取到视频末尾。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取音画质重生模板号。
                     * @return Definition 音画质重生模板号。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置音画质重生模板号。
                     * @param _definition 音画质重生模板号。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取画质修复控制参数。
                     * @return RepairInfo 画质修复控制参数。
                     * 
                     */
                    RepairInfo GetRepairInfo() const;

                    /**
                     * 设置画质修复控制参数。
                     * @param _repairInfo 画质修复控制参数。
                     * 
                     */
                    void SetRepairInfo(const RepairInfo& _repairInfo);

                    /**
                     * 判断参数 RepairInfo 是否已赋值
                     * @return RepairInfo 是否已赋值
                     * 
                     */
                    bool RepairInfoHasBeenSet() const;

                    /**
                     * 获取智能插帧控制参数。
                     * @return VideoFrameInterpolationInfo 智能插帧控制参数。
                     * 
                     */
                    VideoFrameInterpolationInfo GetVideoFrameInterpolationInfo() const;

                    /**
                     * 设置智能插帧控制参数。
                     * @param _videoFrameInterpolationInfo 智能插帧控制参数。
                     * 
                     */
                    void SetVideoFrameInterpolationInfo(const VideoFrameInterpolationInfo& _videoFrameInterpolationInfo);

                    /**
                     * 判断参数 VideoFrameInterpolationInfo 是否已赋值
                     * @return VideoFrameInterpolationInfo 是否已赋值
                     * 
                     */
                    bool VideoFrameInterpolationInfoHasBeenSet() const;

                    /**
                     * 获取画面超分控制参数。
                     * @return SuperResolutionInfo 画面超分控制参数。
                     * 
                     */
                    SuperResolutionInfo GetSuperResolutionInfo() const;

                    /**
                     * 设置画面超分控制参数。
                     * @param _superResolutionInfo 画面超分控制参数。
                     * 
                     */
                    void SetSuperResolutionInfo(const SuperResolutionInfo& _superResolutionInfo);

                    /**
                     * 判断参数 SuperResolutionInfo 是否已赋值
                     * @return SuperResolutionInfo 是否已赋值
                     * 
                     */
                    bool SuperResolutionInfoHasBeenSet() const;

                    /**
                     * 获取高动态范围类型控制参数。
                     * @return HDRInfo 高动态范围类型控制参数。
                     * 
                     */
                    HDRInfo GetHDRInfo() const;

                    /**
                     * 设置高动态范围类型控制参数。
                     * @param _hDRInfo 高动态范围类型控制参数。
                     * 
                     */
                    void SetHDRInfo(const HDRInfo& _hDRInfo);

                    /**
                     * 判断参数 HDRInfo 是否已赋值
                     * @return HDRInfo 是否已赋值
                     * 
                     */
                    bool HDRInfoHasBeenSet() const;

                    /**
                     * 获取视频降噪控制参数。
                     * @return VideoDenoiseInfo 视频降噪控制参数。
                     * 
                     */
                    VideoDenoiseInfo GetVideoDenoiseInfo() const;

                    /**
                     * 设置视频降噪控制参数。
                     * @param _videoDenoiseInfo 视频降噪控制参数。
                     * 
                     */
                    void SetVideoDenoiseInfo(const VideoDenoiseInfo& _videoDenoiseInfo);

                    /**
                     * 判断参数 VideoDenoiseInfo 是否已赋值
                     * @return VideoDenoiseInfo 是否已赋值
                     * 
                     */
                    bool VideoDenoiseInfoHasBeenSet() const;

                    /**
                     * 获取音频降噪控制参数。
                     * @return AudioDenoiseInfo 音频降噪控制参数。
                     * 
                     */
                    AudioDenoiseInfo GetAudioDenoiseInfo() const;

                    /**
                     * 设置音频降噪控制参数。
                     * @param _audioDenoiseInfo 音频降噪控制参数。
                     * 
                     */
                    void SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo);

                    /**
                     * 判断参数 AudioDenoiseInfo 是否已赋值
                     * @return AudioDenoiseInfo 是否已赋值
                     * 
                     */
                    bool AudioDenoiseInfoHasBeenSet() const;

                    /**
                     * 获取色彩增强控制参数。
                     * @return ColorInfo 色彩增强控制参数。
                     * 
                     */
                    ColorEnhanceInfo GetColorInfo() const;

                    /**
                     * 设置色彩增强控制参数。
                     * @param _colorInfo 色彩增强控制参数。
                     * 
                     */
                    void SetColorInfo(const ColorEnhanceInfo& _colorInfo);

                    /**
                     * 判断参数 ColorInfo 是否已赋值
                     * @return ColorInfo 是否已赋值
                     * 
                     */
                    bool ColorInfoHasBeenSet() const;

                    /**
                     * 获取细节增强控制参数。
                     * @return SharpInfo 细节增强控制参数。
                     * 
                     */
                    SharpEnhanceInfo GetSharpInfo() const;

                    /**
                     * 设置细节增强控制参数。
                     * @param _sharpInfo 细节增强控制参数。
                     * 
                     */
                    void SetSharpInfo(const SharpEnhanceInfo& _sharpInfo);

                    /**
                     * 判断参数 SharpInfo 是否已赋值
                     * @return SharpInfo 是否已赋值
                     * 
                     */
                    bool SharpInfoHasBeenSet() const;

                    /**
                     * 获取人脸增强控制参数。
                     * @return FaceInfo 人脸增强控制参数。
                     * 
                     */
                    FaceEnhanceInfo GetFaceInfo() const;

                    /**
                     * 设置人脸增强控制参数。
                     * @param _faceInfo 人脸增强控制参数。
                     * 
                     */
                    void SetFaceInfo(const FaceEnhanceInfo& _faceInfo);

                    /**
                     * 判断参数 FaceInfo 是否已赋值
                     * @return FaceInfo 是否已赋值
                     * 
                     */
                    bool FaceInfoHasBeenSet() const;

                    /**
                     * 获取低光照控制参数。
                     * @return LowLightInfo 低光照控制参数。
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightInfo() const;

                    /**
                     * 设置低光照控制参数。
                     * @param _lowLightInfo 低光照控制参数。
                     * 
                     */
                    void SetLowLightInfo(const LowLightEnhanceInfo& _lowLightInfo);

                    /**
                     * 判断参数 LowLightInfo 是否已赋值
                     * @return LowLightInfo 是否已赋值
                     * 
                     */
                    bool LowLightInfoHasBeenSet() const;

                    /**
                     * 获取去划痕控制参数。
                     * @return ScratchRepairInfo 去划痕控制参数。
                     * 
                     */
                    ScratchRepairInfo GetScratchRepairInfo() const;

                    /**
                     * 设置去划痕控制参数。
                     * @param _scratchRepairInfo 去划痕控制参数。
                     * 
                     */
                    void SetScratchRepairInfo(const ScratchRepairInfo& _scratchRepairInfo);

                    /**
                     * 判断参数 ScratchRepairInfo 是否已赋值
                     * @return ScratchRepairInfo 是否已赋值
                     * 
                     */
                    bool ScratchRepairInfoHasBeenSet() const;

                    /**
                     * 获取去伪影（毛刺）控制参数。
                     * @return ArtifactRepairInfo 去伪影（毛刺）控制参数。
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepairInfo() const;

                    /**
                     * 设置去伪影（毛刺）控制参数。
                     * @param _artifactRepairInfo 去伪影（毛刺）控制参数。
                     * 
                     */
                    void SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo);

                    /**
                     * 判断参数 ArtifactRepairInfo 是否已赋值
                     * @return ArtifactRepairInfo 是否已赋值
                     * 
                     */
                    bool ArtifactRepairInfoHasBeenSet() const;

                    /**
                     * 获取音画质重生输出目标参数。
                     * @return TargetInfo 音画质重生输出目标参数。
                     * 
                     */
                    RebuildMediaTargetInfo GetTargetInfo() const;

                    /**
                     * 设置音画质重生输出目标参数。
                     * @param _targetInfo 音画质重生输出目标参数。
                     * 
                     */
                    void SetTargetInfo(const RebuildMediaTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 起始偏移时间，单位：秒，不填表示从视频开始截取。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 结束偏移时间，单位：秒，不填表示截取到视频末尾。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 音画质重生模板号。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 画质修复控制参数。
                     */
                    RepairInfo m_repairInfo;
                    bool m_repairInfoHasBeenSet;

                    /**
                     * 智能插帧控制参数。
                     */
                    VideoFrameInterpolationInfo m_videoFrameInterpolationInfo;
                    bool m_videoFrameInterpolationInfoHasBeenSet;

                    /**
                     * 画面超分控制参数。
                     */
                    SuperResolutionInfo m_superResolutionInfo;
                    bool m_superResolutionInfoHasBeenSet;

                    /**
                     * 高动态范围类型控制参数。
                     */
                    HDRInfo m_hDRInfo;
                    bool m_hDRInfoHasBeenSet;

                    /**
                     * 视频降噪控制参数。
                     */
                    VideoDenoiseInfo m_videoDenoiseInfo;
                    bool m_videoDenoiseInfoHasBeenSet;

                    /**
                     * 音频降噪控制参数。
                     */
                    AudioDenoiseInfo m_audioDenoiseInfo;
                    bool m_audioDenoiseInfoHasBeenSet;

                    /**
                     * 色彩增强控制参数。
                     */
                    ColorEnhanceInfo m_colorInfo;
                    bool m_colorInfoHasBeenSet;

                    /**
                     * 细节增强控制参数。
                     */
                    SharpEnhanceInfo m_sharpInfo;
                    bool m_sharpInfoHasBeenSet;

                    /**
                     * 人脸增强控制参数。
                     */
                    FaceEnhanceInfo m_faceInfo;
                    bool m_faceInfoHasBeenSet;

                    /**
                     * 低光照控制参数。
                     */
                    LowLightEnhanceInfo m_lowLightInfo;
                    bool m_lowLightInfoHasBeenSet;

                    /**
                     * 去划痕控制参数。
                     */
                    ScratchRepairInfo m_scratchRepairInfo;
                    bool m_scratchRepairInfoHasBeenSet;

                    /**
                     * 去伪影（毛刺）控制参数。
                     */
                    ArtifactRepairInfo m_artifactRepairInfo;
                    bool m_artifactRepairInfoHasBeenSet;

                    /**
                     * 音画质重生输出目标参数。
                     */
                    RebuildMediaTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATASKINPUT_H_
