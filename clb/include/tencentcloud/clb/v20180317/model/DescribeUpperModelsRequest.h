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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUPPERMODELSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUPPERMODELSREQUEST_H_

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
                * DescribeUpperModels请求参数结构体
                */
                class DescribeUpperModelsRequest : public AbstractModel
                {
                public:
                    DescribeUpperModelsRequest();
                    ~DescribeUpperModelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @return AccessType <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @param _accessType <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
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
                     * 获取<p>上游 Provider API 地址</p><p>示例：https://api.moonshot.cn</p>
                     * @return ApiBase <p>上游 Provider API 地址</p><p>示例：https://api.moonshot.cn</p>
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>上游 Provider API 地址</p><p>示例：https://api.moonshot.cn</p>
                     * @param _apiBase <p>上游 Provider API 地址</p><p>示例：https://api.moonshot.cn</p>
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
                     * 获取<p>上游 Provider API Key</p><p>用于鉴权访问上游模型列表接口</p>
                     * @return ApiKey <p>上游 Provider API Key</p><p>用于鉴权访问上游模型列表接口</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>上游 Provider API Key</p><p>用于鉴权访问上游模型列表接口</p>
                     * @param _apiKey <p>上游 Provider API Key</p><p>用于鉴权访问上游模型列表接口</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>自定义 Host Header，可选</p><p>仅 VPC 内网场景需要，用于指定请求的 Host 头</p>
                     * @return HostHeader <p>自定义 Host Header，可选</p><p>仅 VPC 内网场景需要，用于指定请求的 Host 头</p>
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>自定义 Host Header，可选</p><p>仅 VPC 内网场景需要，用于指定请求的 Host 头</p>
                     * @param _hostHeader <p>自定义 Host Header，可选</p><p>仅 VPC 内网场景需要，用于指定请求的 Host 头</p>
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
                     * 获取<p>Key Id 配合ServiceProviderId一同输入，不指定则默认选用最近创建的Key</p>
                     * @return KeyId <p>Key Id 配合ServiceProviderId一同输入，不指定则默认选用最近创建的Key</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Key Id 配合ServiceProviderId一同输入，不指定则默认选用最近创建的Key</p>
                     * @param _keyId <p>Key Id 配合ServiceProviderId一同输入，不指定则默认选用最近创建的Key</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>模型列表端点路径，可选</p><p>默认值：/v1/models</p>
                     * @return ModelPath <p>模型列表端点路径，可选</p><p>默认值：/v1/models</p>
                     * 
                     */
                    std::string GetModelPath() const;

                    /**
                     * 设置<p>模型列表端点路径，可选</p><p>默认值：/v1/models</p>
                     * @param _modelPath <p>模型列表端点路径，可选</p><p>默认值：/v1/models</p>
                     * 
                     */
                    void SetModelPath(const std::string& _modelPath);

                    /**
                     * 判断参数 ModelPath 是否已赋值
                     * @return ModelPath 是否已赋值
                     * 
                     */
                    bool ModelPathHasBeenSet() const;

                    /**
                     * 获取<p>模型协议</p>
                     * @return ModelProtocol <p>模型协议</p>
                     * 
                     */
                    std::string GetModelProtocol() const;

                    /**
                     * 设置<p>模型协议</p>
                     * @param _modelProtocol <p>模型协议</p>
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
                     * 获取<p>模型提供商</p>
                     * @return ModelProvider <p>模型提供商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>模型提供商</p>
                     * @param _modelProvider <p>模型提供商</p>
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
                     * 获取<p>BYOK 业务 ID，可选</p><p>格式：byok-xxxxxxxx</p>
                     * @return ServiceProviderId <p>BYOK 业务 ID，可选</p><p>格式：byok-xxxxxxxx</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK 业务 ID，可选</p><p>格式：byok-xxxxxxxx</p>
                     * @param _serviceProviderId <p>BYOK 业务 ID，可选</p><p>格式：byok-xxxxxxxx</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>上游 Provider API 地址</p><p>示例：https://api.moonshot.cn</p>
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>上游 Provider API Key</p><p>用于鉴权访问上游模型列表接口</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>自定义 Host Header，可选</p><p>仅 VPC 内网场景需要，用于指定请求的 Host 头</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>Key Id 配合ServiceProviderId一同输入，不指定则默认选用最近创建的Key</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>模型列表端点路径，可选</p><p>默认值：/v1/models</p>
                     */
                    std::string m_modelPath;
                    bool m_modelPathHasBeenSet;

                    /**
                     * <p>模型协议</p>
                     */
                    std::string m_modelProtocol;
                    bool m_modelProtocolHasBeenSet;

                    /**
                     * <p>模型提供商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>BYOK 业务 ID，可选</p><p>格式：byok-xxxxxxxx</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUPPERMODELSREQUEST_H_
