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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyVodDomainAccelerateConfig请求参数结构体
                */
                class ModifyVodDomainAccelerateConfigRequest : public AbstractModel
                {
                public:
                    ModifyVodDomainAccelerateConfigRequest();
                    ~ModifyVodDomainAccelerateConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要设置加速配置的域名。
                     * @return Domain 需要设置加速配置的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要设置加速配置的域名。
                     * @param _domain 需要设置加速配置的域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取区域，可选值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland: 中国境外。</li>
<li>Global: 全球范围。</li>
                     * @return Area 区域，可选值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland: 中国境外。</li>
<li>Global: 全球范围。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置区域，可选值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland: 中国境外。</li>
<li>Global: 全球范围。</li>
                     * @param _area 区域，可选值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland: 中国境外。</li>
<li>Global: 全球范围。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取开启或者关闭所选区域的域名加速，可选值：
<li>Enabled: 开启。</li>
<li>Disabled：关闭。</li>
开启中国境内加速的域名，需要先[备案域名](/document/product/243/18905)。
                     * @return Status 开启或者关闭所选区域的域名加速，可选值：
<li>Enabled: 开启。</li>
<li>Disabled：关闭。</li>
开启中国境内加速的域名，需要先[备案域名](/document/product/243/18905)。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置开启或者关闭所选区域的域名加速，可选值：
<li>Enabled: 开启。</li>
<li>Disabled：关闭。</li>
开启中国境内加速的域名，需要先[备案域名](/document/product/243/18905)。
                     * @param _status 开启或者关闭所选区域的域名加速，可选值：
<li>Enabled: 开启。</li>
<li>Disabled：关闭。</li>
开启中国境内加速的域名，需要先[备案域名](/document/product/243/18905)。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 需要设置加速配置的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 区域，可选值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland: 中国境外。</li>
<li>Global: 全球范围。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 开启或者关闭所选区域的域名加速，可选值：
<li>Enabled: 开启。</li>
<li>Disabled：关闭。</li>
开启中国境内加速的域名，需要先[备案域名](/document/product/243/18905)。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_
