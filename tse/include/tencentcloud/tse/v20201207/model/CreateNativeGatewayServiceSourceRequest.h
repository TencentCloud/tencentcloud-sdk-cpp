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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVICESOURCEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVICESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/SourceInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateNativeGatewayServiceSource请求参数结构体
                */
                class CreateNativeGatewayServiceSourceRequest : public AbstractModel
                {
                public:
                    CreateNativeGatewayServiceSourceRequest();
                    ~CreateNativeGatewayServiceSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例ID
                     * @return GatewayID 网关实例ID
                     * 
                     */
                    std::string GetGatewayID() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayID 网关实例ID
                     * 
                     */
                    void SetGatewayID(const std::string& _gatewayID);

                    /**
                     * 判断参数 GatewayID 是否已赋值
                     * @return GatewayID 是否已赋值
                     * 
                     */
                    bool GatewayIDHasBeenSet() const;

                    /**
                     * 获取服务来源类型，参考值：
- TSE-Nacos 
- TSE-Consul 
- TSE-PolarisMesh
- Customer-Nacos
- Customer-Consul
- Customer-PolarisMesh
- TSF
- TKE
- EKS
- PrivateDNS
- Customer-DNS
                     * @return SourceType 服务来源类型，参考值：
- TSE-Nacos 
- TSE-Consul 
- TSE-PolarisMesh
- Customer-Nacos
- Customer-Consul
- Customer-PolarisMesh
- TSF
- TKE
- EKS
- PrivateDNS
- Customer-DNS
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置服务来源类型，参考值：
- TSE-Nacos 
- TSE-Consul 
- TSE-PolarisMesh
- Customer-Nacos
- Customer-Consul
- Customer-PolarisMesh
- TSF
- TKE
- EKS
- PrivateDNS
- Customer-DNS
                     * @param _sourceType 服务来源类型，参考值：
- TSE-Nacos 
- TSE-Consul 
- TSE-PolarisMesh
- Customer-Nacos
- Customer-Consul
- Customer-PolarisMesh
- TSF
- TKE
- EKS
- PrivateDNS
- Customer-DNS
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取服务来源实例ID，当SourceType的值不为PrivateDNS或Customer-DNS时，必填
                     * @return SourceID 服务来源实例ID，当SourceType的值不为PrivateDNS或Customer-DNS时，必填
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置服务来源实例ID，当SourceType的值不为PrivateDNS或Customer-DNS时，必填
                     * @param _sourceID 服务来源实例ID，当SourceType的值不为PrivateDNS或Customer-DNS时，必填
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取服务来源实例名称，当SourceType的值不为PrivateDNS时，必填
                     * @return SourceName 服务来源实例名称，当SourceType的值不为PrivateDNS时，必填
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置服务来源实例名称，当SourceType的值不为PrivateDNS时，必填
                     * @param _sourceName 服务来源实例名称，当SourceType的值不为PrivateDNS时，必填
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取服务来源实例额外信息
                     * @return SourceInfo 服务来源实例额外信息
                     * 
                     */
                    SourceInfo GetSourceInfo() const;

                    /**
                     * 设置服务来源实例额外信息
                     * @param _sourceInfo 服务来源实例额外信息
                     * 
                     */
                    void SetSourceInfo(const SourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayID;
                    bool m_gatewayIDHasBeenSet;

                    /**
                     * 服务来源类型，参考值：
- TSE-Nacos 
- TSE-Consul 
- TSE-PolarisMesh
- Customer-Nacos
- Customer-Consul
- Customer-PolarisMesh
- TSF
- TKE
- EKS
- PrivateDNS
- Customer-DNS
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 服务来源实例ID，当SourceType的值不为PrivateDNS或Customer-DNS时，必填
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * 服务来源实例名称，当SourceType的值不为PrivateDNS时，必填
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 服务来源实例额外信息
                     */
                    SourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVICESOURCEREQUEST_H_
