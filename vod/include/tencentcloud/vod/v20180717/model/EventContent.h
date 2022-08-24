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
                     * 获取事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。
                     * @return EventHandle 事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。
                     * @param EventHandle 事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。
                     */
                    void SetEventHandle(const std::string& _eventHandle);

                    /**
                     * 判断参数 EventHandle 是否已赋值
                     * @return EventHandle 是否已赋值
                     */
                    bool EventHandleHasBeenSet() const;

                    /**
                     * 获取<b>支持事件类型：</b>
<li>NewFileUpload：视频上传完成；</li>
<li>ProcedureStateChanged：任务流状态变更；</li>
<li>FileDeleted：视频删除完成；</li>
<li>PullComplete：视频转拉完成；</li>
<li>EditMediaComplete：视频编辑完成；</li>
<li>SplitMediaComplete：视频拆分完成；</li>
<li>WechatPublishComplete：微信发布完成；</li>
<li>ComposeMediaComplete：制作媒体文件完成；</li>
<li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li>
<li>FastClipMediaComplete：快速剪辑完成。</li>
<b>兼容 2017 版的事件类型：</b>
<li>TranscodeComplete：视频转码完成；</li>
<li>ConcatComplete：视频拼接完成；</li>
<li>ClipComplete：视频剪辑完成；</li>
<li>CreateImageSpriteComplete：视频截取雪碧图完成；</li>
<li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * @return EventType <b>支持事件类型：</b>
<li>NewFileUpload：视频上传完成；</li>
<li>ProcedureStateChanged：任务流状态变更；</li>
<li>FileDeleted：视频删除完成；</li>
<li>PullComplete：视频转拉完成；</li>
<li>EditMediaComplete：视频编辑完成；</li>
<li>SplitMediaComplete：视频拆分完成；</li>
<li>WechatPublishComplete：微信发布完成；</li>
<li>ComposeMediaComplete：制作媒体文件完成；</li>
<li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li>
<li>FastClipMediaComplete：快速剪辑完成。</li>
<b>兼容 2017 版的事件类型：</b>
<li>TranscodeComplete：视频转码完成；</li>
<li>ConcatComplete：视频拼接完成；</li>
<li>ClipComplete：视频剪辑完成；</li>
<li>CreateImageSpriteComplete：视频截取雪碧图完成；</li>
<li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>支持事件类型：</b>
<li>NewFileUpload：视频上传完成；</li>
<li>ProcedureStateChanged：任务流状态变更；</li>
<li>FileDeleted：视频删除完成；</li>
<li>PullComplete：视频转拉完成；</li>
<li>EditMediaComplete：视频编辑完成；</li>
<li>SplitMediaComplete：视频拆分完成；</li>
<li>WechatPublishComplete：微信发布完成；</li>
<li>ComposeMediaComplete：制作媒体文件完成；</li>
<li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li>
<li>FastClipMediaComplete：快速剪辑完成。</li>
<b>兼容 2017 版的事件类型：</b>
<li>TranscodeComplete：视频转码完成；</li>
<li>ConcatComplete：视频拼接完成；</li>
<li>ClipComplete：视频剪辑完成；</li>
<li>CreateImageSpriteComplete：视频截取雪碧图完成；</li>
<li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     * @param EventType <b>支持事件类型：</b>
<li>NewFileUpload：视频上传完成；</li>
<li>ProcedureStateChanged：任务流状态变更；</li>
<li>FileDeleted：视频删除完成；</li>
<li>PullComplete：视频转拉完成；</li>
<li>EditMediaComplete：视频编辑完成；</li>
<li>SplitMediaComplete：视频拆分完成；</li>
<li>WechatPublishComplete：微信发布完成；</li>
<li>ComposeMediaComplete：制作媒体文件完成；</li>
<li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li>
<li>FastClipMediaComplete：快速剪辑完成。</li>
<b>兼容 2017 版的事件类型：</b>
<li>TranscodeComplete：视频转码完成；</li>
<li>ConcatComplete：视频拼接完成；</li>
<li>ClipComplete：视频剪辑完成；</li>
<li>CreateImageSpriteComplete：视频截取雪碧图完成；</li>
<li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取视频上传完成事件，当事件类型为 NewFileUpload 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUploadEvent 视频上传完成事件，当事件类型为 NewFileUpload 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置视频上传完成事件，当事件类型为 NewFileUpload 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileUploadEvent 视频上传完成事件，当事件类型为 NewFileUpload 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileUploadEvent(const FileUploadTask& _fileUploadEvent);

                    /**
                     * 判断参数 FileUploadEvent 是否已赋值
                     * @return FileUploadEvent 是否已赋值
                     */
                    bool FileUploadEventHasBeenSet() const;

                    /**
                     * 获取任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureStateChangeEvent 任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcedureStateChangeEvent 任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent);

                    /**
                     * 判断参数 ProcedureStateChangeEvent 是否已赋值
                     * @return ProcedureStateChangeEvent 是否已赋值
                     */
                    bool ProcedureStateChangeEventHasBeenSet() const;

                    /**
                     * 获取文件删除事件，当事件类型为 FileDeleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileDeleteEvent 文件删除事件，当事件类型为 FileDeleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置文件删除事件，当事件类型为 FileDeleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileDeleteEvent 文件删除事件，当事件类型为 FileDeleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent);

                    /**
                     * 判断参数 FileDeleteEvent 是否已赋值
                     * @return FileDeleteEvent 是否已赋值
                     */
                    bool FileDeleteEventHasBeenSet() const;

                    /**
                     * 获取视频转拉完成事件，当事件类型为 PullComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PullCompleteEvent 视频转拉完成事件，当事件类型为 PullComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置视频转拉完成事件，当事件类型为 PullComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PullCompleteEvent 视频转拉完成事件，当事件类型为 PullComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent);

                    /**
                     * 判断参数 PullCompleteEvent 是否已赋值
                     * @return PullCompleteEvent 是否已赋值
                     */
                    bool PullCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaCompleteEvent 视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EditMediaCompleteEvent 视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent);

                    /**
                     * 判断参数 EditMediaCompleteEvent 是否已赋值
                     * @return EditMediaCompleteEvent 是否已赋值
                     */
                    bool EditMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频拆条完成事件，当事件类型为 SplitMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitMediaCompleteEvent 视频拆条完成事件，当事件类型为 SplitMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置视频拆条完成事件，当事件类型为 SplitMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SplitMediaCompleteEvent 视频拆条完成事件，当事件类型为 SplitMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSplitMediaCompleteEvent(const SplitMediaTask& _splitMediaCompleteEvent);

                    /**
                     * 判断参数 SplitMediaCompleteEvent 是否已赋值
                     * @return SplitMediaCompleteEvent 是否已赋值
                     */
                    bool SplitMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComposeMediaCompleteEvent 制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ComposeMediaCompleteEvent 制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent);

                    /**
                     * 判断参数 ComposeMediaCompleteEvent 是否已赋值
                     * @return ComposeMediaCompleteEvent 是否已赋值
                     */
                    bool ComposeMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频剪辑完成事件，当事件类型为 ClipComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClipCompleteEvent 视频剪辑完成事件，当事件类型为 ClipComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置视频剪辑完成事件，当事件类型为 ClipComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClipCompleteEvent 视频剪辑完成事件，当事件类型为 ClipComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent);

                    /**
                     * 判断参数 ClipCompleteEvent 是否已赋值
                     * @return ClipCompleteEvent 是否已赋值
                     */
                    bool ClipCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频转码完成事件，当事件类型为 TranscodeComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeCompleteEvent 视频转码完成事件，当事件类型为 TranscodeComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置视频转码完成事件，当事件类型为 TranscodeComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TranscodeCompleteEvent 视频转码完成事件，当事件类型为 TranscodeComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent);

                    /**
                     * 判断参数 TranscodeCompleteEvent 是否已赋值
                     * @return TranscodeCompleteEvent 是否已赋值
                     */
                    bool TranscodeCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateImageSpriteCompleteEvent 视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateImageSpriteCompleteEvent 视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent);

                    /**
                     * 判断参数 CreateImageSpriteCompleteEvent 是否已赋值
                     * @return CreateImageSpriteCompleteEvent 是否已赋值
                     */
                    bool CreateImageSpriteCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频拼接完成事件，当事件类型为 ConcatComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcatCompleteEvent 视频拼接完成事件，当事件类型为 ConcatComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置视频拼接完成事件，当事件类型为 ConcatComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConcatCompleteEvent 视频拼接完成事件，当事件类型为 ConcatComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent);

                    /**
                     * 判断参数 ConcatCompleteEvent 是否已赋值
                     * @return ConcatCompleteEvent 是否已赋值
                     */
                    bool ConcatCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetCompleteEvent 视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SnapshotByTimeOffsetCompleteEvent 视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent);

                    /**
                     * 判断参数 SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * @return SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     */
                    bool SnapshotByTimeOffsetCompleteEventHasBeenSet() const;

                    /**
                     * 获取微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPublishCompleteEvent 微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WechatPublishCompleteEvent 微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent);

                    /**
                     * 判断参数 WechatPublishCompleteEvent 是否已赋值
                     * @return WechatPublishCompleteEvent 是否已赋值
                     */
                    bool WechatPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatMiniProgramPublishCompleteEvent 微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WechatMiniProgramPublishCompleteEvent 微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent);

                    /**
                     * 判断参数 WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * @return WechatMiniProgramPublishCompleteEvent 是否已赋值
                     */
                    bool WechatMiniProgramPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取智能去除水印任务完成事件，当事件类型为 RemoveWatermark 有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveWatermarkCompleteEvent 智能去除水印任务完成事件，当事件类型为 RemoveWatermark 有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置智能去除水印任务完成事件，当事件类型为 RemoveWatermark 有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RemoveWatermarkCompleteEvent 智能去除水印任务完成事件，当事件类型为 RemoveWatermark 有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemoveWatermarkCompleteEvent(const RemoveWatermarkTask& _removeWatermarkCompleteEvent);

                    /**
                     * 判断参数 RemoveWatermarkCompleteEvent 是否已赋值
                     * @return RemoveWatermarkCompleteEvent 是否已赋值
                     */
                    bool RemoveWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取视频取回完成事件，当事件类型为RestoreMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestoreMediaCompleteEvent 视频取回完成事件，当事件类型为RestoreMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置视频取回完成事件，当事件类型为RestoreMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RestoreMediaCompleteEvent 视频取回完成事件，当事件类型为RestoreMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRestoreMediaCompleteEvent(const RestoreMediaTask& _restoreMediaCompleteEvent);

                    /**
                     * 判断参数 RestoreMediaCompleteEvent 是否已赋值
                     * @return RestoreMediaCompleteEvent 是否已赋值
                     */
                    bool RestoreMediaCompleteEventHasBeenSet() const;

                private:

                    /**
                     * 事件句柄，调用方必须调用 ConfirmEvents 来确认消息已经收到，确认有效时间 30 秒。失效后，事件可重新被获取。
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>支持事件类型：</b>
<li>NewFileUpload：视频上传完成；</li>
<li>ProcedureStateChanged：任务流状态变更；</li>
<li>FileDeleted：视频删除完成；</li>
<li>PullComplete：视频转拉完成；</li>
<li>EditMediaComplete：视频编辑完成；</li>
<li>SplitMediaComplete：视频拆分完成；</li>
<li>WechatPublishComplete：微信发布完成；</li>
<li>ComposeMediaComplete：制作媒体文件完成；</li>
<li>WechatMiniProgramPublishComplete：微信小程序发布完成。</li>
<li>FastClipMediaComplete：快速剪辑完成。</li>
<b>兼容 2017 版的事件类型：</b>
<li>TranscodeComplete：视频转码完成；</li>
<li>ConcatComplete：视频拼接完成；</li>
<li>ClipComplete：视频剪辑完成；</li>
<li>CreateImageSpriteComplete：视频截取雪碧图完成；</li>
<li>CreateSnapshotByTimeOffsetComplete：视频按时间点截图完成。</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 视频上传完成事件，当事件类型为 NewFileUpload 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * 任务流状态变更事件，当事件类型为 ProcedureStateChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * 文件删除事件，当事件类型为 FileDeleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * 视频转拉完成事件，当事件类型为 PullComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * 视频编辑完成事件，当事件类型为 EditMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * 视频拆条完成事件，当事件类型为 SplitMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * 制作媒体文件任务完成事件，当事件类型为 ComposeMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * 视频剪辑完成事件，当事件类型为 ClipComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * 视频转码完成事件，当事件类型为 TranscodeComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * 视频截取雪碧图完成事件，当事件类型为 CreateImageSpriteComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * 视频拼接完成事件，当事件类型为 ConcatComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * 视频按时间点截图完成事件，当事件类型为 CreateSnapshotByTimeOffsetComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * 微信发布完成事件，当事件类型为 WechatPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * 微信小程序发布任务完成事件，当事件类型为 WechatMiniProgramPublishComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * 智能去除水印任务完成事件，当事件类型为 RemoveWatermark 有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * 视频取回完成事件，当事件类型为RestoreMediaComplete 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
