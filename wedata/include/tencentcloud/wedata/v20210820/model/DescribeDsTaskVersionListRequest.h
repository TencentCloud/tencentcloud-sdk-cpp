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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSTASKVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSTASKVERSIONLISTREQUEST_H_

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
                * DescribeDsTaskVersionList请求参数结构体
                */
                class DescribeDsTaskVersionListRequest : public AbstractModel
                {
                public:
                    DescribeDsTaskVersionListRequest();
                    ~DescribeDsTaskVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取是否仅返回当前编辑版本
                     * @return IsOnlyCurrentEditingVersion 是否仅返回当前编辑版本
                     * 
                     */
                    bool GetIsOnlyCurrentEditingVersion() const;

                    /**
                     * 设置是否仅返回当前编辑版本
                     * @param _isOnlyCurrentEditingVersion 是否仅返回当前编辑版本
                     * 
                     */
                    void SetIsOnlyCurrentEditingVersion(const bool& _isOnlyCurrentEditingVersion);

                    /**
                     * 判断参数 IsOnlyCurrentEditingVersion 是否已赋值
                     * @return IsOnlyCurrentEditingVersion 是否已赋值
                     * 
                     */
                    bool IsOnlyCurrentEditingVersionHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否仅返回当前编辑版本
                     */
                    bool m_isOnlyCurrentEditingVersion;
                    bool m_isOnlyCurrentEditingVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSTASKVERSIONLISTREQUEST_H_
