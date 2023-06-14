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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_REVERTDEPLOYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_REVERTDEPLOYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * RevertDeployApplication请求参数结构体
                */
                class RevertDeployApplicationRequest : public AbstractModel
                {
                public:
                    RevertDeployApplicationRequest();
                    ~RevertDeployApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要回滚的服务id
                     * @return ApplicationId 需要回滚的服务id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置需要回滚的服务id
                     * @param _applicationId 需要回滚的服务id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取需要回滚的服务所在环境id
                     * @return EnvironmentId 需要回滚的服务所在环境id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置需要回滚的服务所在环境id
                     * @param _environmentId 需要回滚的服务所在环境id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                private:

                    /**
                     * 需要回滚的服务id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 需要回滚的服务所在环境id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_REVERTDEPLOYAPPLICATIONREQUEST_H_
