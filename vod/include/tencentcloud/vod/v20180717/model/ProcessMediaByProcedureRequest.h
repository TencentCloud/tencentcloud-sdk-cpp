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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDUREREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDUREREQUEST_H_

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
                * ProcessMediaByProcedure请求参数结构体
                */
                class ProcessMediaByProcedureRequest : public AbstractModel
                {
                public:
                    ProcessMediaByProcedureRequest();
                    ~ProcessMediaByProcedureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81">任务流</a>名称。</p>
                     * @return ProcedureName <p><a href="https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81">任务流</a>名称。</p>
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81">任务流</a>名称。</p>
                     * @param _procedureName <p><a href="https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81">任务流</a>名称。</p>
                     * 
                     */
                    void SetProcedureName(const std::string& _procedureName);

                    /**
                     * 判断参数 ProcedureName 是否已赋值
                     * @return ProcedureName 是否已赋值
                     * 
                     */
                    bool ProcedureNameHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件 ID。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @return FileId <p>媒体文件 ID。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID。<br>FileId和MediaStoragePath必须提供其中一个。</p>
                     * @param _fileId <p>媒体文件 ID。<br>FileId和MediaStoragePath必须提供其中一个。</p>
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
                     * 获取<p>任务流的优先级，数值越大优先级越高，取值范围是-10到10，不填代表0。</p>
                     * @return TasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是-10到10，不填代表0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务流的优先级，数值越大优先级越高，取值范围是-10到10，不填代表0。</p>
                     * @param _tasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是-10到10，不填代表0。</p>
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
                     * 获取<p>用于去重的识别码，如果 7 天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果 7 天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果 7 天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果 7 天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
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

                private:

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81">任务流</a>名称。</p>
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * <p>媒体文件 ID。<br>FileId和MediaStoragePath必须提供其中一个。</p>
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
                     * <p>任务流的优先级，数值越大优先级越高，取值范围是-10到10，不填代表0。</p>
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
                     * <p>用于去重的识别码，如果 7 天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDUREREQUEST_H_
