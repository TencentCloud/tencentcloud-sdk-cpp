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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPTASKSNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPTASKSNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * MakeUpTasksNew请求参数结构体
                */
                class MakeUpTasksNewRequest : public AbstractModel
                {
                public:
                    MakeUpTasksNewRequest();
                    ~MakeUpTasksNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取补录的当前任务的taskId数组
                     * @return TaskIdList 补录的当前任务的taskId数组
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置补录的当前任务的taskId数组
                     * @param _taskIdList 补录的当前任务的taskId数组
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取补录开始时间
                     * @return StartTime 补录开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置补录开始时间
                     * @param _startTime 补录开始时间
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
                     * 获取补录结束时间
                     * @return EndTime 补录结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置补录结束时间
                     * @param _endTime 补录结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取补录选项标识，1表示当前任务；2表示当前及下游任务；3表示下游任务
                     * @return MakeUpType 补录选项标识，1表示当前任务；2表示当前及下游任务；3表示下游任务
                     * 
                     */
                    uint64_t GetMakeUpType() const;

                    /**
                     * 设置补录选项标识，1表示当前任务；2表示当前及下游任务；3表示下游任务
                     * @param _makeUpType 补录选项标识，1表示当前任务；2表示当前及下游任务；3表示下游任务
                     * 
                     */
                    void SetMakeUpType(const uint64_t& _makeUpType);

                    /**
                     * 判断参数 MakeUpType 是否已赋值
                     * @return MakeUpType 是否已赋值
                     * 
                     */
                    bool MakeUpTypeHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取true: 检查父任务实例状态；false: 不检查父任务实例状态
                     * @return CheckParent true: 检查父任务实例状态；false: 不检查父任务实例状态
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置true: 检查父任务实例状态；false: 不检查父任务实例状态
                     * @param _checkParent true: 检查父任务实例状态；false: 不检查父任务实例状态
                     * 
                     */
                    void SetCheckParent(const bool& _checkParent);

                    /**
                     * 判断参数 CheckParent 是否已赋值
                     * @return CheckParent 是否已赋值
                     * 
                     */
                    bool CheckParentHasBeenSet() const;

                private:

                    /**
                     * 补录的当前任务的taskId数组
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 补录开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 补录结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 补录选项标识，1表示当前任务；2表示当前及下游任务；3表示下游任务
                     */
                    uint64_t m_makeUpType;
                    bool m_makeUpTypeHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * true: 检查父任务实例状态；false: 不检查父任务实例状态
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPTASKSNEWREQUEST_H_
