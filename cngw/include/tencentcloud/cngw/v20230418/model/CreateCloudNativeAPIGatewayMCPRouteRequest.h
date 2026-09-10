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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPROUTEREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWHeaderRule.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayMCPRoute请求参数结构体
                */
                class CreateCloudNativeAPIGatewayMCPRouteRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayMCPRouteRequest();
                    ~CreateCloudNativeAPIGatewayMCPRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
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
                     * 获取<p>MCP Server ID</p>
                     * @return ServerId <p>MCP Server ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP Server ID</p>
                     * @param _serverId <p>MCP Server ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Header匹配规则</p>
                     * @return HeaderMatch <p>Header匹配规则</p>
                     * 
                     */
                    std::vector<AIGWHeaderRule> GetHeaderMatch() const;

                    /**
                     * 设置<p>Header匹配规则</p>
                     * @param _headerMatch <p>Header匹配规则</p>
                     * 
                     */
                    void SetHeaderMatch(const std::vector<AIGWHeaderRule>& _headerMatch);

                    /**
                     * 判断参数 HeaderMatch 是否已赋值
                     * @return HeaderMatch 是否已赋值
                     * 
                     */
                    bool HeaderMatchHasBeenSet() const;

                    /**
                     * 获取<p>http method</p>
                     * @return Methods <p>http method</p>
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置<p>http method</p>
                     * @param _methods <p>http method</p>
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取<p>路由名称</p>
                     * @return Name <p>路由名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>路由名称</p>
                     * @param _name <p>路由名称</p>
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
                     * 获取<p>路径</p>
                     * @return Path <p>路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
                     * @param _path <p>路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>路径匹配规则</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @return PathMatchType <p>路径匹配规则</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置<p>路径匹配规则</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @param _pathMatchType <p>路径匹配规则</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * 
                     */
                    void SetPathMatchType(const std::string& _pathMatchType);

                    /**
                     * 判断参数 PathMatchType 是否已赋值
                     * @return PathMatchType 是否已赋值
                     * 
                     */
                    bool PathMatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>route优先级</p>
                     * @return Priority <p>route优先级</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>route优先级</p>
                     * @param _priority <p>route优先级</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP Server ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Header匹配规则</p>
                     */
                    std::vector<AIGWHeaderRule> m_headerMatch;
                    bool m_headerMatchHasBeenSet;

                    /**
                     * <p>http method</p>
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * <p>路由名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>路径匹配规则</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                    /**
                     * <p>route优先级</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPROUTEREQUEST_H_
