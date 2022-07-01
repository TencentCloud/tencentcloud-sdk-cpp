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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDINSTANCESREQUEST_H_

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
                * DescribeRelatedInstances请求参数结构体
                */
                class DescribeRelatedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRelatedInstancesRequest();
                    ~DescribeRelatedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @return CurRunDate 数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @param CurRunDate 数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param TaskId 任务id
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取距离当前任务的层级距离，-1表示取父节点，1表示子节点
                     * @return Depth 距离当前任务的层级距离，-1表示取父节点，1表示子节点
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置距离当前任务的层级距离，-1表示取父节点，1表示子节点
                     * @param Depth 距离当前任务的层级距离，-1表示取父节点，1表示子节点
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取页号，默认为1
                     * @return PageNumber 页号，默认为1
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页号，默认为1
                     * @param PageNumber 页号，默认为1
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小，默认为10，最大不超过200
                     * @return PageSize 页大小，默认为10，最大不超过200
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小，默认为10，最大不超过200
                     * @param PageSize 页大小，默认为10，最大不超过200
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 任务id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 距离当前任务的层级距离，-1表示取父节点，1表示子节点
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * 页号，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小，默认为10，最大不超过200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDINSTANCESREQUEST_H_
