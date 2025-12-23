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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTDUTYTASK_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTDUTYTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 智能体值守任务信息
                */
                class AgentDutyTask : public AbstractModel
                {
                public:
                    AgentDutyTask();
                    ~AgentDutyTask() = default;
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
                     * 获取任务开始运行时间
                     * @return StartTime 任务开始运行时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始运行时间
                     * @param _startTime 任务开始运行时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return FinishTime 任务结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _finishTime 任务结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取对外展示的Extra信息
                     * @return ResultExtraKey 对外展示的Extra信息
                     * 
                     */
                    std::vector<std::string> GetResultExtraKey() const;

                    /**
                     * 设置对外展示的Extra信息
                     * @param _resultExtraKey 对外展示的Extra信息
                     * 
                     */
                    void SetResultExtraKey(const std::vector<std::string>& _resultExtraKey);

                    /**
                     * 判断参数 ResultExtraKey 是否已赋值
                     * @return ResultExtraKey 是否已赋值
                     * 
                     */
                    bool ResultExtraKeyHasBeenSet() const;

                    /**
                     * 获取业务的额外敏感信息
                     * @return Extra 业务的额外敏感信息
                     * 
                     */
                    std::vector<ExtraInfo> GetExtra() const;

                    /**
                     * 设置业务的额外敏感信息
                     * @param _extra 业务的额外敏感信息
                     * 
                     */
                    void SetExtra(const std::vector<ExtraInfo>& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始运行时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对外展示的Extra信息
                     */
                    std::vector<std::string> m_resultExtraKey;
                    bool m_resultExtraKeyHasBeenSet;

                    /**
                     * 业务的额外敏感信息
                     */
                    std::vector<ExtraInfo> m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTDUTYTASK_H_
