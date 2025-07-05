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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TASKRESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 创建任务时的返回结果
                */
                class TaskResult : public AbstractModel
                {
                public:
                    TaskResult();
                    ~TaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求时传入的DataId
                     * @return DataId 请求时传入的DataId
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置请求时传入的DataId
                     * @param _dataId 请求时传入的DataId
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取TaskId，任务ID
                     * @return TaskId TaskId，任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置TaskId，任务ID
                     * @param _taskId TaskId，任务ID
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
                     * 获取错误码。如果code为OK，则表示创建成功，其他则参考公共错误码
                     * @return Code 错误码。如果code为OK，则表示创建成功，其他则参考公共错误码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码。如果code为OK，则表示创建成功，其他则参考公共错误码
                     * @param _code 错误码。如果code为OK，则表示创建成功，其他则参考公共错误码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取如果错误，该字段表示错误详情
                     * @return Message 如果错误，该字段表示错误详情
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置如果错误，该字段表示错误详情
                     * @param _message 如果错误，该字段表示错误详情
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
                     * 请求时传入的DataId
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * TaskId，任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误码。如果code为OK，则表示创建成功，其他则参考公共错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 如果错误，该字段表示错误详情
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TASKRESULT_H_
