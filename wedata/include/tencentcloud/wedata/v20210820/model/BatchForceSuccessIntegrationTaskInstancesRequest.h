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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHFORCESUCCESSINTEGRATIONTASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHFORCESUCCESSINTEGRATIONTASKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SchedulerTaskInstanceInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchForceSuccessIntegrationTaskInstances请求参数结构体
                */
                class BatchForceSuccessIntegrationTaskInstancesRequest : public AbstractModel
                {
                public:
                    BatchForceSuccessIntegrationTaskInstancesRequest();
                    ~BatchForceSuccessIntegrationTaskInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例信息
                     * @return Instances 实例信息
                     * 
                     */
                    std::vector<SchedulerTaskInstanceInfo> GetInstances() const;

                    /**
                     * 设置实例信息
                     * @param _instances 实例信息
                     * 
                     */
                    void SetInstances(const std::vector<SchedulerTaskInstanceInfo>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

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

                private:

                    /**
                     * 实例信息
                     */
                    std::vector<SchedulerTaskInstanceInfo> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHFORCESUCCESSINTEGRATIONTASKINSTANCESREQUEST_H_
