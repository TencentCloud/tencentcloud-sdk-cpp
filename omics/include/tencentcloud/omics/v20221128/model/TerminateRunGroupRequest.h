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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TERMINATERUNGROUPREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TERMINATERUNGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * TerminateRunGroup请求参数结构体
                */
                class TerminateRunGroupRequest : public AbstractModel
                {
                public:
                    TerminateRunGroupRequest();
                    ~TerminateRunGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务批次ID。
                     * @return RunGroupId 任务批次ID。
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 设置任务批次ID。
                     * @param _runGroupId 任务批次ID。
                     * 
                     */
                    void SetRunGroupId(const std::string& _runGroupId);

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                    /**
                     * 获取项目ID。
（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务批次ID。
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * 项目ID。
（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TERMINATERUNGROUPREQUEST_H_
