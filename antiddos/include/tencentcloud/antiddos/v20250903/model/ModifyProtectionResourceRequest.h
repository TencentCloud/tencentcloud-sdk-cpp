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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_MODIFYPROTECTIONRESOURCEREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_MODIFYPROTECTIONRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * ModifyProtectionResource请求参数结构体
                */
                class ModifyProtectionResourceRequest : public AbstractModel
                {
                public:
                    ModifyProtectionResourceRequest();
                    ~ModifyProtectionResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护实例 ID。</p>
                     * @return ProtectionId <p>防护实例 ID。</p>
                     * 
                     */
                    std::string GetProtectionId() const;

                    /**
                     * 设置<p>防护实例 ID。</p>
                     * @param _protectionId <p>防护实例 ID。</p>
                     * 
                     */
                    void SetProtectionId(const std::string& _protectionId);

                    /**
                     * 判断参数 ProtectionId 是否已赋值
                     * @return ProtectionId 是否已赋值
                     * 
                     */
                    bool ProtectionIdHasBeenSet() const;

                    /**
                     * 获取<p>操作类型。</p><p>枚举值：</p><ul><li>APPEND： 向防护实例中添加新的防护资源；</li><li>UPDATE： 替换防护实例中的全部防护资源；</li><li>REMOVE： 从防护实例中移除指定的防护资源。</li></ul><p>默认值：APPEND</p>
                     * @return Mode <p>操作类型。</p><p>枚举值：</p><ul><li>APPEND： 向防护实例中添加新的防护资源；</li><li>UPDATE： 替换防护实例中的全部防护资源；</li><li>REMOVE： 从防护实例中移除指定的防护资源。</li></ul><p>默认值：APPEND</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>操作类型。</p><p>枚举值：</p><ul><li>APPEND： 向防护实例中添加新的防护资源；</li><li>UPDATE： 替换防护实例中的全部防护资源；</li><li>REMOVE： 从防护实例中移除指定的防护资源。</li></ul><p>默认值：APPEND</p>
                     * @param _mode <p>操作类型。</p><p>枚举值：</p><ul><li>APPEND： 向防护实例中添加新的防护资源；</li><li>UPDATE： 替换防护实例中的全部防护资源；</li><li>REMOVE： 从防护实例中移除指定的防护资源。</li></ul><p>默认值：APPEND</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>防护资源，须采用资源六段式格式。具体格式如下：<ul><li>云服务器：<code>qcs::cvm:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>轻量应用服务器：<code>qcs::lighthouse:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>负载均衡：<code>qcs::clb:${region}:uin/${uin}:clb/${LoadBalancerId}</code></li><li>弹性公网 IP：<code>qcs::cvm:${region}:uin/${uin}:eip/${AddressId}</code></li><li>Web 应用防火墙：<code>qcs::waf:${region}:uin/${uin}:waf/${InstanceId}</code></li><li>EdgeOne 域名：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/Domain/${Domain}</code></li><li>EdgeOne 四层代理：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/L4Proxy/${InstanceId}</code></li></ul></p><p>取值参考：<a href="https://cloud.tencent.com/document/product/598/67350">支持 CAM 的业务接口</a></p>
                     * @return Resources <p>防护资源，须采用资源六段式格式。具体格式如下：<ul><li>云服务器：<code>qcs::cvm:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>轻量应用服务器：<code>qcs::lighthouse:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>负载均衡：<code>qcs::clb:${region}:uin/${uin}:clb/${LoadBalancerId}</code></li><li>弹性公网 IP：<code>qcs::cvm:${region}:uin/${uin}:eip/${AddressId}</code></li><li>Web 应用防火墙：<code>qcs::waf:${region}:uin/${uin}:waf/${InstanceId}</code></li><li>EdgeOne 域名：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/Domain/${Domain}</code></li><li>EdgeOne 四层代理：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/L4Proxy/${InstanceId}</code></li></ul></p><p>取值参考：<a href="https://cloud.tencent.com/document/product/598/67350">支持 CAM 的业务接口</a></p>
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置<p>防护资源，须采用资源六段式格式。具体格式如下：<ul><li>云服务器：<code>qcs::cvm:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>轻量应用服务器：<code>qcs::lighthouse:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>负载均衡：<code>qcs::clb:${region}:uin/${uin}:clb/${LoadBalancerId}</code></li><li>弹性公网 IP：<code>qcs::cvm:${region}:uin/${uin}:eip/${AddressId}</code></li><li>Web 应用防火墙：<code>qcs::waf:${region}:uin/${uin}:waf/${InstanceId}</code></li><li>EdgeOne 域名：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/Domain/${Domain}</code></li><li>EdgeOne 四层代理：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/L4Proxy/${InstanceId}</code></li></ul></p><p>取值参考：<a href="https://cloud.tencent.com/document/product/598/67350">支持 CAM 的业务接口</a></p>
                     * @param _resources <p>防护资源，须采用资源六段式格式。具体格式如下：<ul><li>云服务器：<code>qcs::cvm:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>轻量应用服务器：<code>qcs::lighthouse:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>负载均衡：<code>qcs::clb:${region}:uin/${uin}:clb/${LoadBalancerId}</code></li><li>弹性公网 IP：<code>qcs::cvm:${region}:uin/${uin}:eip/${AddressId}</code></li><li>Web 应用防火墙：<code>qcs::waf:${region}:uin/${uin}:waf/${InstanceId}</code></li><li>EdgeOne 域名：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/Domain/${Domain}</code></li><li>EdgeOne 四层代理：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/L4Proxy/${InstanceId}</code></li></ul></p><p>取值参考：<a href="https://cloud.tencent.com/document/product/598/67350">支持 CAM 的业务接口</a></p>
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>冲突策略。</p><p>枚举值：</p><ul><li>REJECT： 若任一防护资源已存在于其他防护实例，则拒绝本次操作。</li><li>FORCE： 若任一防护资源已存在于其他防护实例，则强制将其添加至当前实例。</li></ul><p>默认值：REJECT</p>
                     * @return ConflictStrategy <p>冲突策略。</p><p>枚举值：</p><ul><li>REJECT： 若任一防护资源已存在于其他防护实例，则拒绝本次操作。</li><li>FORCE： 若任一防护资源已存在于其他防护实例，则强制将其添加至当前实例。</li></ul><p>默认值：REJECT</p>
                     * 
                     */
                    std::string GetConflictStrategy() const;

                    /**
                     * 设置<p>冲突策略。</p><p>枚举值：</p><ul><li>REJECT： 若任一防护资源已存在于其他防护实例，则拒绝本次操作。</li><li>FORCE： 若任一防护资源已存在于其他防护实例，则强制将其添加至当前实例。</li></ul><p>默认值：REJECT</p>
                     * @param _conflictStrategy <p>冲突策略。</p><p>枚举值：</p><ul><li>REJECT： 若任一防护资源已存在于其他防护实例，则拒绝本次操作。</li><li>FORCE： 若任一防护资源已存在于其他防护实例，则强制将其添加至当前实例。</li></ul><p>默认值：REJECT</p>
                     * 
                     */
                    void SetConflictStrategy(const std::string& _conflictStrategy);

                    /**
                     * 判断参数 ConflictStrategy 是否已赋值
                     * @return ConflictStrategy 是否已赋值
                     * 
                     */
                    bool ConflictStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>防护实例 ID。</p>
                     */
                    std::string m_protectionId;
                    bool m_protectionIdHasBeenSet;

                    /**
                     * <p>操作类型。</p><p>枚举值：</p><ul><li>APPEND： 向防护实例中添加新的防护资源；</li><li>UPDATE： 替换防护实例中的全部防护资源；</li><li>REMOVE： 从防护实例中移除指定的防护资源。</li></ul><p>默认值：APPEND</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>防护资源，须采用资源六段式格式。具体格式如下：<ul><li>云服务器：<code>qcs::cvm:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>轻量应用服务器：<code>qcs::lighthouse:${region}:uin/${uin}:instance/${InstanceId}</code></li><li>负载均衡：<code>qcs::clb:${region}:uin/${uin}:clb/${LoadBalancerId}</code></li><li>弹性公网 IP：<code>qcs::cvm:${region}:uin/${uin}:eip/${AddressId}</code></li><li>Web 应用防火墙：<code>qcs::waf:${region}:uin/${uin}:waf/${InstanceId}</code></li><li>EdgeOne 域名：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/Domain/${Domain}</code></li><li>EdgeOne 四层代理：<code>qcs::teo::uin/${uin}:zone/${ZoneId}/L4Proxy/${InstanceId}</code></li></ul></p><p>取值参考：<a href="https://cloud.tencent.com/document/product/598/67350">支持 CAM 的业务接口</a></p>
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>冲突策略。</p><p>枚举值：</p><ul><li>REJECT： 若任一防护资源已存在于其他防护实例，则拒绝本次操作。</li><li>FORCE： 若任一防护资源已存在于其他防护实例，则强制将其添加至当前实例。</li></ul><p>默认值：REJECT</p>
                     */
                    std::string m_conflictStrategy;
                    bool m_conflictStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_MODIFYPROTECTIONRESOURCEREQUEST_H_
