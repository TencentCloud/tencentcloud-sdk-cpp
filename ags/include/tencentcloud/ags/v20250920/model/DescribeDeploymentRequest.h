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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeDeployment请求参数结构体
                */
                class DescribeDeploymentRequest : public AbstractModel
                {
                public:
                    DescribeDeploymentRequest();
                    ~DescribeDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待查询的 Deployment ID。</p>
                     * @return DeploymentId <p>待查询的 Deployment ID。</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>待查询的 Deployment ID。</p>
                     * @param _deploymentId <p>待查询的 Deployment ID。</p>
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                private:

                    /**
                     * <p>待查询的 Deployment ID。</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTREQUEST_H_
