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
#include <tencentcloud/clb/v20180317/model/ApiBaseItem.h>


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
                     * 获取<p>BYOK的自定义名字</p><p>入参限制：1～255个字符</p>
                     * @return ServiceProviderName <p>BYOK的自定义名字</p><p>入参限制：1～255个字符</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>BYOK的自定义名字</p><p>入参限制：1～255个字符</p>
                     * @param _serviceProviderName <p>BYOK的自定义名字</p><p>入参限制：1～255个字符</p>
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>多协议 Api Base URL</p>
                     * @return ApiBases <p>多协议 Api Base URL</p>
                     * 
                     */
                    std::vector<ApiBaseItem> GetApiBases() const;

                    /**
                     * 设置<p>多协议 Api Base URL</p>
                     * @param _apiBases <p>多协议 Api Base URL</p>
                     * 
                     */
                    void SetApiBases(const std::vector<ApiBaseItem>& _apiBases);

                    /**
                     * 判断参数 ApiBases 是否已赋值
                     * @return ApiBases 是否已赋值
                     * 
                     */
                    bool ApiBasesHasBeenSet() const;

                    /**
                     * 获取<p>非chat输出模态的Api Base URL</p>
                     * @return ApiBase <p>非chat输出模态的Api Base URL</p>
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>非chat输出模态的Api Base URL</p>
                     * @param _apiBase <p>非chat输出模态的Api Base URL</p>
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
                     * 获取<p>非chat输出模态的请求后缀</p>
                     * @return EndpointPath <p>非chat输出模态的请求后缀</p>
                     * 
                     */
                    std::string GetEndpointPath() const;

                    /**
                     * 设置<p>非chat输出模态的请求后缀</p>
                     * @param _endpointPath <p>非chat输出模态的请求后缀</p>
                     * 
                     */
                    void SetEndpointPath(const std::string& _endpointPath);

                    /**
                     * 判断参数 EndpointPath 是否已赋值
                     * @return EndpointPath 是否已赋值
                     * 
                     */
                    bool EndpointPathHasBeenSet() const;

                    /**
                     * 获取<p>所属厂商</p>
                     * @return ModelProvider <p>所属厂商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>所属厂商</p>
                     * @param _modelProvider <p>所属厂商</p>
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
                     * 获取<p>协议</p>
                     * @return Protocol <p>协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议</p>
                     * @param _protocol <p>协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>所使用的CMR 私网管道 ID</p>
                     * @return CMRPrivateNetworkTunnelId <p>所使用的CMR 私网管道 ID</p>
                     * 
                     */
                    std::string GetCMRPrivateNetworkTunnelId() const;

                    /**
                     * 设置<p>所使用的CMR 私网管道 ID</p>
                     * @param _cMRPrivateNetworkTunnelId <p>所使用的CMR 私网管道 ID</p>
                     * 
                     */
                    void SetCMRPrivateNetworkTunnelId(const std::string& _cMRPrivateNetworkTunnelId);

                    /**
                     * 判断参数 CMRPrivateNetworkTunnelId 是否已赋值
                     * @return CMRPrivateNetworkTunnelId 是否已赋值
                     * 
                     */
                    bool CMRPrivateNetworkTunnelIdHasBeenSet() const;

                    /**
                     * 获取<p>携带的Host Header</p>
                     * @return HostHeader <p>携带的Host Header</p>
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>携带的Host Header</p>
                     * @param _hostHeader <p>携带的Host Header</p>
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
                     * 获取<p>是否需要进行ssl校验</p>
                     * @return VerifySSL <p>是否需要进行ssl校验</p>
                     * 
                     */
                    bool GetVerifySSL() const;

                    /**
                     * 设置<p>是否需要进行ssl校验</p>
                     * @param _verifySSL <p>是否需要进行ssl校验</p>
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
                     * <p>BYOK的ID</p><p>参数格式：byok-kot39u7j</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>BYOK的自定义名字</p><p>入参限制：1～255个字符</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                    /**
                     * <p>多协议 Api Base URL</p>
                     */
                    std::vector<ApiBaseItem> m_apiBases;
                    bool m_apiBasesHasBeenSet;

                    /**
                     * <p>非chat输出模态的Api Base URL</p>
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>非chat输出模态的请求后缀</p>
                     */
                    std::string m_endpointPath;
                    bool m_endpointPathHasBeenSet;

                    /**
                     * <p>所属厂商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>所使用的CMR 私网管道 ID</p>
                     */
                    std::string m_cMRPrivateNetworkTunnelId;
                    bool m_cMRPrivateNetworkTunnelIdHasBeenSet;

                    /**
                     * <p>携带的Host Header</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>是否需要进行ssl校验</p>
                     */
                    bool m_verifySSL;
                    bool m_verifySSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELATTRIBUTESREQUEST_H_
