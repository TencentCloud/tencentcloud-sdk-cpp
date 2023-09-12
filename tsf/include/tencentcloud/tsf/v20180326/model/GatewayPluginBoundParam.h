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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGINBOUNDPARAM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGINBOUNDPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关插件绑定对象
                */
                class GatewayPluginBoundParam : public AbstractModel
                {
                public:
                    GatewayPluginBoundParam();
                    ~GatewayPluginBoundParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件id
                     * @return PluginId 插件id
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件id
                     * @param _pluginId 插件id
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取插件绑定到的对象类型:group/api/all
                     * @return ScopeType 插件绑定到的对象类型:group/api/all
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置插件绑定到的对象类型:group/api/all
                     * @param _scopeType 插件绑定到的对象类型:group/api/all
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取插件绑定到的对象主键值，例如分组的ID/API的ID
                     * @return ScopeValue 插件绑定到的对象主键值，例如分组的ID/API的ID
                     * 
                     */
                    std::string GetScopeValue() const;

                    /**
                     * 设置插件绑定到的对象主键值，例如分组的ID/API的ID
                     * @param _scopeValue 插件绑定到的对象主键值，例如分组的ID/API的ID
                     * 
                     */
                    void SetScopeValue(const std::string& _scopeValue);

                    /**
                     * 判断参数 ScopeValue 是否已赋值
                     * @return ScopeValue 是否已赋值
                     * 
                     */
                    bool ScopeValueHasBeenSet() const;

                    /**
                     * 获取创建关联的服务id，关联envoy网关时使用
                     * @return MicroserviceId 创建关联的服务id，关联envoy网关时使用
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置创建关联的服务id，关联envoy网关时使用
                     * @param _microserviceId 创建关联的服务id，关联envoy网关时使用
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取网关id
                     * @return GatewayInstanceId 网关id
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关id
                     * @param _gatewayInstanceId 网关id
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 插件id
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 插件绑定到的对象类型:group/api/all
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * 插件绑定到的对象主键值，例如分组的ID/API的ID
                     */
                    std::string m_scopeValue;
                    bool m_scopeValueHasBeenSet;

                    /**
                     * 创建关联的服务id，关联envoy网关时使用
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 网关id
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGINBOUNDPARAM_H_
