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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 托管prometheus中grafana的信息
                */
                class PrometheusGrafanaInfo : public AbstractModel
                {
                public:
                    PrometheusGrafanaInfo();
                    ~PrometheusGrafanaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取域名，只有开启外网访问才有效果
                     * @return Domain 域名，只有开启外网访问才有效果
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，只有开启外网访问才有效果
                     * @param _domain 域名，只有开启外网访问才有效果
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
                     * 获取内网地址，或者外网地址
                     * @return Address 内网地址，或者外网地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置内网地址，或者外网地址
                     * @param _address 内网地址，或者外网地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取是否开启了外网访问
close = 未开启外网访问
opening = 正在开启外网访问
open  = 已开启外网访问
                     * @return Internet 是否开启了外网访问
close = 未开启外网访问
opening = 正在开启外网访问
open  = 已开启外网访问
                     * 
                     */
                    std::string GetInternet() const;

                    /**
                     * 设置是否开启了外网访问
close = 未开启外网访问
opening = 正在开启外网访问
open  = 已开启外网访问
                     * @param _internet 是否开启了外网访问
close = 未开启外网访问
opening = 正在开启外网访问
open  = 已开启外网访问
                     * 
                     */
                    void SetInternet(const std::string& _internet);

                    /**
                     * 判断参数 Internet 是否已赋值
                     * @return Internet 是否已赋值
                     * 
                     */
                    bool InternetHasBeenSet() const;

                    /**
                     * 获取grafana管理员用户名
                     * @return AdminUser grafana管理员用户名
                     * 
                     */
                    std::string GetAdminUser() const;

                    /**
                     * 设置grafana管理员用户名
                     * @param _adminUser grafana管理员用户名
                     * 
                     */
                    void SetAdminUser(const std::string& _adminUser);

                    /**
                     * 判断参数 AdminUser 是否已赋值
                     * @return AdminUser 是否已赋值
                     * 
                     */
                    bool AdminUserHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 域名，只有开启外网访问才有效果
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 内网地址，或者外网地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 是否开启了外网访问
close = 未开启外网访问
opening = 正在开启外网访问
open  = 已开启外网访问
                     */
                    std::string m_internet;
                    bool m_internetHasBeenSet;

                    /**
                     * grafana管理员用户名
                     */
                    std::string m_adminUser;
                    bool m_adminUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_
