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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANINSTANCESREQUEST_H_

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
                * DescribeOpsMakePlanInstances请求参数结构体
                */
                class DescribeOpsMakePlanInstancesRequest : public AbstractModel
                {
                public:
                    DescribeOpsMakePlanInstancesRequest();
                    ~DescribeOpsMakePlanInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取补录计划ID
                     * @return PlanId 补录计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置补录计划ID
                     * @param _planId 补录计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取补录任务ID
                     * @return TaskId 补录任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置补录任务ID
                     * @param _taskId 补录任务ID
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
                     * 获取分页页码，默认值1
                     * @return PageNumber 分页页码，默认值1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，默认值1
                     * @param _pageNumber 分页页码，默认值1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小，默认值10
                     * @return PageSize 分页大小，默认值10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认值10
                     * @param _pageSize 分页大小，默认值10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取实例状态列表
                     * @return StateList 实例状态列表
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置实例状态列表
                     * @param _stateList 实例状态列表
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 补录任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 分页页码，默认值1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，默认值10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 实例状态列表
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANINSTANCESREQUEST_H_
