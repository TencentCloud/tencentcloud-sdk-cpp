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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongUpstreamInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayService请求参数结构体
                */
                class CreateCloudNativeAPIGatewayServiceRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayServiceRequest();
                    ~CreateCloudNativeAPIGatewayServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param _name 服务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取请求协议：
- https
- http
- tcp
- udp
                     * @return Protocol 请求协议：
- https
- http
- tcp
- udp
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置请求协议：
- https
- http
- tcp
- udp
                     * @param _protocol 请求协议：
- https
- http
- tcp
- udp
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
                     * 获取超时时间，单位ms
                     * @return Timeout 超时时间，单位ms
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时时间，单位ms
                     * @param _timeout 超时时间，单位ms
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return Retries 重试次数
                     * 
                     */
                    int64_t GetRetries() const;

                    /**
                     * 设置重试次数
                     * @param _retries 重试次数
                     * 
                     */
                    void SetRetries(const int64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取服务类型: 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * @return UpstreamType 服务类型: 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置服务类型: 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * @param _upstreamType 服务类型: 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取服务配置信息
                     * @return UpstreamInfo 服务配置信息
                     * 
                     */
                    KongUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置服务配置信息
                     * @param _upstreamInfo 服务配置信息
                     * 
                     */
                    void SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取请求路径
                     * @return Path 请求路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求路径
                     * @param _path 请求路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 请求协议：
- https
- http
- tcp
- udp
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 超时时间，单位ms
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 重试次数
                     */
                    int64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * 服务类型: 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * 服务配置信息
                     */
                    KongUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * 请求路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_
