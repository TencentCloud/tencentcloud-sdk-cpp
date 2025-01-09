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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYROUNTITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYROUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/FrequencyLimitConfig.h>
#include <tencentcloud/tcb/v20180608/model/CustomHeader.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 安全网关路由
                */
                class WxGatewayRountItem : public AbstractModel
                {
                public:
                    WxGatewayRountItem();
                    ~WxGatewayRountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全网关路由名称
                     * @return GatewayRouteName 安全网关路由名称
                     * 
                     */
                    std::string GetGatewayRouteName() const;

                    /**
                     * 设置安全网关路由名称
                     * @param _gatewayRouteName 安全网关路由名称
                     * 
                     */
                    void SetGatewayRouteName(const std::string& _gatewayRouteName);

                    /**
                     * 判断参数 GatewayRouteName 是否已赋值
                     * @return GatewayRouteName 是否已赋值
                     * 
                     */
                    bool GatewayRouteNameHasBeenSet() const;

                    /**
                     * 获取安全网关路由协议
                     * @return GatewayRouteProtocol 安全网关路由协议
                     * 
                     */
                    std::string GetGatewayRouteProtocol() const;

                    /**
                     * 设置安全网关路由协议
                     * @param _gatewayRouteProtocol 安全网关路由协议
                     * 
                     */
                    void SetGatewayRouteProtocol(const std::string& _gatewayRouteProtocol);

                    /**
                     * 判断参数 GatewayRouteProtocol 是否已赋值
                     * @return GatewayRouteProtocol 是否已赋值
                     * 
                     */
                    bool GatewayRouteProtocolHasBeenSet() const;

                    /**
                     * 获取安全网关路由地址
                     * @return GatewayRouteAddr 安全网关路由地址
                     * 
                     */
                    std::string GetGatewayRouteAddr() const;

                    /**
                     * 设置安全网关路由地址
                     * @param _gatewayRouteAddr 安全网关路由地址
                     * 
                     */
                    void SetGatewayRouteAddr(const std::string& _gatewayRouteAddr);

                    /**
                     * 判断参数 GatewayRouteAddr 是否已赋值
                     * @return GatewayRouteAddr 是否已赋值
                     * 
                     */
                    bool GatewayRouteAddrHasBeenSet() const;

                    /**
                     * 获取安全网关路由描述
                     * @return GatewayRouteDesc 安全网关路由描述
                     * 
                     */
                    std::string GetGatewayRouteDesc() const;

                    /**
                     * 设置安全网关路由描述
                     * @param _gatewayRouteDesc 安全网关路由描述
                     * 
                     */
                    void SetGatewayRouteDesc(const std::string& _gatewayRouteDesc);

                    /**
                     * 判断参数 GatewayRouteDesc 是否已赋值
                     * @return GatewayRouteDesc 是否已赋值
                     * 
                     */
                    bool GatewayRouteDescHasBeenSet() const;

                    /**
                     * 获取安全网关后端集群id，如果是外网服务，该id与GatewayRountName相同
                     * @return GatewayRouteClusterId 安全网关后端集群id，如果是外网服务，该id与GatewayRountName相同
                     * 
                     */
                    std::string GetGatewayRouteClusterId() const;

                    /**
                     * 设置安全网关后端集群id，如果是外网服务，该id与GatewayRountName相同
                     * @param _gatewayRouteClusterId 安全网关后端集群id，如果是外网服务，该id与GatewayRountName相同
                     * 
                     */
                    void SetGatewayRouteClusterId(const std::string& _gatewayRouteClusterId);

                    /**
                     * 判断参数 GatewayRouteClusterId 是否已赋值
                     * @return GatewayRouteClusterId 是否已赋值
                     * 
                     */
                    bool GatewayRouteClusterIdHasBeenSet() const;

                    /**
                     * 获取安全网关创建时间
                     * @return GatewayRouteCreateTime 安全网关创建时间
                     * 
                     */
                    std::string GetGatewayRouteCreateTime() const;

                    /**
                     * 设置安全网关创建时间
                     * @param _gatewayRouteCreateTime 安全网关创建时间
                     * 
                     */
                    void SetGatewayRouteCreateTime(const std::string& _gatewayRouteCreateTime);

                    /**
                     * 判断参数 GatewayRouteCreateTime 是否已赋值
                     * @return GatewayRouteCreateTime 是否已赋值
                     * 
                     */
                    bool GatewayRouteCreateTimeHasBeenSet() const;

                    /**
                     * 获取安全网关路由限制
                     * @return FrequencyLimitConfig 安全网关路由限制
                     * 
                     */
                    std::vector<FrequencyLimitConfig> GetFrequencyLimitConfig() const;

                    /**
                     * 设置安全网关路由限制
                     * @param _frequencyLimitConfig 安全网关路由限制
                     * 
                     */
                    void SetFrequencyLimitConfig(const std::vector<FrequencyLimitConfig>& _frequencyLimitConfig);

                    /**
                     * 判断参数 FrequencyLimitConfig 是否已赋值
                     * @return FrequencyLimitConfig 是否已赋值
                     * 
                     */
                    bool FrequencyLimitConfigHasBeenSet() const;

                    /**
                     * 获取ip代表绑定后端ip。cbr代表云托管服务
                     * @return GatewayRouteServerType ip代表绑定后端ip。cbr代表云托管服务
                     * 
                     */
                    std::string GetGatewayRouteServerType() const;

                    /**
                     * 设置ip代表绑定后端ip。cbr代表云托管服务
                     * @param _gatewayRouteServerType ip代表绑定后端ip。cbr代表云托管服务
                     * 
                     */
                    void SetGatewayRouteServerType(const std::string& _gatewayRouteServerType);

                    /**
                     * 判断参数 GatewayRouteServerType 是否已赋值
                     * @return GatewayRouteServerType 是否已赋值
                     * 
                     */
                    bool GatewayRouteServerTypeHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return GatewayRouteServerName 服务名
                     * 
                     */
                    std::string GetGatewayRouteServerName() const;

                    /**
                     * 设置服务名
                     * @param _gatewayRouteServerName 服务名
                     * 
                     */
                    void SetGatewayRouteServerName(const std::string& _gatewayRouteServerName);

                    /**
                     * 判断参数 GatewayRouteServerName 是否已赋值
                     * @return GatewayRouteServerName 是否已赋值
                     * 
                     */
                    bool GatewayRouteServerNameHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return GatewayRewriteHost ip
                     * 
                     */
                    std::string GetGatewayRewriteHost() const;

                    /**
                     * 设置ip
                     * @param _gatewayRewriteHost ip
                     * 
                     */
                    void SetGatewayRewriteHost(const std::string& _gatewayRewriteHost);

                    /**
                     * 判断参数 GatewayRewriteHost 是否已赋值
                     * @return GatewayRewriteHost 是否已赋值
                     * 
                     */
                    bool GatewayRewriteHostHasBeenSet() const;

                    /**
                     * 获取网关版本
                     * @return GatewayVersion 网关版本
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置网关版本
                     * @param _gatewayVersion 网关版本
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                    /**
                     * 获取请求路径
                     * @return GatewayRoutePath 请求路径
                     * 
                     */
                    std::string GetGatewayRoutePath() const;

                    /**
                     * 设置请求路径
                     * @param _gatewayRoutePath 请求路径
                     * 
                     */
                    void SetGatewayRoutePath(const std::string& _gatewayRoutePath);

                    /**
                     * 判断参数 GatewayRoutePath 是否已赋值
                     * @return GatewayRoutePath 是否已赋值
                     * 
                     */
                    bool GatewayRoutePathHasBeenSet() const;

                    /**
                     * 获取请求模式
                     * @return GatewayRouteMethod 请求模式
                     * 
                     */
                    std::string GetGatewayRouteMethod() const;

                    /**
                     * 设置请求模式
                     * @param _gatewayRouteMethod 请求模式
                     * 
                     */
                    void SetGatewayRouteMethod(const std::string& _gatewayRouteMethod);

                    /**
                     * 判断参数 GatewayRouteMethod 是否已赋值
                     * @return GatewayRouteMethod 是否已赋值
                     * 
                     */
                    bool GatewayRouteMethodHasBeenSet() const;

                    /**
                     * 获取4层端口
                     * @return GatewayRoutePort 4层端口
                     * 
                     */
                    int64_t GetGatewayRoutePort() const;

                    /**
                     * 设置4层端口
                     * @param _gatewayRoutePort 4层端口
                     * 
                     */
                    void SetGatewayRoutePort(const int64_t& _gatewayRoutePort);

                    /**
                     * 判断参数 GatewayRoutePort 是否已赋值
                     * @return GatewayRoutePort 是否已赋值
                     * 
                     */
                    bool GatewayRoutePortHasBeenSet() const;

                    /**
                     * 获取路由环境ID
                     * @return GatewayRouteEnvId 路由环境ID
                     * 
                     */
                    std::string GetGatewayRouteEnvId() const;

                    /**
                     * 设置路由环境ID
                     * @param _gatewayRouteEnvId 路由环境ID
                     * 
                     */
                    void SetGatewayRouteEnvId(const std::string& _gatewayRouteEnvId);

                    /**
                     * 判断参数 GatewayRouteEnvId 是否已赋值
                     * @return GatewayRouteEnvId 是否已赋值
                     * 
                     */
                    bool GatewayRouteEnvIdHasBeenSet() const;

                    /**
                     * 获取路径匹配类型，支持prefix(前缀匹配)，regex(正则匹配)， 默认prefix
                     * @return GatewayRoutePathMatchType 路径匹配类型，支持prefix(前缀匹配)，regex(正则匹配)， 默认prefix
                     * 
                     */
                    std::string GetGatewayRoutePathMatchType() const;

                    /**
                     * 设置路径匹配类型，支持prefix(前缀匹配)，regex(正则匹配)， 默认prefix
                     * @param _gatewayRoutePathMatchType 路径匹配类型，支持prefix(前缀匹配)，regex(正则匹配)， 默认prefix
                     * 
                     */
                    void SetGatewayRoutePathMatchType(const std::string& _gatewayRoutePathMatchType);

                    /**
                     * 判断参数 GatewayRoutePathMatchType 是否已赋值
                     * @return GatewayRoutePathMatchType 是否已赋值
                     * 
                     */
                    bool GatewayRoutePathMatchTypeHasBeenSet() const;

                    /**
                     * 获取安全网关自定义头部
                     * @return CustomHeader 安全网关自定义头部
                     * 
                     */
                    CustomHeader GetCustomHeader() const;

                    /**
                     * 设置安全网关自定义头部
                     * @param _customHeader 安全网关自定义头部
                     * 
                     */
                    void SetCustomHeader(const CustomHeader& _customHeader);

                    /**
                     * 判断参数 CustomHeader 是否已赋值
                     * @return CustomHeader 是否已赋值
                     * 
                     */
                    bool CustomHeaderHasBeenSet() const;

                private:

                    /**
                     * 安全网关路由名称
                     */
                    std::string m_gatewayRouteName;
                    bool m_gatewayRouteNameHasBeenSet;

                    /**
                     * 安全网关路由协议
                     */
                    std::string m_gatewayRouteProtocol;
                    bool m_gatewayRouteProtocolHasBeenSet;

                    /**
                     * 安全网关路由地址
                     */
                    std::string m_gatewayRouteAddr;
                    bool m_gatewayRouteAddrHasBeenSet;

                    /**
                     * 安全网关路由描述
                     */
                    std::string m_gatewayRouteDesc;
                    bool m_gatewayRouteDescHasBeenSet;

                    /**
                     * 安全网关后端集群id，如果是外网服务，该id与GatewayRountName相同
                     */
                    std::string m_gatewayRouteClusterId;
                    bool m_gatewayRouteClusterIdHasBeenSet;

                    /**
                     * 安全网关创建时间
                     */
                    std::string m_gatewayRouteCreateTime;
                    bool m_gatewayRouteCreateTimeHasBeenSet;

                    /**
                     * 安全网关路由限制
                     */
                    std::vector<FrequencyLimitConfig> m_frequencyLimitConfig;
                    bool m_frequencyLimitConfigHasBeenSet;

                    /**
                     * ip代表绑定后端ip。cbr代表云托管服务
                     */
                    std::string m_gatewayRouteServerType;
                    bool m_gatewayRouteServerTypeHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_gatewayRouteServerName;
                    bool m_gatewayRouteServerNameHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_gatewayRewriteHost;
                    bool m_gatewayRewriteHostHasBeenSet;

                    /**
                     * 网关版本
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * 请求路径
                     */
                    std::string m_gatewayRoutePath;
                    bool m_gatewayRoutePathHasBeenSet;

                    /**
                     * 请求模式
                     */
                    std::string m_gatewayRouteMethod;
                    bool m_gatewayRouteMethodHasBeenSet;

                    /**
                     * 4层端口
                     */
                    int64_t m_gatewayRoutePort;
                    bool m_gatewayRoutePortHasBeenSet;

                    /**
                     * 路由环境ID
                     */
                    std::string m_gatewayRouteEnvId;
                    bool m_gatewayRouteEnvIdHasBeenSet;

                    /**
                     * 路径匹配类型，支持prefix(前缀匹配)，regex(正则匹配)， 默认prefix
                     */
                    std::string m_gatewayRoutePathMatchType;
                    bool m_gatewayRoutePathMatchTypeHasBeenSet;

                    /**
                     * 安全网关自定义头部
                     */
                    CustomHeader m_customHeader;
                    bool m_customHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYROUNTITEM_H_
