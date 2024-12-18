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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_

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
                * DescribeOpsMakePlans请求参数结构体
                */
                class DescribeOpsMakePlansRequest : public AbstractModel
                {
                public:
                    DescribeOpsMakePlansRequest();
                    ~DescribeOpsMakePlansRequest() = default;
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
                     * 获取分页数，默认值1
                     * @return PageNumber 分页数，默认值1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页数，默认值1
                     * @param _pageNumber 分页数，默认值1
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
                     * 获取补录计划名称
                     * @return PlanName 补录计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置补录计划名称
                     * @param _planName 补录计划名称
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取补录任务名称
                     * @return TaskName 补录任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置补录任务名称
                     * @param _taskName 补录任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

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
                     * 获取补录计划创建者
                     * @return Creator 补录计划创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置补录计划创建者
                     * @param _creator 补录计划创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取补录计划最小创建时间
                     * @return MinCreateTime 补录计划最小创建时间
                     * 
                     */
                    std::string GetMinCreateTime() const;

                    /**
                     * 设置补录计划最小创建时间
                     * @param _minCreateTime 补录计划最小创建时间
                     * 
                     */
                    void SetMinCreateTime(const std::string& _minCreateTime);

                    /**
                     * 判断参数 MinCreateTime 是否已赋值
                     * @return MinCreateTime 是否已赋值
                     * 
                     */
                    bool MinCreateTimeHasBeenSet() const;

                    /**
                     * 获取补录计划最大创建时间
                     * @return MaxCreateTime 补录计划最大创建时间
                     * 
                     */
                    std::string GetMaxCreateTime() const;

                    /**
                     * 设置补录计划最大创建时间
                     * @param _maxCreateTime 补录计划最大创建时间
                     * 
                     */
                    void SetMaxCreateTime(const std::string& _maxCreateTime);

                    /**
                     * 判断参数 MaxCreateTime 是否已赋值
                     * @return MaxCreateTime 是否已赋值
                     * 
                     */
                    bool MaxCreateTimeHasBeenSet() const;

                    /**
                     * 获取实例状态过滤条件
                     * @return StateList 实例状态过滤条件
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置实例状态过滤条件
                     * @param _stateList 实例状态过滤条件
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取模糊查询关键字
                     * @return Keyword 模糊查询关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊查询关键字
                     * @param _keyword 模糊查询关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页数，默认值1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，默认值10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 补录计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 补录计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 补录任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 补录任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 补录计划创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 补录计划最小创建时间
                     */
                    std::string m_minCreateTime;
                    bool m_minCreateTimeHasBeenSet;

                    /**
                     * 补录计划最大创建时间
                     */
                    std::string m_maxCreateTime;
                    bool m_maxCreateTimeHasBeenSet;

                    /**
                     * 实例状态过滤条件
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * 模糊查询关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_
