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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIREDEPLOYMENTTOKENREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIREDEPLOYMENTTOKENREQUEST_H_

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
                * AcquireDeploymentToken请求参数结构体
                */
                class AcquireDeploymentTokenRequest : public AbstractModel
                {
                public:
                    AcquireDeploymentTokenRequest();
                    ~AcquireDeploymentTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>目标 ACTIVE Deployment 的稳定 ID。</p>
                     * @return DeploymentId <p>目标 ACTIVE Deployment 的稳定 ID。</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>目标 ACTIVE Deployment 的稳定 ID。</p>
                     * @param _deploymentId <p>目标 ACTIVE Deployment 的稳定 ID。</p>
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
                     * <p>目标 ACTIVE Deployment 的稳定 ID。</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIREDEPLOYMENTTOKENREQUEST_H_
