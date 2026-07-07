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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERMODELSFROMSERVICEPROVIDERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERMODELSFROMSERVICEPROVIDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeregisterModelsFromServiceProvider请求参数结构体
                */
                class DeregisterModelsFromServiceProviderRequest : public AbstractModel
                {
                public:
                    DeregisterModelsFromServiceProviderRequest();
                    ~DeregisterModelsFromServiceProviderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>BYOK的ID</p>
                     * @return ServiceProviderId <p>BYOK的ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK的ID</p>
                     * @param _serviceProviderId <p>BYOK的ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>模型别名列表</p>
                     * @return ModelAliases <p>模型别名列表</p>
                     * 
                     */
                    std::vector<std::string> GetModelAliases() const;

                    /**
                     * 设置<p>模型别名列表</p>
                     * @param _modelAliases <p>模型别名列表</p>
                     * 
                     */
                    void SetModelAliases(const std::vector<std::string>& _modelAliases);

                    /**
                     * 判断参数 ModelAliases 是否已赋值
                     * @return ModelAliases 是否已赋值
                     * 
                     */
                    bool ModelAliasesHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK的ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>模型别名列表</p>
                     */
                    std::vector<std::string> m_modelAliases;
                    bool m_modelAliasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERMODELSFROMSERVICEPROVIDERREQUEST_H_
