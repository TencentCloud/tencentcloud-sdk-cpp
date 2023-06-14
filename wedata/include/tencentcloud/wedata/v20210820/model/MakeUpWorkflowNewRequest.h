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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPWORKFLOWNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPWORKFLOWNEWREQUEST_H_

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
                * MakeUpWorkflowNew请求参数结构体
                */
                class MakeUpWorkflowNewRequest : public AbstractModel
                {
                public:
                    MakeUpWorkflowNewRequest();
                    ~MakeUpWorkflowNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流id
                     * @return WorkFlowId 工作流id
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置工作流id
                     * @param _workFlowId 工作流id
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 工作流id
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

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
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEUPWORKFLOWNEWREQUEST_H_
