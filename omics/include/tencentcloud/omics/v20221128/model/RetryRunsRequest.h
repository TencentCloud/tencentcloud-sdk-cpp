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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_

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
                * RetryRuns请求参数结构体
                */
                class RetryRunsRequest : public AbstractModel
                {
                public:
                    RetryRunsRequest();
                    ~RetryRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关联项目ID。
                     * @return ProjectId 关联项目ID。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置关联项目ID。
                     * @param ProjectId 关联项目ID。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务UUID。
                     * @return RunUuids 任务UUID。
                     */
                    std::vector<std::string> GetRunUuids() const;

                    /**
                     * 设置任务UUID。
                     * @param RunUuids 任务UUID。
                     */
                    void SetRunUuids(const std::vector<std::string>& _runUuids);

                    /**
                     * 判断参数 RunUuids 是否已赋值
                     * @return RunUuids 是否已赋值
                     */
                    bool RunUuidsHasBeenSet() const;

                private:

                    /**
                     * 关联项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务UUID。
                     */
                    std::vector<std::string> m_runUuids;
                    bool m_runUuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
