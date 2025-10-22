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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABACKFILLINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABACKFILLINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListDataBackfillInstances请求参数结构体
                */
                class ListDataBackfillInstancesRequest : public AbstractModel
                {
                public:
                    ListDataBackfillInstancesRequest();
                    ~ListDataBackfillInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目Id
                     * @return ProjectId 所属项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目Id
                     * @param _projectId 所属项目Id
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
                     * 获取补录计划Id
                     * @return DataBackfillPlanId 补录计划Id
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置补录计划Id
                     * @param _dataBackfillPlanId 补录计划Id
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 所属项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录计划Id
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABACKFILLINSTANCESREQUEST_H_
