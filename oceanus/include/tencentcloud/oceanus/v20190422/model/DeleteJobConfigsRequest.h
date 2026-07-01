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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBCONFIGSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBCONFIGSREQUEST_H_

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
                * DeleteJobConfigs请求参数结构体
                */
                class DeleteJobConfigsRequest : public AbstractModel
                {
                public:
                    DeleteJobConfigsRequest();
                    ~DeleteJobConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业ID</p>
                     * @return JobId <p>作业ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID</p>
                     * @param _jobId <p>作业ID</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>作业配置版本数组</p>
                     * @return JobConfigVersions <p>作业配置版本数组</p>
                     * 
                     */
                    std::vector<int64_t> GetJobConfigVersions() const;

                    /**
                     * 设置<p>作业配置版本数组</p>
                     * @param _jobConfigVersions <p>作业配置版本数组</p>
                     * 
                     */
                    void SetJobConfigVersions(const std::vector<int64_t>& _jobConfigVersions);

                    /**
                     * 判断参数 JobConfigVersions 是否已赋值
                     * @return JobConfigVersions 是否已赋值
                     * 
                     */
                    bool JobConfigVersionsHasBeenSet() const;

                    /**
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
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
                     * 获取<p>配置更新范围 0=全量(默认) 1=仅开发 2=仅运维</p><p>取值范围：[0, 2]</p>
                     * @return ConfigScope <p>配置更新范围 0=全量(默认) 1=仅开发 2=仅运维</p><p>取值范围：[0, 2]</p>
                     * 
                     */
                    int64_t GetConfigScope() const;

                    /**
                     * 设置<p>配置更新范围 0=全量(默认) 1=仅开发 2=仅运维</p><p>取值范围：[0, 2]</p>
                     * @param _configScope <p>配置更新范围 0=全量(默认) 1=仅开发 2=仅运维</p><p>取值范围：[0, 2]</p>
                     * 
                     */
                    void SetConfigScope(const int64_t& _configScope);

                    /**
                     * 判断参数 ConfigScope 是否已赋值
                     * @return ConfigScope 是否已赋值
                     * 
                     */
                    bool ConfigScopeHasBeenSet() const;

                private:

                    /**
                     * <p>作业ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>作业配置版本数组</p>
                     */
                    std::vector<int64_t> m_jobConfigVersions;
                    bool m_jobConfigVersionsHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>配置更新范围 0=全量(默认) 1=仅开发 2=仅运维</p><p>取值范围：[0, 2]</p>
                     */
                    int64_t m_configScope;
                    bool m_configScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEJOBCONFIGSREQUEST_H_
