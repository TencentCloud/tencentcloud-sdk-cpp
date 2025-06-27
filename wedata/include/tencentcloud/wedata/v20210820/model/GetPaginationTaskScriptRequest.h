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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTREQUEST_H_

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
                * GetPaginationTaskScript请求参数结构体
                */
                class GetPaginationTaskScriptRequest : public AbstractModel
                {
                public:
                    GetPaginationTaskScriptRequest();
                    ~GetPaginationTaskScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目编号
                     * @return ProjectId 项目编号
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目编号
                     * @param _projectId 项目编号
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
                     * 获取任务编号
                     * @return TaskId 任务编号
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务编号
                     * @param _taskId 任务编号
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
                     * 获取页码（从1开始）
                     * @return PageNum 页码（从1开始）
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置页码（从1开始）
                     * @param _pageNum 页码（从1开始）
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * 项目编号
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务编号
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 页码（从1开始）
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTREQUEST_H_
