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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONLOGSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitApplicationLogs请求参数结构体
                */
                class DescribeEdgeUnitApplicationLogsRequest : public AbstractModel
                {
                public:
                    DescribeEdgeUnitApplicationLogsRequest();
                    ~DescribeEdgeUnitApplicationLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitId 单元ID
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置单元ID
                     * @param EdgeUnitId 单元ID
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param ApplicationId 应用ID
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取最大条数
                     * @return Limit 最大条数
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大条数
                     * @param Limit 最大条数
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pod名
                     * @return PodName Pod名
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名
                     * @param PodName Pod名
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param ContainerName 容器名
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 最大条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pod名
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONLOGSREQUEST_H_
