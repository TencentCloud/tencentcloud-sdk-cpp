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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/RunJobDescription.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * RunJobs请求参数结构体
                */
                class RunJobsRequest : public AbstractModel
                {
                public:
                    RunJobsRequest();
                    ~RunJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量启动作业的描述信息
                     * @return RunJobDescriptions 批量启动作业的描述信息
                     */
                    std::vector<RunJobDescription> GetRunJobDescriptions() const;

                    /**
                     * 设置批量启动作业的描述信息
                     * @param RunJobDescriptions 批量启动作业的描述信息
                     */
                    void SetRunJobDescriptions(const std::vector<RunJobDescription>& _runJobDescriptions);

                    /**
                     * 判断参数 RunJobDescriptions 是否已赋值
                     * @return RunJobDescriptions 是否已赋值
                     */
                    bool RunJobDescriptionsHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param WorkSpaceId 工作空间 SerialId
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 批量启动作业的描述信息
                     */
                    std::vector<RunJobDescription> m_runJobDescriptions;
                    bool m_runJobDescriptionsHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBSREQUEST_H_
