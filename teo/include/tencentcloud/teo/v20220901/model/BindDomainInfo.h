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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_

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
                * 策略模板绑定的域名信息
                */
                class BindDomainInfo : public AbstractModel
                {
                public:
                    BindDomainInfo();
                    ~BindDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
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
                     * 获取域名所属的站点 ID。
                     * @return ZoneId 域名所属的站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置域名所属的站点 ID。
                     * @param _zoneId 域名所属的站点 ID。
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
                     * 获取绑定状态，取值有: 
<li>process：绑定中；</li>
<li>online：绑定成功；</li>
<li>fail：绑定失败。</li>
                     * @return Status 绑定状态，取值有: 
<li>process：绑定中；</li>
<li>online：绑定成功；</li>
<li>fail：绑定失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置绑定状态，取值有: 
<li>process：绑定中；</li>
<li>online：绑定成功；</li>
<li>fail：绑定失败。</li>
                     * @param _status 绑定状态，取值有: 
<li>process：绑定中；</li>
<li>online：绑定成功；</li>
<li>fail：绑定失败。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名所属的站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 绑定状态，取值有: 
<li>process：绑定中；</li>
<li>online：绑定成功；</li>
<li>fail：绑定失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_
