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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWTASKSFORPROJECTCLONEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWTASKSFORPROJECTCLONEREQUEST_H_

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
                * DescribeWorkflowTasksForProjectClone请求参数结构体
                */
                class DescribeWorkflowTasksForProjectCloneRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowTasksForProjectCloneRequest();
                    ~DescribeWorkflowTasksForProjectCloneRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return Page 页号
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页号
                     * @param _page 页号
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Size 分页大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置分页大小
                     * @param _size 分页大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取排序类型。两种取值 DESC、ASC，当前仅支持按提交时间排序
                     * @return Order 排序类型。两种取值 DESC、ASC，当前仅支持按提交时间排序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序类型。两种取值 DESC、ASC，当前仅支持按提交时间排序
                     * @param _order 排序类型。两种取值 DESC、ASC，当前仅支持按提交时间排序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取工作流责任人名称
                     * @return OwnerName 工作流责任人名称
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置工作流责任人名称
                     * @param _ownerName 工作流责任人名称
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取提交开始时间（筛选用）
                     * @return StartTime 提交开始时间（筛选用）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置提交开始时间（筛选用）
                     * @param _startTime 提交开始时间（筛选用）
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
                     * 获取提交结束时间（筛选用）
                     * @return EndTime 提交结束时间（筛选用）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置提交结束时间（筛选用）
                     * @param _endTime 提交结束时间（筛选用）
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
                     * 获取工作流名称（筛选用）
                     * @return FilterWorkflowName 工作流名称（筛选用）
                     * 
                     */
                    std::string GetFilterWorkflowName() const;

                    /**
                     * 设置工作流名称（筛选用）
                     * @param _filterWorkflowName 工作流名称（筛选用）
                     * 
                     */
                    void SetFilterWorkflowName(const std::string& _filterWorkflowName);

                    /**
                     * 判断参数 FilterWorkflowName 是否已赋值
                     * @return FilterWorkflowName 是否已赋值
                     * 
                     */
                    bool FilterWorkflowNameHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 页号
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 排序类型。两种取值 DESC、ASC，当前仅支持按提交时间排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 工作流责任人名称
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 提交开始时间（筛选用）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 提交结束时间（筛选用）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 工作流名称（筛选用）
                     */
                    std::string m_filterWorkflowName;
                    bool m_filterWorkflowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWTASKSFORPROJECTCLONEREQUEST_H_
