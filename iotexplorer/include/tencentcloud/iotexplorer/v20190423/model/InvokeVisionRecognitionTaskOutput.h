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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVISIONRECOGNITIONTASKOUTPUT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVISIONRECOGNITIONTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/VisionRecognitionResult.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 批量同步执行 TWeSee 语义理解任务的响应
                */
                class InvokeVisionRecognitionTaskOutput : public AbstractModel
                {
                public:
                    InvokeVisionRecognitionTaskOutput();
                    ~InvokeVisionRecognitionTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务是否已完成
                     * @return Completed 任务是否已完成
                     * 
                     */
                    bool GetCompleted() const;

                    /**
                     * 设置任务是否已完成
                     * @param _completed 任务是否已完成
                     * 
                     */
                    void SetCompleted(const bool& _completed);

                    /**
                     * 判断参数 Completed 是否已赋值
                     * @return Completed 是否已赋值
                     * 
                     */
                    bool CompletedHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
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
                     * 获取错误码
                     * @return ErrorCode 错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置错误码
                     * @param _errorCode 错误码
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误消息
                     * @return ErrorMessage 错误消息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误消息
                     * @param _errorMessage 错误消息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取任务结果
                     * @return Result 任务结果
                     * 
                     */
                    VisionRecognitionResult GetResult() const;

                    /**
                     * 设置任务结果
                     * @param _result 任务结果
                     * 
                     */
                    void SetResult(const VisionRecognitionResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 任务是否已完成
                     */
                    bool m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误消息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 任务结果
                     */
                    VisionRecognitionResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVISIONRECOGNITIONTASKOUTPUT_H_
