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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONREQUEST_H_

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
                * TestServiceProviderConnection请求参数结构体
                */
                class TestServiceProviderConnectionRequest : public AbstractModel
                {
                public:
                    TestServiceProviderConnectionRequest();
                    ~TestServiceProviderConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要探测的模型列表</p><p>入参限制：上限为20个模型</p>
                     * @return Models <p>需要探测的模型列表</p><p>入参限制：上限为20个模型</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>需要探测的模型列表</p><p>入参限制：上限为20个模型</p>
                     * @param _models <p>需要探测的模型列表</p><p>入参限制：上限为20个模型</p>
                     * 
                     */
                    void SetModels(const std::vector<std::string>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取<p>需要探测的Key</p>
                     * @return ProviderKey <p>需要探测的Key</p>
                     * 
                     */
                    std::string GetProviderKey() const;

                    /**
                     * 设置<p>需要探测的Key</p>
                     * @param _providerKey <p>需要探测的Key</p>
                     * 
                     */
                    void SetProviderKey(const std::string& _providerKey);

                    /**
                     * 判断参数 ProviderKey 是否已赋值
                     * @return ProviderKey 是否已赋值
                     * 
                     */
                    bool ProviderKeyHasBeenSet() const;

                    /**
                     * 获取<p>需要探测的KeyId，和ProviderKey二者传一个即可</p>
                     * @return ProviderKeyId <p>需要探测的KeyId，和ProviderKey二者传一个即可</p>
                     * 
                     */
                    std::string GetProviderKeyId() const;

                    /**
                     * 设置<p>需要探测的KeyId，和ProviderKey二者传一个即可</p>
                     * @param _providerKeyId <p>需要探测的KeyId，和ProviderKey二者传一个即可</p>
                     * 
                     */
                    void SetProviderKeyId(const std::string& _providerKeyId);

                    /**
                     * 判断参数 ProviderKeyId 是否已赋值
                     * @return ProviderKeyId 是否已赋值
                     * 
                     */
                    bool ProviderKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>BYOK类型，当ProviderKey存在时必传</p>
                     * @return AccessType <p>BYOK类型，当ProviderKey存在时必传</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>BYOK类型，当ProviderKey存在时必传</p>
                     * @param _accessType <p>BYOK类型，当ProviderKey存在时必传</p>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型的厂商</p>
                     * @return ModelProvider <p>模型的厂商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>模型的厂商</p>
                     * @param _modelProvider <p>模型的厂商</p>
                     * 
                     */
                    void SetModelProvider(const std::string& _modelProvider);

                    /**
                     * 判断参数 ModelProvider 是否已赋值
                     * @return ModelProvider 是否已赋值
                     * 
                     */
                    bool ModelProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型厂商协议，当ProviderKey存在时必传</p>
                     * @return ModelProtocol <p>模型厂商协议，当ProviderKey存在时必传</p>
                     * 
                     */
                    std::string GetModelProtocol() const;

                    /**
                     * 设置<p>模型厂商协议，当ProviderKey存在时必传</p>
                     * @param _modelProtocol <p>模型厂商协议，当ProviderKey存在时必传</p>
                     * 
                     */
                    void SetModelProtocol(const std::string& _modelProtocol);

                    /**
                     * 判断参数 ModelProtocol 是否已赋值
                     * @return ModelProtocol 是否已赋值
                     * 
                     */
                    bool ModelProtocolHasBeenSet() const;

                    /**
                     * 获取<p>BYOK类型，当AccessType为PublicCustom时生效</p>
                     * @return ApiBase <p>BYOK类型，当AccessType为PublicCustom时生效</p>
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>BYOK类型，当AccessType为PublicCustom时生效</p>
                     * @param _apiBase <p>BYOK类型，当AccessType为PublicCustom时生效</p>
                     * 
                     */
                    void SetApiBase(const std::string& _apiBase);

                    /**
                     * 判断参数 ApiBase 是否已赋值
                     * @return ApiBase 是否已赋值
                     * 
                     */
                    bool ApiBaseHasBeenSet() const;

                    /**
                     * 获取<p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     * @return HostHeader <p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     * @param _hostHeader <p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                    /**
                     * 获取<p>BYOK的ID，当AccessType为PrivateCustom时生效</p>
                     * @return ServiceProviderId <p>BYOK的ID，当AccessType为PrivateCustom时生效</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK的ID，当AccessType为PrivateCustom时生效</p>
                     * @param _serviceProviderId <p>BYOK的ID，当AccessType为PrivateCustom时生效</p>
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
                     * 获取<p>是否校验服务提供商的SSL证书</p><p>默认值：AccessType取值为：</p><ul><li>PublicBYOK时，该参数无效；</li><li>PublicCustom时，该参数默认为true；</li><li>PrivateCustom时，该参数默认为false；</li></ul>
                     * @return VerifySSL <p>是否校验服务提供商的SSL证书</p><p>默认值：AccessType取值为：</p><ul><li>PublicBYOK时，该参数无效；</li><li>PublicCustom时，该参数默认为true；</li><li>PrivateCustom时，该参数默认为false；</li></ul>
                     * 
                     */
                    bool GetVerifySSL() const;

                    /**
                     * 设置<p>是否校验服务提供商的SSL证书</p><p>默认值：AccessType取值为：</p><ul><li>PublicBYOK时，该参数无效；</li><li>PublicCustom时，该参数默认为true；</li><li>PrivateCustom时，该参数默认为false；</li></ul>
                     * @param _verifySSL <p>是否校验服务提供商的SSL证书</p><p>默认值：AccessType取值为：</p><ul><li>PublicBYOK时，该参数无效；</li><li>PublicCustom时，该参数默认为true；</li><li>PrivateCustom时，该参数默认为false；</li></ul>
                     * 
                     */
                    void SetVerifySSL(const bool& _verifySSL);

                    /**
                     * 判断参数 VerifySSL 是否已赋值
                     * @return VerifySSL 是否已赋值
                     * 
                     */
                    bool VerifySSLHasBeenSet() const;

                private:

                    /**
                     * <p>需要探测的模型列表</p><p>入参限制：上限为20个模型</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>需要探测的Key</p>
                     */
                    std::string m_providerKey;
                    bool m_providerKeyHasBeenSet;

                    /**
                     * <p>需要探测的KeyId，和ProviderKey二者传一个即可</p>
                     */
                    std::string m_providerKeyId;
                    bool m_providerKeyIdHasBeenSet;

                    /**
                     * <p>BYOK类型，当ProviderKey存在时必传</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>模型的厂商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>模型厂商协议，当ProviderKey存在时必传</p>
                     */
                    std::string m_modelProtocol;
                    bool m_modelProtocolHasBeenSet;

                    /**
                     * <p>BYOK类型，当AccessType为PublicCustom时生效</p>
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>BYOK的ID，当AccessType为PrivateCustom时生效</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>是否校验服务提供商的SSL证书</p><p>默认值：AccessType取值为：</p><ul><li>PublicBYOK时，该参数无效；</li><li>PublicCustom时，该参数默认为true；</li><li>PrivateCustom时，该参数默认为false；</li></ul>
                     */
                    bool m_verifySSL;
                    bool m_verifySSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONREQUEST_H_
