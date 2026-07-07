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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETEMODELREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETEMODELREQUEST_H_

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
                * DeleteModel请求参数结构体
                */
                class DeleteModelRequest : public AbstractModel
                {
                public:
                    DeleteModelRequest();
                    ~DeleteModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务提供商ID列表</p>
                     * @return ServiceProviderIds <p>服务提供商ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetServiceProviderIds() const;

                    /**
                     * 设置<p>服务提供商ID列表</p>
                     * @param _serviceProviderIds <p>服务提供商ID列表</p>
                     * 
                     */
                    void SetServiceProviderIds(const std::vector<std::string>& _serviceProviderIds);

                    /**
                     * 判断参数 ServiceProviderIds 是否已赋值
                     * @return ServiceProviderIds 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdsHasBeenSet() const;

                private:

                    /**
                     * <p>服务提供商ID列表</p>
                     */
                    std::vector<std::string> m_serviceProviderIds;
                    bool m_serviceProviderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETEMODELREQUEST_H_
