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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_

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
                * ModifyApiIncrement请求参数结构体
                */
                class ModifyApiIncrementRequest : public AbstractModel
                {
                public:
                    ModifyApiIncrementRequest();
                    ~ModifyApiIncrementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
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
                     * 获取接口ID
                     * @return ApiId 接口ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置接口ID
                     * @param _apiId 接口ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取需要修改的API auth类型(可选择OAUTH-授权API)
                     * @return BusinessType 需要修改的API auth类型(可选择OAUTH-授权API)
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置需要修改的API auth类型(可选择OAUTH-授权API)
                     * @param _businessType 需要修改的API auth类型(可选择OAUTH-授权API)
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取oauth接口需要修改的公钥值
                     * @return PublicKey oauth接口需要修改的公钥值
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置oauth接口需要修改的公钥值
                     * @param _publicKey oauth接口需要修改的公钥值
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取oauth接口重定向地址
                     * @return LoginRedirectUrl oauth接口重定向地址
                     * 
                     */
                    std::string GetLoginRedirectUrl() const;

                    /**
                     * 设置oauth接口重定向地址
                     * @param _loginRedirectUrl oauth接口重定向地址
                     * 
                     */
                    void SetLoginRedirectUrl(const std::string& _loginRedirectUrl);

                    /**
                     * 判断参数 LoginRedirectUrl 是否已赋值
                     * @return LoginRedirectUrl 是否已赋值
                     * 
                     */
                    bool LoginRedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 接口ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 需要修改的API auth类型(可选择OAUTH-授权API)
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * oauth接口需要修改的公钥值
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * oauth接口重定向地址
                     */
                    std::string m_loginRedirectUrl;
                    bool m_loginRedirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_
