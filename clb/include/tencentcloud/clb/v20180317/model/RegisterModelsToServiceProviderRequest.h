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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERMODELSTOSERVICEPROVIDERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERMODELSTOSERVICEPROVIDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * RegisterModelsToServiceProvider请求参数结构体
                */
                class RegisterModelsToServiceProviderRequest : public AbstractModel
                {
                public:
                    RegisterModelsToServiceProviderRequest();
                    ~RegisterModelsToServiceProviderRequest() = default;
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
                     * 获取<p>需要关联的模型信息</p>
                     * @return Models <p>需要关联的模型信息</p>
                     * 
                     */
                    std::vector<ModelItem> GetModels() const;

                    /**
                     * 设置<p>需要关联的模型信息</p>
                     * @param _models <p>需要关联的模型信息</p>
                     * 
                     */
                    void SetModels(const std::vector<ModelItem>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK的ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>需要关联的模型信息</p>
                     */
                    std::vector<ModelItem> m_models;
                    bool m_modelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERMODELSTOSERVICEPROVIDERREQUEST_H_
