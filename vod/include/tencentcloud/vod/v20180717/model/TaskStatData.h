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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TaskStatDataItem.h>
#include <tencentcloud/vod/v20180717/model/SpecificationDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频处理任务统计数据。
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
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * @return TaskType 任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * @param _taskType 任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
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
                     * 获取任务数统计数据概览，用量单位为秒。
                     * @return Summary 任务数统计数据概览，用量单位为秒。
                     * 
                     */
                    std::vector<TaskStatDataItem> GetSummary() const;

                    /**
                     * 设置任务数统计数据概览，用量单位为秒。
                     * @param _summary 任务数统计数据概览，用量单位为秒。
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
转码规格：
<li>Remuxing: 转封装</li>
<li>Audio: 音频转码</li>
<li>Standard.H264.SD: H.264编码方式标清转码</li>
<li>Standard.H264.HD: H.264编码方式高清转码</li>
<li>Standard.H264.FHD: H.264编码方式全高清转码</li>
<li>Standard.H264.2K: H.264编码方式2K转码</li>
<li>Standard.H264.4K: H.264编码方式4K转码</li>
<li>Standard.H265.SD: H.265编码方式标清转码</li>
<li>Standard.H265.HD: H.265编码方式高清转码</li>
<li>Standard.H265.FHD: H.265编码方式全高清转码</li>
<li>Standard.H265.2K: H.265编码方式2K转码</li>
<li>Standard.H265.4K: H.265编码方式4K转码</li>
<li>TESHD-10.H264.SD: H.264编码方式标清极速高清转码</li>
<li>TESHD-10.H264.HD: H.264编码方式高清极速高清转码</li>
<li>TESHD-10.H264.FHD: H.264编码方式全高清极速高清转码</li>
<li>TESHD-10.H264.2K: H.264编码方式2K极速高清转码</li>
<li>TESHD-10.H264.4K: H.264编码方式4K极速高清转码</li>
<li>TESHD-10.H265.SD: H.265编码方式标清极速高清转码</li>
<li>TESHD-10.H265.HD: H.265编码方式高清极速高清转码</li>
<li>TESHD-10.H265.FHD: H.265编码方式全高清极速高清转码</li>
<li>TESHD-10.H265.2K: H.265编码方式2K极速高清转码</li>
<li>TESHD-10.H265.4K: H.265编码方式4K极速高清转码</li>
<li>Edit.Audio: 音频编辑</li>
<li>Edit.H264.SD: H.264编码方式标清视频编辑</li>
<li>Edit.H264.HD: H.264编码方式高清视频编辑</li>
<li>Edit.H264.FHD: H.264编码方式全高清视频编辑</li>
<li>Edit.H264.2K: H.264编码方式2K视频编辑</li>
<li>Edit.H264.4K: H.264编码方式4K视频编辑</li>
<li>Edit.H265.SD: H.265编码方式标清视频编辑</li>
<li>Edit.H265.HD: H.265编码方式高清视频编辑</li>
<li>Edit.H265.FHD: H.265编码方式全高清视频编辑</li>
<li>Edit.H265.2K: H.265编码方式2K视频编辑</li>
<li>Edit.H265.4K: H.265编码方式4K视频编辑</li>
<li>Edit.TESHD-10.H264.SD: H.264编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.HD: H.264编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.FHD: H.264编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.2K: H.264编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.4K: H.264编码方式4K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.SD: H.265编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.HD: H.265编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.FHD: H.265编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.2K: H.265编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.4K: H.265编码方式4K极速高清视频编辑</li>
去水印、音画质重生规格：
<li>480P: 短边 ≤ 480px</li>
<li>720P: 短边 ≤ 720px</li>
<li>1080P: 短边 ≤ 1080px</li>
<li>2K: 短边 ≤ 1440px</li>
<li>4K: 短边 ≤ 2160px</li>
<li>8K: 短边 ≤ 4320px</li>
<li>Audio: 音频</li>
即时转码规格：
<li>JITTranscoding.H264.SD: H.264编码方式标清即时转码</li>
<li>JITTranscoding.H264.HD: H.264编码方式高清即时转码</li>
<li>JITTranscoding.H264.FHD: H.264编码方式全高清即时转码</li>
<li>JITTranscoding.H264.2K: H.264编码方式2K即时转码</li>
<li>JITTranscoding.Audio: 音频即时转码</li>
<li>JITTranscoding.Copy: 转封装即时转码</li>
视频截图规格：
<li>SnapshotByTimeOffset: 时间点截图</li>
<li>SampleSnapshot: 采样截图</li>
<li>ImageSprite: 雪碧图</li>
                     * @return Details 不同规格任务统计数据详情。
转码规格：
<li>Remuxing: 转封装</li>
<li>Audio: 音频转码</li>
<li>Standard.H264.SD: H.264编码方式标清转码</li>
<li>Standard.H264.HD: H.264编码方式高清转码</li>
<li>Standard.H264.FHD: H.264编码方式全高清转码</li>
<li>Standard.H264.2K: H.264编码方式2K转码</li>
<li>Standard.H264.4K: H.264编码方式4K转码</li>
<li>Standard.H265.SD: H.265编码方式标清转码</li>
<li>Standard.H265.HD: H.265编码方式高清转码</li>
<li>Standard.H265.FHD: H.265编码方式全高清转码</li>
<li>Standard.H265.2K: H.265编码方式2K转码</li>
<li>Standard.H265.4K: H.265编码方式4K转码</li>
<li>TESHD-10.H264.SD: H.264编码方式标清极速高清转码</li>
<li>TESHD-10.H264.HD: H.264编码方式高清极速高清转码</li>
<li>TESHD-10.H264.FHD: H.264编码方式全高清极速高清转码</li>
<li>TESHD-10.H264.2K: H.264编码方式2K极速高清转码</li>
<li>TESHD-10.H264.4K: H.264编码方式4K极速高清转码</li>
<li>TESHD-10.H265.SD: H.265编码方式标清极速高清转码</li>
<li>TESHD-10.H265.HD: H.265编码方式高清极速高清转码</li>
<li>TESHD-10.H265.FHD: H.265编码方式全高清极速高清转码</li>
<li>TESHD-10.H265.2K: H.265编码方式2K极速高清转码</li>
<li>TESHD-10.H265.4K: H.265编码方式4K极速高清转码</li>
<li>Edit.Audio: 音频编辑</li>
<li>Edit.H264.SD: H.264编码方式标清视频编辑</li>
<li>Edit.H264.HD: H.264编码方式高清视频编辑</li>
<li>Edit.H264.FHD: H.264编码方式全高清视频编辑</li>
<li>Edit.H264.2K: H.264编码方式2K视频编辑</li>
<li>Edit.H264.4K: H.264编码方式4K视频编辑</li>
<li>Edit.H265.SD: H.265编码方式标清视频编辑</li>
<li>Edit.H265.HD: H.265编码方式高清视频编辑</li>
<li>Edit.H265.FHD: H.265编码方式全高清视频编辑</li>
<li>Edit.H265.2K: H.265编码方式2K视频编辑</li>
<li>Edit.H265.4K: H.265编码方式4K视频编辑</li>
<li>Edit.TESHD-10.H264.SD: H.264编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.HD: H.264编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.FHD: H.264编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.2K: H.264编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.4K: H.264编码方式4K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.SD: H.265编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.HD: H.265编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.FHD: H.265编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.2K: H.265编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.4K: H.265编码方式4K极速高清视频编辑</li>
去水印、音画质重生规格：
<li>480P: 短边 ≤ 480px</li>
<li>720P: 短边 ≤ 720px</li>
<li>1080P: 短边 ≤ 1080px</li>
<li>2K: 短边 ≤ 1440px</li>
<li>4K: 短边 ≤ 2160px</li>
<li>8K: 短边 ≤ 4320px</li>
<li>Audio: 音频</li>
即时转码规格：
<li>JITTranscoding.H264.SD: H.264编码方式标清即时转码</li>
<li>JITTranscoding.H264.HD: H.264编码方式高清即时转码</li>
<li>JITTranscoding.H264.FHD: H.264编码方式全高清即时转码</li>
<li>JITTranscoding.H264.2K: H.264编码方式2K即时转码</li>
<li>JITTranscoding.Audio: 音频即时转码</li>
<li>JITTranscoding.Copy: 转封装即时转码</li>
视频截图规格：
<li>SnapshotByTimeOffset: 时间点截图</li>
<li>SampleSnapshot: 采样截图</li>
<li>ImageSprite: 雪碧图</li>
                     * 
                     */
                    std::vector<SpecificationDataItem> GetDetails() const;

                    /**
                     * 设置不同规格任务统计数据详情。
转码规格：
<li>Remuxing: 转封装</li>
<li>Audio: 音频转码</li>
<li>Standard.H264.SD: H.264编码方式标清转码</li>
<li>Standard.H264.HD: H.264编码方式高清转码</li>
<li>Standard.H264.FHD: H.264编码方式全高清转码</li>
<li>Standard.H264.2K: H.264编码方式2K转码</li>
<li>Standard.H264.4K: H.264编码方式4K转码</li>
<li>Standard.H265.SD: H.265编码方式标清转码</li>
<li>Standard.H265.HD: H.265编码方式高清转码</li>
<li>Standard.H265.FHD: H.265编码方式全高清转码</li>
<li>Standard.H265.2K: H.265编码方式2K转码</li>
<li>Standard.H265.4K: H.265编码方式4K转码</li>
<li>TESHD-10.H264.SD: H.264编码方式标清极速高清转码</li>
<li>TESHD-10.H264.HD: H.264编码方式高清极速高清转码</li>
<li>TESHD-10.H264.FHD: H.264编码方式全高清极速高清转码</li>
<li>TESHD-10.H264.2K: H.264编码方式2K极速高清转码</li>
<li>TESHD-10.H264.4K: H.264编码方式4K极速高清转码</li>
<li>TESHD-10.H265.SD: H.265编码方式标清极速高清转码</li>
<li>TESHD-10.H265.HD: H.265编码方式高清极速高清转码</li>
<li>TESHD-10.H265.FHD: H.265编码方式全高清极速高清转码</li>
<li>TESHD-10.H265.2K: H.265编码方式2K极速高清转码</li>
<li>TESHD-10.H265.4K: H.265编码方式4K极速高清转码</li>
<li>Edit.Audio: 音频编辑</li>
<li>Edit.H264.SD: H.264编码方式标清视频编辑</li>
<li>Edit.H264.HD: H.264编码方式高清视频编辑</li>
<li>Edit.H264.FHD: H.264编码方式全高清视频编辑</li>
<li>Edit.H264.2K: H.264编码方式2K视频编辑</li>
<li>Edit.H264.4K: H.264编码方式4K视频编辑</li>
<li>Edit.H265.SD: H.265编码方式标清视频编辑</li>
<li>Edit.H265.HD: H.265编码方式高清视频编辑</li>
<li>Edit.H265.FHD: H.265编码方式全高清视频编辑</li>
<li>Edit.H265.2K: H.265编码方式2K视频编辑</li>
<li>Edit.H265.4K: H.265编码方式4K视频编辑</li>
<li>Edit.TESHD-10.H264.SD: H.264编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.HD: H.264编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.FHD: H.264编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.2K: H.264编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.4K: H.264编码方式4K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.SD: H.265编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.HD: H.265编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.FHD: H.265编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.2K: H.265编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.4K: H.265编码方式4K极速高清视频编辑</li>
去水印、音画质重生规格：
<li>480P: 短边 ≤ 480px</li>
<li>720P: 短边 ≤ 720px</li>
<li>1080P: 短边 ≤ 1080px</li>
<li>2K: 短边 ≤ 1440px</li>
<li>4K: 短边 ≤ 2160px</li>
<li>8K: 短边 ≤ 4320px</li>
<li>Audio: 音频</li>
即时转码规格：
<li>JITTranscoding.H264.SD: H.264编码方式标清即时转码</li>
<li>JITTranscoding.H264.HD: H.264编码方式高清即时转码</li>
<li>JITTranscoding.H264.FHD: H.264编码方式全高清即时转码</li>
<li>JITTranscoding.H264.2K: H.264编码方式2K即时转码</li>
<li>JITTranscoding.Audio: 音频即时转码</li>
<li>JITTranscoding.Copy: 转封装即时转码</li>
视频截图规格：
<li>SnapshotByTimeOffset: 时间点截图</li>
<li>SampleSnapshot: 采样截图</li>
<li>ImageSprite: 雪碧图</li>
                     * @param _details 不同规格任务统计数据详情。
转码规格：
<li>Remuxing: 转封装</li>
<li>Audio: 音频转码</li>
<li>Standard.H264.SD: H.264编码方式标清转码</li>
<li>Standard.H264.HD: H.264编码方式高清转码</li>
<li>Standard.H264.FHD: H.264编码方式全高清转码</li>
<li>Standard.H264.2K: H.264编码方式2K转码</li>
<li>Standard.H264.4K: H.264编码方式4K转码</li>
<li>Standard.H265.SD: H.265编码方式标清转码</li>
<li>Standard.H265.HD: H.265编码方式高清转码</li>
<li>Standard.H265.FHD: H.265编码方式全高清转码</li>
<li>Standard.H265.2K: H.265编码方式2K转码</li>
<li>Standard.H265.4K: H.265编码方式4K转码</li>
<li>TESHD-10.H264.SD: H.264编码方式标清极速高清转码</li>
<li>TESHD-10.H264.HD: H.264编码方式高清极速高清转码</li>
<li>TESHD-10.H264.FHD: H.264编码方式全高清极速高清转码</li>
<li>TESHD-10.H264.2K: H.264编码方式2K极速高清转码</li>
<li>TESHD-10.H264.4K: H.264编码方式4K极速高清转码</li>
<li>TESHD-10.H265.SD: H.265编码方式标清极速高清转码</li>
<li>TESHD-10.H265.HD: H.265编码方式高清极速高清转码</li>
<li>TESHD-10.H265.FHD: H.265编码方式全高清极速高清转码</li>
<li>TESHD-10.H265.2K: H.265编码方式2K极速高清转码</li>
<li>TESHD-10.H265.4K: H.265编码方式4K极速高清转码</li>
<li>Edit.Audio: 音频编辑</li>
<li>Edit.H264.SD: H.264编码方式标清视频编辑</li>
<li>Edit.H264.HD: H.264编码方式高清视频编辑</li>
<li>Edit.H264.FHD: H.264编码方式全高清视频编辑</li>
<li>Edit.H264.2K: H.264编码方式2K视频编辑</li>
<li>Edit.H264.4K: H.264编码方式4K视频编辑</li>
<li>Edit.H265.SD: H.265编码方式标清视频编辑</li>
<li>Edit.H265.HD: H.265编码方式高清视频编辑</li>
<li>Edit.H265.FHD: H.265编码方式全高清视频编辑</li>
<li>Edit.H265.2K: H.265编码方式2K视频编辑</li>
<li>Edit.H265.4K: H.265编码方式4K视频编辑</li>
<li>Edit.TESHD-10.H264.SD: H.264编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.HD: H.264编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.FHD: H.264编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.2K: H.264编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.4K: H.264编码方式4K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.SD: H.265编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.HD: H.265编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.FHD: H.265编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.2K: H.265编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.4K: H.265编码方式4K极速高清视频编辑</li>
去水印、音画质重生规格：
<li>480P: 短边 ≤ 480px</li>
<li>720P: 短边 ≤ 720px</li>
<li>1080P: 短边 ≤ 1080px</li>
<li>2K: 短边 ≤ 1440px</li>
<li>4K: 短边 ≤ 2160px</li>
<li>8K: 短边 ≤ 4320px</li>
<li>Audio: 音频</li>
即时转码规格：
<li>JITTranscoding.H264.SD: H.264编码方式标清即时转码</li>
<li>JITTranscoding.H264.HD: H.264编码方式高清即时转码</li>
<li>JITTranscoding.H264.FHD: H.264编码方式全高清即时转码</li>
<li>JITTranscoding.H264.2K: H.264编码方式2K即时转码</li>
<li>JITTranscoding.Audio: 音频即时转码</li>
<li>JITTranscoding.Copy: 转封装即时转码</li>
视频截图规格：
<li>SnapshotByTimeOffset: 时间点截图</li>
<li>SampleSnapshot: 采样截图</li>
<li>ImageSprite: 雪碧图</li>
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
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务数统计数据概览，用量单位为秒。
                     */
                    std::vector<TaskStatDataItem> m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 不同规格任务统计数据详情。
转码规格：
<li>Remuxing: 转封装</li>
<li>Audio: 音频转码</li>
<li>Standard.H264.SD: H.264编码方式标清转码</li>
<li>Standard.H264.HD: H.264编码方式高清转码</li>
<li>Standard.H264.FHD: H.264编码方式全高清转码</li>
<li>Standard.H264.2K: H.264编码方式2K转码</li>
<li>Standard.H264.4K: H.264编码方式4K转码</li>
<li>Standard.H265.SD: H.265编码方式标清转码</li>
<li>Standard.H265.HD: H.265编码方式高清转码</li>
<li>Standard.H265.FHD: H.265编码方式全高清转码</li>
<li>Standard.H265.2K: H.265编码方式2K转码</li>
<li>Standard.H265.4K: H.265编码方式4K转码</li>
<li>TESHD-10.H264.SD: H.264编码方式标清极速高清转码</li>
<li>TESHD-10.H264.HD: H.264编码方式高清极速高清转码</li>
<li>TESHD-10.H264.FHD: H.264编码方式全高清极速高清转码</li>
<li>TESHD-10.H264.2K: H.264编码方式2K极速高清转码</li>
<li>TESHD-10.H264.4K: H.264编码方式4K极速高清转码</li>
<li>TESHD-10.H265.SD: H.265编码方式标清极速高清转码</li>
<li>TESHD-10.H265.HD: H.265编码方式高清极速高清转码</li>
<li>TESHD-10.H265.FHD: H.265编码方式全高清极速高清转码</li>
<li>TESHD-10.H265.2K: H.265编码方式2K极速高清转码</li>
<li>TESHD-10.H265.4K: H.265编码方式4K极速高清转码</li>
<li>Edit.Audio: 音频编辑</li>
<li>Edit.H264.SD: H.264编码方式标清视频编辑</li>
<li>Edit.H264.HD: H.264编码方式高清视频编辑</li>
<li>Edit.H264.FHD: H.264编码方式全高清视频编辑</li>
<li>Edit.H264.2K: H.264编码方式2K视频编辑</li>
<li>Edit.H264.4K: H.264编码方式4K视频编辑</li>
<li>Edit.H265.SD: H.265编码方式标清视频编辑</li>
<li>Edit.H265.HD: H.265编码方式高清视频编辑</li>
<li>Edit.H265.FHD: H.265编码方式全高清视频编辑</li>
<li>Edit.H265.2K: H.265编码方式2K视频编辑</li>
<li>Edit.H265.4K: H.265编码方式4K视频编辑</li>
<li>Edit.TESHD-10.H264.SD: H.264编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.HD: H.264编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.FHD: H.264编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.2K: H.264编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H264.4K: H.264编码方式4K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.SD: H.265编码方式标清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.HD: H.265编码方式高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.FHD: H.265编码方式全高清极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.2K: H.265编码方式2K极速高清视频编辑</li>
<li>Edit.TESHD-10.H265.4K: H.265编码方式4K极速高清视频编辑</li>
去水印、音画质重生规格：
<li>480P: 短边 ≤ 480px</li>
<li>720P: 短边 ≤ 720px</li>
<li>1080P: 短边 ≤ 1080px</li>
<li>2K: 短边 ≤ 1440px</li>
<li>4K: 短边 ≤ 2160px</li>
<li>8K: 短边 ≤ 4320px</li>
<li>Audio: 音频</li>
即时转码规格：
<li>JITTranscoding.H264.SD: H.264编码方式标清即时转码</li>
<li>JITTranscoding.H264.HD: H.264编码方式高清即时转码</li>
<li>JITTranscoding.H264.FHD: H.264编码方式全高清即时转码</li>
<li>JITTranscoding.H264.2K: H.264编码方式2K即时转码</li>
<li>JITTranscoding.Audio: 音频即时转码</li>
<li>JITTranscoding.Copy: 转封装即时转码</li>
视频截图规格：
<li>SnapshotByTimeOffset: 时间点截图</li>
<li>SampleSnapshot: 采样截图</li>
<li>ImageSprite: 雪碧图</li>
                     */
                    std::vector<SpecificationDataItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_
