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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_JOB_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 通用调度任务
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度ID
                     * @return JobId 调度ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置调度ID
                     * @param _jobId 调度ID
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取执行状态 init:初始化, pending: 执行中, done: 执行成功, error: 执行失败
                     * @return Status 执行状态 init:初始化, pending: 执行中, done: 执行成功, error: 执行失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态 init:初始化, pending: 执行中, done: 执行成功, error: 执行失败
                     * @param _status 执行状态 init:初始化, pending: 执行中, done: 执行成功, error: 执行失败
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
                     * 获取任务错误信息
                     * @return ErrorMessage 任务错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置任务错误信息
                     * @param _errorMessage 任务错误信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 调度ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 执行状态 init:初始化, pending: 执行中, done: 执行成功, error: 执行失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_JOB_H_
