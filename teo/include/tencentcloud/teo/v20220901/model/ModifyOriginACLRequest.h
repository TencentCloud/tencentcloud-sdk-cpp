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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginACLEntity.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyOriginACL请求参数结构体
                */
                class ModifyOriginACLRequest : public AbstractModel
                {
                public:
                    ModifyOriginACLRequest();
                    ~ModifyOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取需要启用/关闭特定回源 IP 网段回源的实例。
                     * @return OriginACLEntities 需要启用/关闭特定回源 IP 网段回源的实例。
                     * 
                     */
                    std::vector<OriginACLEntity> GetOriginACLEntities() const;

                    /**
                     * 设置需要启用/关闭特定回源 IP 网段回源的实例。
                     * @param _originACLEntities 需要启用/关闭特定回源 IP 网段回源的实例。
                     * 
                     */
                    void SetOriginACLEntities(const std::vector<OriginACLEntity>& _originACLEntities);

                    /**
                     * 判断参数 OriginACLEntities 是否已赋值
                     * @return OriginACLEntities 是否已赋值
                     * 
                     */
                    bool OriginACLEntitiesHasBeenSet() const;

                    /**
                     * 获取源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。
具体取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @return OriginACLFamily 源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。
具体取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。
具体取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @param _originACLFamily 源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。
具体取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 需要启用/关闭特定回源 IP 网段回源的实例。
                     */
                    std::vector<OriginACLEntity> m_originACLEntities;
                    bool m_originACLEntitiesHasBeenSet;

                    /**
                     * 源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。
具体取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
