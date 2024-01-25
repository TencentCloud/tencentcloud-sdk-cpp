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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETLATESTTESTRUNINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETLATESTTESTRUNINFOREQUEST_H_

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
                * GetLatestTestRunInfo请求参数结构体
                */
                class GetLatestTestRunInfoRequest : public AbstractModel
                {
                public:
                    GetLatestTestRunInfoRequest();
                    ~GetLatestTestRunInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取任务Id列表
                     * @return TaskIds 任务Id列表
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务Id列表
                     * @param _taskIds 任务Id列表
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取是否只显示当前用户，默认为否
                     * @return IsOnlyCurrUser 是否只显示当前用户，默认为否
                     * 
                     */
                    bool GetIsOnlyCurrUser() const;

                    /**
                     * 设置是否只显示当前用户，默认为否
                     * @param _isOnlyCurrUser 是否只显示当前用户，默认为否
                     * 
                     */
                    void SetIsOnlyCurrUser(const bool& _isOnlyCurrUser);

                    /**
                     * 判断参数 IsOnlyCurrUser 是否已赋值
                     * @return IsOnlyCurrUser 是否已赋值
                     * 
                     */
                    bool IsOnlyCurrUserHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务Id列表
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 是否只显示当前用户，默认为否
                     */
                    bool m_isOnlyCurrUser;
                    bool m_isOnlyCurrUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETLATESTTESTRUNINFOREQUEST_H_
