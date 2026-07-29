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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 引用 IP 组的安全模块
                */
                class IPGroupReference : public AbstractModel
                {
                public:
                    IPGroupReference();
                    ~IPGroupReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>实体类型。</p><p>枚举值：</p><ul><li>WebSec.ZonePolicy： 站点级防护策略</li><li>WebSec.HostPolicy： 域名级防护策略</li><li>WebSec.Template： 策略模板</li><li>DDoS.L4Proxy： 四层代理 DDoS 防护</li><li>DDoS.L3Transit： 三层代播 DDoS 防护</li></ul>
                     * @return EntityType <p>实体类型。</p><p>枚举值：</p><ul><li>WebSec.ZonePolicy： 站点级防护策略</li><li>WebSec.HostPolicy： 域名级防护策略</li><li>WebSec.Template： 策略模板</li><li>DDoS.L4Proxy： 四层代理 DDoS 防护</li><li>DDoS.L3Transit： 三层代播 DDoS 防护</li></ul>
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置<p>实体类型。</p><p>枚举值：</p><ul><li>WebSec.ZonePolicy： 站点级防护策略</li><li>WebSec.HostPolicy： 域名级防护策略</li><li>WebSec.Template： 策略模板</li><li>DDoS.L4Proxy： 四层代理 DDoS 防护</li><li>DDoS.L3Transit： 三层代播 DDoS 防护</li></ul>
                     * @param _entityType <p>实体类型。</p><p>枚举值：</p><ul><li>WebSec.ZonePolicy： 站点级防护策略</li><li>WebSec.HostPolicy： 域名级防护策略</li><li>WebSec.Template： 策略模板</li><li>DDoS.L4Proxy： 四层代理 DDoS 防护</li><li>DDoS.L3Transit： 三层代播 DDoS 防护</li></ul>
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取<p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：站点 ID；</li><li>WebSec.HostPolicy：域名；</li><li>WebSec.Template：模板 ID；</li><li>DDoS.L4Proxy：实例 ID；</li><li>DDoS.L3Transit：实例 ID。</li></ul>
                     * @return EntityId <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：站点 ID；</li><li>WebSec.HostPolicy：域名；</li><li>WebSec.Template：模板 ID；</li><li>DDoS.L4Proxy：实例 ID；</li><li>DDoS.L3Transit：实例 ID。</li></ul>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：站点 ID；</li><li>WebSec.HostPolicy：域名；</li><li>WebSec.Template：模板 ID；</li><li>DDoS.L4Proxy：实例 ID；</li><li>DDoS.L3Transit：实例 ID。</li></ul>
                     * @param _entityId <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：站点 ID；</li><li>WebSec.HostPolicy：域名；</li><li>WebSec.Template：模板 ID；</li><li>DDoS.L4Proxy：实例 ID；</li><li>DDoS.L3Transit：实例 ID。</li></ul>
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取<p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：空；</li><li>WebSec.HostPolicy：空；</li><li>WebSec.Template：模板名称；</li><li>DDoS.L4Proxy：空；</li><li>DDoS.L3Transit：空。</li></ul>
                     * @return EntityName <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：空；</li><li>WebSec.HostPolicy：空；</li><li>WebSec.Template：模板名称；</li><li>DDoS.L4Proxy：空；</li><li>DDoS.L3Transit：空。</li></ul>
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置<p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：空；</li><li>WebSec.HostPolicy：空；</li><li>WebSec.Template：模板名称；</li><li>DDoS.L4Proxy：空；</li><li>DDoS.L3Transit：空。</li></ul>
                     * @param _entityName <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：空；</li><li>WebSec.HostPolicy：空；</li><li>WebSec.Template：模板名称；</li><li>DDoS.L4Proxy：空；</li><li>DDoS.L3Transit：空。</li></ul>
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取<p>子实体类型。</p><p>枚举值：</p><ul><li>WebSec.ExceptionRule： 防护例外规则</li><li>WebSec.BasicAccessRule： 基础访问管控</li><li>WebSec.PreciseMatchRule： 精确匹配规则</li><li>WebSec.RateLimitRule： 精准速率限制</li><li>WebSec.BotCustomRule： 高级 Bot 管理 - 自定义规则</li><li>DDoS.L4Proxy.IpAccessControl： 四层代理 DDoS 防护 - IP 黑白名单</li><li>DDoS.L3Transit.IpAccessControl： 三层代播 DDoS 防护 - IP 黑白名单</li></ul>
                     * @return SubEntityType <p>子实体类型。</p><p>枚举值：</p><ul><li>WebSec.ExceptionRule： 防护例外规则</li><li>WebSec.BasicAccessRule： 基础访问管控</li><li>WebSec.PreciseMatchRule： 精确匹配规则</li><li>WebSec.RateLimitRule： 精准速率限制</li><li>WebSec.BotCustomRule： 高级 Bot 管理 - 自定义规则</li><li>DDoS.L4Proxy.IpAccessControl： 四层代理 DDoS 防护 - IP 黑白名单</li><li>DDoS.L3Transit.IpAccessControl： 三层代播 DDoS 防护 - IP 黑白名单</li></ul>
                     * 
                     */
                    std::string GetSubEntityType() const;

                    /**
                     * 设置<p>子实体类型。</p><p>枚举值：</p><ul><li>WebSec.ExceptionRule： 防护例外规则</li><li>WebSec.BasicAccessRule： 基础访问管控</li><li>WebSec.PreciseMatchRule： 精确匹配规则</li><li>WebSec.RateLimitRule： 精准速率限制</li><li>WebSec.BotCustomRule： 高级 Bot 管理 - 自定义规则</li><li>DDoS.L4Proxy.IpAccessControl： 四层代理 DDoS 防护 - IP 黑白名单</li><li>DDoS.L3Transit.IpAccessControl： 三层代播 DDoS 防护 - IP 黑白名单</li></ul>
                     * @param _subEntityType <p>子实体类型。</p><p>枚举值：</p><ul><li>WebSec.ExceptionRule： 防护例外规则</li><li>WebSec.BasicAccessRule： 基础访问管控</li><li>WebSec.PreciseMatchRule： 精确匹配规则</li><li>WebSec.RateLimitRule： 精准速率限制</li><li>WebSec.BotCustomRule： 高级 Bot 管理 - 自定义规则</li><li>DDoS.L4Proxy.IpAccessControl： 四层代理 DDoS 防护 - IP 黑白名单</li><li>DDoS.L3Transit.IpAccessControl： 三层代播 DDoS 防护 - IP 黑白名单</li></ul>
                     * 
                     */
                    void SetSubEntityType(const std::string& _subEntityType);

                    /**
                     * 判断参数 SubEntityType 是否已赋值
                     * @return SubEntityType 是否已赋值
                     * 
                     */
                    bool SubEntityTypeHasBeenSet() const;

                    /**
                     * 获取<p>子实体标识，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则 ID；</li><li>WebSec.BasicAccessRule：规则 ID；</li><li>WebSec.PreciseMatchRule：规则 ID；</li><li>WebSec.RateLimitRule：规则 ID；</li><li>WebSec.BotCustomRule：规则 ID；</li><li>DDoS.L4Proxy.IpAccessControl：空；</li><li>DDoS.L3Transit.IpAccessControl：空。</li></ul><p>EntityType 与 SubEntityType 为对应关系，不同的 EntityType 支持不同的 SubEntityType。<br>WebSec.ZonePolicy，WebSec.HostPolicy 和 WebSec.Template 支持如下 SubEntityType：</p><ul><li>WebSec.ExceptionRule；</li><li>WebSec.BasicAccessRule；</li><li>WebSec.PreciseMatchRule；</li><li>WebSec.RateLimitRule；</li><li>WebSec.BotCustomRule。</li></ul>DDoS.L4Proxy 支持如下 SubEntityType：<ul><li>DDoS.L4Proxy.IpAccessControl；</li></ul>DDoS.L3Transit 支持如下 SubEntityType：<ul><li>DDoS.L3Transit.IpAccessControl。</li></ul>
                     * @return SubEntityId <p>子实体标识，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则 ID；</li><li>WebSec.BasicAccessRule：规则 ID；</li><li>WebSec.PreciseMatchRule：规则 ID；</li><li>WebSec.RateLimitRule：规则 ID；</li><li>WebSec.BotCustomRule：规则 ID；</li><li>DDoS.L4Proxy.IpAccessControl：空；</li><li>DDoS.L3Transit.IpAccessControl：空。</li></ul><p>EntityType 与 SubEntityType 为对应关系，不同的 EntityType 支持不同的 SubEntityType。<br>WebSec.ZonePolicy，WebSec.HostPolicy 和 WebSec.Template 支持如下 SubEntityType：</p><ul><li>WebSec.ExceptionRule；</li><li>WebSec.BasicAccessRule；</li><li>WebSec.PreciseMatchRule；</li><li>WebSec.RateLimitRule；</li><li>WebSec.BotCustomRule。</li></ul>DDoS.L4Proxy 支持如下 SubEntityType：<ul><li>DDoS.L4Proxy.IpAccessControl；</li></ul>DDoS.L3Transit 支持如下 SubEntityType：<ul><li>DDoS.L3Transit.IpAccessControl。</li></ul>
                     * 
                     */
                    std::string GetSubEntityId() const;

                    /**
                     * 设置<p>子实体标识，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则 ID；</li><li>WebSec.BasicAccessRule：规则 ID；</li><li>WebSec.PreciseMatchRule：规则 ID；</li><li>WebSec.RateLimitRule：规则 ID；</li><li>WebSec.BotCustomRule：规则 ID；</li><li>DDoS.L4Proxy.IpAccessControl：空；</li><li>DDoS.L3Transit.IpAccessControl：空。</li></ul><p>EntityType 与 SubEntityType 为对应关系，不同的 EntityType 支持不同的 SubEntityType。<br>WebSec.ZonePolicy，WebSec.HostPolicy 和 WebSec.Template 支持如下 SubEntityType：</p><ul><li>WebSec.ExceptionRule；</li><li>WebSec.BasicAccessRule；</li><li>WebSec.PreciseMatchRule；</li><li>WebSec.RateLimitRule；</li><li>WebSec.BotCustomRule。</li></ul>DDoS.L4Proxy 支持如下 SubEntityType：<ul><li>DDoS.L4Proxy.IpAccessControl；</li></ul>DDoS.L3Transit 支持如下 SubEntityType：<ul><li>DDoS.L3Transit.IpAccessControl。</li></ul>
                     * @param _subEntityId <p>子实体标识，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则 ID；</li><li>WebSec.BasicAccessRule：规则 ID；</li><li>WebSec.PreciseMatchRule：规则 ID；</li><li>WebSec.RateLimitRule：规则 ID；</li><li>WebSec.BotCustomRule：规则 ID；</li><li>DDoS.L4Proxy.IpAccessControl：空；</li><li>DDoS.L3Transit.IpAccessControl：空。</li></ul><p>EntityType 与 SubEntityType 为对应关系，不同的 EntityType 支持不同的 SubEntityType。<br>WebSec.ZonePolicy，WebSec.HostPolicy 和 WebSec.Template 支持如下 SubEntityType：</p><ul><li>WebSec.ExceptionRule；</li><li>WebSec.BasicAccessRule；</li><li>WebSec.PreciseMatchRule；</li><li>WebSec.RateLimitRule；</li><li>WebSec.BotCustomRule。</li></ul>DDoS.L4Proxy 支持如下 SubEntityType：<ul><li>DDoS.L4Proxy.IpAccessControl；</li></ul>DDoS.L3Transit 支持如下 SubEntityType：<ul><li>DDoS.L3Transit.IpAccessControl。</li></ul>
                     * 
                     */
                    void SetSubEntityId(const std::string& _subEntityId);

                    /**
                     * 判断参数 SubEntityId 是否已赋值
                     * @return SubEntityId 是否已赋值
                     * 
                     */
                    bool SubEntityIdHasBeenSet() const;

                    /**
                     * 获取<p>子实体名称，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则名称；</li><li>WebSec.BasicAccessRule：规则名称；</li><li>WebSec.PreciseMatchRule：规则名称；</li><li>WebSec.RateLimitRule：规则名称；</li><li>WebSec.BotCustomRule：规则名称；</li><li>DDoS.L4Proxy.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单；</li><li>DDoS.L3Transit.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单。</li></ul>
                     * @return SubEntityName <p>子实体名称，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则名称；</li><li>WebSec.BasicAccessRule：规则名称；</li><li>WebSec.PreciseMatchRule：规则名称；</li><li>WebSec.RateLimitRule：规则名称；</li><li>WebSec.BotCustomRule：规则名称；</li><li>DDoS.L4Proxy.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单；</li><li>DDoS.L3Transit.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单。</li></ul>
                     * 
                     */
                    std::string GetSubEntityName() const;

                    /**
                     * 设置<p>子实体名称，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则名称；</li><li>WebSec.BasicAccessRule：规则名称；</li><li>WebSec.PreciseMatchRule：规则名称；</li><li>WebSec.RateLimitRule：规则名称；</li><li>WebSec.BotCustomRule：规则名称；</li><li>DDoS.L4Proxy.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单；</li><li>DDoS.L3Transit.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单。</li></ul>
                     * @param _subEntityName <p>子实体名称，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则名称；</li><li>WebSec.BasicAccessRule：规则名称；</li><li>WebSec.PreciseMatchRule：规则名称；</li><li>WebSec.RateLimitRule：规则名称；</li><li>WebSec.BotCustomRule：规则名称；</li><li>DDoS.L4Proxy.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单；</li><li>DDoS.L3Transit.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单。</li></ul>
                     * 
                     */
                    void SetSubEntityName(const std::string& _subEntityName);

                    /**
                     * 判断参数 SubEntityName 是否已赋值
                     * @return SubEntityName 是否已赋值
                     * 
                     */
                    bool SubEntityNameHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实体类型。</p><p>枚举值：</p><ul><li>WebSec.ZonePolicy： 站点级防护策略</li><li>WebSec.HostPolicy： 域名级防护策略</li><li>WebSec.Template： 策略模板</li><li>DDoS.L4Proxy： 四层代理 DDoS 防护</li><li>DDoS.L3Transit： 三层代播 DDoS 防护</li></ul>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：站点 ID；</li><li>WebSec.HostPolicy：域名；</li><li>WebSec.Template：模板 ID；</li><li>DDoS.L4Proxy：实例 ID；</li><li>DDoS.L3Transit：实例 ID。</li></ul>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>实体标识，根据 EntityType 不同代表不同的含义：</p><ul><li>WebSec.ZonePolicy：空；</li><li>WebSec.HostPolicy：空；</li><li>WebSec.Template：模板名称；</li><li>DDoS.L4Proxy：空；</li><li>DDoS.L3Transit：空。</li></ul>
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * <p>子实体类型。</p><p>枚举值：</p><ul><li>WebSec.ExceptionRule： 防护例外规则</li><li>WebSec.BasicAccessRule： 基础访问管控</li><li>WebSec.PreciseMatchRule： 精确匹配规则</li><li>WebSec.RateLimitRule： 精准速率限制</li><li>WebSec.BotCustomRule： 高级 Bot 管理 - 自定义规则</li><li>DDoS.L4Proxy.IpAccessControl： 四层代理 DDoS 防护 - IP 黑白名单</li><li>DDoS.L3Transit.IpAccessControl： 三层代播 DDoS 防护 - IP 黑白名单</li></ul>
                     */
                    std::string m_subEntityType;
                    bool m_subEntityTypeHasBeenSet;

                    /**
                     * <p>子实体标识，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则 ID；</li><li>WebSec.BasicAccessRule：规则 ID；</li><li>WebSec.PreciseMatchRule：规则 ID；</li><li>WebSec.RateLimitRule：规则 ID；</li><li>WebSec.BotCustomRule：规则 ID；</li><li>DDoS.L4Proxy.IpAccessControl：空；</li><li>DDoS.L3Transit.IpAccessControl：空。</li></ul><p>EntityType 与 SubEntityType 为对应关系，不同的 EntityType 支持不同的 SubEntityType。<br>WebSec.ZonePolicy，WebSec.HostPolicy 和 WebSec.Template 支持如下 SubEntityType：</p><ul><li>WebSec.ExceptionRule；</li><li>WebSec.BasicAccessRule；</li><li>WebSec.PreciseMatchRule；</li><li>WebSec.RateLimitRule；</li><li>WebSec.BotCustomRule。</li></ul>DDoS.L4Proxy 支持如下 SubEntityType：<ul><li>DDoS.L4Proxy.IpAccessControl；</li></ul>DDoS.L3Transit 支持如下 SubEntityType：<ul><li>DDoS.L3Transit.IpAccessControl。</li></ul>
                     */
                    std::string m_subEntityId;
                    bool m_subEntityIdHasBeenSet;

                    /**
                     * <p>子实体名称，根据 SubEntityType 不同代表不同的含义：</p><ul><li>WebSec.ExceptionRule：规则名称；</li><li>WebSec.BasicAccessRule：规则名称；</li><li>WebSec.PreciseMatchRule：规则名称；</li><li>WebSec.RateLimitRule：规则名称；</li><li>WebSec.BotCustomRule：规则名称；</li><li>DDoS.L4Proxy.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单；</li><li>DDoS.L3Transit.IpAccessControl：规则名称，block 表示黑名单，allow 表示白名单。</li></ul>
                     */
                    std::string m_subEntityName;
                    bool m_subEntityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_
