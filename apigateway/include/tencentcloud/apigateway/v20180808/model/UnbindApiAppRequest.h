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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UnbindApiApp请求参数结构体
                */
                class UnbindApiAppRequest : public AbstractModel
                {
                public:
                    UnbindApiAppRequest();
                    ~UnbindApiAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待绑定的应用唯一 ID 。
                     * @return ApiAppId 待绑定的应用唯一 ID 。
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置待绑定的应用唯一 ID 。
                     * @param _apiAppId 待绑定的应用唯一 ID 。
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取待绑定的环境。
                     * @return Environment 待绑定的环境。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置待绑定的环境。
                     * @param _environment 待绑定的环境。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取待绑定的服务唯一 ID。
                     * @return ServiceId 待绑定的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待绑定的服务唯一 ID。
                     * @param _serviceId 待绑定的服务唯一 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取待绑定的API唯一ID。
                     * @return ApiId 待绑定的API唯一ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置待绑定的API唯一ID。
                     * @param _apiId 待绑定的API唯一ID。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                private:

                    /**
                     * 待绑定的应用唯一 ID 。
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * 待绑定的环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 待绑定的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待绑定的API唯一ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_
