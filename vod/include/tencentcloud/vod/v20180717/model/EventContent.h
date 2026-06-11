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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FileUploadTask.h>
#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>
#include <tencentcloud/vod/v20180717/model/FileDeleteTask.h>
#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTask2017.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>
#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>
#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaTask.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTask.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTask.h>
#include <tencentcloud/vod/v20180717/model/QualityEnhanceTask.h>
#include <tencentcloud/vod/v20180717/model/MediaCastEvent.h>
#include <tencentcloud/vod/v20180717/model/PersistenceCompleteTask.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPS.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 事件通知内容，其中，TranscodeCompleteEvent、ConcatCompleteEvent、ClipCompleteEvent、CreateImageSpriteCompleteEvent、SnapshotByTimeOffsetCompleteEvent 为兼容 2017 版接口发起任务的事件通知。
                */
                class EventContent : public AbstractModel
                {
                public:
                    EventContent();
                    ~EventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。</p>
                     * @return EventHandle <p>事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。</p>
                     * 
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置<p>事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。</p>
                     * @param _eventHandle <p>事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。</p>
                     * 
                     */
                    void SetEventHandle(const std::string& _eventHandle);

                    /**
                     * 判断参数 EventHandle 是否已赋值
                     * @return EventHandle 是否已赋值
                     * 
                     */
                    bool EventHandleHasBeenSet() const;

                    /**
                     * 获取<p><b>支持事件类型：</b></p><li>NewFileUpload：视频上传完成；</li><li>ProcedureStateChanged：任务流状态变更；</li><li>FileDeleted：视频删除完成；</li><li>RestoreMediaComplete：视频取回完成；</li><li>PullComplete：视频转拉完成；</li><li>EditMediaComplete：视频编辑完成；</li><li>SplitMediaComplete：视频拆分完成；</li><li>ComposeMediaComplete：制作媒体文件完成；</li><li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li><li>RemoveWatermark：智能去除水印完成。</li><li>RebuildMediaComplete：音画质重生完成事件（不推荐使用）。</li><li>ReviewAudioVideoComplete：音视频审核完成；</li><li>ExtractTraceWatermarkComplete：提取溯源水印完成；</li><li>ExtractCopyRightWatermarkComplete：提取版权水印完成；</li><li>DescribeFileAttributesComplete：获取文件属性完成；</li><li>QualityInspectComplete：音画质检测完成；</li><li>QualityEnhanceComplete：音画质重生任务完成；</li><li>PersistenceComplete：剪辑固化完成；</li><li>ComplexAdaptiveDynamicStreamingComplete：复杂自适应码流任务完成。</li><li>ProcessMediaByMPSComplete：MPS视频处理完成。</li><li>AigcImageTaskComplete：AIGC 生图任务完成。</li><li>AigcVideoTaskComplete：AIGC 生视频任务完成。</li><li>DescribeAigcFaceInfoAsyncComplete：异步获取 AIGC 人脸信息任务完成。</li><b>兼容 2017 版的事件类型：</b><li>TranscodeComplete：视频转码完成；</li><li>ConcatComplete：视频拼接完成；</li><li>ClipComplete：视频剪辑完成；</li><li>CreateImageSpriteComplete：视频截取雪碧图完成；</li><li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * @return EventType <p><b>支持事件类型：</b></p><li>NewFileUpload：视频上传完成；</li><li>ProcedureStateChanged：任务流状态变更；</li><li>FileDeleted：视频删除完成；</li><li>RestoreMediaComplete：视频取回完成；</li><li>PullComplete：视频转拉完成；</li><li>EditMediaComplete：视频编辑完成；</li><li>SplitMediaComplete：视频拆分完成；</li><li>ComposeMediaComplete：制作媒体文件完成；</li><li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li><li>RemoveWatermark：智能去除水印完成。</li><li>RebuildMediaComplete：音画质重生完成事件（不推荐使用）。</li><li>ReviewAudioVideoComplete：音视频审核完成；</li><li>ExtractTraceWatermarkComplete：提取溯源水印完成；</li><li>ExtractCopyRightWatermarkComplete：提取版权水印完成；</li><li>DescribeFileAttributesComplete：获取文件属性完成；</li><li>QualityInspectComplete：音画质检测完成；</li><li>QualityEnhanceComplete：音画质重生任务完成；</li><li>PersistenceComplete：剪辑固化完成；</li><li>ComplexAdaptiveDynamicStreamingComplete：复杂自适应码流任务完成。</li><li>ProcessMediaByMPSComplete：MPS视频处理完成。</li><li>AigcImageTaskComplete：AIGC 生图任务完成。</li><li>AigcVideoTaskComplete：AIGC 生视频任务完成。</li><li>DescribeAigcFaceInfoAsyncComplete：异步获取 AIGC 人脸信息任务完成。</li><b>兼容 2017 版的事件类型：</b><li>TranscodeComplete：视频转码完成；</li><li>ConcatComplete：视频拼接完成；</li><li>ClipComplete：视频剪辑完成；</li><li>CreateImageSpriteComplete：视频截取雪碧图完成；</li><li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p><b>支持事件类型：</b></p><li>NewFileUpload：视频上传完成；</li><li>ProcedureStateChanged：任务流状态变更；</li><li>FileDeleted：视频删除完成；</li><li>RestoreMediaComplete：视频取回完成；</li><li>PullComplete：视频转拉完成；</li><li>EditMediaComplete：视频编辑完成；</li><li>SplitMediaComplete：视频拆分完成；</li><li>ComposeMediaComplete：制作媒体文件完成；</li><li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li><li>RemoveWatermark：智能去除水印完成。</li><li>RebuildMediaComplete：音画质重生完成事件（不推荐使用）。</li><li>ReviewAudioVideoComplete：音视频审核完成；</li><li>ExtractTraceWatermarkComplete：提取溯源水印完成；</li><li>ExtractCopyRightWatermarkComplete：提取版权水印完成；</li><li>DescribeFileAttributesComplete：获取文件属性完成；</li><li>QualityInspectComplete：音画质检测完成；</li><li>QualityEnhanceComplete：音画质重生任务完成；</li><li>PersistenceComplete：剪辑固化完成；</li><li>ComplexAdaptiveDynamicStreamingComplete：复杂自适应码流任务完成。</li><li>ProcessMediaByMPSComplete：MPS视频处理完成。</li><li>AigcImageTaskComplete：AIGC 生图任务完成。</li><li>AigcVideoTaskComplete：AIGC 生视频任务完成。</li><li>DescribeAigcFaceInfoAsyncComplete：异步获取 AIGC 人脸信息任务完成。</li><b>兼容 2017 版的事件类型：</b><li>TranscodeComplete：视频转码完成；</li><li>ConcatComplete：视频拼接完成；</li><li>ClipComplete：视频剪辑完成；</li><li>CreateImageSpriteComplete：视频截取雪碧图完成；</li><li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * @param _eventType <p><b>支持事件类型：</b></p><li>NewFileUpload：视频上传完成；</li><li>ProcedureStateChanged：任务流状态变更；</li><li>FileDeleted：视频删除完成；</li><li>RestoreMediaComplete：视频取回完成；</li><li>PullComplete：视频转拉完成；</li><li>EditMediaComplete：视频编辑完成；</li><li>SplitMediaComplete：视频拆分完成；</li><li>ComposeMediaComplete：制作媒体文件完成；</li><li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li><li>RemoveWatermark：智能去除水印完成。</li><li>RebuildMediaComplete：音画质重生完成事件（不推荐使用）。</li><li>ReviewAudioVideoComplete：音视频审核完成；</li><li>ExtractTraceWatermarkComplete：提取溯源水印完成；</li><li>ExtractCopyRightWatermarkComplete：提取版权水印完成；</li><li>DescribeFileAttributesComplete：获取文件属性完成；</li><li>QualityInspectComplete：音画质检测完成；</li><li>QualityEnhanceComplete：音画质重生任务完成；</li><li>PersistenceComplete：剪辑固化完成；</li><li>ComplexAdaptiveDynamicStreamingComplete：复杂自适应码流任务完成。</li><li>ProcessMediaByMPSComplete：MPS视频处理完成。</li><li>AigcImageTaskComplete：AIGC 生图任务完成。</li><li>AigcVideoTaskComplete：AIGC 生视频任务完成。</li><li>DescribeAigcFaceInfoAsyncComplete：异步获取 AIGC 人脸信息任务完成。</li><b>兼容 2017 版的事件类型：</b><li>TranscodeComplete：视频转码完成；</li><li>ConcatComplete：视频拼接完成；</li><li>ClipComplete：视频剪辑完成；</li><li>CreateImageSpriteComplete：视频截取雪碧图完成；</li><li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>视频上传完成事件，当事件类型为 NewFileUpload 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUploadEvent <p>视频上传完成事件，当事件类型为 NewFileUpload 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置<p>视频上传完成事件，当事件类型为 NewFileUpload 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileUploadEvent <p>视频上传完成事件，当事件类型为 NewFileUpload 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileUploadEvent(const FileUploadTask& _fileUploadEvent);

                    /**
                     * 判断参数 FileUploadEvent 是否已赋值
                     * @return FileUploadEvent 是否已赋值
                     * 
                     */
                    bool FileUploadEventHasBeenSet() const;

                    /**
                     * 获取<p>任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureStateChangeEvent <p>任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置<p>任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procedureStateChangeEvent <p>任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent);

                    /**
                     * 判断参数 ProcedureStateChangeEvent 是否已赋值
                     * @return ProcedureStateChangeEvent 是否已赋值
                     * 
                     */
                    bool ProcedureStateChangeEventHasBeenSet() const;

                    /**
                     * 获取<p>文件删除事件，当事件类型为 FileDeleted 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileDeleteEvent <p>文件删除事件，当事件类型为 FileDeleted 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置<p>文件删除事件，当事件类型为 FileDeleted 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileDeleteEvent <p>文件删除事件，当事件类型为 FileDeleted 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent);

                    /**
                     * 判断参数 FileDeleteEvent 是否已赋值
                     * @return FileDeleteEvent 是否已赋值
                     * 
                     */
                    bool FileDeleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频转拉完成事件，当事件类型为 PullComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PullCompleteEvent <p>视频转拉完成事件，当事件类型为 PullComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置<p>视频转拉完成事件，当事件类型为 PullComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pullCompleteEvent <p>视频转拉完成事件，当事件类型为 PullComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent);

                    /**
                     * 判断参数 PullCompleteEvent 是否已赋值
                     * @return PullCompleteEvent 是否已赋值
                     * 
                     */
                    bool PullCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaCompleteEvent <p>视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置<p>视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editMediaCompleteEvent <p>视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent);

                    /**
                     * 判断参数 EditMediaCompleteEvent 是否已赋值
                     * @return EditMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool EditMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频拆分完成事件，当事件类型为 SplitMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitMediaCompleteEvent <p>视频拆分完成事件，当事件类型为 SplitMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置<p>视频拆分完成事件，当事件类型为 SplitMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitMediaCompleteEvent <p>视频拆分完成事件，当事件类型为 SplitMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSplitMediaCompleteEvent(const SplitMediaTask& _splitMediaCompleteEvent);

                    /**
                     * 判断参数 SplitMediaCompleteEvent 是否已赋值
                     * @return SplitMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool SplitMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComposeMediaCompleteEvent <p>制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置<p>制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _composeMediaCompleteEvent <p>制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent);

                    /**
                     * 判断参数 ComposeMediaCompleteEvent 是否已赋值
                     * @return ComposeMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool ComposeMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频剪辑完成事件，当事件类型为 ClipComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClipCompleteEvent <p>视频剪辑完成事件，当事件类型为 ClipComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置<p>视频剪辑完成事件，当事件类型为 ClipComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clipCompleteEvent <p>视频剪辑完成事件，当事件类型为 ClipComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent);

                    /**
                     * 判断参数 ClipCompleteEvent 是否已赋值
                     * @return ClipCompleteEvent 是否已赋值
                     * 
                     */
                    bool ClipCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频转码完成事件，当事件类型为 TranscodeComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeCompleteEvent <p>视频转码完成事件，当事件类型为 TranscodeComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置<p>视频转码完成事件，当事件类型为 TranscodeComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeCompleteEvent <p>视频转码完成事件，当事件类型为 TranscodeComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent);

                    /**
                     * 判断参数 TranscodeCompleteEvent 是否已赋值
                     * @return TranscodeCompleteEvent 是否已赋值
                     * 
                     */
                    bool TranscodeCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateImageSpriteCompleteEvent <p>视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置<p>视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createImageSpriteCompleteEvent <p>视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent);

                    /**
                     * 判断参数 CreateImageSpriteCompleteEvent 是否已赋值
                     * @return CreateImageSpriteCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateImageSpriteCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频拼接完成事件，当事件类型为 ConcatComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcatCompleteEvent <p>视频拼接完成事件，当事件类型为 ConcatComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置<p>视频拼接完成事件，当事件类型为 ConcatComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concatCompleteEvent <p>视频拼接完成事件，当事件类型为 ConcatComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent);

                    /**
                     * 判断参数 ConcatCompleteEvent 是否已赋值
                     * @return ConcatCompleteEvent 是否已赋值
                     * 
                     */
                    bool ConcatCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetCompleteEvent <p>视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置<p>视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetCompleteEvent <p>视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent);

                    /**
                     * 判断参数 SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * @return SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPublishCompleteEvent <p>微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置<p>微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatPublishCompleteEvent <p>微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent);

                    /**
                     * 判断参数 WechatPublishCompleteEvent 是否已赋值
                     * @return WechatPublishCompleteEvent 是否已赋值
                     * 
                     */
                    bool WechatPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatMiniProgramPublishCompleteEvent <p>微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置<p>微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatMiniProgramPublishCompleteEvent <p>微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent);

                    /**
                     * 判断参数 WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * @return WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * 
                     */
                    bool WechatMiniProgramPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>智能去除水印完成事件，当事件类型为 RemoveWatermark 有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveWatermarkCompleteEvent <p>智能去除水印完成事件，当事件类型为 RemoveWatermark 有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>智能去除水印完成事件，当事件类型为 RemoveWatermark 有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _removeWatermarkCompleteEvent <p>智能去除水印完成事件，当事件类型为 RemoveWatermark 有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoveWatermarkCompleteEvent(const RemoveWatermarkTask& _removeWatermarkCompleteEvent);

                    /**
                     * 判断参数 RemoveWatermarkCompleteEvent 是否已赋值
                     * @return RemoveWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>视频取回完成事件，当事件类型为 RestoreMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestoreMediaCompleteEvent <p>视频取回完成事件，当事件类型为 RestoreMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置<p>视频取回完成事件，当事件类型为 RestoreMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restoreMediaCompleteEvent <p>视频取回完成事件，当事件类型为 RestoreMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestoreMediaCompleteEvent(const RestoreMediaTask& _restoreMediaCompleteEvent);

                    /**
                     * 判断参数 RestoreMediaCompleteEvent 是否已赋值
                     * @return RestoreMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool RestoreMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>音画质重生完成事件，当事件类型为 RebuildMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RebuildMediaCompleteEvent <p>音画质重生完成事件，当事件类型为 RebuildMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置<p>音画质重生完成事件，当事件类型为 RebuildMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rebuildMediaCompleteEvent <p>音画质重生完成事件，当事件类型为 RebuildMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRebuildMediaCompleteEvent(const RebuildMediaTask& _rebuildMediaCompleteEvent);

                    /**
                     * 判断参数 RebuildMediaCompleteEvent 是否已赋值
                     * @return RebuildMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool RebuildMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>溯源水印提取完成事件，当事件类型为 ExtractTraceWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractTraceWatermarkCompleteEvent <p>溯源水印提取完成事件，当事件类型为 ExtractTraceWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>溯源水印提取完成事件，当事件类型为 ExtractTraceWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extractTraceWatermarkCompleteEvent <p>溯源水印提取完成事件，当事件类型为 ExtractTraceWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtractTraceWatermarkCompleteEvent(const ExtractTraceWatermarkTask& _extractTraceWatermarkCompleteEvent);

                    /**
                     * 判断参数 ExtractTraceWatermarkCompleteEvent 是否已赋值
                     * @return ExtractTraceWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool ExtractTraceWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>版权水印提取完成事件，当事件类型为 ExtractCopyRightWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractCopyRightWatermarkCompleteEvent <p>版权水印提取完成事件，当事件类型为 ExtractCopyRightWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>版权水印提取完成事件，当事件类型为 ExtractCopyRightWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extractCopyRightWatermarkCompleteEvent <p>版权水印提取完成事件，当事件类型为 ExtractCopyRightWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtractCopyRightWatermarkCompleteEvent(const ExtractCopyRightWatermarkTask& _extractCopyRightWatermarkCompleteEvent);

                    /**
                     * 判断参数 ExtractCopyRightWatermarkCompleteEvent 是否已赋值
                     * @return ExtractCopyRightWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool ExtractCopyRightWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>音视频审核完成事件，当事件类型为 ReviewAudioVideoComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewAudioVideoCompleteEvent <p>音视频审核完成事件，当事件类型为 ReviewAudioVideoComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置<p>音视频审核完成事件，当事件类型为 ReviewAudioVideoComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewAudioVideoCompleteEvent <p>音视频审核完成事件，当事件类型为 ReviewAudioVideoComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewAudioVideoCompleteEvent(const ReviewAudioVideoTask& _reviewAudioVideoCompleteEvent);

                    /**
                     * 判断参数 ReviewAudioVideoCompleteEvent 是否已赋值
                     * @return ReviewAudioVideoCompleteEvent 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReduceMediaBitrateCompleteEvent <p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置<p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reduceMediaBitrateCompleteEvent <p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReduceMediaBitrateCompleteEvent(const ReduceMediaBitrateTask& _reduceMediaBitrateCompleteEvent);

                    /**
                     * 判断参数 ReduceMediaBitrateCompleteEvent 是否已赋值
                     * @return ReduceMediaBitrateCompleteEvent 是否已赋值
                     * 
                     */
                    bool ReduceMediaBitrateCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>获取文件属性完成事件，当事件类型为 DescribeFileAttributesComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescribeFileAttributesCompleteEvent <p>获取文件属性完成事件，当事件类型为 DescribeFileAttributesComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置<p>获取文件属性完成事件，当事件类型为 DescribeFileAttributesComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describeFileAttributesCompleteEvent <p>获取文件属性完成事件，当事件类型为 DescribeFileAttributesComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescribeFileAttributesCompleteEvent(const DescribeFileAttributesTask& _describeFileAttributesCompleteEvent);

                    /**
                     * 判断参数 DescribeFileAttributesCompleteEvent 是否已赋值
                     * @return DescribeFileAttributesCompleteEvent 是否已赋值
                     * 
                     */
                    bool DescribeFileAttributesCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>音画质检测完成事件，当事件类型为 QualityInspectComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityInspectCompleteEvent <p>音画质检测完成事件，当事件类型为 QualityInspectComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置<p>音画质检测完成事件，当事件类型为 QualityInspectComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityInspectCompleteEvent <p>音画质检测完成事件，当事件类型为 QualityInspectComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityInspectCompleteEvent(const QualityInspectTask& _qualityInspectCompleteEvent);

                    /**
                     * 判断参数 QualityInspectCompleteEvent 是否已赋值
                     * @return QualityInspectCompleteEvent 是否已赋值
                     * 
                     */
                    bool QualityInspectCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>音画质重生完成事件，当事件类型为 QualityEnhanceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEnhanceCompleteEvent <p>音画质重生完成事件，当事件类型为 QualityEnhanceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceCompleteEvent() const;

                    /**
                     * 设置<p>音画质重生完成事件，当事件类型为 QualityEnhanceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityEnhanceCompleteEvent <p>音画质重生完成事件，当事件类型为 QualityEnhanceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityEnhanceCompleteEvent(const QualityEnhanceTask& _qualityEnhanceCompleteEvent);

                    /**
                     * 判断参数 QualityEnhanceCompleteEvent 是否已赋值
                     * @return QualityEnhanceCompleteEvent 是否已赋值
                     * 
                     */
                    bool QualityEnhanceCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>媒体转推状态变化事件，当事件类型为 MediaCastStatusChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaCastStatusChangedEvent <p>媒体转推状态变化事件，当事件类型为 MediaCastStatusChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaCastEvent GetMediaCastStatusChangedEvent() const;

                    /**
                     * 设置<p>媒体转推状态变化事件，当事件类型为 MediaCastStatusChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaCastStatusChangedEvent <p>媒体转推状态变化事件，当事件类型为 MediaCastStatusChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaCastStatusChangedEvent(const MediaCastEvent& _mediaCastStatusChangedEvent);

                    /**
                     * 判断参数 MediaCastStatusChangedEvent 是否已赋值
                     * @return MediaCastStatusChangedEvent 是否已赋值
                     * 
                     */
                    bool MediaCastStatusChangedEventHasBeenSet() const;

                    /**
                     * 获取<p>剪辑固化完成事件，当事件类型为 PersistenceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersistenceCompleteEvent <p>剪辑固化完成事件，当事件类型为 PersistenceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PersistenceCompleteTask GetPersistenceCompleteEvent() const;

                    /**
                     * 设置<p>剪辑固化完成事件，当事件类型为 PersistenceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _persistenceCompleteEvent <p>剪辑固化完成事件，当事件类型为 PersistenceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPersistenceCompleteEvent(const PersistenceCompleteTask& _persistenceCompleteEvent);

                    /**
                     * 判断参数 PersistenceCompleteEvent 是否已赋值
                     * @return PersistenceCompleteEvent 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>自适应码流任务信息，仅当 EventType 为ComplexAdaptiveDynamicStreamingComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent <p>自适应码流任务信息，仅当 EventType 为ComplexAdaptiveDynamicStreamingComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingCompleteEvent() const;

                    /**
                     * 设置<p>自适应码流任务信息，仅当 EventType 为ComplexAdaptiveDynamicStreamingComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complexAdaptiveDynamicStreamingCompleteEvent <p>自适应码流任务信息，仅当 EventType 为ComplexAdaptiveDynamicStreamingComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplexAdaptiveDynamicStreamingCompleteEvent(const ComplexAdaptiveDynamicStreamingTask& _complexAdaptiveDynamicStreamingCompleteEvent);

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>MPS 视频处理任务信息，仅当 EventType 为 ProcessMediaByMPSComplete 时有效。</p>
                     * @return ProcessMediaByMPSCompleteEvent <p>MPS 视频处理任务信息，仅当 EventType 为 ProcessMediaByMPSComplete 时有效。</p>
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSCompleteEvent() const;

                    /**
                     * 设置<p>MPS 视频处理任务信息，仅当 EventType 为 ProcessMediaByMPSComplete 时有效。</p>
                     * @param _processMediaByMPSCompleteEvent <p>MPS 视频处理任务信息，仅当 EventType 为 ProcessMediaByMPSComplete 时有效。</p>
                     * 
                     */
                    void SetProcessMediaByMPSCompleteEvent(const ProcessMediaByMPS& _processMediaByMPSCompleteEvent);

                    /**
                     * 判断参数 ProcessMediaByMPSCompleteEvent 是否已赋值
                     * @return ProcessMediaByMPSCompleteEvent 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生图任务信息，仅当 EventType 为 AigcImageTaskComplete 时有效。</p>
                     * @return AigcImageCompleteEvent <p>AIGC 生图任务信息，仅当 EventType 为 AigcImageTaskComplete 时有效。</p>
                     * 
                     */
                    AigcImageTask GetAigcImageCompleteEvent() const;

                    /**
                     * 设置<p>AIGC 生图任务信息，仅当 EventType 为 AigcImageTaskComplete 时有效。</p>
                     * @param _aigcImageCompleteEvent <p>AIGC 生图任务信息，仅当 EventType 为 AigcImageTaskComplete 时有效。</p>
                     * 
                     */
                    void SetAigcImageCompleteEvent(const AigcImageTask& _aigcImageCompleteEvent);

                    /**
                     * 判断参数 AigcImageCompleteEvent 是否已赋值
                     * @return AigcImageCompleteEvent 是否已赋值
                     * 
                     */
                    bool AigcImageCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生视频任务信息，仅当 EventType 为 AigcVideoTaskComplete 时有效。</p>
                     * @return AigcVideoCompleteEvent <p>AIGC 生视频任务信息，仅当 EventType 为 AigcVideoTaskComplete 时有效。</p>
                     * 
                     */
                    AigcVideoTask GetAigcVideoCompleteEvent() const;

                    /**
                     * 设置<p>AIGC 生视频任务信息，仅当 EventType 为 AigcVideoTaskComplete 时有效。</p>
                     * @param _aigcVideoCompleteEvent <p>AIGC 生视频任务信息，仅当 EventType 为 AigcVideoTaskComplete 时有效。</p>
                     * 
                     */
                    void SetAigcVideoCompleteEvent(const AigcVideoTask& _aigcVideoCompleteEvent);

                    /**
                     * 判断参数 AigcVideoCompleteEvent 是否已赋值
                     * @return AigcVideoCompleteEvent 是否已赋值
                     * 
                     */
                    bool AigcVideoCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>提取数字水印信息，仅当 EventType 为 ExtractBlindWatermarkComplete 时有效。</p>
                     * @return ExtractBlindWatermarkComplete <p>提取数字水印信息，仅当 EventType 为 ExtractBlindWatermarkComplete 时有效。</p>
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkComplete() const;

                    /**
                     * 设置<p>提取数字水印信息，仅当 EventType 为 ExtractBlindWatermarkComplete 时有效。</p>
                     * @param _extractBlindWatermarkComplete <p>提取数字水印信息，仅当 EventType 为 ExtractBlindWatermarkComplete 时有效。</p>
                     * 
                     */
                    void SetExtractBlindWatermarkComplete(const ExtractBlindWatermarkTask& _extractBlindWatermarkComplete);

                    /**
                     * 判断参数 ExtractBlindWatermarkComplete 是否已赋值
                     * @return ExtractBlindWatermarkComplete 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkCompleteHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 场景化生图任务信息，仅当 EventType 为 SceneAigcImageCompleteEvent 时有效。</p>
                     * @return SceneAigcImageCompleteEvent <p>AIGC 场景化生图任务信息，仅当 EventType 为 SceneAigcImageCompleteEvent 时有效。</p>
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageCompleteEvent() const;

                    /**
                     * 设置<p>AIGC 场景化生图任务信息，仅当 EventType 为 SceneAigcImageCompleteEvent 时有效。</p>
                     * @param _sceneAigcImageCompleteEvent <p>AIGC 场景化生图任务信息，仅当 EventType 为 SceneAigcImageCompleteEvent 时有效。</p>
                     * 
                     */
                    void SetSceneAigcImageCompleteEvent(const SceneAigcImageTask& _sceneAigcImageCompleteEvent);

                    /**
                     * 判断参数 SceneAigcImageCompleteEvent 是否已赋值
                     * @return SceneAigcImageCompleteEvent 是否已赋值
                     * 
                     */
                    bool SceneAigcImageCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>图片异步处理任务信息，仅当 EventType 为 ProcessImageAsyncCompleteEvent 时有效。</p>
                     * @return ProcessImageAsyncCompleteEvent <p>图片异步处理任务信息，仅当 EventType 为 ProcessImageAsyncCompleteEvent 时有效。</p>
                     * 
                     */
                    ProcessImageAsyncTask GetProcessImageAsyncCompleteEvent() const;

                    /**
                     * 设置<p>图片异步处理任务信息，仅当 EventType 为 ProcessImageAsyncCompleteEvent 时有效。</p>
                     * @param _processImageAsyncCompleteEvent <p>图片异步处理任务信息，仅当 EventType 为 ProcessImageAsyncCompleteEvent 时有效。</p>
                     * 
                     */
                    void SetProcessImageAsyncCompleteEvent(const ProcessImageAsyncTask& _processImageAsyncCompleteEvent);

                    /**
                     * 判断参数 ProcessImageAsyncCompleteEvent 是否已赋值
                     * @return ProcessImageAsyncCompleteEvent 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 自定义主体信息，仅当 EventType 为 CreateAigcAdvancedCustomElementCompleteEvent，该字段有值。</p>
                     * @return CreateAigcAdvancedCustomElementCompleteEvent <p>AIGC 自定义主体信息，仅当 EventType 为 CreateAigcAdvancedCustomElementCompleteEvent，该字段有值。</p>
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementCompleteEvent() const;

                    /**
                     * 设置<p>AIGC 自定义主体信息，仅当 EventType 为 CreateAigcAdvancedCustomElementCompleteEvent，该字段有值。</p>
                     * @param _createAigcAdvancedCustomElementCompleteEvent <p>AIGC 自定义主体信息，仅当 EventType 为 CreateAigcAdvancedCustomElementCompleteEvent，该字段有值。</p>
                     * 
                     */
                    void SetCreateAigcAdvancedCustomElementCompleteEvent(const CreateAigcAdvancedCustomElementTask& _createAigcAdvancedCustomElementCompleteEvent);

                    /**
                     * 判断参数 CreateAigcAdvancedCustomElementCompleteEvent 是否已赋值
                     * @return CreateAigcAdvancedCustomElementCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateAigcAdvancedCustomElementCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 自定义音色信息，仅当 EventType 为 CreateAigcCustomVoiceCompleteEvent，该字段有值。</p>
                     * @return CreateAigcCustomVoiceCompleteEvent <p>AIGC 自定义音色信息，仅当 EventType 为 CreateAigcCustomVoiceCompleteEvent，该字段有值。</p>
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceCompleteEvent() const;

                    /**
                     * 设置<p>AIGC 自定义音色信息，仅当 EventType 为 CreateAigcCustomVoiceCompleteEvent，该字段有值。</p>
                     * @param _createAigcCustomVoiceCompleteEvent <p>AIGC 自定义音色信息，仅当 EventType 为 CreateAigcCustomVoiceCompleteEvent，该字段有值。</p>
                     * 
                     */
                    void SetCreateAigcCustomVoiceCompleteEvent(const CreateAigcCustomVoiceTask& _createAigcCustomVoiceCompleteEvent);

                    /**
                     * 判断参数 CreateAigcCustomVoiceCompleteEvent 是否已赋值
                     * @return CreateAigcCustomVoiceCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateAigcCustomVoiceCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>异步获取 AIGC 人脸信息，仅当 EventType 为 DescribeAigcFaceInfoAsyncComplete，该字段有值。</p>
                     * @return DescribeAigcFaceInfoAsyncCompleteEvent <p>异步获取 AIGC 人脸信息，仅当 EventType 为 DescribeAigcFaceInfoAsyncComplete，该字段有值。</p>
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask GetDescribeAigcFaceInfoAsyncCompleteEvent() const;

                    /**
                     * 设置<p>异步获取 AIGC 人脸信息，仅当 EventType 为 DescribeAigcFaceInfoAsyncComplete，该字段有值。</p>
                     * @param _describeAigcFaceInfoAsyncCompleteEvent <p>异步获取 AIGC 人脸信息，仅当 EventType 为 DescribeAigcFaceInfoAsyncComplete，该字段有值。</p>
                     * 
                     */
                    void SetDescribeAigcFaceInfoAsyncCompleteEvent(const DescribeAigcFaceInfoAsyncTask& _describeAigcFaceInfoAsyncCompleteEvent);

                    /**
                     * 判断参数 DescribeAigcFaceInfoAsyncCompleteEvent 是否已赋值
                     * @return DescribeAigcFaceInfoAsyncCompleteEvent 是否已赋值
                     * 
                     */
                    bool DescribeAigcFaceInfoAsyncCompleteEventHasBeenSet() const;

                private:

                    /**
                     * <p>事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。</p>
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <p><b>支持事件类型：</b></p><li>NewFileUpload：视频上传完成；</li><li>ProcedureStateChanged：任务流状态变更；</li><li>FileDeleted：视频删除完成；</li><li>RestoreMediaComplete：视频取回完成；</li><li>PullComplete：视频转拉完成；</li><li>EditMediaComplete：视频编辑完成；</li><li>SplitMediaComplete：视频拆分完成；</li><li>ComposeMediaComplete：制作媒体文件完成；</li><li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li><li>RemoveWatermark：智能去除水印完成。</li><li>RebuildMediaComplete：音画质重生完成事件（不推荐使用）。</li><li>ReviewAudioVideoComplete：音视频审核完成；</li><li>ExtractTraceWatermarkComplete：提取溯源水印完成；</li><li>ExtractCopyRightWatermarkComplete：提取版权水印完成；</li><li>DescribeFileAttributesComplete：获取文件属性完成；</li><li>QualityInspectComplete：音画质检测完成；</li><li>QualityEnhanceComplete：音画质重生任务完成；</li><li>PersistenceComplete：剪辑固化完成；</li><li>ComplexAdaptiveDynamicStreamingComplete：复杂自适应码流任务完成。</li><li>ProcessMediaByMPSComplete：MPS视频处理完成。</li><li>AigcImageTaskComplete：AIGC 生图任务完成。</li><li>AigcVideoTaskComplete：AIGC 生视频任务完成。</li><li>DescribeAigcFaceInfoAsyncComplete：异步获取 AIGC 人脸信息任务完成。</li><b>兼容 2017 版的事件类型：</b><li>TranscodeComplete：视频转码完成；</li><li>ConcatComplete：视频拼接完成；</li><li>ClipComplete：视频剪辑完成；</li><li>CreateImageSpriteComplete：视频截取雪碧图完成；</li><li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>视频上传完成事件，当事件类型为 NewFileUpload 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * <p>任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * <p>文件删除事件，当事件类型为 FileDeleted 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * <p>视频转拉完成事件，当事件类型为 PullComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * <p>视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * <p>视频拆分完成事件，当事件类型为 SplitMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * <p>制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * <p>视频剪辑完成事件，当事件类型为 ClipComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * <p>视频转码完成事件，当事件类型为 TranscodeComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * <p>视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * <p>视频拼接完成事件，当事件类型为 ConcatComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * <p>视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * <p>微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * <p>微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * <p>智能去除水印完成事件，当事件类型为 RemoveWatermark 有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>视频取回完成事件，当事件类型为 RestoreMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * <p>音画质重生完成事件，当事件类型为 RebuildMediaComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * <p>溯源水印提取完成事件，当事件类型为 ExtractTraceWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>版权水印提取完成事件，当事件类型为 ExtractCopyRightWatermarkComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>音视频审核完成事件，当事件类型为 ReviewAudioVideoComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * <p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * <p>获取文件属性完成事件，当事件类型为 DescribeFileAttributesComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * <p>音画质检测完成事件，当事件类型为 QualityInspectComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityInspectTask m_qualityInspectCompleteEvent;
                    bool m_qualityInspectCompleteEventHasBeenSet;

                    /**
                     * <p>音画质重生完成事件，当事件类型为 QualityEnhanceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityEnhanceTask m_qualityEnhanceCompleteEvent;
                    bool m_qualityEnhanceCompleteEventHasBeenSet;

                    /**
                     * <p>媒体转推状态变化事件，当事件类型为 MediaCastStatusChanged 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaCastEvent m_mediaCastStatusChangedEvent;
                    bool m_mediaCastStatusChangedEventHasBeenSet;

                    /**
                     * <p>剪辑固化完成事件，当事件类型为 PersistenceComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersistenceCompleteTask m_persistenceCompleteEvent;
                    bool m_persistenceCompleteEventHasBeenSet;

                    /**
                     * <p>自适应码流任务信息，仅当 EventType 为ComplexAdaptiveDynamicStreamingComplete 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingCompleteEvent;
                    bool m_complexAdaptiveDynamicStreamingCompleteEventHasBeenSet;

                    /**
                     * <p>MPS 视频处理任务信息，仅当 EventType 为 ProcessMediaByMPSComplete 时有效。</p>
                     */
                    ProcessMediaByMPS m_processMediaByMPSCompleteEvent;
                    bool m_processMediaByMPSCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC 生图任务信息，仅当 EventType 为 AigcImageTaskComplete 时有效。</p>
                     */
                    AigcImageTask m_aigcImageCompleteEvent;
                    bool m_aigcImageCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC 生视频任务信息，仅当 EventType 为 AigcVideoTaskComplete 时有效。</p>
                     */
                    AigcVideoTask m_aigcVideoCompleteEvent;
                    bool m_aigcVideoCompleteEventHasBeenSet;

                    /**
                     * <p>提取数字水印信息，仅当 EventType 为 ExtractBlindWatermarkComplete 时有效。</p>
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkComplete;
                    bool m_extractBlindWatermarkCompleteHasBeenSet;

                    /**
                     * <p>AIGC 场景化生图任务信息，仅当 EventType 为 SceneAigcImageCompleteEvent 时有效。</p>
                     */
                    SceneAigcImageTask m_sceneAigcImageCompleteEvent;
                    bool m_sceneAigcImageCompleteEventHasBeenSet;

                    /**
                     * <p>图片异步处理任务信息，仅当 EventType 为 ProcessImageAsyncCompleteEvent 时有效。</p>
                     */
                    ProcessImageAsyncTask m_processImageAsyncCompleteEvent;
                    bool m_processImageAsyncCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC 自定义主体信息，仅当 EventType 为 CreateAigcAdvancedCustomElementCompleteEvent，该字段有值。</p>
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementCompleteEvent;
                    bool m_createAigcAdvancedCustomElementCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC 自定义音色信息，仅当 EventType 为 CreateAigcCustomVoiceCompleteEvent，该字段有值。</p>
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceCompleteEvent;
                    bool m_createAigcCustomVoiceCompleteEventHasBeenSet;

                    /**
                     * <p>异步获取 AIGC 人脸信息，仅当 EventType 为 DescribeAigcFaceInfoAsyncComplete，该字段有值。</p>
                     */
                    DescribeAigcFaceInfoAsyncTask m_describeAigcFaceInfoAsyncCompleteEvent;
                    bool m_describeAigcFaceInfoAsyncCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
