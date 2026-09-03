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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BINDAPIKEYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BINDAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * BindApiKey请求参数结构体
                */
                class BindApiKeyRequest : public AbstractModel
                {
                public:
                    BindApiKeyRequest();
                    ~BindApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>apiKey的Id</p>
                     * @return ApiKeyIds <p>apiKey的Id</p>
                     * 
                     */
                    std::vector<std::string> GetApiKeyIds() const;

                    /**
                     * 设置<p>apiKey的Id</p>
                     * @param _apiKeyIds <p>apiKey的Id</p>
                     * 
                     */
                    void SetApiKeyIds(const std::vector<std::string>& _apiKeyIds);

                    /**
                     * 判断参数 ApiKeyIds 是否已赋值
                     * @return ApiKeyIds 是否已赋值
                     * 
                     */
                    bool ApiKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>服务Id</p>
                     * @return ServiceId <p>服务Id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务Id</p>
                     * @param _serviceId <p>服务Id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>apiKey的Id</p>
                     */
                    std::vector<std::string> m_apiKeyIds;
                    bool m_apiKeyIdsHasBeenSet;

                    /**
                     * <p>服务Id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BINDAPIKEYREQUEST_H_
