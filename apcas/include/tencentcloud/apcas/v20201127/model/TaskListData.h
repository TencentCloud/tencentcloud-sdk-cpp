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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_TASKLISTDATA_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_TASKLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/ListModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 任务列表对象
                */
                class TaskListData : public AbstractModel
                {
                public:
                    TaskListData();
                    ~TaskListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询分页页码
                     * @return PageNumber 查询分页页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置查询分页页码
                     * @param _pageNumber 查询分页页码
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
                     * 获取查询分页大小
                     * @return PageSize 查询分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置查询分页大小
                     * @param _pageSize 查询分页大小
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取任务列表总记录数
                     * @return TotalCount 任务列表总记录数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置任务列表总记录数
                     * @param _totalCount 任务列表总记录数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取任务列表
                     * @return TaskList 任务列表
                     * 
                     */
                    std::vector<ListModel> GetTaskList() const;

                    /**
                     * 设置任务列表
                     * @param _taskList 任务列表
                     * 
                     */
                    void SetTaskList(const std::vector<ListModel>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                private:

                    /**
                     * 查询分页页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 任务列表总记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务列表
                     */
                    std::vector<ListModel> m_taskList;
                    bool m_taskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_TASKLISTDATA_H_
