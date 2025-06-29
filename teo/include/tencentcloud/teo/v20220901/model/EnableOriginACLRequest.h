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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EnableOriginACL请求参数结构体
                */
                class EnableOriginACLRequest : public AbstractModel
                {
                public:
                    EnableOriginACLRequest();
                    ~EnableOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取七层加速域名开启回源白名单的模式。
<li>all：为站点下的所有七层加速域名开启回源白名单。</li>
<li>specific：为站点下指定的七层加速域名开启回源白名单。</li>
当参数为空时，默认为specific。
                     * @return L7EnableMode 七层加速域名开启回源白名单的模式。
<li>all：为站点下的所有七层加速域名开启回源白名单。</li>
<li>specific：为站点下指定的七层加速域名开启回源白名单。</li>
当参数为空时，默认为specific。
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置七层加速域名开启回源白名单的模式。
<li>all：为站点下的所有七层加速域名开启回源白名单。</li>
<li>specific：为站点下指定的七层加速域名开启回源白名单。</li>
当参数为空时，默认为specific。
                     * @param _l7EnableMode 七层加速域名开启回源白名单的模式。
<li>all：为站点下的所有七层加速域名开启回源白名单。</li>
<li>specific：为站点下指定的七层加速域名开启回源白名单。</li>
当参数为空时，默认为specific。
                     * 
                     */
                    void SetL7EnableMode(const std::string& _l7EnableMode);

                    /**
                     * 判断参数 L7EnableMode 是否已赋值
                     * @return L7EnableMode 是否已赋值
                     * 
                     */
                    bool L7EnableModeHasBeenSet() const;

                    /**
                     * 获取开启回源白名单的七层加速域名列表，当请求参数 L7EnableMode 为 all 时必须为空。
                     * @return L7Hosts 开启回源白名单的七层加速域名列表，当请求参数 L7EnableMode 为 all 时必须为空。
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置开启回源白名单的七层加速域名列表，当请求参数 L7EnableMode 为 all 时必须为空。
                     * @param _l7Hosts 开启回源白名单的七层加速域名列表，当请求参数 L7EnableMode 为 all 时必须为空。
                     * 
                     */
                    void SetL7Hosts(const std::vector<std::string>& _l7Hosts);

                    /**
                     * 判断参数 L7Hosts 是否已赋值
                     * @return L7Hosts 是否已赋值
                     * 
                     */
                    bool L7HostsHasBeenSet() const;

                    /**
                     * 获取四层代理 ID 开启回源白名单的模式。
<li>all：为站点下的所有四层代理开启回源白名单。</li>
<li>specific：为站点下指定的四层代理 ID 开启回源白名单。</li>
当参数为空时，默认为specific。
                     * @return L4EnableMode 四层代理 ID 开启回源白名单的模式。
<li>all：为站点下的所有四层代理开启回源白名单。</li>
<li>specific：为站点下指定的四层代理 ID 开启回源白名单。</li>
当参数为空时，默认为specific。
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置四层代理 ID 开启回源白名单的模式。
<li>all：为站点下的所有四层代理开启回源白名单。</li>
<li>specific：为站点下指定的四层代理 ID 开启回源白名单。</li>
当参数为空时，默认为specific。
                     * @param _l4EnableMode 四层代理 ID 开启回源白名单的模式。
<li>all：为站点下的所有四层代理开启回源白名单。</li>
<li>specific：为站点下指定的四层代理 ID 开启回源白名单。</li>
当参数为空时，默认为specific。
                     * 
                     */
                    void SetL4EnableMode(const std::string& _l4EnableMode);

                    /**
                     * 判断参数 L4EnableMode 是否已赋值
                     * @return L4EnableMode 是否已赋值
                     * 
                     */
                    bool L4EnableModeHasBeenSet() const;

                    /**
                     * 获取开启回源白名单的四层代理 ID 列表，当请求参数 L4EnableMode 为 all 时必须为空。单次最多支持 200 个实例。
                     * @return L4ProxyIds 开启回源白名单的四层代理 ID 列表，当请求参数 L4EnableMode 为 all 时必须为空。单次最多支持 200 个实例。
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置开启回源白名单的四层代理 ID 列表，当请求参数 L4EnableMode 为 all 时必须为空。单次最多支持 200 个实例。
                     * @param _l4ProxyIds 开启回源白名单的四层代理 ID 列表，当请求参数 L4EnableMode 为 all 时必须为空。单次最多支持 200 个实例。
                     * 
                     */
                    void SetL4ProxyIds(const std::vector<std::string>& _l4ProxyIds);

                    /**
                     * 判断参数 L4ProxyIds 是否已赋值
                     * @return L4ProxyIds 是否已赋值
                     * 
                     */
                    bool L4ProxyIdsHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 七层加速域名开启回源白名单的模式。
<li>all：为站点下的所有七层加速域名开启回源白名单。</li>
<li>specific：为站点下指定的七层加速域名开启回源白名单。</li>
当参数为空时，默认为specific。
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * 开启回源白名单的七层加速域名列表，当请求参数 L7EnableMode 为 all 时必须为空。
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * 四层代理 ID 开启回源白名单的模式。
<li>all：为站点下的所有四层代理开启回源白名单。</li>
<li>specific：为站点下指定的四层代理 ID 开启回源白名单。</li>
当参数为空时，默认为specific。
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * 开启回源白名单的四层代理 ID 列表，当请求参数 L4EnableMode 为 all 时必须为空。单次最多支持 200 个实例。
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
