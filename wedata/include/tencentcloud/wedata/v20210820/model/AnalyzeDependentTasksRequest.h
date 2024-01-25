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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ANALYZEDEPENDENTTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ANALYZEDEPENDENTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AnalyzeDependentTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * AnalyzeDependentTasks请求参数结构体
                */
                class AnalyzeDependentTasksRequest : public AbstractModel
                {
                public:
                    AnalyzeDependentTasksRequest();
                    ~AnalyzeDependentTasksRequest() = default;
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
                     * 获取数据库表信息列表
                     * @return AnalyzeTasks 数据库表信息列表
                     * 
                     */
                    std::vector<AnalyzeDependentTask> GetAnalyzeTasks() const;

                    /**
                     * 设置数据库表信息列表
                     * @param _analyzeTasks 数据库表信息列表
                     * 
                     */
                    void SetAnalyzeTasks(const std::vector<AnalyzeDependentTask>& _analyzeTasks);

                    /**
                     * 判断参数 AnalyzeTasks 是否已赋值
                     * @return AnalyzeTasks 是否已赋值
                     * 
                     */
                    bool AnalyzeTasksHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据库表信息列表
                     */
                    std::vector<AnalyzeDependentTask> m_analyzeTasks;
                    bool m_analyzeTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ANALYZEDEPENDENTTASKSREQUEST_H_
