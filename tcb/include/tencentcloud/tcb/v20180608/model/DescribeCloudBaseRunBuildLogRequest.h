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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNBUILDLOGREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNBUILDLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunBuildLog请求参数结构体
                */
                class DescribeCloudBaseRunBuildLogRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunBuildLogRequest();
                    ~DescribeCloudBaseRunBuildLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取版本名称
                     * @return ServiceVersion 版本名称
                     * 
                     */
                    std::string GetServiceVersion() const;

                    /**
                     * 设置版本名称
                     * @param _serviceVersion 版本名称
                     * 
                     */
                    void SetServiceVersion(const std::string& _serviceVersion);

                    /**
                     * 判断参数 ServiceVersion 是否已赋值
                     * @return ServiceVersion 是否已赋值
                     * 
                     */
                    bool ServiceVersionHasBeenSet() const;

                    /**
                     * 获取构建ID
                     * @return BuildId 构建ID
                     * 
                     */
                    int64_t GetBuildId() const;

                    /**
                     * 设置构建ID
                     * @param _buildId 构建ID
                     * 
                     */
                    void SetBuildId(const int64_t& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取偏移记录
                     * @return Start 偏移记录
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置偏移记录
                     * @param _start 偏移记录
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_serviceVersion;
                    bool m_serviceVersionHasBeenSet;

                    /**
                     * 构建ID
                     */
                    int64_t m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * 偏移记录
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNBUILDLOGREQUEST_H_
