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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskStatDataItem.h>
#include <tencentcloud/mps/v20190612/model/SpecificationDataItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 任务统计数据。
                */
                class TaskStatData : public AbstractModel
                {
                public:
                    TaskStatData();
                    ~TaskStatData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型。
<li>Transcode: 转码</li>
<li>Enhance: 增强</li>
<li>AIAnalysis: 智能分析</li>
<li>AIRecognition: 智能识别</li>
<li>AIReview: 内容审核</li>
<li>Snapshot: 截图</li>
<li>AnimatedGraphics: 转动图</li>
<li>ImageProcess: 图片处理</li>
                     * @return TaskType 任务类型。
<li>Transcode: 转码</li>
<li>Enhance: 增强</li>
<li>AIAnalysis: 智能分析</li>
<li>AIRecognition: 智能识别</li>
<li>AIReview: 内容审核</li>
<li>Snapshot: 截图</li>
<li>AnimatedGraphics: 转动图</li>
<li>ImageProcess: 图片处理</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。
<li>Transcode: 转码</li>
<li>Enhance: 增强</li>
<li>AIAnalysis: 智能分析</li>
<li>AIRecognition: 智能识别</li>
<li>AIReview: 内容审核</li>
<li>Snapshot: 截图</li>
<li>AnimatedGraphics: 转动图</li>
<li>ImageProcess: 图片处理</li>
                     * @param _taskType 任务类型。
<li>Transcode: 转码</li>
<li>Enhance: 增强</li>
<li>AIAnalysis: 智能分析</li>
<li>AIRecognition: 智能识别</li>
<li>AIReview: 内容审核</li>
<li>Snapshot: 截图</li>
<li>AnimatedGraphics: 转动图</li>
<li>ImageProcess: 图片处理</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务数统计数据概览。
<li>Transcode：用量单位为秒</li>
<li>Enhance：用量单位为秒</li>
<li>AIAnalysis：用量单位为秒</li>
<li>AIRecognition：用量单位为秒</li>
<li>AIReview：用量单位为秒</li>
<li>Snapshot：用量单位为张</li>
<li>AnimatedGraphics: 用量单位为秒</li>
<li>ImageProcess: 用量单位为张</li>
                     * @return Summary 任务数统计数据概览。
<li>Transcode：用量单位为秒</li>
<li>Enhance：用量单位为秒</li>
<li>AIAnalysis：用量单位为秒</li>
<li>AIRecognition：用量单位为秒</li>
<li>AIReview：用量单位为秒</li>
<li>Snapshot：用量单位为张</li>
<li>AnimatedGraphics: 用量单位为秒</li>
<li>ImageProcess: 用量单位为张</li>
                     * 
                     */
                    std::vector<TaskStatDataItem> GetSummary() const;

                    /**
                     * 设置任务数统计数据概览。
<li>Transcode：用量单位为秒</li>
<li>Enhance：用量单位为秒</li>
<li>AIAnalysis：用量单位为秒</li>
<li>AIRecognition：用量单位为秒</li>
<li>AIReview：用量单位为秒</li>
<li>Snapshot：用量单位为张</li>
<li>AnimatedGraphics: 用量单位为秒</li>
<li>ImageProcess: 用量单位为张</li>
                     * @param _summary 任务数统计数据概览。
<li>Transcode：用量单位为秒</li>
<li>Enhance：用量单位为秒</li>
<li>AIAnalysis：用量单位为秒</li>
<li>AIRecognition：用量单位为秒</li>
<li>AIReview：用量单位为秒</li>
<li>Snapshot：用量单位为张</li>
<li>AnimatedGraphics: 用量单位为秒</li>
<li>ImageProcess: 用量单位为张</li>
                     * 
                     */
                    void SetSummary(const std::vector<TaskStatDataItem>& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取不同规格任务统计数据详情。

1、转码规格：
<li>Audio：纯音频</li>
<li>Remuxing：转封装</li>
<li>其他转码规格：{TYPE}.{CODEC}.{SPECIFICATION}</li>  其中 TYPE 取值
    Standard：普通转码
    TESHD-10：视频极速高清
    TESHD-20：音频极速高清
    TESHD-30：音视频极速高清
    TESHD-30-SDK：音视频极速高清SDK按时长计费
    TESHD-30-SDKCores：音视频极速高清SDK按核心数计费
    Edit：视频编辑
  其中 CODEC 取值
    H264：H.264 编码
    H265：H.265 编码
    AV1：AV1 编码
    MV-HEVC：MV-HEVC 编码
  其中 SPECIFICATION 取值
    SD：标清
    HD：高清
    FHD：全高清
    2K：2K
    4K：4K
例如 TESHD-10.H265.HD 表示 H.265 编码方式高清极速高清转码

2、增强规格：视频增强格式：{TYPE}.{CODEC}.{SPECIFICATION}.{FPS}，其中 CODEC 和 SPECIFICATION 同转码，FPS在原子类型时才存在；音频增强格式：{TYPE}。
增强TYPE 取值：
<li>Enhance：通用增强类型，可能是任意一种原子增强类型</li>
<li>原子增强类型</li>  视频原子增强类型取值：
    Sdr2hdr：SDR2HDR
    SuperResolution：超分
    InsertFrame：插帧
    ComprehensiveEnhancement：综合增强
    NoiseReduction：视频降噪
    ColorEnhancement：色彩增强
    RemoveScratches：去划痕
    Deburr：去毛刺
    DetailEnhancement：细节增强
    LightEnhancement：低光照增强
    FaceEnhancement：人脸增强
  音频原子增强类型取值：
    AudioNoiseReduction
    VolumeBalance
    AudioBeautify
    AudioSeparation

3、截图规格：
<li>ImageSprite：雪碧图</li>
<li>SampleSnapshot：采样截图</li>
<li>SnapshotByTime：时间点截图</li>
4、图片处理规格：{TYPE}.{CODEC}.{SPECIFICATION}
<li> ImageCompression：图片编码</li>
<li> ImageSuperResolution：图片超分</li>
<li> EnhanceImageColor：图片色彩增强</li>
5、智能分析规格：
<li>AIAnalysis：分析大类</li>
<li>VideoTag：视频标签</li>
<li>VideoClassification：视频分类</li>
<li>SmartCover：智能封面</li>
<li>FrameLabel：帧标签</li>
<li>VideoSplit：视频拆条</li>
<li>Highlights：精彩集锦</li>
<li>OpeningAndEnding：片头片尾</li>
6、智能识别规格：
<li>AIRecognition：识别大类</li>
<li>FaceRecognition：人脸识别</li>
<li>TextRecognition：文字识别</li>
<li>ObjectRecognition：物体识别</li>
<li>VoiceRecognition：语音识别</li>
<li>VoiceTranslation：语音翻译</li>
7、内容审核、转动图无细分规格。
                     * @return Details 不同规格任务统计数据详情。

1、转码规格：
<li>Audio：纯音频</li>
<li>Remuxing：转封装</li>
<li>其他转码规格：{TYPE}.{CODEC}.{SPECIFICATION}</li>  其中 TYPE 取值
    Standard：普通转码
    TESHD-10：视频极速高清
    TESHD-20：音频极速高清
    TESHD-30：音视频极速高清
    TESHD-30-SDK：音视频极速高清SDK按时长计费
    TESHD-30-SDKCores：音视频极速高清SDK按核心数计费
    Edit：视频编辑
  其中 CODEC 取值
    H264：H.264 编码
    H265：H.265 编码
    AV1：AV1 编码
    MV-HEVC：MV-HEVC 编码
  其中 SPECIFICATION 取值
    SD：标清
    HD：高清
    FHD：全高清
    2K：2K
    4K：4K
例如 TESHD-10.H265.HD 表示 H.265 编码方式高清极速高清转码

2、增强规格：视频增强格式：{TYPE}.{CODEC}.{SPECIFICATION}.{FPS}，其中 CODEC 和 SPECIFICATION 同转码，FPS在原子类型时才存在；音频增强格式：{TYPE}。
增强TYPE 取值：
<li>Enhance：通用增强类型，可能是任意一种原子增强类型</li>
<li>原子增强类型</li>  视频原子增强类型取值：
    Sdr2hdr：SDR2HDR
    SuperResolution：超分
    InsertFrame：插帧
    ComprehensiveEnhancement：综合增强
    NoiseReduction：视频降噪
    ColorEnhancement：色彩增强
    RemoveScratches：去划痕
    Deburr：去毛刺
    DetailEnhancement：细节增强
    LightEnhancement：低光照增强
    FaceEnhancement：人脸增强
  音频原子增强类型取值：
    AudioNoiseReduction
    VolumeBalance
    AudioBeautify
    AudioSeparation

3、截图规格：
<li>ImageSprite：雪碧图</li>
<li>SampleSnapshot：采样截图</li>
<li>SnapshotByTime：时间点截图</li>
4、图片处理规格：{TYPE}.{CODEC}.{SPECIFICATION}
<li> ImageCompression：图片编码</li>
<li> ImageSuperResolution：图片超分</li>
<li> EnhanceImageColor：图片色彩增强</li>
5、智能分析规格：
<li>AIAnalysis：分析大类</li>
<li>VideoTag：视频标签</li>
<li>VideoClassification：视频分类</li>
<li>SmartCover：智能封面</li>
<li>FrameLabel：帧标签</li>
<li>VideoSplit：视频拆条</li>
<li>Highlights：精彩集锦</li>
<li>OpeningAndEnding：片头片尾</li>
6、智能识别规格：
<li>AIRecognition：识别大类</li>
<li>FaceRecognition：人脸识别</li>
<li>TextRecognition：文字识别</li>
<li>ObjectRecognition：物体识别</li>
<li>VoiceRecognition：语音识别</li>
<li>VoiceTranslation：语音翻译</li>
7、内容审核、转动图无细分规格。
                     * 
                     */
                    std::vector<SpecificationDataItem> GetDetails() const;

                    /**
                     * 设置不同规格任务统计数据详情。

1、转码规格：
<li>Audio：纯音频</li>
<li>Remuxing：转封装</li>
<li>其他转码规格：{TYPE}.{CODEC}.{SPECIFICATION}</li>  其中 TYPE 取值
    Standard：普通转码
    TESHD-10：视频极速高清
    TESHD-20：音频极速高清
    TESHD-30：音视频极速高清
    TESHD-30-SDK：音视频极速高清SDK按时长计费
    TESHD-30-SDKCores：音视频极速高清SDK按核心数计费
    Edit：视频编辑
  其中 CODEC 取值
    H264：H.264 编码
    H265：H.265 编码
    AV1：AV1 编码
    MV-HEVC：MV-HEVC 编码
  其中 SPECIFICATION 取值
    SD：标清
    HD：高清
    FHD：全高清
    2K：2K
    4K：4K
例如 TESHD-10.H265.HD 表示 H.265 编码方式高清极速高清转码

2、增强规格：视频增强格式：{TYPE}.{CODEC}.{SPECIFICATION}.{FPS}，其中 CODEC 和 SPECIFICATION 同转码，FPS在原子类型时才存在；音频增强格式：{TYPE}。
增强TYPE 取值：
<li>Enhance：通用增强类型，可能是任意一种原子增强类型</li>
<li>原子增强类型</li>  视频原子增强类型取值：
    Sdr2hdr：SDR2HDR
    SuperResolution：超分
    InsertFrame：插帧
    ComprehensiveEnhancement：综合增强
    NoiseReduction：视频降噪
    ColorEnhancement：色彩增强
    RemoveScratches：去划痕
    Deburr：去毛刺
    DetailEnhancement：细节增强
    LightEnhancement：低光照增强
    FaceEnhancement：人脸增强
  音频原子增强类型取值：
    AudioNoiseReduction
    VolumeBalance
    AudioBeautify
    AudioSeparation

3、截图规格：
<li>ImageSprite：雪碧图</li>
<li>SampleSnapshot：采样截图</li>
<li>SnapshotByTime：时间点截图</li>
4、图片处理规格：{TYPE}.{CODEC}.{SPECIFICATION}
<li> ImageCompression：图片编码</li>
<li> ImageSuperResolution：图片超分</li>
<li> EnhanceImageColor：图片色彩增强</li>
5、智能分析规格：
<li>AIAnalysis：分析大类</li>
<li>VideoTag：视频标签</li>
<li>VideoClassification：视频分类</li>
<li>SmartCover：智能封面</li>
<li>FrameLabel：帧标签</li>
<li>VideoSplit：视频拆条</li>
<li>Highlights：精彩集锦</li>
<li>OpeningAndEnding：片头片尾</li>
6、智能识别规格：
<li>AIRecognition：识别大类</li>
<li>FaceRecognition：人脸识别</li>
<li>TextRecognition：文字识别</li>
<li>ObjectRecognition：物体识别</li>
<li>VoiceRecognition：语音识别</li>
<li>VoiceTranslation：语音翻译</li>
7、内容审核、转动图无细分规格。
                     * @param _details 不同规格任务统计数据详情。

1、转码规格：
<li>Audio：纯音频</li>
<li>Remuxing：转封装</li>
<li>其他转码规格：{TYPE}.{CODEC}.{SPECIFICATION}</li>  其中 TYPE 取值
    Standard：普通转码
    TESHD-10：视频极速高清
    TESHD-20：音频极速高清
    TESHD-30：音视频极速高清
    TESHD-30-SDK：音视频极速高清SDK按时长计费
    TESHD-30-SDKCores：音视频极速高清SDK按核心数计费
    Edit：视频编辑
  其中 CODEC 取值
    H264：H.264 编码
    H265：H.265 编码
    AV1：AV1 编码
    MV-HEVC：MV-HEVC 编码
  其中 SPECIFICATION 取值
    SD：标清
    HD：高清
    FHD：全高清
    2K：2K
    4K：4K
例如 TESHD-10.H265.HD 表示 H.265 编码方式高清极速高清转码

2、增强规格：视频增强格式：{TYPE}.{CODEC}.{SPECIFICATION}.{FPS}，其中 CODEC 和 SPECIFICATION 同转码，FPS在原子类型时才存在；音频增强格式：{TYPE}。
增强TYPE 取值：
<li>Enhance：通用增强类型，可能是任意一种原子增强类型</li>
<li>原子增强类型</li>  视频原子增强类型取值：
    Sdr2hdr：SDR2HDR
    SuperResolution：超分
    InsertFrame：插帧
    ComprehensiveEnhancement：综合增强
    NoiseReduction：视频降噪
    ColorEnhancement：色彩增强
    RemoveScratches：去划痕
    Deburr：去毛刺
    DetailEnhancement：细节增强
    LightEnhancement：低光照增强
    FaceEnhancement：人脸增强
  音频原子增强类型取值：
    AudioNoiseReduction
    VolumeBalance
    AudioBeautify
    AudioSeparation

3、截图规格：
<li>ImageSprite：雪碧图</li>
<li>SampleSnapshot：采样截图</li>
<li>SnapshotByTime：时间点截图</li>
4、图片处理规格：{TYPE}.{CODEC}.{SPECIFICATION}
<li> ImageCompression：图片编码</li>
<li> ImageSuperResolution：图片超分</li>
<li> EnhanceImageColor：图片色彩增强</li>
5、智能分析规格：
<li>AIAnalysis：分析大类</li>
<li>VideoTag：视频标签</li>
<li>VideoClassification：视频分类</li>
<li>SmartCover：智能封面</li>
<li>FrameLabel：帧标签</li>
<li>VideoSplit：视频拆条</li>
<li>Highlights：精彩集锦</li>
<li>OpeningAndEnding：片头片尾</li>
6、智能识别规格：
<li>AIRecognition：识别大类</li>
<li>FaceRecognition：人脸识别</li>
<li>TextRecognition：文字识别</li>
<li>ObjectRecognition：物体识别</li>
<li>VoiceRecognition：语音识别</li>
<li>VoiceTranslation：语音翻译</li>
7、内容审核、转动图无细分规格。
                     * 
                     */
                    void SetDetails(const std::vector<SpecificationDataItem>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 任务类型。
<li>Transcode: 转码</li>
<li>Enhance: 增强</li>
<li>AIAnalysis: 智能分析</li>
<li>AIRecognition: 智能识别</li>
<li>AIReview: 内容审核</li>
<li>Snapshot: 截图</li>
<li>AnimatedGraphics: 转动图</li>
<li>ImageProcess: 图片处理</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务数统计数据概览。
<li>Transcode：用量单位为秒</li>
<li>Enhance：用量单位为秒</li>
<li>AIAnalysis：用量单位为秒</li>
<li>AIRecognition：用量单位为秒</li>
<li>AIReview：用量单位为秒</li>
<li>Snapshot：用量单位为张</li>
<li>AnimatedGraphics: 用量单位为秒</li>
<li>ImageProcess: 用量单位为张</li>
                     */
                    std::vector<TaskStatDataItem> m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 不同规格任务统计数据详情。

1、转码规格：
<li>Audio：纯音频</li>
<li>Remuxing：转封装</li>
<li>其他转码规格：{TYPE}.{CODEC}.{SPECIFICATION}</li>  其中 TYPE 取值
    Standard：普通转码
    TESHD-10：视频极速高清
    TESHD-20：音频极速高清
    TESHD-30：音视频极速高清
    TESHD-30-SDK：音视频极速高清SDK按时长计费
    TESHD-30-SDKCores：音视频极速高清SDK按核心数计费
    Edit：视频编辑
  其中 CODEC 取值
    H264：H.264 编码
    H265：H.265 编码
    AV1：AV1 编码
    MV-HEVC：MV-HEVC 编码
  其中 SPECIFICATION 取值
    SD：标清
    HD：高清
    FHD：全高清
    2K：2K
    4K：4K
例如 TESHD-10.H265.HD 表示 H.265 编码方式高清极速高清转码

2、增强规格：视频增强格式：{TYPE}.{CODEC}.{SPECIFICATION}.{FPS}，其中 CODEC 和 SPECIFICATION 同转码，FPS在原子类型时才存在；音频增强格式：{TYPE}。
增强TYPE 取值：
<li>Enhance：通用增强类型，可能是任意一种原子增强类型</li>
<li>原子增强类型</li>  视频原子增强类型取值：
    Sdr2hdr：SDR2HDR
    SuperResolution：超分
    InsertFrame：插帧
    ComprehensiveEnhancement：综合增强
    NoiseReduction：视频降噪
    ColorEnhancement：色彩增强
    RemoveScratches：去划痕
    Deburr：去毛刺
    DetailEnhancement：细节增强
    LightEnhancement：低光照增强
    FaceEnhancement：人脸增强
  音频原子增强类型取值：
    AudioNoiseReduction
    VolumeBalance
    AudioBeautify
    AudioSeparation

3、截图规格：
<li>ImageSprite：雪碧图</li>
<li>SampleSnapshot：采样截图</li>
<li>SnapshotByTime：时间点截图</li>
4、图片处理规格：{TYPE}.{CODEC}.{SPECIFICATION}
<li> ImageCompression：图片编码</li>
<li> ImageSuperResolution：图片超分</li>
<li> EnhanceImageColor：图片色彩增强</li>
5、智能分析规格：
<li>AIAnalysis：分析大类</li>
<li>VideoTag：视频标签</li>
<li>VideoClassification：视频分类</li>
<li>SmartCover：智能封面</li>
<li>FrameLabel：帧标签</li>
<li>VideoSplit：视频拆条</li>
<li>Highlights：精彩集锦</li>
<li>OpeningAndEnding：片头片尾</li>
6、智能识别规格：
<li>AIRecognition：识别大类</li>
<li>FaceRecognition：人脸识别</li>
<li>TextRecognition：文字识别</li>
<li>ObjectRecognition：物体识别</li>
<li>VoiceRecognition：语音识别</li>
<li>VoiceTranslation：语音翻译</li>
7、内容审核、转动图无细分规格。
                     */
                    std::vector<SpecificationDataItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATA_H_
