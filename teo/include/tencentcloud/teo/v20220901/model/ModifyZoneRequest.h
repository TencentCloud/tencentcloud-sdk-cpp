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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServers.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZone请求参数结构体
                */
                class ModifyZoneRequest : public AbstractModel
                {
                public:
                    ModifyZoneRequest();
                    ~ModifyZoneRequest() = default;
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
                     * 获取站点接入方式，取值有：
<li> full：NS 接入；</li>
<li> partial：CNAME 接入。</li>不填写保持原有配置。
                     * @return Type 站点接入方式，取值有：
<li> full：NS 接入；</li>
<li> partial：CNAME 接入。</li>不填写保持原有配置。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置站点接入方式，取值有：
<li> full：NS 接入；</li>
<li> partial：CNAME 接入。</li>不填写保持原有配置。
                     * @param _type 站点接入方式，取值有：
<li> full：NS 接入；</li>
<li> partial：CNAME 接入。</li>不填写保持原有配置。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自定义站点信息，以替代系统默认分配的名称服务器。不填写保持原有配置。
                     * @return VanityNameServers 自定义站点信息，以替代系统默认分配的名称服务器。不填写保持原有配置。
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置自定义站点信息，以替代系统默认分配的名称服务器。不填写保持原有配置。
                     * @param _vanityNameServers 自定义站点信息，以替代系统默认分配的名称服务器。不填写保持原有配置。
                     * 
                     */
                    void SetVanityNameServers(const VanityNameServers& _vanityNameServers);

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     * 
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取站点别名。数字、英文、-和_组合，限制20个字符。
                     * @return AliasZoneName 站点别名。数字、英文、-和_组合，限制20个字符。
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置站点别名。数字、英文、-和_组合，限制20个字符。
                     * @param _aliasZoneName 站点别名。数字、英文、-和_组合，限制20个字符。
                     * 
                     */
                    void SetAliasZoneName(const std::string& _aliasZoneName);

                    /**
                     * 判断参数 AliasZoneName 是否已赋值
                     * @return AliasZoneName 是否已赋值
                     * 
                     */
                    bool AliasZoneNameHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点接入方式，取值有：
<li> full：NS 接入；</li>
<li> partial：CNAME 接入。</li>不填写保持原有配置。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自定义站点信息，以替代系统默认分配的名称服务器。不填写保持原有配置。
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * 站点别名。数字、英文、-和_组合，限制20个字符。
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_
