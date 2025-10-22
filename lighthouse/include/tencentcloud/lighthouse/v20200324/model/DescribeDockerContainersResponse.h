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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainer.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDockerContainers返回参数结构体
                */
                class DescribeDockerContainersResponse : public AbstractModel
                {
                public:
                    DescribeDockerContainersResponse();
                    ~DescribeDockerContainersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量。
                     * @return TotalCount 总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取容器列表。
                     * @return DockerContainerSet 容器列表。
                     * 
                     */
                    std::vector<DockerContainer> GetDockerContainerSet() const;

                    /**
                     * 判断参数 DockerContainerSet 是否已赋值
                     * @return DockerContainerSet 是否已赋值
                     * 
                     */
                    bool DockerContainerSetHasBeenSet() const;

                private:

                    /**
                     * 总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 容器列表。
                     */
                    std::vector<DockerContainer> m_dockerContainerSet;
                    bool m_dockerContainerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERSRESPONSE_H_
