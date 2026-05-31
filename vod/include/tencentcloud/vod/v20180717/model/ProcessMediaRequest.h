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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessMedia请求参数结构体
                */
                class ProcessMediaRequest : public AbstractModel
                {
                public:
                    ProcessMediaRequest();
                    ~ProcessMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @return FileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @param _fileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。<br>FileId和MediaStoragePath必须提供其中一个。</p>
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
                     * 获取<p>媒体的存储路径。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以通过MediaStoragePath发起任务。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @return MediaStoragePath <p>媒体的存储路径。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以通过MediaStoragePath发起任务。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置<p>媒体的存储路径。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以通过MediaStoragePath发起任务。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @param _mediaStoragePath <p>媒体的存储路径。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以通过MediaStoragePath发起任务。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>视频处理类型任务参数。</p>
                     * @return MediaProcessTask <p>视频处理类型任务参数。</p>
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>视频处理类型任务参数。</p>
                     * @param _mediaProcessTask <p>视频处理类型任务参数。</p>
                     * 
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     * 
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取<p>音视频内容审核类型任务参数 *。<br><font color="red">* 不建议使用</font>，推荐使用 <a href="https://cloud.tencent.com/document/api/266/80283">音视频审核(ReviewAudioVideo)</a> 或 <a href="https://cloud.tencent.com/document/api/266/73217">图片审核(ReviewImage)</a>。</p>
                     * @return AiContentReviewTask <p>音视频内容审核类型任务参数 *。<br><font color="red">* 不建议使用</font>，推荐使用 <a href="https://cloud.tencent.com/document/api/266/80283">音视频审核(ReviewAudioVideo)</a> 或 <a href="https://cloud.tencent.com/document/api/266/73217">图片审核(ReviewImage)</a>。</p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>音视频内容审核类型任务参数 *。<br><font color="red">* 不建议使用</font>，推荐使用 <a href="https://cloud.tencent.com/document/api/266/80283">音视频审核(ReviewAudioVideo)</a> 或 <a href="https://cloud.tencent.com/document/api/266/73217">图片审核(ReviewImage)</a>。</p>
                     * @param _aiContentReviewTask <p>音视频内容审核类型任务参数 *。<br><font color="red">* 不建议使用</font>，推荐使用 <a href="https://cloud.tencent.com/document/api/266/80283">音视频审核(ReviewAudioVideo)</a> 或 <a href="https://cloud.tencent.com/document/api/266/73217">图片审核(ReviewImage)</a>。</p>
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取<p>音视频内容分析类型任务参数。</p>
                     * @return AiAnalysisTask <p>音视频内容分析类型任务参数。</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>音视频内容分析类型任务参数。</p>
                     * @param _aiAnalysisTask <p>音视频内容分析类型任务参数。</p>
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取<p>音视频内容识别类型任务参数。</p>
                     * @return AiRecognitionTask <p>音视频内容识别类型任务参数。</p>
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>音视频内容识别类型任务参数。</p>
                     * @param _aiRecognitionTask <p>音视频内容识别类型任务参数。</p>
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取<p>任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @return TasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @param _tasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>任务流状态变更通知模式，可取值有 Finish，Change 和 None，不填代表 Finish。</p>
                     * @return TasksNotifyMode <p>任务流状态变更通知模式，可取值有 Finish，Change 和 None，不填代表 Finish。</p>
                     * 
                     */
                    std::string GetTasksNotifyMode() const;

                    /**
                     * 设置<p>任务流状态变更通知模式，可取值有 Finish，Change 和 None，不填代表 Finish。</p>
                     * @param _tasksNotifyMode <p>任务流状态变更通知模式，可取值有 Finish，Change 和 None，不填代表 Finish。</p>
                     * 
                     */
                    void SetTasksNotifyMode(const std::string& _tasksNotifyMode);

                    /**
                     * 判断参数 TasksNotifyMode 是否已赋值
                     * @return TasksNotifyMode 是否已赋值
                     * 
                     */
                    bool TasksNotifyModeHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，特殊用途时使用。</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>FileID为空时有效，拉取Url生成新媒资产生新FileID，媒体处理产物将作为新媒资的附属产物。</p><p>注意：新媒资会产生存储费用</p>
                     * @return Url <p>FileID为空时有效，拉取Url生成新媒资产生新FileID，媒体处理产物将作为新媒资的附属产物。</p><p>注意：新媒资会产生存储费用</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>FileID为空时有效，拉取Url生成新媒资产生新FileID，媒体处理产物将作为新媒资的附属产物。</p><p>注意：新媒资会产生存储费用</p>
                     * @param _url <p>FileID为空时有效，拉取Url生成新媒资产生新FileID，媒体处理产物将作为新媒资的附属产物。</p><p>注意：新媒资会产生存储费用</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>媒体处理转码结果输出为独立媒资, 开启该选项会使产物输出为独立媒资，生成全新FileID，目前仅支持TranscodeTask转码任务输出为独立媒资。</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>注意：新媒资会产生存储费用，转码任务中片头片尾、溯源水印等暂不支持开启该选项。</p>
                     * @return OutputAsIndependentMedia <p>媒体处理转码结果输出为独立媒资, 开启该选项会使产物输出为独立媒资，生成全新FileID，目前仅支持TranscodeTask转码任务输出为独立媒资。</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>注意：新媒资会产生存储费用，转码任务中片头片尾、溯源水印等暂不支持开启该选项。</p>
                     * 
                     */
                    std::string GetOutputAsIndependentMedia() const;

                    /**
                     * 设置<p>媒体处理转码结果输出为独立媒资, 开启该选项会使产物输出为独立媒资，生成全新FileID，目前仅支持TranscodeTask转码任务输出为独立媒资。</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>注意：新媒资会产生存储费用，转码任务中片头片尾、溯源水印等暂不支持开启该选项。</p>
                     * @param _outputAsIndependentMedia <p>媒体处理转码结果输出为独立媒资, 开启该选项会使产物输出为独立媒资，生成全新FileID，目前仅支持TranscodeTask转码任务输出为独立媒资。</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>注意：新媒资会产生存储费用，转码任务中片头片尾、溯源水印等暂不支持开启该选项。</p>
                     * 
                     */
                    void SetOutputAsIndependentMedia(const std::string& _outputAsIndependentMedia);

                    /**
                     * 判断参数 OutputAsIndependentMedia 是否已赋值
                     * @return OutputAsIndependentMedia 是否已赋值
                     * 
                     */
                    bool OutputAsIndependentMediaHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>媒体的存储路径。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以通过MediaStoragePath发起任务。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>视频处理类型任务参数。</p>
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>音视频内容审核类型任务参数 *。<br><font color="red">* 不建议使用</font>，推荐使用 <a href="https://cloud.tencent.com/document/api/266/80283">音视频审核(ReviewAudioVideo)</a> 或 <a href="https://cloud.tencent.com/document/api/266/73217">图片审核(ReviewImage)</a>。</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>音视频内容分析类型任务参数。</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>音视频内容识别类型任务参数。</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>任务流状态变更通知模式，可取值有 Finish，Change 和 None，不填代表 Finish。</p>
                     */
                    std::string m_tasksNotifyMode;
                    bool m_tasksNotifyModeHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>FileID为空时有效，拉取Url生成新媒资产生新FileID，媒体处理产物将作为新媒资的附属产物。</p><p>注意：新媒资会产生存储费用</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>媒体处理转码结果输出为独立媒资, 开启该选项会使产物输出为独立媒资，生成全新FileID，目前仅支持TranscodeTask转码任务输出为独立媒资。</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>注意：新媒资会产生存储费用，转码任务中片头片尾、溯源水印等暂不支持开启该选项。</p>
                     */
                    std::string m_outputAsIndependentMedia;
                    bool m_outputAsIndependentMediaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_
