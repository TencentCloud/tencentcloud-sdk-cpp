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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCETASKSTATUS_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCETASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例任务状态信息
                */
                class AndroidInstanceTaskStatus : public AbstractModel
                {
                public:
                    AndroidInstanceTaskStatus();
                    ~AndroidInstanceTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取任务状态：SUCCESS，FAILED，PROCESSING，PENDING,CANCELED
                     * @return Status 任务状态：SUCCESS，FAILED，PROCESSING，PENDING,CANCELED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态：SUCCESS，FAILED，PROCESSING，PENDING,CANCELED
                     * @param _status 任务状态：SUCCESS，FAILED，PROCESSING，PENDING,CANCELED
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
                     * 获取实例ID
                     * @return AndroidInstanceId 实例ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _androidInstanceId 实例ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取任务执行结果描述，针对某些任务，可以是可解析的 json
                     * @return TaskResult 任务执行结果描述，针对某些任务，可以是可解析的 json
                     * 
                     */
                    std::string GetTaskResult() const;

                    /**
                     * 设置任务执行结果描述，针对某些任务，可以是可解析的 json
                     * @param _taskResult 任务执行结果描述，针对某些任务，可以是可解析的 json
                     * 
                     */
                    void SetTaskResult(const std::string& _taskResult);

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     * 
                     */
                    bool TaskResultHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间
                     * @return CompleteTime 任务完成时间
                     * 
                     */
                    std::string GetCompleteTime() const;

                    /**
                     * 设置任务完成时间
                     * @param _completeTime 任务完成时间
                     * 
                     */
                    void SetCompleteTime(const std::string& _completeTime);

                    /**
                     * 判断参数 CompleteTime 是否已赋值
                     * @return CompleteTime 是否已赋值
                     * 
                     */
                    bool CompleteTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态：SUCCESS，FAILED，PROCESSING，PENDING,CANCELED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 任务执行结果描述，针对某些任务，可以是可解析的 json
                     */
                    std::string m_taskResult;
                    bool m_taskResultHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务完成时间
                     */
                    std::string m_completeTime;
                    bool m_completeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCETASKSTATUS_H_
