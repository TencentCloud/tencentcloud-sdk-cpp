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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSSubTaskResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS 媒体处理任务信息。
                */
                class ProcessMediaByMPS : public AbstractModel
                {
                public:
                    ProcessMediaByMPS();
                    ~ProcessMediaByMPS() = default;
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
                     * 获取任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * @return Status 任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * @param _status 任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
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
                     * 获取错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。
                     * @return ErrCode 错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。
                     * @param _errCode 错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。
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
                     * 获取错误信息。源异常时返回对应异常 Message，否则请使用各个具体任务的 Message。
                     * @return Message 错误信息。源异常时返回对应异常 Message，否则请使用各个具体任务的 Message。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。源异常时返回对应异常 Message，否则请使用各个具体任务的 Message。
                     * @param _message 错误信息。源异常时返回对应异常 Message，否则请使用各个具体任务的 Message。
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
                     * 获取MPS 视频处理任务。
                     * @return SubTaskSet MPS 视频处理任务。
                     * 
                     */
                    std::vector<MPSSubTaskResult> GetSubTaskSet() const;

                    /**
                     * 设置MPS 视频处理任务。
                     * @param _subTaskSet MPS 视频处理任务。
                     * 
                     */
                    void SetSubTaskSet(const std::vector<MPSSubTaskResult>& _subTaskSet);

                    /**
                     * 判断参数 SubTaskSet 是否已赋值
                     * @return SubTaskSet 是否已赋值
                     * 
                     */
                    bool SubTaskSetHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。源异常时返回对应异常 Message，否则请使用各个具体任务的 Message。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * MPS 视频处理任务。
                     */
                    std::vector<MPSSubTaskResult> m_subTaskSet;
                    bool m_subTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_
