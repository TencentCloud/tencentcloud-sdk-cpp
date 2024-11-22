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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePullStreamTasks请求参数结构体
                */
                class DescribeLivePullStreamTasksRequest : public AbstractModel
                {
                public:
                    DescribeLivePullStreamTasksRequest();
                    ~DescribeLivePullStreamTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID。 
来源：调用 CreateLivePullStreamTask 接口时返回。
不填默认查询所有任务，按更新时间倒序排序。
                     * @return TaskId 任务 ID。 
来源：调用 CreateLivePullStreamTask 接口时返回。
不填默认查询所有任务，按更新时间倒序排序。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID。 
来源：调用 CreateLivePullStreamTask 接口时返回。
不填默认查询所有任务，按更新时间倒序排序。
                     * @param _taskId 任务 ID。 
来源：调用 CreateLivePullStreamTask 接口时返回。
不填默认查询所有任务，按更新时间倒序排序。
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
                     * 获取取得第几页，默认值：1。
                     * @return PageNum 取得第几页，默认值：1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取得第几页，默认值：1。
                     * @param _pageNum 取得第几页，默认值：1。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取分页大小，默认值：10。
取值范围：1~20 之前的任意整数。
                     * @return PageSize 分页大小，默认值：10。
取值范围：1~20 之前的任意整数。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认值：10。
取值范围：1~20 之前的任意整数。
                     * @param _pageSize 分页大小，默认值：10。
取值范围：1~20 之前的任意整数。
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
                     * 获取使用指定任务 ID 查询任务信息。
注意：仅供使用指定 ID 创建的任务查询。
                     * @return SpecifyTaskId 使用指定任务 ID 查询任务信息。
注意：仅供使用指定 ID 创建的任务查询。
                     * 
                     */
                    std::string GetSpecifyTaskId() const;

                    /**
                     * 设置使用指定任务 ID 查询任务信息。
注意：仅供使用指定 ID 创建的任务查询。
                     * @param _specifyTaskId 使用指定任务 ID 查询任务信息。
注意：仅供使用指定 ID 创建的任务查询。
                     * 
                     */
                    void SetSpecifyTaskId(const std::string& _specifyTaskId);

                    /**
                     * 判断参数 SpecifyTaskId 是否已赋值
                     * @return SpecifyTaskId 是否已赋值
                     * 
                     */
                    bool SpecifyTaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。 
来源：调用 CreateLivePullStreamTask 接口时返回。
不填默认查询所有任务，按更新时间倒序排序。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 取得第几页，默认值：1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页大小，默认值：10。
取值范围：1~20 之前的任意整数。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 使用指定任务 ID 查询任务信息。
注意：仅供使用指定 ID 创建的任务查询。
                     */
                    std::string m_specifyTaskId;
                    bool m_specifyTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_
