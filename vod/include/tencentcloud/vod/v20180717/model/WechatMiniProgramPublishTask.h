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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 微信小程序发布任务信息
                */
                class WechatMiniProgramPublishTask : public AbstractModel
                {
                public:
                    WechatMiniProgramPublishTask();
                    ~WechatMiniProgramPublishTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID。
                     * @return TaskId 任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID。
                     * @param _taskId 任务 ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * @return Status 任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * @param _status 任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return Message 错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _message 错误信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取发布视频文件 ID。
                     * @return FileId 发布视频文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置发布视频文件 ID。
                     * @param _fileId 发布视频文件 ID。
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
                     * 获取发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * @return SourceDefinition 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * 
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * @param _sourceDefinition 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * 
                     */
                    void SetSourceDefinition(const uint64_t& _sourceDefinition);

                    /**
                     * 判断参数 SourceDefinition 是否已赋值
                     * @return SourceDefinition 是否已赋值
                     * 
                     */
                    bool SourceDefinitionHasBeenSet() const;

                    /**
                     * 获取微信小程序视频发布状态，取值：
<li>Pass：发布成功；</li>
<li>Failed：发布失败；</li>
<li>Rejected：音视频审核未通过。</li>
                     * @return PublishResult 微信小程序视频发布状态，取值：
<li>Pass：发布成功；</li>
<li>Failed：发布失败；</li>
<li>Rejected：音视频审核未通过。</li>
                     * 
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 设置微信小程序视频发布状态，取值：
<li>Pass：发布成功；</li>
<li>Failed：发布失败；</li>
<li>Rejected：音视频审核未通过。</li>
                     * @param _publishResult 微信小程序视频发布状态，取值：
<li>Pass：发布成功；</li>
<li>Failed：发布失败；</li>
<li>Rejected：音视频审核未通过。</li>
                     * 
                     */
                    void SetPublishResult(const std::string& _publishResult);

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     * 
                     */
                    bool PublishResultHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 发布视频文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                    /**
                     * 微信小程序视频发布状态，取值：
<li>Pass：发布成功；</li>
<li>Failed：发布失败；</li>
<li>Rejected：音视频审核未通过。</li>
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_
