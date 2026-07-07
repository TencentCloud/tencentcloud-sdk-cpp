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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESREQUEST_H_

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
                * TestModelInputModalities请求参数结构体
                */
                class TestModelInputModalitiesRequest : public AbstractModel
                {
                public:
                    TestModelInputModalitiesRequest();
                    ~TestModelInputModalitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待探测的模型（原始模型名称）</p>
                     * @return Model <p>待探测的模型（原始模型名称）</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>待探测的模型（原始模型名称）</p>
                     * @param _model <p>待探测的模型（原始模型名称）</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>待探测的API Key（明文）</p>
                     * @return ProviderKey <p>待探测的API Key（明文）</p>
                     * 
                     */
                    std::string GetProviderKey() const;

                    /**
                     * 设置<p>待探测的API Key（明文）</p>
                     * @param _providerKey <p>待探测的API Key（明文）</p>
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
                     * 获取<p>已创建的BYOK API Key ID（与ProviderKey二选一传入）</p>
                     * @return ProviderKeyId <p>已创建的BYOK API Key ID（与ProviderKey二选一传入）</p>
                     * 
                     */
                    std::string GetProviderKeyId() const;

                    /**
                     * 设置<p>已创建的BYOK API Key ID（与ProviderKey二选一传入）</p>
                     * @param _providerKeyId <p>已创建的BYOK API Key ID（与ProviderKey二选一传入）</p>
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
                     * 获取<p>BYOK类型，当ProviderKey传入时必填</p>
                     * @return AccessType <p>BYOK类型，当ProviderKey传入时必填</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>BYOK类型，当ProviderKey传入时必填</p>
                     * @param _accessType <p>BYOK类型，当ProviderKey传入时必填</p>
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
                     * 获取<p>模型厂商协议，当ProviderKey传入时必填</p>
                     * @return ModelProtocol <p>模型厂商协议，当ProviderKey传入时必填</p>
                     * 
                     */
                    std::string GetModelProtocol() const;

                    /**
                     * 设置<p>模型厂商协议，当ProviderKey传入时必填</p>
                     * @param _modelProtocol <p>模型厂商协议，当ProviderKey传入时必填</p>
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
                     * 获取<p>自定义ApiBase，当ProviderKey传入且AccessType且PrivateCustom/PublicCustom时必填</p>
                     * @return ApiBase <p>自定义ApiBase，当ProviderKey传入且AccessType且PrivateCustom/PublicCustom时必填</p>
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>自定义ApiBase，当ProviderKey传入且AccessType且PrivateCustom/PublicCustom时必填</p>
                     * @param _apiBase <p>自定义ApiBase，当ProviderKey传入且AccessType且PrivateCustom/PublicCustom时必填</p>
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
                     * 获取<p>BYOK实例ID，当AccessType为PrivateCustom时生效，ProviderKey传入时必填</p>
                     * @return ServiceProviderId <p>BYOK实例ID，当AccessType为PrivateCustom时生效，ProviderKey传入时必填</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK实例ID，当AccessType为PrivateCustom时生效，ProviderKey传入时必填</p>
                     * @param _serviceProviderId <p>BYOK实例ID，当AccessType为PrivateCustom时生效，ProviderKey传入时必填</p>
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
                     * 获取<p>是否校验服务提供商的SSL证书</p><p>PublicBYOK时为True且禁止传入；若传入VerifySSL，则优先同步入参逻辑；若传入了ServiceProviderId则同步已创建的Byok实例该Model的逻辑；否则PublicCustom模式下为True，PrivateCustom模式下为False。</p>
                     * @return VerifySSL <p>是否校验服务提供商的SSL证书</p><p>PublicBYOK时为True且禁止传入；若传入VerifySSL，则优先同步入参逻辑；若传入了ServiceProviderId则同步已创建的Byok实例该Model的逻辑；否则PublicCustom模式下为True，PrivateCustom模式下为False。</p>
                     * 
                     */
                    bool GetVerifySSL() const;

                    /**
                     * 设置<p>是否校验服务提供商的SSL证书</p><p>PublicBYOK时为True且禁止传入；若传入VerifySSL，则优先同步入参逻辑；若传入了ServiceProviderId则同步已创建的Byok实例该Model的逻辑；否则PublicCustom模式下为True，PrivateCustom模式下为False。</p>
                     * @param _verifySSL <p>是否校验服务提供商的SSL证书</p><p>PublicBYOK时为True且禁止传入；若传入VerifySSL，则优先同步入参逻辑；若传入了ServiceProviderId则同步已创建的Byok实例该Model的逻辑；否则PublicCustom模式下为True，PrivateCustom模式下为False。</p>
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
                     * <p>待探测的模型（原始模型名称）</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>待探测的API Key（明文）</p>
                     */
                    std::string m_providerKey;
                    bool m_providerKeyHasBeenSet;

                    /**
                     * <p>已创建的BYOK API Key ID（与ProviderKey二选一传入）</p>
                     */
                    std::string m_providerKeyId;
                    bool m_providerKeyIdHasBeenSet;

                    /**
                     * <p>BYOK类型，当ProviderKey传入时必填</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>模型厂商协议，当ProviderKey传入时必填</p>
                     */
                    std::string m_modelProtocol;
                    bool m_modelProtocolHasBeenSet;

                    /**
                     * <p>模型的厂商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>自定义ApiBase，当ProviderKey传入且AccessType且PrivateCustom/PublicCustom时必填</p>
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>请求携带的Host头部，当AccessType为PrivateCustom时生效</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>BYOK实例ID，当AccessType为PrivateCustom时生效，ProviderKey传入时必填</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>是否校验服务提供商的SSL证书</p><p>PublicBYOK时为True且禁止传入；若传入VerifySSL，则优先同步入参逻辑；若传入了ServiceProviderId则同步已创建的Byok实例该Model的逻辑；否则PublicCustom模式下为True，PrivateCustom模式下为False。</p>
                     */
                    bool m_verifySSL;
                    bool m_verifySSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESREQUEST_H_
