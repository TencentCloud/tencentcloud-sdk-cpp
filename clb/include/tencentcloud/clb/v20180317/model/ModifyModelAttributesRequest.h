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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELATTRIBUTESREQUEST_H_

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
                * ModifyModelAttributes请求参数结构体
                */
                class ModifyModelAttributesRequest : public AbstractModel
                {
                public:
                    ModifyModelAttributesRequest();
                    ~ModifyModelAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
                     * @return ServiceProviderId <p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
                     * @param _serviceProviderId <p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
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
                     * 获取<p>BYOK的自定义名字</p><p>入参限制：1～256个字符</p>
                     * @return ServiceProviderName <p>BYOK的自定义名字</p><p>入参限制：1～256个字符</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>BYOK的自定义名字</p><p>入参限制：1～256个字符</p>
                     * @param _serviceProviderName <p>BYOK的自定义名字</p><p>入参限制：1～256个字符</p>
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>BYOK的自定义名字</p><p>入参限制：1～256个字符</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELATTRIBUTESREQUEST_H_
