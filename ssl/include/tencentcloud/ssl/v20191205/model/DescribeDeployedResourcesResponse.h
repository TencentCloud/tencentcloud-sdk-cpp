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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployedResources.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeDeployedResources返回参数结构体
                */
                class DescribeDeployedResourcesResponse : public AbstractModel
                {
                public:
                    DescribeDeployedResourcesResponse();
                    ~DescribeDeployedResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源详情
                     * @return DeployedResources 资源详情
                     * 
                     */
                    std::vector<DeployedResources> GetDeployedResources() const;

                    /**
                     * 判断参数 DeployedResources 是否已赋值
                     * @return DeployedResources 是否已赋值
                     * 
                     */
                    bool DeployedResourcesHasBeenSet() const;

                private:

                    /**
                     * 资源详情
                     */
                    std::vector<DeployedResources> m_deployedResources;
                    bool m_deployedResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESRESPONSE_H_
