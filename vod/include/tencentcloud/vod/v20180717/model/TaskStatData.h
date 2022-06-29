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
<li> ContentAudit: 智能识别</li>
<li> RemoveWatermark: 去水印</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
                     * @return TaskType 任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 智能识别</li>
<li> RemoveWatermark: 去水印</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 智能识别</li>
<li> RemoveWatermark: 去水印</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
                     * @param TaskType 任务类型。
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 智能识别</li>
<li> RemoveWatermark: 去水印</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务数统计数据概览，用量单位为秒。
                     * @return Summary 任务数统计数据概览，用量单位为秒。
                     */
                    std::vector<TaskStatDataItem> GetSummary() const;

                    /**
                     * 设置任务数统计数据概览，用量单位为秒。
                     * @param Summary 任务数统计数据概览，用量单位为秒。
                     */
                    void SetSummary(const std::vector<TaskStatDataItem>& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
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
去水印规格：
<li>480P: 分辨率640*480及以下</li>
<li>720P: 分辨率1280*720及以下</li>
<li>1080P: 分辨率1920*1080及以下</li>
<li>2K: 分辨率2560*1440及以下</li>
<li>4K: 分辨率3840*2160及以下</li>
<li>8K: 分辨率7680*4320及以下</li>
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
去水印规格：
<li>480P: 分辨率640*480及以下</li>
<li>720P: 分辨率1280*720及以下</li>
<li>1080P: 分辨率1920*1080及以下</li>
<li>2K: 分辨率2560*1440及以下</li>
<li>4K: 分辨率3840*2160及以下</li>
<li>8K: 分辨率7680*4320及以下</li>
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
去水印规格：
<li>480P: 分辨率640*480及以下</li>
<li>720P: 分辨率1280*720及以下</li>
<li>1080P: 分辨率1920*1080及以下</li>
<li>2K: 分辨率2560*1440及以下</li>
<li>4K: 分辨率3840*2160及以下</li>
<li>8K: 分辨率7680*4320及以下</li>
                     * @param Details 不同规格任务统计数据详情。
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
去水印规格：
<li>480P: 分辨率640*480及以下</li>
<li>720P: 分辨率1280*720及以下</li>
<li>1080P: 分辨率1920*1080及以下</li>
<li>2K: 分辨率2560*1440及以下</li>
<li>4K: 分辨率3840*2160及以下</li>
<li>8K: 分辨率7680*4320及以下</li>
                     */
                    void SetDetails(const std::vector<SpecificationDataItem>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
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
<li> ContentAudit: 智能识别</li>
<li> RemoveWatermark: 去水印</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
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
去水印规格：
<li>480P: 分辨率640*480及以下</li>
<li>720P: 分辨率1280*720及以下</li>
<li>1080P: 分辨率1920*1080及以下</li>
<li>2K: 分辨率2560*1440及以下</li>
<li>4K: 分辨率3840*2160及以下</li>
<li>8K: 分辨率7680*4320及以下</li>
                     */
                    std::vector<SpecificationDataItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_
