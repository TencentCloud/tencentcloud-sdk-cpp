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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 媒体导入知识库任务
                */
                class ImportMediaKnowledgeTask : public AbstractModel
                {
                public:
                    ImportMediaKnowledgeTask();
                    ~ImportMediaKnowledgeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID。</p>
                     * @return TaskId <p>任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。</p>
                     * @param _taskId <p>任务 ID。</p>
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
                     * 获取<p>媒体文件 ID</p>
                     * @return FileId <p>媒体文件 ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID</p>
                     * @param _fileId <p>媒体文件 ID</p>
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
                     * 获取<p>导入知识库任务的输入。</p>
                     * @return Input <p>导入知识库任务的输入。</p>
                     * 
                     */
                    ImportMediaKnowledgeTaskInput GetInput() const;

                    /**
                     * 设置<p>导入知识库任务的输入。</p>
                     * @param _input <p>导入知识库任务的输入。</p>
                     * 
                     */
                    void SetInput(const ImportMediaKnowledgeTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * @return Status <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * @param _status <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
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
                     * 获取<p>错误码，0 表示成功，其他值表示失败</p>
                     * @return ErrCode <p>错误码，0 表示成功，其他值表示失败</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码，0 表示成功，其他值表示失败</p>
                     * @param _errCode <p>错误码，0 表示成功，其他值表示失败</p>
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
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _message <p>错误信息。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>媒体文件 ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>导入知识库任务的输入。</p>
                     */
                    ImportMediaKnowledgeTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码，0 表示成功，其他值表示失败</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASK_H_
