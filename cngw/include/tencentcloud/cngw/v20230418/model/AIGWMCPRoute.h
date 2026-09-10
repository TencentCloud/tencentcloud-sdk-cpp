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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * MCP路由对象
                */
                class AIGWMCPRoute : public AbstractModel
                {
                public:
                    AIGWMCPRoute();
                    ~AIGWMCPRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>路由表达式</p>
                     * @return Expression <p>路由表达式</p>
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置<p>路由表达式</p>
                     * @param _expression <p>路由表达式</p>
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

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
                     * 获取<p>是否为默认路由</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return IsDefault <p>是否为默认路由</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否为默认路由</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _isDefault <p>是否为默认路由</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>http path</p>
                     * @return Methods <p>http path</p>
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置<p>http path</p>
                     * @param _methods <p>http path</p>
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
                     * 获取<p>路由路径</p>
                     * @return Path <p>路由路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路由路径</p>
                     * @param _path <p>路由路径</p>
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
                     * 获取<p>路径匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @return PathMatchType <p>路径匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置<p>路径匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     * @param _pathMatchType <p>路径匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
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
                     * 获取<p>优先级</p>
                     * @return Priority <p>优先级</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _priority <p>优先级</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>路由ID</p>
                     * @return RouteId <p>路由ID</p>
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置<p>路由ID</p>
                     * @param _routeId <p>路由ID</p>
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>启用/禁用状态</p><p>枚举值：</p><ul><li>Enabled： 启用</li><li>Disabled： 禁用</li></ul>
                     * @return Status <p>启用/禁用状态</p><p>枚举值：</p><ul><li>Enabled： 启用</li><li>Disabled： 禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>启用/禁用状态</p><p>枚举值：</p><ul><li>Enabled： 启用</li><li>Disabled： 禁用</li></ul>
                     * @param _status <p>启用/禁用状态</p><p>枚举值：</p><ul><li>Enabled： 启用</li><li>Disabled： 禁用</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否开启保留原Host功能</p>
                     * @return PreserveHost <p>是否开启保留原Host功能</p>
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置<p>是否开启保留原Host功能</p>
                     * @param _preserveHost <p>是否开启保留原Host功能</p>
                     * 
                     */
                    void SetPreserveHost(const bool& _preserveHost);

                    /**
                     * 判断参数 PreserveHost 是否已赋值
                     * @return PreserveHost 是否已赋值
                     * 
                     */
                    bool PreserveHostHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>路由表达式</p>
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * <p>Header匹配规则</p>
                     */
                    std::vector<AIGWHeaderRule> m_headerMatch;
                    bool m_headerMatchHasBeenSet;

                    /**
                     * <p>是否为默认路由</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>http path</p>
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * <p>路由名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>路由路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>路径匹配方式</p><p>枚举值：</p><ul><li>Exact： 精确</li><li>Prefix： 前缀</li><li>Regex： 正则</li></ul>
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>路由ID</p>
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>启用/禁用状态</p><p>枚举值：</p><ul><li>Enabled： 启用</li><li>Disabled： 禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否开启保留原Host功能</p>
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTE_H_
