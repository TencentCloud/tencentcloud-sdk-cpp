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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DeleteJobs请求参数结构体
                */
                class DeleteJobsRequest : public AbstractModel
                {
                public:
                    DeleteJobsRequest();
                    ~DeleteJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业Id列表
                     * @return JobIds 作业Id列表
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置作业Id列表
                     * @param _jobIds 作业Id列表
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取工作空间Id
                     * @return WorkSpaceId 工作空间Id
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workSpaceId 工作空间Id
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取作业名称列表
                     * @return JobNames 作业名称列表
                     * 
                     */
                    std::vector<std::string> GetJobNames() const;

                    /**
                     * 设置作业名称列表
                     * @param _jobNames 作业名称列表
                     * 
                     */
                    void SetJobNames(const std::vector<std::string>& _jobNames);

                    /**
                     * 判断参数 JobNames 是否已赋值
                     * @return JobNames 是否已赋值
                     * 
                     */
                    bool JobNamesHasBeenSet() const;

                private:

                    /**
                     * 作业Id列表
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 工作空间Id
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 作业名称列表
                     */
                    std::vector<std::string> m_jobNames;
                    bool m_jobNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBSREQUEST_H_
