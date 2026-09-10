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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CHECKCLOUDNATIVEAPIGATEWAYMCPROUTEMATCHREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CHECKCLOUDNATIVEAPIGATEWAYMCPROUTEMATCHREQUEST_H_

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
                * CheckCloudNativeAPIGatewayMCPRouteMatch请求参数结构体
                */
                class CheckCloudNativeAPIGatewayMCPRouteMatchRequest : public AbstractModel
                {
                public:
                    CheckCloudNativeAPIGatewayMCPRouteMatchRequest();
                    ~CheckCloudNativeAPIGatewayMCPRouteMatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关 ID</p>
                     * @return GatewayId <p>网关 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关 ID</p>
                     * @param _gatewayId <p>网关 ID</p>
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
                     * 获取<p>Modify时用于排除自身的Route ID</p>
                     * @return ExcludeRouteId <p>Modify时用于排除自身的Route ID</p>
                     * 
                     */
                    std::string GetExcludeRouteId() const;

                    /**
                     * 设置<p>Modify时用于排除自身的Route ID</p>
                     * @param _excludeRouteId <p>Modify时用于排除自身的Route ID</p>
                     * 
                     */
                    void SetExcludeRouteId(const std::string& _excludeRouteId);

                    /**
                     * 判断参数 ExcludeRouteId 是否已赋值
                     * @return ExcludeRouteId 是否已赋值
                     * 
                     */
                    bool ExcludeRouteIdHasBeenSet() const;

                    /**
                     * 获取<p>Head匹配规则</p>
                     * @return HeaderMatch <p>Head匹配规则</p>
                     * 
                     */
                    std::vector<AIGWHeaderRule> GetHeaderMatch() const;

                    /**
                     * 设置<p>Head匹配规则</p>
                     * @param _headerMatch <p>Head匹配规则</p>
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
                     * 获取<p>path的匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @return PathMatchType <p>path的匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置<p>path的匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @param _pathMatchType <p>path的匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * 
                     */
                    void SetPathMatchType(const std::string& _pathMatchType);

                    /**
                     * 判断参数 PathMatchType 是否已赋值
                     * @return PathMatchType 是否已赋值
                     * 
                     */
                    bool PathMatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>网关 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP Server ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>Modify时用于排除自身的Route ID</p>
                     */
                    std::string m_excludeRouteId;
                    bool m_excludeRouteIdHasBeenSet;

                    /**
                     * <p>Head匹配规则</p>
                     */
                    std::vector<AIGWHeaderRule> m_headerMatch;
                    bool m_headerMatchHasBeenSet;

                    /**
                     * <p>http method</p>
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>path的匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CHECKCLOUDNATIVEAPIGATEWAYMCPROUTEMATCHREQUEST_H_
