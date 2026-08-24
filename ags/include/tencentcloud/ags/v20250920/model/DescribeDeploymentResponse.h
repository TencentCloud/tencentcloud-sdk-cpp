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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Deployment.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeDeployment返回参数结构体
                */
                class DescribeDeploymentResponse : public AbstractModel
                {
                public:
                    DescribeDeploymentResponse();
                    ~DescribeDeploymentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>完整 Deployment。</p>
                     * @return Deployment <p>完整 Deployment。</p>
                     * 
                     */
                    Deployment GetDeployment() const;

                    /**
                     * 判断参数 Deployment 是否已赋值
                     * @return Deployment 是否已赋值
                     * 
                     */
                    bool DeploymentHasBeenSet() const;

                private:

                    /**
                     * <p>完整 Deployment。</p>
                     */
                    Deployment m_deployment;
                    bool m_deploymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEDEPLOYMENTRESPONSE_H_
