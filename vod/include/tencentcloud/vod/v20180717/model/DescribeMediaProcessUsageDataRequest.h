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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeMediaProcessUsageData请求参数结构体
                */
                class DescribeMediaProcessUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeMediaProcessUsageDataRequest();
                    ~DescribeMediaProcessUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _startTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return EndTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _endTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取查询视频处理任务类型，目前支持的任务类型包括：
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去除水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li> VideoHighlight: 视频智能集锦</li>
<li> VideoTag: 视频智能标签</li>
<li> VideoClassification:  视频智能分类</li>
<li> VideoCover: 视频智能封面</li>
<li> VideoSegment: 视频智能拆条</li>
<li> VideoProduce: 视频制作</li>
<li> MediaCast: 媒体转推</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * @return Type 查询视频处理任务类型，目前支持的任务类型包括：
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去除水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li> VideoHighlight: 视频智能集锦</li>
<li> VideoTag: 视频智能标签</li>
<li> VideoClassification:  视频智能分类</li>
<li> VideoCover: 视频智能封面</li>
<li> VideoSegment: 视频智能拆条</li>
<li> VideoProduce: 视频制作</li>
<li> MediaCast: 媒体转推</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询视频处理任务类型，目前支持的任务类型包括：
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去除水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li> VideoHighlight: 视频智能集锦</li>
<li> VideoTag: 视频智能标签</li>
<li> VideoClassification:  视频智能分类</li>
<li> VideoCover: 视频智能封面</li>
<li> VideoSegment: 视频智能拆条</li>
<li> VideoProduce: 视频制作</li>
<li> MediaCast: 媒体转推</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * @param _type 查询视频处理任务类型，目前支持的任务类型包括：
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去除水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li> VideoHighlight: 视频智能集锦</li>
<li> VideoTag: 视频智能标签</li>
<li> VideoClassification:  视频智能分类</li>
<li> VideoCover: 视频智能封面</li>
<li> VideoSegment: 视频智能拆条</li>
<li> VideoProduce: 视频制作</li>
<li> MediaCast: 媒体转推</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 查询视频处理任务类型，目前支持的任务类型包括：
<li> Transcoding: 普通转码</li>
<li> Transcoding-TESHD: 极速高清转码</li>
<li> Editing: 视频编辑</li>
<li> Editing-TESHD: 极速高清视频编辑</li>
<li> AdaptiveBitrateStreaming: 自适应码流</li>
<li> ContentAudit: 内容审核</li>
<li> ContentRecognition: 内容识别</li>
<li> RemoveWatermark: 去除水印</li>
<li> ExtractTraceWatermark: 提取水印</li>
<li> AddTraceWatermark: 添加水印</li>
<li> RebuildMedia: 音画质重生</li>
<li> QualityInspect: 音画质检测</li>
<li> VideoHighlight: 视频智能集锦</li>
<li> VideoTag: 视频智能标签</li>
<li> VideoClassification:  视频智能分类</li>
<li> VideoCover: 视频智能封面</li>
<li> VideoSegment: 视频智能拆条</li>
<li> VideoProduce: 视频制作</li>
<li> MediaCast: 媒体转推</li>
<li>Transcode: 转码，包含普通转码、极速高清和视频编辑（不推荐使用）</li>
<li>VoiceTranslation: 语音翻译</li>
<li>JITTranscoding: 即时转码</li>
<li>VideoSnapshot: 视频截图</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
