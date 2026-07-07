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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELKEYREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELKEYREQUEST_H_

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
                * RemoveModelKey请求参数结构体
                */
                class RemoveModelKeyRequest : public AbstractModel
                {
                public:
                    RemoveModelKeyRequest();
                    ~RemoveModelKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务提供商ID</p>
                     * @return ServiceProviderId <p>服务提供商ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>服务提供商ID</p>
                     * @param _serviceProviderId <p>服务提供商ID</p>
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
                     * 获取<p>Key 业务 ID 列表，至少 1 个，最多 10 个</p>
                     * @return KeyIds <p>Key 业务 ID 列表，至少 1 个，最多 10 个</p>
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置<p>Key 业务 ID 列表，至少 1 个，最多 10 个</p>
                     * @param _keyIds <p>Key 业务 ID 列表，至少 1 个，最多 10 个</p>
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>服务提供商ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>Key 业务 ID 列表，至少 1 个，最多 10 个</p>
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELKEYREQUEST_H_
